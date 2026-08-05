	@ field-script:0x220105 FieldScriptText_220DB2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220DB2
gText_Rom_220DB2: @ 0x08220DB2
	.string "おきゃくさま！\pさんかできる　ポケモンが　4ひき　いません！\pさんかする　ためには\nすべて　ちがうしゅるいの　ポケモンを\l4ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - gText_Rom_220DB2) != 0xa1
	.error "gText_Rom_220DB2 must retain its original byte length"
	.endif
