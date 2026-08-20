	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:532 BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge
	.globl gText_Rom_22C53F
gText_Rom_22C53F: @ 0x0822C53F
	.string "バトルアドベンチャーに\nちょうせん されますかな?{EOS}"
	.if (. - gText_Rom_22C53F) > 0x1a
	.error "gText_Rom_22C53F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C53F) < 0x1a
	.space 0x1a - (. - gText_Rom_22C53F)
	.endif
