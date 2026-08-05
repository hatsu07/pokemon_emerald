	@ field-script:0x22F569 FieldScriptText_22F951
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22F951
gText_Rom_22F951: @ 0x0822F951
	.string "おきゃくじん！！\pさんかできる　ポケモンが\n3ひき　おりませぬ！\pさんかする　ためには\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　くだされ！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませぬ！\pじゅんびが　できましたら\nまた　おこし　くだされ！"
	.byte EOS
	.if (. - gText_Rom_22F951) != 0xa7
	.error "gText_Rom_22F951 must retain its original byte length"
	.endif
