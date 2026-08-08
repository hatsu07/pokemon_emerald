	@ data/maps/BattleFrontier_Lounge5/scripts.inc:74 BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow
	.globl gText_Rom_2392F1
gText_Rom_2392F1: @ 0x082392F1
	.string "ふんふん……\pこのこ ずるいの ちゅき! って!\nいっぱい いたいいたい でも\lずるいのが いい! って!"
	.byte EOS
	.if (. - gText_Rom_2392F1) > 0x36
	.error "gText_Rom_2392F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2392F1) < 0x36
	.space 0x36 - (. - gText_Rom_2392F1)
	.endif
