	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:706 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp
	.globl gText_Rom_234D8E
gText_Rom_234D8E: @ 0x08234D8E
	.string "キルリアの おにび!"
	.byte EOS
	.if (. - gText_Rom_234D8E) > 0xb
	.error "gText_Rom_234D8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D8E) < 0xb
	.space 0xb - (. - gText_Rom_234D8E)
	.endif
