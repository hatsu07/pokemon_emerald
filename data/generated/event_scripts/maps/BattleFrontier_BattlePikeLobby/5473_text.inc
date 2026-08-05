	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:363 BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints2
	.globl gText_Rom_233955
gText_Rom_233955: @ 0x08233955
	.string "ゲーム クリアを きねんして\nバトルポイントを しんてい します……\pどうぞ おおさめ ください……"
	.byte EOS
	.if (. - gText_Rom_233955) > 0x33
	.error "gText_Rom_233955 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233955) < 0x33
	.space 0x33 - (. - gText_Rom_233955)
	.endif
