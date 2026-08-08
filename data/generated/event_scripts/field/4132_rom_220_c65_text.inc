	@ field-script:0x2200F7 FieldScriptText_220C65
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220C65
gText_Rom_220C65: @ 0x08220C65
	.string "おきゃくさま！\pさんかできる　ポケモンが　3ひき　いません！\pさんかする　ためには\nすべて　ちがうしゅるいの　ポケモンを\l3ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - gText_Rom_220C65) != 0xa1
	.error "gText_Rom_220C65 must retain its original byte length"
	.endif
