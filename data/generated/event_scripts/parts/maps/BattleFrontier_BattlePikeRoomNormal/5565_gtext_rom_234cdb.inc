	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:665 BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe
	.globl gText_Rom_234CDB
gText_Rom_234CDB: @ 0x08234CDB
	.string "よろしい……\n……それでは いくぞ!"
	.byte EOS
	.if (. - gText_Rom_234CDB) > 0x13
	.error "gText_Rom_234CDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234CDB) < 0x13
	.space 0x13 - (. - gText_Rom_234CDB)
	.endif
