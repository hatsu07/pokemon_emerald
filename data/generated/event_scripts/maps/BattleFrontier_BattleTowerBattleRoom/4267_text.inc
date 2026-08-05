	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:552 BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine
	.globl gText_Rom_222711
gText_Rom_222711: @ 0x08222711
	.string "アビリティシンボルが\nきんいろに かがやいた!$"
	.if (. - gText_Rom_222711) > 0x18
	.error "gText_Rom_222711 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222711) < 0x18
	.space 0x18 - (. - gText_Rom_222711)
	.endif
