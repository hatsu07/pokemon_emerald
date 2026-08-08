	@ field-script:0x2200A4 FieldScriptText_220E53
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220E53
gText_Rom_220E53: @ 0x08220E53
	.string "おきゃくさま！\pさんかできる　ポケモンが　2ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがうしゅるいの　ポケモンを\l2ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - gText_Rom_220E53) != 0xac
	.error "gText_Rom_220E53 must retain its original byte length"
	.endif
