	@ data/text/trainers.inc:1730 Route117_Text_DylanRegister
	.globl gText_Rom_25DD55
gText_Rom_25DD55: @ 0x0825DD55
	.string "ポケモンも つよく なくちゃ ダメか?\nきみさ たまに ぼくを きたえてよ!{EOS}"
	.if (. - gText_Rom_25DD55) > 0x27
	.error "gText_Rom_25DD55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DD55) < 0x27
	.space 0x27 - (. - gText_Rom_25DD55)
	.endif
