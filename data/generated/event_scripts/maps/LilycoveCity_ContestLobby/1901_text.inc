	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1016 LilycoveCity_ContestLobby_Text_ToughContestIsExtreme
	.globl gText_Rom_2076E6
gText_Rom_2076E6: @ 0x082076E6
	.string "たくましさコンテストって\nさいこう だよな!\pちからづよい アピール……\nほとばしる あせ…… たまらん!$"
	.if (. - gText_Rom_2076E6) > 0x36
	.error "gText_Rom_2076E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2076E6) < 0x36
	.space 0x36 - (. - gText_Rom_2076E6)
	.endif
