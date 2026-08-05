	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:365 PlayersHouse_1F_Text_Vigoroth2
	.globl gText_Rom_1EFCEB
gText_Rom_1EFCEB: @ 0x081EFCEB
	.string "ふごっ ふご ふご……$"
	.if (. - gText_Rom_1EFCEB) > 0xc
	.error "gText_Rom_1EFCEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFCEB) < 0xc
	.space 0xc - (. - gText_Rom_1EFCEB)
	.endif
