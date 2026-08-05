	@ field-script:0x2271DC FieldScriptText_227711
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_227711
gText_Rom_227711: @ 0x08227711
	.string "おきゃくさま！\pさんかできる　ポケモンが　3ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できません！\pじゅんびが　できましたら\nまた　おこし　ください$"
	.if (. - gText_Rom_227711) != 0xae
	.error "gText_Rom_227711 must retain its original byte length"
	.endif
