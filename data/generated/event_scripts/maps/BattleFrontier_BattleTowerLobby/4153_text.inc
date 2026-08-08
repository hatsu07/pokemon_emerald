	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1063 BattleFrontier_BattleTowerLobby_Text_SelectThreeMons
	.globl gText_Rom_221126
gText_Rom_221126: @ 0x08221126
	.string "では さんかする ポケモンを\n3ひき おえらび ください!"
	.byte EOS
	.if (. - gText_Rom_221126) > 0x1e
	.error "gText_Rom_221126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221126) < 0x1e
	.space 0x1e - (. - gText_Rom_221126)
	.endif
