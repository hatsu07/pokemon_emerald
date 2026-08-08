	@ data/maps/BattleFrontier_Lounge1/scripts.inc:177 BattleFrontier_Lounge1_Text_BestAspectSpAtk
	.globl gText_Rom_2358E7
gText_Rom_2358E7: @ 0x082358E7
	.string "ちなみに いちばん いいかんじ なのは\nとくこう かの……"
	.byte EOS
	.if (. - gText_Rom_2358E7) > 0x1e
	.error "gText_Rom_2358E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2358E7) < 0x1e
	.space 0x1e - (. - gText_Rom_2358E7)
	.endif
