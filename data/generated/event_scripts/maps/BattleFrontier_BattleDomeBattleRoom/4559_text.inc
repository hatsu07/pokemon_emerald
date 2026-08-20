	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1029 BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle
	.globl gText_Rom_2297A7
gText_Rom_2297A7: @ 0x082297A7
	.string "はたして れんぱ なるか!?\p{EOS}"
	.if (. - gText_Rom_2297A7) > 0x10
	.error "gText_Rom_2297A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2297A7) < 0x10
	.space 0x10 - (. - gText_Rom_2297A7)
	.endif
