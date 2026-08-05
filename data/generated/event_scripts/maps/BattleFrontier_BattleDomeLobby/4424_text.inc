	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:558 BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge
	.globl gText_Rom_22793F
gText_Rom_22793F: @ 0x0822793F
	.string "ダブル バトルトーナメントに\nちょうせん しますか?$"
	.if (. - gText_Rom_22793F) > 0x1b
	.error "gText_Rom_22793F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22793F) < 0x1b
	.space 0x1b - (. - gText_Rom_22793F)
	.endif
