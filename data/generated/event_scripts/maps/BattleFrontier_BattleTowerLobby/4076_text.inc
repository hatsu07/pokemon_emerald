	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:956 BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou
	.globl gText_Rom_2206A8
gText_Rom_2206A8: @ 0x082206A8
	.string "おまちしておりました!\p"
	.byte EOS
	.if (. - gText_Rom_2206A8) > 0xd
	.error "gText_Rom_2206A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2206A8) < 0xd
	.space 0xd - (. - gText_Rom_2206A8)
	.endif
