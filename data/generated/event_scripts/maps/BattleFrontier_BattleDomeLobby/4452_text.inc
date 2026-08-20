	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:647 BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints
	.globl gText_Rom_227D04
gText_Rom_227D04: @ 0x08227D04
	.string "おきゃくさまの\nうつくしい せんりゃくを たたえ\lバトルポイントを さしあげます!{EOS}"
	.if (. - gText_Rom_227D04) > 0x2a
	.error "gText_Rom_227D04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227D04) < 0x2a
	.space 0x2a - (. - gText_Rom_227D04)
	.endif
