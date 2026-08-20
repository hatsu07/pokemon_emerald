	@ data/text/trainers.inc:2636 Route124_Text_ChadPostBattle
	.globl gText_Rom_260340
gText_Rom_260340: @ 0x08260340
	.string "うみの そこに もぐれる ポイントが\nこの あたりには あるらしいぜ!\lモグリの ちが さわぐなあ……{EOS}"
	.if (. - gText_Rom_260340) > 0x34
	.error "gText_Rom_260340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260340) < 0x34
	.space 0x34 - (. - gText_Rom_260340)
	.endif
