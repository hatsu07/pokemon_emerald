	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:358 PlayersHouse_1F_Text_RegisteredMom
	.globl gText_Rom_1EFCD3
gText_Rom_1EFCD3: @ 0x081EFCD3
	.string "ママを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_1EFCD3) > 0x13
	.error "gText_Rom_1EFCD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFCD3) < 0x13
	.space 0x13 - (. - gText_Rom_1EFCD3)
	.endif
