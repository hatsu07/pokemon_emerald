	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:642 BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge (+2 aliases)
	.globl gText_Rom_234C3B
gText_Rom_234C3B: @ 0x08234C3B
	.string "それでは ひきつづき\nゲームを おたのしみ ください……"
	.byte EOS
	.if (. - gText_Rom_234C3B) > 0x1d
	.error "gText_Rom_234C3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234C3B) < 0x1d
	.space 0x1d - (. - gText_Rom_234C3B)
	.endif
