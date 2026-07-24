# ハックガイド（ファイル対応表）

日本版『ポケットモンスター エメラルド』デコンパイル（pokeemerald-jp）で、**どのファイルを直すとゲーム内の何が変わるか**をまとめたドキュメントです。

現状は Phase 2 の途中です。多くのデータはまだ `baserom_jp.gba` からの `.incbin` で、テキスト化・C化が進んだ箇所から編集しやすくなります。

---

## クイックスタート

1. リポジトリ直下に日本版ROMを `baserom_jp.gba` として置く
2. ツールが未ビルドなら `./build_tools.sh`
3. ソースを編集する
4. ビルドする

```sh
make -j$(nproc)
```

出力ROM: `pokeemerald_jp.gba`  
オリジナル一致確認（改造前）: `make compare`

---

## いま編集できるもの（推奨）

| 変えたい内容 | 編集するファイル | ラベル / 箇所 | ゲーム内での効果 |
|---|---|---|---|
| オダマキ博士の最初のあいさつ | `data/text/birch_speech.inc` | `gText_Birch_Welcome` | ニューゲーム開始直後の博士セリフ冒頭 |
| 同上・「ポケモンとは」の続き | 同上 | `gText_Birch_MainSpeech` など | オープニング一連のセリフ |
| 性別確認・名前確認など | 同上 | `gText_Birch_BoyOrGirl` 等 | オープニングの各メッセージ |
| 日本語の文字↔バイト対応 | `charmap.txt` | 各文字の定義 | `.string` のエンコード結果全体 |

詳細な文字コード・バイト長の注意は [text_editing.md](text_editing.md) を参照。

### ビルドの流れ（テキスト）

```
data/text/*.inc  の .string
        ↓
tools/preproc/preproc + charmap.txt
        ↓
data/event_scripts.s（.include）
        ↓
pokeemerald_jp.gba
```

`Makefile` は `data/*.s` を自動で preproc 経由にします。

---

## ディレクトリ全体マップ

| パス | 役割 | ハックでの意味 |
|---|---|---|
| `asm/` | 逆アセンブルされたゲームロジック（ARM/Thumb） | 挙動・戦闘・メニューなどの本体。現状はASM |
| `data/data.s` | グラフィック・テーブル等の巨大データ | 多くが `.incbin`。直接バイナリ差し替えは可能だが危険 |
| `data/event_scripts.s` | イベントスクリプト・文字列データの置き場 | 一部を `.include` でテキスト化済み |
| `data/text/` | 人間が読めるセリフソース | **ここを増やすのが Phase 2 の主作業** |
| `charmap.txt` | 日本語文字コード表 | `.string` 編集の前提 |
| `constants/` | 定数定義 | 今後のシンボル化で参照される |
| `ld_script_jp.txt` | リンカスクリプト（配置） | セクション順・アドレス配置 |
| `funcmap_jp.txt` | 関数名↔アドレス対応 | 解析・改変箇所の特定に使う |
| `tools/` | preproc / as / ld / gbafix など | ビルドツール |
| `baserom_jp.gba` | オリジナルROM（配布しない） | `.incbin` の元データ |
| `pokeemerald_jp.gba` | ビルド成果物 | エミュレータで起動するROM |
| `PokeEm-expansion-CanuseJP/` | 参考用（日本語対応expansion） | 将来の拡張の参考。本ビルドには未統合 |

---

## やりたいこと別ガイド

### 1. セリフ・文言を変える

| 状態 | 方法 |
|---|---|
| **テキスト化済み**（オダマキOP） | `data/text/birch_speech.inc` の `.string` を編集 → `make` |
| **まだ `.incbin`** | ① ROM上の文字列アドレスを特定 ② `.incbin` をやめて `.string` 化 ③ 参照元の即値アドレスをシンボルに変更（`asm/main_menu.s` の例を参照） |

**制約（現状）**

- 各文字列にはオリジナルと同じ**占有バイト数**がある
- 短くする → `.space N` でパディング
- 長くする → 後続データがずれてクラッシュしうる。空き領域への再配置が必要（未整備）

**制御文字（`.string` 内）**

| 記法 | 意味 |
|---|---|
| `\n` | 改行 |
| `\p` | 段落送り（ボタン待ち） |
| `\l` | 行スクロール |
| `$` | 文字列終端 |
| `{PLAYER}` / `{KUN}` | プレイヤー名など |

### 2. ニューゲーム／タイトル周りを変える

| ファイル | 内容 |
|---|---|
| `asm/main_menu.s` | タイトル・ニューゲーム・オダマキ会話のタスク処理 |
| `data/text/birch_speech.inc` | そのときに表示する文言 |

セリフポインタは `gText_Birch_*` シンボルを参照しています（ハードコードアドレスから移行済み）。

### 3. ゲームロジック（ASM）を変える

| 例 | ファイルの目安（`funcmap_jp.txt` で確認） |
|---|---|
| 戦闘処理 | `asm/battle_*.s` |
| フィールド移動 | `asm/overworld.s`, `asm/field_*.s` |
| ポケモンデータ操作 | `asm/pokemon.s` |
| バッグ／アイテム | `asm/item*.s`, `asm/party_menu.s` |
| セーブ | `asm/save.s`, `asm/load_save.s` |

手順の例:

1. `funcmap_jp.txt` や `pokeemerald_jp.map` で関数名を探す
2. 対応する `asm/*.s` を編集
3. `make` → エミュレータで確認
4. 必要なら `./asmdiff.sh` でオリジナルとの差を見る

英語版 pret/pokeemerald の C ソースを対照すると意図がわかりやすいです。

### 4. データテーブルを変える（ポケモン・技・アイテムなど）

現状の大半は `data/data.s` 内の:

```asm
.incbin "baserom_jp.gba", <オフセット>, <長さ>
```

です。

| やり方 | 説明 |
|---|---|
| バイナリ直接編集 | `baserom_jp.gba` を改変して `.incbin` させる（非推奨・Matching崩れ） |
| ラベル単位で切り出し | 対象オフセットだけ `.byte` / テーブル定義に置き換え（推奨される次のステップ） |
| Expansion 参考 | `PokeEm-expansion-CanuseJP/` の `src/` / `data/` 構成を将来移植 |

Phase 3 で C・JSON・Porymap 連携を目指します。

### 5. マップ・イベントを変える

| 現状 | 今後 |
|---|---|
| スクリプト／マップデータは主に `.incbin` | イベントスクリプトのテキスト化、Porymap 対応 |

`data/event_scripts.s` が入り口です。オダマキ文言以外はまだバイナリ塊が多いです。

### 6. グラフィック・フォントを変える

| 現状 | ファイル |
|---|---|
| 未テキスト化・未抽出が中心 | `data/data.s` の画像・タイル領域 |
| 文字幅・字形 | フォント関連（解析は Phase 2 残作業） |
| 参考ツール | `tools/gbagfx/`（expansion 側で利用される系統） |

---

## 改変時の安全ルール

1. **サイズを意識する**  
   テキスト化済み文字列は枠長を超えない（またはパディングで枠を維持）。
2. **Matching を壊す改変と、意図的な改造を分ける**  
   改造ROMでは `make compare` は失敗してよい。ブランチを分けると安全。
3. **ポインタはシンボル化する**  
   `.4byte 0x08xxxxxx` のまま長さを変えると参照が壊れる。`gText_*` のようにラベル参照にする。
4. **1箇所ずつビルドしてエミュレータ確認**  
   特にオープニング・ダイアログ・戦闘開始など。
5. **ROMは自分で用意する**  
   `baserom_jp.gba` は配布しません。

---

## 実践例: オダマキの最初のセリフ

1. `data/text/birch_speech.inc` を開く
2. `gText_Birch_Welcome` の `.string` を編集
3. バイト数が 86 未満なら `.space` を調整（詳しくは [text_editing.md](text_editing.md)）
4. `make -j$(nproc)`
5. `pokeemerald_jp.gba` を起動し、ニューゲームで確認

参照元: `asm/main_menu.s` の `Task_NewGameBirchSpeech_*`

---

## 今後テキスト化すると楽になる候補

優先度の高い例:

| 内容 | 探し方のヒント |
|---|---|
| 主人公のママ・ミシロのNPC | `event_scripts.s` 内の文字列領域をデコード |
| ジムリーダー・四天王セリフ | 同上 + `funcmap_jp.txt` |
| 技名・特性名・アイテム名 | 名前テーブル（data 側） |
| バトルメッセージ | `asm/battle_message.s` 周辺 |

手順はオダマキと同じく「抽出 → `.string` → ポインタをシンボル化 → 枠長管理」です。

---

## 関連ドキュメント

| 文書 | 内容 |
|---|---|
| [../README.md](../README.md) | プロジェクト概要・進捗 |
| [text_editing.md](text_editing.md) | 日本語 `.string` の書き方 |
| [../INSTALL.md](../INSTALL.md) | 環境構築（上流ドキュメント由来。パス名は要読み替え） |

---

## 用語

| 用語 | 意味 |
|---|---|
| Matching | ビルドROMがオリジナルとバイナリ一致すること |
| `.incbin` | ROMから生バイトを取り込む。まだソース化されていない状態 |
| `.string` | 人が読める文言。preproc が charmap でバイト化する |
| preproc | `tools/preproc/preproc`。`.string` 変換ツール |
