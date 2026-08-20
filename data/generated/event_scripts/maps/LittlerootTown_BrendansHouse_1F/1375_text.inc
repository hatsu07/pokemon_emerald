	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:387 PlayersHouse_1F_Text_TicketFromBrineyCameForYou
	.globl gText_Rom_1EFDC8
gText_Rom_1EFDC8: @ 0x081EFDC8
	.string "パパ『ん?\n{PLAYER}じゃ ないか!\pひさしぶりに かおを みたが\nどこか たくましくなった……\lそんな かんじ だな\p……おっと そうだった\nハギさん という ひとから\lおまえあてに なにか とどいていたぞ!{EOS}"
	.if (. - gText_Rom_1EFDC8) > 0x67
	.error "gText_Rom_1EFDC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFDC8) < 0x67
	.space 0x67 - (. - gText_Rom_1EFDC8)
	.endif
