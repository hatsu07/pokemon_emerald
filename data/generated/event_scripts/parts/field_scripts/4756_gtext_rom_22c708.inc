	@ field-script:0x22C066 FieldScriptText_22C708
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22C708
gText_Rom_22C708: @ 0x0822C708
	.string "ぼうけんしゃよ！！\pつれていける　ポケモンが\n3ひき　いないようですぞ！\pまた　ポケモンに　もたせている　どうぐは\nすべて　はずしてくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませんぞ！\pじゅんびが　できましたら\nまた　おこし　くだされ！$"
	.if (. - gText_Rom_22C708) != 0x7e
	.error "gText_Rom_22C708 must retain its original byte length"
	.endif
