	@ data/maps/BattleFrontier_Lounge1/scripts.inc:180 BattleFrontier_Lounge1_Text_BestAspectSpDef
	.globl gText_Rom_235905
gText_Rom_235905: @ 0x08235905
	.string "ちなみに いちばん いいかんじ なのは\nとくぼう かの……"
	.byte EOS
	.if (. - gText_Rom_235905) > 0x1e
	.error "gText_Rom_235905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235905) < 0x1e
	.space 0x1e - (. - gText_Rom_235905)
	.endif
