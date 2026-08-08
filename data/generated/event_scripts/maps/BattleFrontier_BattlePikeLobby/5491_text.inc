	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:416 BattleFrontier_BattlePikeLobby_Text_RulesAreListed
	.globl gText_Rom_233B48
gText_Rom_233B48: @ 0x08233B48
	.string "バトルゲームの ルールが かかれている!"
	.byte EOS
	.if (. - gText_Rom_233B48) > 0x15
	.error "gText_Rom_233B48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233B48) < 0x15
	.space 0x15 - (. - gText_Rom_233B48)
	.endif
