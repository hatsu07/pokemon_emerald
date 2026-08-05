	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:670 BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou
	.globl gText_Rom_234CEE
gText_Rom_234CEE: @ 0x08234CEE
	.string "そうか… ざんねんだな……"
	.byte EOS
	.if (. - gText_Rom_234CEE) > 0xe
	.error "gText_Rom_234CEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234CEE) < 0xe
	.space 0xe - (. - gText_Rom_234CEE)
	.endif
