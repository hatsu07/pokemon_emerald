	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:675 BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised
	.globl gText_Rom_234CFC
gText_Rom_234CFC: @ 0x08234CFC
	.string "すばらしい……\pやくそくどおり ポケモンを\nかいふくしよう……"
	.byte EOS
	.if (. - gText_Rom_234CFC) > 0x20
	.error "gText_Rom_234CFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234CFC) < 0x20
	.space 0x20 - (. - gText_Rom_234CFC)
	.endif
