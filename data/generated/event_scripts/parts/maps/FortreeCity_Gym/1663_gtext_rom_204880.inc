	@ data/maps/FortreeCity_Gym/scripts.inc:227 FortreeCity_Gym_Text_DariusDefeat (+1 aliases)
	.globl gText_Rom_204880
gText_Rom_204880: @ 0x08204880
	.string "なかなか わかってるな!$"
	.if (. - gText_Rom_204880) > 0xd
	.error "gText_Rom_204880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204880) < 0xd
	.space 0xd - (. - gText_Rom_204880)
	.endif
