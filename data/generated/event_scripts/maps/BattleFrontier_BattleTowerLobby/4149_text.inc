	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1057 BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge
	.globl gText_Rom_220FE6
gText_Rom_220FE6: @ 0x08220FE6
	.string "シングル バトルルームに\nちょうせん されますか?"
	.byte EOS
	.if (. - gText_Rom_220FE6) > 0x1a
	.error "gText_Rom_220FE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220FE6) < 0x1a
	.space 0x1a - (. - gText_Rom_220FE6)
	.endif
