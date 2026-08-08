	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1075 BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons
	.globl gText_Rom_2212C4
gText_Rom_2212C4: @ 0x082212C4
	.string "では さんかする ポケモンを\n4ひき おえらび ください!"
	.byte EOS
	.if (. - gText_Rom_2212C4) > 0x1e
	.error "gText_Rom_2212C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2212C4) < 0x1e
	.space 0x1e - (. - gText_Rom_2212C4)
	.endif
