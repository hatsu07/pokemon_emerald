	@ field-script:0x1F54B2 FieldScriptText_274C84
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274C84
gText_Rom_274C84: @ 0x08274C84
	.string "おきゃくじん！！\pさんかできる　ポケモンが\n3ひき　おりませんぬ！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませぬ！\pじゅんびが　できましたら\nまた　おこし　くだされ！$"
	.if (. - gText_Rom_274C84) != 0x79
	.error "gText_Rom_274C84 must retain its original byte length"
	.endif
