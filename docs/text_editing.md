# 日本語テキスト編集（Phase 2）

セリフを `.string` で編集するためのメモです。全体のハック手順は [hacking.md](hacking.md) を参照してください。

## 概要

日本版の文言は `charmap.txt` の文字コードでエンコードされています。  
`.string "..."` を書くと、ビルド時に `tools/preproc/preproc` がバイト列へ変換します。

## いま編集できるセリフ

| ラベル | ファイル | ゲーム内 |
|---|---|---|
| `gText_Birch_Welcome` | `data/text/birch_speech.inc` | オダマキ博士・最初のあいさつ |
| `gText_Birch_MainSpeech` ほか | 同上 | オープニング一連のセリフ |
| `gText_LittlerootTown_*` | `data/text/littleroot_town.inc` | ミシロタウンのNPC 3人 |
| `gText_BirchLab_Aide_*` | `data/text/birch_lab.inc` | オダマキ研究所の助手セリフ（25件） |
| `gText_BirchLab_Birch_*` | 同上 | オダマキ研究所の博士セリフ |
| `gText_BirchLab_May_*` / `gText_BirchLab_Brendan_*` | 同上 | オダマキ研究所のライバルセリフ |
| `gText_BirchLab_*` (環境テキスト) | 同上 | 研究所の機器・本棚の説明 |

## 例: 最初のセリフ

```asm
gText_Birch_Welcome::
	.string "いやー　おまたせ　おまたせ！\pポケットモンスターの　せかいへ\nようこそ！\p..."
```

オリジナル冒頭は `いやー　おまたせ　おまたせ！` です。

## 制御文字・記号

| 記法 | バイト / 意味 |
|---|---|
| `\n` | 改行 |
| `\p` | 段落（ボタン待ち） |
| `\l` | 行スクロール |
| `$` | 終端 `0xFF` |
| `　` / ` ` | スペース `0x00` |
| `！` `？` | 句読点 |
| `「」` | カギ括弧（`‘’` も可） |
| `{PLAYER}` `{KUN}` | 埋め込みコード |

## バイト長（重要）

テキスト化済みの各エントリは、オリジナルROMと同じ占有サイズを維持します。

| ラベル | 枠サイズ |
|---|---|
| `gText_Birch_Welcome` | 86 バイト |
| `gText_Birch_MainSpeech` | 0xF2 バイト |
| `gText_Birch_AndYouAre` | 0xC バイト |
| `gText_Birch_BoyOrGirl` | 0x13 バイト |
| `gText_Birch_WhatsYourName` | 0x11 バイト |
| `gText_Birch_SoItsPlayer` | 0x9 バイト |
| `gText_Birch_YourePlayer` | 0x38 バイト |
| `gText_Birch_AreYouReady` | 0x8B バイト（末尾に `0x00` パディングあり） |

- **短い** → `.space N` や `.byte 0x00` で埋める  
- **長い** → 後続アドレスがずれて壊れる。現状は非対応（空き領域への再配置が必要）

長さ確認の例:

```sh
# .string だけを仮ファイルにして preproc し、0xXX の個数を数える
tools/preproc/preproc /tmp/test.s charmap.txt | grep -o '0x[0-9A-Fa-f]\+' | wc -l
```

## 共通の追加方法

他のテキストも同じ流れで追加できます。

```asm
	.globl gText_Example
gText_Example::
	.string "ここは新しいテキストです。$"
	.space 0x40 - (. - gText_Example)
```

- `gText_Example` がシンボル名
- `0x40` が元データの占有サイズ
- `"..."` が表示文

サイズが足りない場合は `.space` で埋めます。長い文は別途再配置が必要です。

## ビルド

```sh
make -j$(nproc)
```

`data/*.s` は Makefile により preproc 経由でアセンブルされます。  
`data/text/*.inc` を変えたあとは `data/event_scripts.o` が再ビルドされます。

## 検証済みの状態

現在のテキスト分離後のROMは、`make compare` でオリジナルROMとのSHA-1一致を確認済みです。

### テキスト化済みファイル一覧

| ファイル | テキスト数 | 内容 |
|---|---|---|
| `data/text/birch_speech.inc` | 8件 | オダマキ博士オープニング |
| `data/text/littleroot_town.inc` | 3件 | ミシロタウンNPC |
| `data/text/birch_lab.inc` | 25件 | オダマキ研究所（助手・博士・ライバル・環境） |

新しいテキストを追加する手順は [text_extraction_guide.md](text_extraction_guide.md) を参照してください。
