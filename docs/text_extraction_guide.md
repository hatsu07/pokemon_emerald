# テキスト抽出ガイド

このドキュメントは、日本版『ポケットモンスター エメラルド』のROMからテキストを抽出し、`.string`形式で編集可能にするための完全なガイドです。

---

## 概要

テキスト抽出プロセスは以下の2段階で構成されています：

### 現在の方式（推奨）：一括抽出

`tools/extract_all_text.py` により、`script_data` セクションと `.rodata` セクションの全通常テキストを固定アドレスで一括抽出します。

- **抽出結果**: `data/text/generated/event_scripts.inc`（6,741スロット）+ `data/rodata.inc`（6,158スロット、`data/text/rodata/` に分割・構造化済み）
- **マニフェスト**: `data/text/generated/manifest.json`（ラベル・ROMアドレス・元バイト長・検証根拠）
- **編集方法**: [text_editing.md](text_editing.md) を参照

### 旧方式（参考）：個別抽出

`tools/extract_texts.py` + `tools/update_event_scripts.py` による個別テキストの抽出・組み込み。
単発調査や新規マップのテキスト化に使用します。

---

## 1. 一括抽出（推奨）

### 実行方法

```sh
python3 tools/extract_all_text.py
cmake --build build --target compare --parallel
```

抽出器は以下を組み合わせ、元のバイト列に戻せるものだけを採用します。

1. ローカルの日本語参照ソースとの完全バイト一致
2. フィールドスクリプトでテキスト引数と確定できる未照合ポインタ
3. Thumb アセンブリで表示・コピー用の文字列 API へ直接渡される未照合ポインタ
4. Thumb の添字付きポインターテーブルから文字列 API へ渡ることを確認できる文言
5. マップイベント起点から到達可能で、型別レイアウトを検証した `trainerbattle` の文言

### 出力ファイル

| ファイル | スロット数 | 内容 |
|---|---|---|
| `data/text/generated/event_scripts.inc` | 6,741 | イベント・フィールドの全通常テキスト |
| `data/rodata.inc` | 6,158 | メニュー・戦闘・名称などの全通常テキスト（`data/text/rodata/` に分割・構造化済み） |
| `data/text/generated/manifest.json` | — | ラベル・ROMアドレス・元バイト長・検証根拠 |

### 再生成と検証

```sh
python3 tools/extract_all_text.py
cmake --build build --target compare --parallel
```

抽出器は生成後に各セクションを preproc・assembler・objcopy で戻し、`baserom.gba` とバイト単位で照合します。CMake の `compare` ターゲットも初期抽出状態で成功することを確認済みです。

`tools/extract_all_text.py` を再実行すると、生成済み `.inc` の編集内容は元 ROM 基準で上書きされます。変更を残したい場合は、再生成前にコミットまたは退避してください。

---

## 2. 個別抽出（旧方式・参考）

Expansionのスクリプトから特定のテキストを抽出し、incbinブロックを分割して組み込む手順です。

### ツール

#### 2.1 extract_texts.py

Expansionのscripts.incからテキストを抽出し、日本版ROMで位置を特定して`.string`形式で出力します。

```bash
python3 tools/extract_texts.py \
  --expansion-scripts PokeEm-expansion-CanuseJP/data/maps/LittlerootTown_ProfessorBirchsLab/scripts.inc \
  --rom baserom.gba \
  --charmap data/charmap/charmap.txt \
  --preproc tools/preproc/preproc \
  --output data/text/birch_lab.inc \
  --label-prefix "BirchLab_"
```

**引数:**
- `--expansion-scripts`: Expansionのscripts.incファイルパス
- `--rom`: 日本版ROMファイルパス（デフォルト: baserom.gba）
- `--charmap`: data/charmap/charmap.txtパス（デフォルト: data/charmap/charmap.txt）
- `--preproc`: preproc実行ファイルパス（デフォルト: tools/preproc/preproc）
- `--output`: 出力.incファイルパス
- `--label-prefix`: ラベルに付けるプレフィックス（オプション）

#### 2.2 update_event_scripts.py

event_scripts.sのincbinブロックを分割してテキスト.incファイルを組み込みます。

```bash
python3 tools/update_event_scripts.py \
  --event-scripts data/event_scripts.s \
  --text-file data/text/birch_lab.inc \
  --first-offset 0x1f1a7d \
  --last-offset 0x1f217c \
  --output data/event_scripts.s
```

**引数:**
- `--event-scripts`: event_scripts.sパス（デフォルト: data/event_scripts.s）
- `--text-file`: 組み込むテキスト.incファイル
- `--first-offset`: テキスト開始ROMオフセット（16進数）
- `--last-offset`: テキスト終了ROMオフセット（16進数）
- `--output`: 出力ファイルパス（省略時は上書き）

#### 2.3 verify_matching.py

テキスト分離後のROMとオリジナルROMのSHA-1を比較します。

```bash
# SHA-1比較
python3 tools/verify_matching.py \
  --built-rom build/pokeemerald_jp.gba \
  --original-rom baserom.gba

# CMakeのcompareターゲットを実行
cmake --build build --target compare

# 特定のテキストファイルを検証
python3 tools/verify_matching.py \
  --verify-text data/text/birch_lab.inc \
  --charmap data/charmap/charmap.txt \
  --preproc tools/preproc/preproc \
  --original-rom baserom.gba
```

### 手動でのテキスト抽出方法

ツールを使用しない場合の手動手順：

#### ステップ1: Expansionスクリプトからテキストを抽出

`PokeEm-expansion-CanuseJP/data/maps/[マップ名]/scripts.inc` を開き、テキストラベルを探します。

例:
```asm
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
	.string "{JPN}え? オダマキはかせ?\p..."
```

#### ステップ2: {JPN}プレフィックスを除去

日本版オリジナルROMでは `{JPN}` (FC 15) プレフィックスは使われていないため、これを除去します。

```asm
# 変更前
.string "{JPN}え? オダマキはかせ?\p..."

# 変更後
.string "え? オダマキはかせ?\p..."
```

#### ステップ3: ROMで位置を特定

テキストをpreprocでバイト列に変換し、ROMで検索します。

```bash
echo 'test:
	.string "え? オダマキはかせ?\p$"' > /tmp/test.s
tools/preproc/preproc /tmp/test.s data/charmap/charmap.txt
```

出力:
```
test:
	.byte 0x04, 0xAC, 0x00, 0x55, 0x91, 0x6F, 0x57, 0x1A, 0x06, 0x0E, 0xAC, 0xFB, 0xFF
```

このバイト列（最初の数バイト）でROMを検索します。

#### ステップ4: .incファイルを作成

検出した情報を使って.incファイルを作成します。

```asm
@ Phase 2: テキスト化（日本版）
@ 文字コードは data/charmap/charmap.txt。.string は tools/preproc がバイト列へ変換する。
@ 各エントリの占有サイズはオリジナルROMと同じにし、後続データのアドレスを維持する。

	.globl gText_BirchLab_Aide_BirchAwayOnFieldwork
gText_BirchLab_Aide_BirchAwayOnFieldwork:: @ 0x81F1A7D (160 bytes)
	.string "え? オダマキはかせ?\pはかせ なら フィールドワークに\nでかけていて いませんよ\p..."
```

#### ステップ5: event_scripts.sを更新

該当するincbinブロックを分割して、テキストファイルを組み込みます。

```asm
# 変更前
	.globl gUnknown_81F1A71
gUnknown_81F1A71: @ 0x81F1A71
	.incbin "baserom.gba", 0x1f1a71, 0x1099f

# 変更後
	.globl gUnknown_81F1A71
gUnknown_81F1A71: @ 0x81F1A71
	.incbin "baserom.gba", 0x1f1a71, 0xc

	@ オダマキ研究所テキスト（Phase 2 テキスト化）
	.include "data/text/birch_lab.inc"

	.globl gUnknown_81F217C
gUnknown_81F217C: @ 0x81F217C
	.incbin "baserom.gba", 0x1f217c, 0x20894
```

サイズ計算:
- 前半: `テキスト開始 - ブロック開始 = 0x1f1a7d - 0x1f1a71 = 0xc`
- 後半: `ブロック終了 - テキスト終了 = 0x202b0b - 0x1f217c = 0x20894`

#### ステップ6: ビルドと検証

```bash
cmake --build build --parallel
cmake --build build --target compare
```

SHA-1が一致すれば成功です。

---

## 制御文字・記法

| 記法 | バイト | 意味 |
|---|---|---|
| `\n` | `FE` | 改行 |
| `\p` | `FB` | 段落送り・ボタン待ち |
| `\l` | `FA` | 行スクロール |
| `$` | `FF` | 文字列終端 |
| `{PLAYER}` | `FD 01` | プレイヤー名 |
| `{KUN}` | `FD 02` | 「くん」または「ちゃん」 |
| `{RIVAL}` | `FD 03` | ライバル名 |
| `{STR_VAR_1}` | `FD 05` | 変数1 |
| `　` / ` ` | `00` | スペース |

---

## 重要な注意点

### 1. バイト長の維持

各テキストエントリは、オリジナルROMと同じ占有バイト数を維持する必要があります。

- **短くする場合**: 一括抽出済みのスロットは自動で `0x00` 埋めされます
- **長くする場合**: 後続アドレスがずれてクラッシュする可能性あり。空き領域への再配置が必要

### 2. {JPN}プレフィックス

Expansionのテキストには `{JPN}` プレフィックスが含まれていますが、日本版オリジナルROMでは使われていません。必ず除去してください。

### 3. ラベル命名規則

一貫性のあるラベル命名を使用してください：
- `gText_[場所]_[キャラクター]_[内容]`
- 例: `gText_BirchLab_Aide_BirchAwayOnFieldwork`

---

## 実践例: オダマキ研究所

オダマキ研究所のテキスト抽出は既に完了しています。

**ファイル:**
- `data/text/birch_lab.inc` - 25個のテキスト
- `data/event_scripts.s` - ブロック分割済み

**範囲:**
- ROMオフセット: `0x1f1a7d` - `0x1f217c`
- 合計バイト数: 1,595バイト

**検証:**
```bash
cmake --build build --target compare
# SHA-1: d7cf8f156ba9c455d164e1ea780a6bf1945465c2 (一致)
```

---

## 次のステップ

他のマップ/場所のテキストを抽出する場合：

1. 対応するExpansionスクリプトを特定
2. `extract_texts.py` を実行
3. `update_event_scripts.py` で event_scripts.s を更新
4. ビルドと検証

または、一括抽出ツールで全体を再抽出することもできます：

```sh
python3 tools/extract_all_text.py
cmake --build build --target compare --parallel
```

---

## トラブルシューティング

### テキストがROMで見つからない

- {JPN}プレフィックスを除去しているか確認
- 制御文字が正しいか確認（`\n`, `\p`, `\l`, `$`）
- Expansionと日本版でテキスト内容が異なる可能性あり

### バイト数が合わない

- preprocの出力バイト数を確認
- オリジナルROMの該当範囲をhexdumpで確認
- パディングが必要な場合は `.space` を追加

### SHA-1が不一致

- すべてのテキストが正しくエンコードされているか確認
- incbinブロックのサイズ計算が正しいか確認
- `verify_matching.py --verify-text` で各テキストを検証

---

## 参考ドキュメント

- [text_editing.md](text_editing.md) - 日本語テキスト編集の詳細
- [hacking.md](hacking.md) - ハックガイド・ファイル対応表
- [../README.md](../README.md) - プロジェクト概要
