	@ data/text/trainers.inc:40 Route102_Text_RickPostBattle
	.globl gText_Rom_2596B9
gText_Rom_2596B9: @ 0x082596B9
	.string "めが あった トレーナーには\nしょうぶを いどむのが きまりさ!"
	.byte EOS
	.if (. - gText_Rom_2596B9) > 0x21
	.error "gText_Rom_2596B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2596B9) < 0x21
	.space 0x21 - (. - gText_Rom_2596B9)
	.endif
