	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:652 BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell (+1 aliases)
	.globl gText_Rom_234D1C
gText_Rom_234D1C: @ 0x08234D1C
	.string "それでは ごきげんよう……"
	.byte EOS
	.if (. - gText_Rom_234D1C) > 0xe
	.error "gText_Rom_234D1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D1C) < 0xe
	.space 0xe - (. - gText_Rom_234D1C)
	.endif
