	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:387 BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints
	.globl gText_Rom_233A3E
gText_Rom_233A3E: @ 0x08233A3E
	.string "おきゃくさまの つよき うんを たたえ\nバトルポイントを さしあげます……"
	.byte EOS
	.if (. - gText_Rom_233A3E) > 0x26
	.error "gText_Rom_233A3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233A3E) < 0x26
	.space 0x26 - (. - gText_Rom_233A3E)
	.endif
