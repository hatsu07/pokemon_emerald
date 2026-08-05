	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1096 BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol
	.globl gText_Rom_2299FF
gText_Rom_2299FF: @ 0x082299FF
	.string "フロンティアパスに\nタクティクスシンボルが きざまれた!$"
	.if (. - gText_Rom_2299FF) > 0x1d
	.error "gText_Rom_2299FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2299FF) < 0x1d
	.space 0x1d - (. - gText_Rom_2299FF)
	.endif
