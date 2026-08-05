	@ data/maps/BattleFrontier_Lounge1/scripts.inc:183 BattleFrontier_Lounge1_Text_BestAspectSpeed
	.globl gText_Rom_235923
gText_Rom_235923: @ 0x08235923
	.string "ちなみに いちばん いいかんじ なのは\nすばやさ かの……"
	.byte EOS
	.if (. - gText_Rom_235923) > 0x1e
	.error "gText_Rom_235923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235923) < 0x1e
	.space 0x1e - (. - gText_Rom_235923)
	.endif
