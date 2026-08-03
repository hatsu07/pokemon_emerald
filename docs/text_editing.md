# ROM 全体テキストの編集

通常の文字列データは、元 ROM のアドレスを変えない固定長スロットとして抽出されています。初期状態では元 ROM と完全一致し、テキストを編集した後は変更したスロットだけが変わります。

## 編集するファイル

| 範囲 | ファイル | 初期スロット数 |
|---|---|---:|
| イベント・フィールド文 | `data/text/generated/event_scripts.inc` | 6,741 |
| メニュー・戦闘・名称など | `data/rodata.inc` | 6,158（`data/text/rodata/` に分割・構造化済み） |

既存の `data/text/birch_lab.inc` と `data/text/birch_speech.inc` も、前者からそのまま include され、同じ固定長ガードを持ちます。各生成文字列は `gText_Rom_<ROMオフセット>` というラベルです。たとえば `gText_Rom_5CCCD4` は ROM オフセット `0x5CCCD4` にある文言です。

文字列を探すには、直接検索するのが簡単です。

```sh
rg -n -F 'ポケモンを　つりあげた' data/text/generated
```

`data/text/generated/manifest.json` には、ラベル、ROM アドレス、元バイト長、候補の出所、ポインタ／API による検証根拠が入っています。

## 編集規則

```asm
gText_Rom_46F9E8: @ 0x0846F9E8
	.string "ポケモンを　つりあげた！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46F9E8) > 0xf
	.error "gText_Rom_46F9E8 may not grow beyond its original slot"
	.endif
```

- 通常のスロットは元のバイト長以下であれば編集できます。短くした分は自動で `0x00` 埋めされます。
- `@ Preserve exact byte length:` が付いたスロットは、途中を参照するポインタや固定幅／複数終端を持ちます。**元と同じバイト長**にしてください。
- 長い文への変更はアセンブラが停止します。空き領域への再配置と全ポインタ更新は、この固定配置モードの対象外です。
- `{0xNN}` は復号名を一意に決められない制御バイトです。意味を把握するまで残してください。
- `$` は文字列の終端です。削除しないでください。
- `Braille window header` のコメントがある `.byte` ブロックは日本語点字です。通常の charmap ではないため生バイトで抽出しています。行数／バイト長を変えずに編集してください。

## 再生成と検証

抽出器は以下を組み合わせ、元のバイト列に戻せるものだけを採用します。

1. ローカルの日本語参照ソースとの完全バイト一致
2. フィールドスクリプトでテキスト引数と確定できる未照合ポインタ
3. Thumb アセンブリで表示・コピー用の文字列 API へ直接渡される未照合ポインタ
4. Thumb の添字付きポインターテーブルから文字列 API へ渡ることを確認できる文言
5. マップイベント起点から到達可能で、型別レイアウトを検証した `trainerbattle` の文言

```sh
python3 tools/extract_all_text.py
cmake --build build --target compare --parallel
```

抽出器は生成後に各セクションを preproc・assembler・objcopy で戻し、`baserom.gba` とバイト単位で照合します。CMake の `compare` ターゲットも初期抽出状態で成功することを確認済みです。

`tools/extract_all_text.py` を再実行すると、生成済み `.inc` の編集内容は元 ROM 基準で上書きされます。変更を残したい場合は、再生成前にコミットまたは退避してください。

## 範囲

この仕組みは通常の charmap 文字列に加え、`braillemessage` で参照される日本語点字の生バイトを対象にしています。画像に焼き込まれた文字と、実行時に組み立てられる文は別形式のデータであり、この固定長抽出には含めません。
