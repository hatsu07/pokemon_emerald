	@ data/maps/MossdeepCity_Gym/scripts.inc:417 MossdeepCity_Gym_Text_SamanthaDefeat (+2 aliases)
	.globl gText_Rom_20BB5E
gText_Rom_20BB5E: @ 0x0820BB5E
	.string "まいりました……!{EOS}"
	.if (. - gText_Rom_20BB5E) > 0xa
	.error "gText_Rom_20BB5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BB5E) < 0xa
	.space 0xa - (. - gText_Rom_20BB5E)
	.endif
