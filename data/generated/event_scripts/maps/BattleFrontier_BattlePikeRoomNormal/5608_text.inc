	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:642 BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge (+2 aliases)
	.globl gText_Rom_234ED0
gText_Rom_234ED0: @ 0x08234ED0
	.string "それでは ひきつづき\nゲームを おたのしみ ください……"
	.byte EOS
	.if (. - gText_Rom_234ED0) > 0x1d
	.error "gText_Rom_234ED0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234ED0) < 0x1d
	.space 0x1d - (. - gText_Rom_234ED0)
	.endif
