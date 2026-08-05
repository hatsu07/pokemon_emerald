	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1093 BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_221523
gText_Rom_221523: @ 0x08221523
	.string "つうしんマルチ バトルルームに\nちょうせん されますか?"
	.byte EOS
	.if (. - gText_Rom_221523) != 0x1d
	.error "gText_Rom_221523 must retain its original byte length"
	.endif
