	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1135 BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints
	.globl gText_Rom_221873
gText_Rom_221873: @ 0x08221873
	.string "おきゃくさまの\nかぎりない さいのうを たたえ\lバトルポイントを しんてい します!"
	.byte EOS
	.if (. - gText_Rom_221873) > 0x2b
	.error "gText_Rom_221873 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221873) < 0x2b
	.space 0x2b - (. - gText_Rom_221873)
	.endif
