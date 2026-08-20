	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:327 PlayersHouse_1F_Text_SeeYouHoney
	.globl gText_Rom_1EFBCF
gText_Rom_1EFBCF: @ 0x081EFBCF
	.string "ママ『いってらっしゃい!{EOS}"
	.if (. - gText_Rom_1EFBCF) > 0xd
	.error "gText_Rom_1EFBCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFBCF) < 0xd
	.space 0xd - (. - gText_Rom_1EFBCF)
	.endif
