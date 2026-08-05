	@ data/text/cable_club.inc:93 BattleColosseum_2P_Text_TakePlaceStartBattle
	.globl gText_Rom_247ECC
gText_Rom_247ECC: @ 0x08247ECC
	.string "しょていの いちに ついて\nたいせんを はじめて ください$"
	.if (. - gText_Rom_247ECC) > 0x1e
	.error "gText_Rom_247ECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247ECC) < 0x1e
	.space 0x1e - (. - gText_Rom_247ECC)
	.endif
