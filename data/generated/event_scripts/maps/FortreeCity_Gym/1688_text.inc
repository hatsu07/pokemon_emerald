	@ data/maps/FortreeCity_Gym/scripts.inc:297 FortreeCity_Gym_Text_WinonaRematchDefeat (+1 aliases)
	.globl gText_Rom_204B49
gText_Rom_204B49: @ 0x08204B49
	.string "やはり とどかなかった……{EOS}"
	.if (. - gText_Rom_204B49) > 0xe
	.error "gText_Rom_204B49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204B49) < 0xe
	.space 0xe - (. - gText_Rom_204B49)
	.endif
