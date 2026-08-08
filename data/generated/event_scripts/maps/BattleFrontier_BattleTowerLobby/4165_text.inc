	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1081 BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
	.globl gText_Rom_221327
gText_Rom_221327: @ 0x08221327
	.string "マルチ バトルルームに\nちょうせん されますか?"
	.byte EOS
	.if (. - gText_Rom_221327) > 0x19
	.error "gText_Rom_221327 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221327) < 0x19
	.space 0x19 - (. - gText_Rom_221327)
	.endif
