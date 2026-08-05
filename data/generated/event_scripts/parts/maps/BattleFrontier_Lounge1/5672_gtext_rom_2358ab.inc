	@ data/maps/BattleFrontier_Lounge1/scripts.inc:171 BattleFrontier_Lounge1_Text_BestAspectAtk
	.globl gText_Rom_2358AB
gText_Rom_2358AB: @ 0x082358AB
	.string "ちなみに いちばん いいかんじ なのは\nこうげき かの……"
	.byte EOS
	.if (. - gText_Rom_2358AB) > 0x1e
	.error "gText_Rom_2358AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2358AB) < 0x1e
	.space 0x1e - (. - gText_Rom_2358AB)
	.endif
