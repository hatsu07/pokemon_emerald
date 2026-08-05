	@ data/text/cable_club.inc:96 TradeCenter_Text_TakeSeatStartTrade
	.globl gText_Rom_247EEA
gText_Rom_247EEA: @ 0x08247EEA
	.string "しょていの いちに ついて\nこうかんを はじめて ください$"
	.if (. - gText_Rom_247EEA) > 0x1e
	.error "gText_Rom_247EEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247EEA) < 0x1e
	.space 0x1e - (. - gText_Rom_247EEA)
	.endif
