	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:965 BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220736
gText_Rom_220736: @ 0x08220736
	.string "つよい トレーナー 7にんを\nかちぬいた きねんの リボンを どうぞ!\p{PLAYER}は リボンを もらった!"
	.byte EOS
	.if (. - gText_Rom_220736) != 0x33
	.error "gText_Rom_220736 must retain its original byte length"
	.endif
	.globl gText_Rom_22075A
	.set gText_Rom_22075A, gText_Rom_220736 + 0x24
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
