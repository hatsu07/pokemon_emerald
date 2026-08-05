	@ field-script:0x2271E9 FieldScriptText_22769C
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22769C
gText_Rom_22769C: @ 0x0822769C
	.string "おきゃくさま！\pさんかできる　ポケモンが　3ひき　いません！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できません！\pじゅんびが　できましたら\nまた　おこし　ください$"
	.if (. - gText_Rom_22769C) != 0x75
	.error "gText_Rom_22769C must retain its original byte length"
	.endif
