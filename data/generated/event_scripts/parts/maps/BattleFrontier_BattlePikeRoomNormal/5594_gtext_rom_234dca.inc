	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:719 BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia
	.globl gText_Rom_234DCA
gText_Rom_234DCA: @ 0x08234DCA
	.string "もうしわけない……\pわたしの キルリアは おくびょう でな……"
	.byte EOS
	.if (. - gText_Rom_234DCA) > 0x20
	.error "gText_Rom_234DCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234DCA) < 0x20
	.space 0x20 - (. - gText_Rom_234DCA)
	.endif
