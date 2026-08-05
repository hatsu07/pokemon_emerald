	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:789 BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn
	.globl gText_Rom_235050
gText_Rom_235050: @ 0x08235050
	.string "おらっ!! かかっといでっ!!"
	.byte EOS
	.if (. - gText_Rom_235050) > 0x10
	.error "gText_Rom_235050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235050) < 0x10
	.space 0x10 - (. - gText_Rom_235050)
	.endif
