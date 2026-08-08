	@ field-script:0x2200B2 FieldScriptText_220BB9
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220BB9
gText_Rom_220BB9: @ 0x08220BB9
	.string "おきゃくさま！\pさんかできる　ポケモンが　3ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがうしゅるいの　ポケモンを\l3ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - gText_Rom_220BB9) != 0xac
	.error "gText_Rom_220BB9 must retain its original byte length"
	.endif
