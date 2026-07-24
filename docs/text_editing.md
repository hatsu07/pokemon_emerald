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

## 例: 最初のセリフ

```asm
gText_Birch_Welcome::
	.string "さあ　ぼうけんの　じかん！\pポケットモンスターの　せかいへ\nようこそ！\p..."
	.space 1 @ Welcome 枠は 86 バイト。短い分をパディング
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
| `gText_Birch_Pokemon` | 23 バイト |
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

## ビルド

```sh
make -j$(nproc)
```

`data/*.s` は Makefile により preproc 経由でアセンブルされます。  
`birch_speech.inc` を変えたあとは `data/event_scripts.o` が再ビルドされます。
