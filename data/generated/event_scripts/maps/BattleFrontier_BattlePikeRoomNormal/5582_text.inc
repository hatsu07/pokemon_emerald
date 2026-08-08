	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:700 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis
	.globl gText_Rom_234D73
gText_Rom_234D73: @ 0x08234D73
	.string "キルリアの さいみんじゅつ!"
	.byte EOS
	.if (. - gText_Rom_234D73) > 0xf
	.error "gText_Rom_234D73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D73) < 0xf
	.space 0xf - (. - gText_Rom_234D73)
	.endif
