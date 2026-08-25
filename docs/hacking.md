# ハックガイド（ファイル対応表）

日本版『ポケットモンスター エメラルド』デコンパイル（pokeemerald-jp）で、**どのファイルを直すとゲーム内の何が変わるか**をまとめたドキュメントです。

現状は Phase 2 の途中です。多くのデータはまだ `baserom.gba` からの `.incbin` で、テキスト化・C化が進んだ箇所から編集しやすくなります。

---

## クイックスタート

1. リポジトリ直下に日本版ROMを `baserom.gba` として置く
2. ツールが未ビルドなら `./build_tools.sh`
3. ソースを編集する
4. ビルドする

```sh
cmake -S . -B build
cmake --build build --parallel
```

出力ROM: `build/pokeemerald_jp.gba`
オリジナル一致確認（改造前）: `cmake --build build --target compare`

---

## 現在の進捗（2026-08-03）

### 完了した内容

- オダマキ博士のオープニングを `data/text/birch_speech.inc` で編集可能にした。
- ミシロタウンNPC 3件を `data/text/littleroot_town.inc` としてテキスト化した。
- オダマキ研究所テキスト 25件を `data/text/birch_lab.inc` としてテキスト化した。
- ミシロタウン看板テキストを `data/text/littleroot_signs.inc` としてテキスト化した。
- どちらも元のROMアドレスと占有サイズを維持するため、既存のイベント・コードからのポインタはそのまま有効である。
- CMake でビルドと `compare` ターゲットを実行し、SHA-1 `d7cf8f156ba9c455d164e1ea780a6bf1945465c2` の一致を確認した。
- **テキスト一括抽出基盤を構築**：`tools/extract_all_text.py` により、`script_data` セクション（6,741スロット）と `.rodata` セクション（6,158スロット）の全通常テキストを `data/text/generated/*.inc` に固定アドレスで抽出した。
- **rodata データの分割・構造化完了**：`data/text/rodata/` 以下に戦闘・コンテスト・クレジット・アイテム・マップ・メニュー・技・ポケモン・リボンデータを分割・構造化。
- **主要ゲームデータを構造化**：ポケモン、技、アイテム、特性、トレーナー、野生出現、もようがえ、ボール画像テーブルを用途別の `.inc` に分離した。
- **`.rodata` 冒頭を機能別に分割**：`data/rodata/*.inc` に `main`、`window`、`text`、`fonts`、`sprite` などを分離した。`sDummyWindowTemplate`（`0x0829BEB0`）は8バイトのフィールド定義になり、`baserom.gba` への依存を除去した。
- テキスト編集方法は [text_editing.md](text_editing.md) に集約。

### 次の作業

1. 各種データのC化・編集しやすい構成への移行
2. マップ / イベント追加基盤の構築
3. ポケモン・技・アイテム等のデータ編集基盤の構築

---

## いま編集できるもの（推奨）

### テキスト化済み（個別ファイル）

| 変えたい内容 | 編集するファイル | ラベル / 箇所 | ゲーム内での効果 |
|---|---|---|---|
| オダマキ博士の最初のあいさつ | `data/text/birch_speech.inc` | `gText_Birch_Welcome` | ニューゲーム開始直後の博士セリフ冒頭 |
| 同上・「ポケモンとは」の続き | 同上 | `gText_Birch_MainSpeech` など | オープニング一連のセリフ |
| 性別確認・名前確認など | 同上 | `gText_Birch_BoyOrGirl` 等 | オープニングの各メッセージ |
| 日本語の文字↔バイト対応 | `data/charmap/charmap.txt` | 各文字の定義 | `.string` のエンコード結果全体 |
| オダマキ研究所の助手セリフ | `data/text/birch_lab.inc` | `gText_BirchLab_Aide_*` | 研究所助手の会話 |
| オダマキ研究所の博士セリフ | 同上 | `gText_BirchLab_Birch_*` | 研究所での博士会話 |
| オダマキ研究所のライバルセリフ | 同上 | `gText_BirchLab_May_*`, `gText_BirchLab_Brendan_*` | ライバルの会話 |
| オダマキ研究所の環境テキスト | 同上 | `gText_BirchLab_*` | 研究所の機器・本棚の説明 |
| ミシロタウンNPCセリフ | `data/text/littleroot_town.inc` | `gText_LittlerootTown_*` | ミシロタウンの住人会話 |
| ミシロタウン看板 | `data/text/littleroot_signs.inc` | `gText_LittlerootSigns_*` | ミシロタウンの看板 |

### 一括抽出済み（全通常テキスト）

`data/text/generated/` には、`script_data` と `.rodata` の全通常テキストが固定アドレスで抽出されています。

| ファイル | スロット数 | 内容 |
|---|---|---|
| `data/text/generated/event_scripts.inc` | 6,741 | イベント・フィールドの全通常テキスト |
| `data/rodata.inc` | 6,158 | メニュー・戦闘・名称などの全通常テキスト（`data/text/rodata/` に分割・構造化済み） |

各スロットは元のROMアドレスを維持した固定長で、元のバイト長以下であれば自由に編集できます。
詳細な編集方法は [text_editing.md](text_editing.md) を参照。

詳細な文字コード・バイト長の注意は [text_editing.md](text_editing.md) を参照。

### ビルドの流れ（テキスト）

```
data/text/*.inc  の .string
        ↓
tools/preproc/preproc + data/charmap/charmap.txt
        ↓
data/event_scripts.s（.include）
        ↓
build/pokeemerald_jp.gba
```

`CMakeLists.txt` は `data/*.s` を自動で preproc 経由にします。

---

## ディレクトリ全体マップ

| パス | 役割 | ハックでの意味 |
|---|---|---|
| `asm/` | 逆アセンブルされたゲームロジック（ARM/Thumb） | 挙動・戦闘・メニューなどの本体。現状はASM |
| `data/data.s` | `.rodata` のエントリポイント | 定数・マクロと `data/rodata.inc` を読み込む |
| `data/rodata.inc` / `data/rodata/` | `.rodata` の配置順と機能別データ | include 順がROM配置を決めるため並べ替えない |
| `data/pokemon/` | 種族値・進化・習得技・図鑑・ポケモン画像等 | ポケモン固有データの編集 |
| `data/moves/` | 技パラメータ・名前・説明・タイプ名 | 威力・命中・PP・効果等の編集 |
| `data/items/` | アイテムパラメータ・説明 | 価格・効果・ポケット等の編集 |
| `data/abilities/` | 特性名・説明 | 表示文言の編集 |
| `data/trainers/` | トレーナーテーブル | 手持ち参照・クラス・所持品等の編集 |
| `data/wild_encounters/` | 野生出現テーブル | 出現種・レベル・出現率の編集 |
| `data/decorations/` | もようがえデータ・説明・タイル | ひみつきち用アイテムの編集 |
| `data/pokeball/` | ボール画像テーブル | ボール画像参照の編集 |
| `data/event_scripts.s` | イベントスクリプト・文字列データの置き場 | 一部を `.include` でテキスト化済み |
| `data/text/` | 人間が読めるセリフソース | **ここを増やすのが Phase 2 の主作業** |
| `data/text/generated/` | **一括抽出された全通常テキスト** | 6,741 + 6,158 スロットを固定アドレスで編集可能 |
| `data/text/generated/manifest.json` | 抽出テキストのマニフェスト | ラベル・ROMアドレス・元バイト長・検証根拠を格納 |
| `data/text/rom_text_layout.json` | ROMテキストレイアウト定義 | 再生成に必要なラベル・範囲情報 |
| `data/charmap/charmap.txt` | 日本語文字コード表 | `.string` 編集の前提 |
| `constants/` | 定数定義 | 今後のシンボル化で参照される |
| `ld_script_jp.txt` | リンカスクリプト（配置） | セクション順・アドレス配置 |
| `funcmap_jp.txt` | 関数名↔アドレス対応 | 解析・改変箇所の特定に使う |
| `tools/` | preproc / as / ld / gbafix など | ビルドツール |
| | `tools/extract_all_text.py` | **テキスト一括抽出ツール**（全通常テキストを固定アドレスで抽出） |
| | `tools/extract_texts.py` | 旧・個別テキスト抽出ツール（単発調査用） |
| | `tools/update_event_scripts.py` | 旧・event_scripts.s更新ツール（単発調査用） |
| | `tools/verify_matching.py` | 旧・マッチング検証ツール（単発調査用） |
| `baserom.gba` | オリジナルROM（配布しない） | `.incbin` の元データ |
| `build/pokeemerald_jp.gba` | ビルド成果物 | エミュレータで起動するROM |
| `PokeEm-expansion-CanuseJP/` | 参考用（日本語対応expansion） | 将来の拡張の参考。本ビルドには未統合 |

---

## やりたいこと別ガイド

### 1. セリフ・文言を変える

| 状態 | 方法 |
|---|---|
| **一括抽出済み**（`data/text/generated/*.inc`） | 対応するラベルの `.string` を編集 → `cmake --build build --parallel`。元のバイト長以下であれば自由に編集可能。詳細は [text_editing.md](text_editing.md) 参照 |
| **個別テキスト化済み**（オダマキOP・ミシロタウンNPC・研究所・看板） | 対応する `data/text/*.inc` の `.string` を編集 → `cmake --build build --parallel` |
| **まだ `.incbin`** | ① ROM上の文字列アドレスを特定 ② `.incbin` をやめて `.string` 化 ③ 長さを維持するため `.space` を使う ④ 参照元の即値アドレスをシンボルに変更（`asm/main_menu.s` の例を参照） |
| **イベントスクリプトの小データ** | `data/event_scripts.s` で `.incbin` を `.string` に置換し、`$` と `.space` で終端・パディングを行う |

**制約（現状）**

- 各文字列にはオリジナルと同じ**占有バイト数**がある
- 短くする → `.space N` でパディング（一括抽出済みのスロットは自動パディング）
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
3. `cmake --build build --parallel` → エミュレータで確認
4. 必要なら `./asmdiff.sh` でオリジナルとの差を見る

英語版 pret/pokeemerald の C ソースを対照すると意図がわかりやすいです。

### 4. データテーブルを変える（ポケモン・技・アイテムなど）

主要テーブルは用途別のファイルへ構造化済みです。

| 変えたい内容 | 主なファイル |
|---|---|
| 種族値 | `data/pokemon/base_stats.inc` |
| 進化条件 | `data/pokemon/evolution.inc` |
| レベル・タマゴ・わざマシン・教え技 | `data/pokemon/level_up_learnsets.inc`、`egg_moves.inc`、`tmhm_learnsets.inc`、`tutor_learnsets.inc` |
| 技の威力・命中・PP・効果 | `data/moves/battle_moves.inc` |
| アイテムの価格・効果・用途 | `data/items/items.inc` |
| トレーナー | `data/trainers/trainers.inc` |
| 野生出現 | `data/wild_encounters/*.inc` |
| 図鑑 | `data/pokemon/pokedex_entries.inc`、`pokedex_descriptions.inc` |

各マクロの1エントリのバイト数と `data/rodata.inc` の include 順を維持してください。まだ構造化されていない領域は `data/rodata/*.inc` などの `.incbin` として残っています。

Phase 3 で C・JSON・Porymap 連携を目指します。

### 5. マップ・イベントを変える

| 現状 | 今後 |
|---|---|
| スクリプト／マップデータは主に `.incbin` | イベントスクリプトのテキスト化、Porymap 対応 |

`data/event_scripts.s` が入り口です。オダマキ文言以外はまだバイナリ塊が多いです。

### 6. グラフィック・フォントを変える

| 現状 | ファイル |
|---|---|
| ポケモン前後画像・パレット・アイコン | `data/pokemon/mon_*`、`data/pokemon/icon_table.inc` |
| ボール画像テーブル | `data/pokeball/ball_sprite_tables.inc` |
| 文字幅・字形 | `data/rodata/fonts.inc`（未構造化部分は `.incbin`） |
| その他の画像・タイル | `data/rodata/*.inc` などの未構造化領域 |
| 参考ツール | `tools/gbagfx/`（expansion 側で利用される系統） |

---

## 改変時の安全ルール

1. **サイズを意識する**  
   テキスト化済み文字列は枠長を超えない（またはパディングで枠を維持）。
2. **Matching を壊す改変と、意図的な改造を分ける**  
   改造ROMでは `compare` ターゲットは失敗してよい。ブランチを分けると安全。
3. **ポインタはシンボル化する**  
   `.4byte 0x08xxxxxx` のまま長さを変えると参照が壊れる。`gText_*` のようにラベル参照にする。
4. **1箇所ずつビルドしてエミュレータ確認**  
   特にオープニング・ダイアログ・戦闘開始など。
5. **ROMは自分で用意する**  
   `baserom.gba` は配布しません。

---

## 実践例: オダマキの最初のセリフ

1. `data/text/birch_speech.inc` を開く
2. `gText_Birch_Welcome` の `.string` を編集
3. バイト数が 86 未満なら `.space` を調整（詳しくは [text_editing.md](text_editing.md)）
4. `cmake --build build --parallel`
5. `build/pokeemerald_jp.gba` を起動し、ニューゲームで確認

参照元: `asm/main_menu.s` の `Task_NewGameBirchSpeech_*`

---

## 更新履歴（2026-07-26）

### テキスト一括抽出基盤

`tools/extract_all_text.py` により、`script_data` と `.rodata` の全通常テキストを固定アドレスで抽出。

- `data/text/generated/event_scripts.inc`：6,741スロット
- `data/rodata.inc`：6,158スロット（`data/text/rodata/` に分割・構造化済み）
- `data/text/generated/manifest.json`：ラベル・ROMアドレス・元バイト長・検証根拠
- 抽出状態で CMake の `compare` ターゲット一致確認済み

### ビルド依存

`CMakeLists.txt` は `data/text/*.inc` の更新時に該当オブジェクトを再ビルドする。

### ミシロタウン NPCセリフをテキスト化

| 項目 | 内容 |
|---|---|
| 元データ | `event_scripts.s` の `EventScript_JP_081E27F7` incbin ブロック（`0x1e27f7`, `0xaab6`バイト） |
| 新ファイル | `data/text/littleroot_town.inc` |
| シンボル | `gText_LittlerootTown_FatMan_*`, `gText_LittlerootTown_Boy_*`, `gText_LittlerootTown_Twin_*` |
| テキスト参照元 | `PokeEm-expansion-CanuseJP/data/maps/LittlerootTown/scripts.inc` |

`EventScript_JP_081E27F7` ブロックは以下のように分割済み：

```
.incbin baserom.gba, 0x1e27f7, 0x1d35  ← 手前
                   .include "data/text/littleroot_town.inc"    ← テキスト3件
gText_Rom_1E45F1:  .incbin baserom.gba, 0x1e45f1, 0x8cbc  ← 残り
```

### 調査で判明した技術情報

- 日本版オリジナルROMでは `{JPN}` (FC 15) フォント切替コードは**使われていない**
- `\n` = `FE`、`\p` = `FB`、`\l` = `FA`（英語版 pret とは異なる）
- Expansion の `.string` は `{JPN}` プレフィックス付きのため、オリジナル復元時は除去が必要
- preproc のバイト出力 ≠ ROM バイト列の場合、テキスト or 制御コードが違う可能性がある

---

## テキスト化の正しい手順（調査済み）

### ステップ 1: ROMオフセットを特定する

`event_scripts.s` の incbin ブロックは以下の通り：

```
gScriptCmdTable: 0x1dabac, 0x384
gScriptCmdTableEnd: 0x1daf30, 0x4
gSpecialVars: .incbin "baserom.gba", 0x1daf34, 0x58
gSpecials: 0x1daf8c, 0x830
gStdScripts: 0x1db7bc, 0x2c
0x1db7e8, 0x260b
EventScript_JP_081DDDF3: 0x1dddf3, 0x4a04
0x1e27f7, 0xaab6  ← ミシロタウンNPCを含む
gDataBlock_Rom_1ED2AD: 0x1ed2ad, 0x2f0f
EventScript_JP_081F01BC: 0x1f01bc, 0x32
EventScript_JP_081F01EE: 0x1f01ee, 0xbb1
...
```

**どのブロックにテキストがあるか特定する方法：**

`tools/preproc/preproc` に一時ファイルを渡してバイト列を得て、ROMの `baserom.gba` を Python で `bytes.find()` する。

```python
import subprocess
from pathlib import Path

# 1. preprocでテキストをエンコード
test_s = 't:\n    .string "探したいテキスト$"\n'
with open('/tmp/t.s', 'w') as f:
    f.write(test_s)
r = subprocess.run(['tools/preproc/preproc', '/tmp/t.s', 'data/charmap/charmap.txt'],
                   capture_output=True, text=True)
# 出力: t:\n\t.byte 0xXX, 0xXX, ..., 0xFF

# 2. バイト列を抽出してROMを検索
rom = Path("baserom.gba").read_bytes()
# バイト列の先頭数バイトで find()
enc = bytes([0xXX, 0xXX, ...])
pos = rom.find(enc)
print(f"ROM offset: 0x{pos:06x}")  # → GBA addr: 0x8{pos:06x}
```

### ステップ 2: テキストのバイト数を確認する

テキストをソース化するには、**オリジナルとバイト数が完全一致**しなければならない。

```python
rom = Path("baserom.gba").read_bytes()
start = 0x1e452c   # テキスト開始オフセット
end   = rom.find(b'\xff', start)  # 0xFF が終端
size  = end - start + 1
print(f"size = {size} bytes")  # → .string が生成するバイト数と一致させる
```

preproc のバイト出力と ROM のバイト列を比較して一致を確認してからインクルードする。

### ステップ 3: incbin ブロックを分割する

例（ミシロタウン3テキストの場合）：

```
# 変更前
    .incbin "baserom.gba", 0x1e27f7, 0xaab6

# 変更後
    .incbin "baserom.gba", 0x1e27f7, 0x1d35   ← テキスト直前まで
    .include "data/text/littleroot_town.inc"       ← テキスト本体
gText_Rom_1E45F1:
    .incbin "baserom.gba", 0x1e45f1, 0x8cbc   ← テキスト直後から
```

サイズの計算式：
- 前半: `テキスト開始 - ブロック開始 = 0x1e452c - 0x1e27f7 = 0x1d35`
- 後半: `ブロック終端 - テキスト終端 = 0x1ed2ad - 0x1e45f1 = 0x8cbc`
- 合計: `0x1d35 + 0x34 + 0x5c + 0x35 + 0x8cbc = 0xaab6`（元サイズと一致）

### ステップ 4: ビルドして Matching を確認する

```sh
cmake --build build --parallel
sha1sum build/pokeemerald_jp.gba
cat rom_jp.sha1
```

両者が一致すれば成功。

---

## ミシロタウンNPCテキスト（調査済み・テキスト化完了）

| シンボル | ROM オフセット | GBA アドレス | バイト数 |
|---|---|---|---|
| `gText_LittlerootTown_FatMan_CanUsePCToStoreItems` | `0x1e452c` | `0x81E452C` | 52 |
| `gText_LittlerootTown_Boy_BirchSpendsDaysInLab` | `0x1e4560` | `0x81E4560` | 92 |
| `gText_LittlerootTown_Twin_IfYouGoInGrassPokemonWillJumpOut` | `0x1e45bc` | `0x81E45BC` | 53 |

これらは `EventScript_JP_081E27F7` ブロック（`0x1e27f7`, `0xaab6`バイト）内に連続して配置されている。

`data/text/littleroot_town.inc` と `data/event_scripts.s` への分割は **実装済み**。

---

## charmap と制御コードに関する重要な注意

### 制御コード対応表（preproc が変換するもの）

| `.string` 内の記法 | 生成バイト | 意味 |
|---|---|---|
| `\n` | `FE` | 改行（SHIFT_DOWN） |
| `\p` | `FB` | 段落送り・ボタン待ち（PAUSE_UNTIL_PRESS） |
| `\l` | `FA` | 行スクロール |
| `$` | `FF` | 文字列終端 |
| `{PLAYER}` | `FD 01` | プレイヤー名 |
| `{KUN}` | `FD 02` | 「くん」または「ちゃん」 |
| `{JPN}` | `FC 15` | **Expansion用。日本版オリジナルROMでは使用されていない** |
| `\p` | `FB` | ≠ `FC 09`（英語版と異なる）。日本版は `FB` |

**重要：** Expansion (`PokeEm-expansion-CanuseJP`) の `scripts.inc` にある `.string` は
`{JPN}` プレフィックスが付いているが、**日本版オリジナルROMにはこのプレフィックスが存在しない**。
テキスト化する際は `{JPN}` を除去した形で記述すること。

Expansion のテキストはテキスト内容の参照として使えるが、バイト列は日本版オリジナルと異なる。
オリジナルのバイト列は必ず `baserom.gba` から直接確認すること。

### charmap の特殊な点

- `' '`（半角スペース）と `'　'`（全角スペース）はどちらも `0x00` にマップされる
- 文字列終端は `0xFF`（`$` で記述）
- `'せ' = 0x0E` と `SHIFT_DOWN = FC 0E` は別物（1バイトと2バイトで区別）

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
