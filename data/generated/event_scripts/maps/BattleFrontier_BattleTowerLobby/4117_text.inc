	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1013 BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons
	.globl gText_Rom_2209E3
gText_Rom_2209E3: @ 0x082209E3
	.string "では さんかする ポケモンを\nおえらび ください!"
	.byte EOS
	.if (. - gText_Rom_2209E3) > 0x1a
	.error "gText_Rom_2209E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2209E3) < 0x1a
	.space 0x1a - (. - gText_Rom_2209E3)
	.endif
