	@ field-script:0x22F55C FieldScriptText_22F9F8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22F9F8
gText_Rom_22F9F8: @ 0x0822F9F8
	.string "おきゃくじん！！\pさんかできる　ポケモンが\n3ひき　おりませぬ！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　くだされ！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませぬ！\pじゅんびが　できましたら\nまた　おこし　くだされ！"
	.byte EOS
	.if (. - gText_Rom_22F9F8) != 0xb2
	.error "gText_Rom_22F9F8 must retain its original byte length"
	.endif
