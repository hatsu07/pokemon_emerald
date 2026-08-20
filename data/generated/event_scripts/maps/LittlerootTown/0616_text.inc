	@ data/maps/LittlerootTown/scripts.inc:976 LittlerootTown_Text_DangerousIfYouDontHavePokemon
	.globl gText_Rom_1E45F1
gText_Rom_1E45F1: @ 0x081E45F1
	.string "じぶんの ポケモンを もってないと\nあぶないの!{EOS}"
	.if (. - gText_Rom_1E45F1) > 0x19
	.error "gText_Rom_1E45F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E45F1) < 0x19
	.space 0x19 - (. - gText_Rom_1E45F1)
	.endif
