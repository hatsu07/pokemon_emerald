	@ data/maps/MossdeepCity_Gym/scripts.inc:447 MossdeepCity_Gym_Text_NatePostBattle
	.globl gText_Rom_20BCD5
gText_Rom_20BCD5: @ 0x0820BCD5
	.string "わ わたくしは どんなに まけても\nとりみだしは しませんから{EOS}"
	.if (. - gText_Rom_20BCD5) > 0x20
	.error "gText_Rom_20BCD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BCD5) < 0x20
	.space 0x20 - (. - gText_Rom_20BCD5)
	.endif
