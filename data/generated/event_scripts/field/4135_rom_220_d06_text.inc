	@ field-script:0x2200C0 FieldScriptText_220D06
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220D06
gText_Rom_220D06: @ 0x08220D06
	.string "おきゃくさま！\pさんかできる　ポケモンが　4ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがうしゅるいの　ポケモンを\l4ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - gText_Rom_220D06) != 0xac
	.error "gText_Rom_220D06 must retain its original byte length"
	.endif
