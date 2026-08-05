	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1087 BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons (+1 aliases)
	.globl gText_Rom_2214BC
gText_Rom_2214BC: @ 0x082214BC
	.string "では さんかする ポケモンを\n2ひき おえらび ください!"
	.byte EOS
	.if (. - gText_Rom_2214BC) > 0x1e
	.error "gText_Rom_2214BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2214BC) < 0x1e
	.space 0x1e - (. - gText_Rom_2214BC)
	.endif
