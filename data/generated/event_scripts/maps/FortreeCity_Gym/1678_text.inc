	@ data/maps/FortreeCity_Gym/scripts.inc:271 FortreeCity_Gym_Text_RegisteredWinona
	.globl gText_Rom_204A59
gText_Rom_204A59: @ 0x08204A59
	.string "ジムリーダー ナギを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_204A59) > 0x1a
	.error "gText_Rom_204A59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204A59) < 0x1a
	.space 0x1a - (. - gText_Rom_204A59)
	.endif
