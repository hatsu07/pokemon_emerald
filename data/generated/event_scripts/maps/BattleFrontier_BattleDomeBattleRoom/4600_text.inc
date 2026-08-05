	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1141 BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine
	.globl gText_Rom_229BEE
gText_Rom_229BEE: @ 0x08229BEE
	.string "タクティクスシンボルが\nきんいろに かがやいた!$"
	.if (. - gText_Rom_229BEE) > 0x19
	.error "gText_Rom_229BEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229BEE) < 0x19
	.space 0x19 - (. - gText_Rom_229BEE)
	.endif
