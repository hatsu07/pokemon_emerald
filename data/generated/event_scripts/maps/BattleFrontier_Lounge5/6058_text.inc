	@ data/maps/BattleFrontier_Lounge5/scripts.inc:74 BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow
	.globl gText_Rom_23924D
gText_Rom_23924D: @ 0x0823924D
	.string "ふんふん……\pこのこ ずるいの ちゅき! って!\nいっぱい いたいいたい でも\lずるいのが いい! って!"
	.byte EOS
	.if (. - gText_Rom_23924D) > 0x36
	.error "gText_Rom_23924D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23924D) < 0x36
	.space 0x36 - (. - gText_Rom_23924D)
	.endif
