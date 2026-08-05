	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:703 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave
	.globl gText_Rom_234D82
gText_Rom_234D82: @ 0x08234D82
	.string "キルリアの でんじは!"
	.byte EOS
	.if (. - gText_Rom_234D82) > 0xc
	.error "gText_Rom_234D82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D82) < 0xc
	.space 0xc - (. - gText_Rom_234D82)
	.endif
