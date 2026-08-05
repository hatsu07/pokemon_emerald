	@ field-script:0x2200E9 FieldScriptText_220EFF
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220EFF
gText_Rom_220EFF: @ 0x08220EFF
	.string "おきゃくさま！\pさんかできる　ポケモンが　2ひき　いません！\pさんかする　ためには\nすべて　ちがうしゅるいの　ポケモンを\l2ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - gText_Rom_220EFF) != 0xa1
	.error "gText_Rom_220EFF must retain its original byte length"
	.endif
