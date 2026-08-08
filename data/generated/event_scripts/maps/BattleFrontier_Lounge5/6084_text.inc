	@ data/maps/BattleFrontier_Lounge5/scripts.inc:77 BattleFrontier_Lounge5_Text_NatureGirlEgg
	.globl gText_Rom_23951A
gText_Rom_23951A: @ 0x0823951A
	.string "たまごは ねんね してる から\nおはなち できない よぉ!"
	.byte EOS
	.if (. - gText_Rom_23951A) > 0x1e
	.error "gText_Rom_23951A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23951A) < 0x1e
	.space 0x1e - (. - gText_Rom_23951A)
	.endif
