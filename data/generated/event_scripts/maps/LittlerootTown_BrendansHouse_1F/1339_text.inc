	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:300 PlayersHouse_1F_Text_ArentYouInterestedInRoom
	.globl gText_Rom_1EFAE5
gText_Rom_1EFAE5: @ 0x081EFAE5
	.string "ママ『{PLAYER}\pじぶんの へやを みてこないの?$"
	.if (. - gText_Rom_1EFAE5) > 0x17
	.error "gText_Rom_1EFAE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFAE5) < 0x17
	.space 0x17 - (. - gText_Rom_1EFAE5)
	.endif
