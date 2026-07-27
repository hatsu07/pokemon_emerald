# ROM構造ドキュメント

> **更新:** `script_data` と `.rodata` の通常テキストは現在
> `data/text/generated/*.inc` に固定アドレスで抽出されています。
>
> - **`data/text/generated/event_scripts.inc`**: イベント・フィールドの全通常テキスト（6,741スロット）
> - **`data/rodata.inc`**: メニュー・戦闘・名称などの全通常テキスト（6,158スロット、`data/text/rodata/` に分割・構造化済み）
> - **`data/text/generated/manifest.json`**: ラベル・ROMアドレス・元バイト長・検証根拠のマニフェスト
>
> 編集方法は [text_editing.md](text_editing.md) を参照してください。
> 以下の raw `.incbin` ブロック一覧は抽出前の構造資料であり、再生成に必要なラベル／範囲は
> `data/text/rom_text_layout.json` に保存されています。また、抽出器 `tools/extract_all_text.py`
> により常に再現可能なため、個別の incbin 分割作業は不要になりました。

このドキュメントは、日本版『ポケットモンスター エメラルド』（pokeemerald-jp）のROM構造を説明します。

## セクション構成

プロジェクトのELFは以下のセクションで構成されています：

| セクション | 内容 |
|---|---|
| `.text` | ゲームコード（ARM/Thumb命令） |
| `script_data` | イベントスクリプト・文字列データ（`data/event_scripts.s`） |
| `.rodata` | 読み取り専用データ |
| `.data` | 読み書き可能データ |

---

## script_data セクション（data/event_scripts.s）

`data/event_scripts.s` は ROM 内のイベントスクリプトと文字列データを定義するセクションです。
多くのデータは現在も `.incbin "baserom.gba"` による生バイナリ取り込みですが、
一部のテキストは `.include "data/text/*.inc"` によって `.string` 形式で編集可能になっています。

### incbin ブロック一覧

以下は `data/event_scripts.s` に定義されたブロックの一覧です。
「テキストか」列はそのブロックに編集可能な日本語テキストが含まれる可能性があることを示します。

| ラベル | ROMオフセット | サイズ | GBAアドレス | テキストか | 備考 |
|---|---|---|---|---|---|
| `gUnknown_81DABAC` | `0x1dabac` | `0x384` | `0x81DABAC` | 不明 | 小ブロック |
| `gUnknown_81DAF30` | `0x1daf30` | `0x4` | `0x81DAF30` | いいえ | 小ブロック |
| `gUnknown_81DAF34` | `0x1daf34` | `0x58` | `0x81DAF34` | 不明 | 小ブロック |
| `gUnknown_81DAF8C` | `0x1daf8c` | `0x830` | `0x81DAF8C` | 不明 | 中ブロック |
| `gUnknown_81DB7BC` | `0x1db7bc` | `0x2c` | `0x81DB7BC` | 不明 | 小ブロック |
| `gUnknown_81DB7E8` | `0x1db7e8` | `0x260b` | `0x81DB7E8` | 不明 | 中ブロック |
| `gUnknown_81DDDF3` | `0x1dddf3` | `0x4a04` | `0x81DDDF3` | 不明 | 大ブロック |
| `gUnknown_81E27F7` | `0x1e27f7` | `0x1d35` | `0x81E27F7` | 一部 | **テキスト化済み**（ミシロタウンNPC3件） |
| テキストインクルード | — | — | — | はい | `data/text/littleroot_town.inc` |
| `gUnknown_81E45F1` | `0x1e45f1` | `0x8cbc` | `0x81E45F1` | 不明 | 大ブロック |
| `gUnknown_81ED2AD` | `0x1ed2ad` | `0x2f0f` | `0x81ED2AD` | 不明 | 中ブロック |
| `gUnknown_81F01BC` | `0x1f01bc` | `0x32` | `0x81F01BC` | 不明 | 小ブロック |
| `gUnknown_81F01EE` | `0x1f01ee` | `0xbb1` | `0x81F01EE` | 不明 | 中ブロック |
| `gUnknown_81F0D9F` | `0x1f0d9f` | `0x3c` | `0x81F0D9F` | 不明 | 小ブロック |
| `gUnknown_81F0DDB` | `0x1f0ddb` | `0xc96` | `0x81F0DDB` | 不明 | 中ブロック |
| `gUnknown_81F1A71` | `0x1f1a71` | `0xc` | `0x81F1A71` | いいえ | 小ブロック（ヘッダ） |
| テキストインクルード | — | — | — | はい | `data/text/birch_lab.inc`（25件） |
| `gUnknown_81F217C` | `0x1f217c` | `0x20894` | `0x81F217C` | 不明 | ⭐最大ブロック（133.3KB） |
| `gUnknown_8202410` | `0x202410` | `0xb672` | `0x8202410` | 不明 | 大ブロック（46.7KB） |
| `gUnknown_820DA82` | `0x20da82` | `0xf` | `0x820DA82` | 不明 | 小ブロック |
| `gUnknown_820DA91` | `0x20da91` | `0xe` | `0x820DA91` | 不明 | 小ブロック |
| `gUnknown_820DA9F` | `0x20da9f` | `0xdd55` | `0x820DA9F` | 不明 | 大ブロック（56.6KB） |
| `gUnknown_821B7F4` | `0x21b7f4` | `0x54a` | `0x821B7F4` | 不明 | 中ブロック |
| `gUnknown_821BD3E` | `0x21bd3e` | `0x166c` | `0x821BD3E` | 不明 | 中ブロック |
| `gUnknown_821D3AA` | `0x21d3aa` | `0x2d` | `0x821D3AA` | 不明 | 小ブロック |
| `gUnknown_821D3D7` | `0x21d3d7` | `0xa1` | `0x821D3D7` | 不明 | 小ブロック |
| `gUnknown_821D478` | `0x21d478` | `0x60` | `0x821D478` | 不明 | 小ブロック |
| `gUnknown_821D4D8` | `0x21d4d8` | `0x9b` | `0x821D4D8` | 不明 | 小ブロック |
| `gUnknown_821D573` | `0x21d573` | `0x8` | `0x821D573` | 不明 | 小ブロック |
| `gUnknown_821D57B` | `0x21d57b` | `0x94c` | `0x821D57B` | 不明 | 中ブロック |
| `gUnknown_821DEC7` | `0x21dec7` | `0x45b7` | `0x821DEC7` | 不明 | 大ブロック（17.8KB） |
| `gUnknown_822247E` | `0x22247e` | `0x61b` | `0x822247E` | 不明 | 中ブロック |
| `gUnknown_8222A99` | `0x222a99` | `0x42ba` | `0x8222A99` | 不明 | 大ブロック（17.1KB） |
| `gUnknown_8226D53` | `0x226d53` | `0xe` | `0x8226D53` | 不明 | 小ブロック |
| `gUnknown_8226D61` | `0x226d61` | `0x6950` | `0x8226D61` | 不明 | 大ブロック（26.9KB） |
| `gUnknown_822D6B1` | `0x22d6b1` | `0x67` | `0x822D6B1` | 不明 | 小ブロック |
| `gUnknown_822D718` | `0x22d718` | `0x1b` | `0x822D718` | 不明 | 小ブロック |
| `gUnknown_822D733` | `0x22d733` | `0x1e` | `0x822D733` | 不明 | 小ブロック |
| `gUnknown_822D751` | `0x22d751` | `0x11` | `0x822D751` | 不明 | 小ブロック |
| `gUnknown_822D762` | `0x22d762` | `0x2d` | `0x822D762` | 不明 | 小ブロック |
| `gUnknown_822D78F` | `0x22d78f` | `0xde1a` | `0x822D78F` | 不明 | 大ブロック（56.9KB） |
| `gUnknown_823B5A9` | `0x23b5a9` | `0x1a52` | `0x823B5A9` | 不明 | 中ブロック |
| `gUnknown_823CFFB` | `0x23cffb` | `0x53f3` | `0x823CFFB` | 不明 | 大ブロック（21.5KB） |
| `gUnknown_82423EE` ~ | `0x2423ee` | 多数の小ブロック | — | 不明 | 小ブロック群（会話選択肢等） |
| `gUnknown_824C47B` | `0x24c47b` | `0xa197` | `0x824C47B` | 不明 | 大ブロック（41.4KB） |
| `gUnknown_8256612` ~ | `0x256612` | 中ブロック群 | — | 不明 | 中ブロック群 |
| `gUnknown_825941F` | `0x25941f` | `0x8f74` | `0x825941F` | 不明 | 大ブロック（36.7KB） |
| `gUnknown_826240A` | `0x26240a` | `0x8e9` | `0x826240A` | 不明 | 中ブロック |
| `gUnknown_826316A` | `0x26316a` | `0x11d5` | `0x826316A` | 不明 | 中ブロック |
| `gUnknown_8264358` | `0x264358` | `0x12957` | `0x8264358` | 不明 | 大ブロック（76.3KB） |
| `gUnknown_8276CAF` ~ | `0x276caf` | オダマキOP周辺 | — | 一部 | オダマキ博士のオープニング |
| テキストインクルード | — | — | — | はい | `data/text/birch_speech.inc`（8件） |
| `gUnknown_82772F0` ~ | `0x2772f0` | 継続 | — | 不明 | 中ブロック群 |
| `gUnknown_8277908` | `0x277908` | `0xf328` | `0x8277908` | 不明 | 大ブロック（62.2KB） |
| `gUnknown_8286C30` ~ | `0x286c30` | 多数の小ブロック | — | 不明 | 小ブロック群 |
| `gUnknown_828C8D8` | `0x28c8d8` | `0x9dc` | `0x828C8D8` | 不明 | 中ブロック |
| `gUnknown_828D2B4` | `0x28d2b4` | `0x44` | `0x828D2B4` | 不明 | 最終ブロック（終端） |

---

## テキスト化済みブロックの詳細

### 1. ミシロタウンNPC（3件）

| 項目 | 値 |
|---|---|
| 元のブロック | `gUnknown_81E27F7`（0x1e27f7, 0xaab6） |
| ROMオフセット範囲 | `0x1e452c` ~ `0x1e45f1` |
| 分割後の前半 | `gUnknown_81E27F7`: `0x1e27f7` 〜 `0x1e452c`（`0x1d35`バイト） |
| テキスト | `data/text/littleroot_town.inc`（3件、`0x34+0x5c+0x35`バイト） |
| 分割後の後半 | `gUnknown_81E45F1`: `0x1e45f1` 〜 `0x1ed2ad`（`0x8cbc`バイト） |

### 2. オダマキ研究所（25件）

| 項目 | 値 |
|---|---|
| 元のブロック | `gUnknown_81F1A71`（0x1f1a71, 0x1099f） |
| ROMオフセット範囲 | `0x1f1a7d` ~ `0x1f217c` |
| 分割後の前半 | `gUnknown_81F1A71`: `0x1f1a71` 〜 `0x1f1a7d`（`0xc`バイト） |
| テキスト | `data/text/birch_lab.inc`（25件、`0x6ff`バイト） |
| 分割後の後半 | `gUnknown_81F217C`: `0x1f217c` 〜 `0x202b0b`（`0x20894`バイト） |

### 3. オダマキ博士オープニング（8件）

| 項目 | 値 |
|---|---|
| ROMオフセット範囲 | `0x277095` ~ `0x2772f0` |
| ブロック内位置 | birch_speech.inc で直接テキスト化 |
| テキスト | `data/text/birch_speech.inc`（8件） |

---

## 今後のテキスト化候補

優先度の高いブロック：

| ブロック | サイズ | 可能性 |
|---|---|---|
| `gUnknown_81DDDF3`（0x1dddf3, `0x4a04`） | 18.5KB | イベントスクリプト・テキスト |
| `gUnknown_81F217C`（0x1f217c, `0x20894`） | 133.3KB | ⭐テキスト多量に含む可能性大 |
| `gUnknown_8202410`（0x202410, `0xb672`） | 46.7KB | テキスト含む可能性大 |
| `gUnknown_820DA9F`（0x20da9f, `0xdd55`） | 56.6KB | テキスト含む可能性大 |
| `gUnknown_822D78F`（0x22d78f, `0xde1a`） | 56.9KB | テキスト含む可能性大 |
| `gUnknown_824C47B`（0x24c47b, `0xa197`） | 41.4KB | テキスト含む可能性大 |
| `gUnknown_8264358`（0x264358, `0x12957`） | 76.3KB | テキスト含む可能性大 |
| `gUnknown_8277908`（0x277908, `0xf328`） | 62.2KB | テキスト含む可能性大 |

テキストの場所特定には、以下の手順が推奨されます：

1. Expansionのscripts.incからテキスト候補を抽出
2. `tools/preproc/preproc` でバイト列に変換
3. `baserom.gba` 内でバイト列を検索
4. 該当ブロックを特定し、分割してテキスト化

---

## 参照

- [hacking.md](hacking.md) - ハックガイド・ファイル対応表
- [text_editing.md](text_editing.md) - 日本語テキスト編集
- [text_extraction_guide.md](text_extraction_guide.md) - テキスト抽出ガイド
