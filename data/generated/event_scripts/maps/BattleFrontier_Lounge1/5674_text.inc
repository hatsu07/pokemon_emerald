	@ data/maps/BattleFrontier_Lounge1/scripts.inc:174 BattleFrontier_Lounge1_Text_BestAspectDef
	.globl gText_Rom_2358C9
gText_Rom_2358C9: @ 0x082358C9
	.string "ちなみに いちばん いいかんじ なのは\nぼうぎょ かの……"
	.byte EOS
	.if (. - gText_Rom_2358C9) > 0x1e
	.error "gText_Rom_2358C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2358C9) < 0x1e
	.space 0x1e - (. - gText_Rom_2358C9)
	.endif
