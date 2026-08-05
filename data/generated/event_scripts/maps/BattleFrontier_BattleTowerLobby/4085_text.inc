	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:968 BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons
	.globl gText_Rom_220769
gText_Rom_220769: @ 0x08220769
	.string "{PLAYER}は ポケモンに\nリボンを つけて あげた!"
	.byte EOS
	.if (. - gText_Rom_220769) > 0x18
	.error "gText_Rom_220769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220769) < 0x18
	.space 0x18 - (. - gText_Rom_220769)
	.endif
