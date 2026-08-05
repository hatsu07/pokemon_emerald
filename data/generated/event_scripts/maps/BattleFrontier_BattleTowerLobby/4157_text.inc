	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1069 BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
	.globl gText_Rom_221189
gText_Rom_221189: @ 0x08221189
	.string "ダブル バトルルームに\nちょうせん されますか?"
	.byte EOS
	.if (. - gText_Rom_221189) > 0x19
	.error "gText_Rom_221189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221189) < 0x19
	.space 0x19 - (. - gText_Rom_221189)
	.endif
