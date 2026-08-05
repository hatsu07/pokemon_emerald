	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1105 BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched
	.globl gText_Rom_229A4A
gText_Rom_229A4A: @ 0x08229A4A
	.string "どこまで かちつづける つもり なのか?\nかんろく じゅうぶん!$"
	.if (. - gText_Rom_229A4A) > 0x21
	.error "gText_Rom_229A4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229A4A) < 0x21
	.space 0x21 - (. - gText_Rom_229A4A)
	.endif
