	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1087 BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons (+1 aliases)
	.globl gText_Rom_22169F
gText_Rom_22169F: @ 0x0822169F
	.string "では さんかする ポケモンを\n2ひき おえらび ください!"
	.byte EOS
	.if (. - gText_Rom_22169F) > 0x1e
	.error "gText_Rom_22169F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22169F) < 0x1e
	.space 0x1e - (. - gText_Rom_22169F)
	.endif
