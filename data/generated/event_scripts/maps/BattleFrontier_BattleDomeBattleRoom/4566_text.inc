	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1042 BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals
	.globl gText_Rom_2297E0
gText_Rom_2297E0: @ 0x082297E0
	.string "けっしょうに すすむのは\nやっぱり この ひと なんでしょうか!?\p$"
	.if (. - gText_Rom_2297E0) > 0x23
	.error "gText_Rom_2297E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2297E0) < 0x23
	.space 0x23 - (. - gText_Rom_2297E0)
	.endif
