	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:965 BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_220736
gText_Rom_220736: @ 0x08220736
	.string "つよい トレーナー 7にんを\nかちぬいた きねんの リボンを どうぞ!\p{PLAYER}は リボンを もらった!"
	.byte EOS
	.if (. - gText_Rom_220736) != 0x33
	.error "gText_Rom_220736 must retain its original byte length"
	.endif
