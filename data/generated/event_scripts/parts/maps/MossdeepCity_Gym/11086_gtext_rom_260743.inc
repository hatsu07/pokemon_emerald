	@ data/maps/MossdeepCity_Gym/scripts.inc:417 MossdeepCity_Gym_Text_SamanthaDefeat (+2 aliases)
	.globl gText_Rom_260743
gText_Rom_260743: @ 0x08260743
	.string "まいりました……!$"
	.if (. - gText_Rom_260743) > 0xa
	.error "gText_Rom_260743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260743) < 0xa
	.space 0xa - (. - gText_Rom_260743)
	.endif
