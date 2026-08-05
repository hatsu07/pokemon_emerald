	@ data/maps/BattleFrontier_Lounge1/scripts.inc:168 BattleFrontier_Lounge1_Text_BestAspectHP
	.globl gText_Rom_23588F
gText_Rom_23588F: @ 0x0823588F
	.string "ちなみに いちばん いいかんじ なのは\nHP かの……"
	.byte EOS
	.if (. - gText_Rom_23588F) > 0x1c
	.error "gText_Rom_23588F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23588F) < 0x1c
	.space 0x1c - (. - gText_Rom_23588F)
	.endif
