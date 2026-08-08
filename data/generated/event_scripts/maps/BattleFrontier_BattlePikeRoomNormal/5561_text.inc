	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:652 BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell (+1 aliases)
	.globl gText_Rom_234CA3
gText_Rom_234CA3: @ 0x08234CA3
	.string "それでは ごきげんよう……"
	.byte EOS
	.if (. - gText_Rom_234CA3) > 0xe
	.error "gText_Rom_234CA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234CA3) < 0xe
	.space 0xe - (. - gText_Rom_234CA3)
	.endif
