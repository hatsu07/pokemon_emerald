	@ data/maps/BattleFrontier_Lounge5/scripts.inc:74 BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow
	.globl gText_Rom_239405
gText_Rom_239405: @ 0x08239405
	.string "ふんふん……\pこのこ ずるいの ちゅき! って!\nいっぱい いたいいたい でも\lずるいのが いい! って!"
	.byte EOS
	.if (. - gText_Rom_239405) > 0x36
	.error "gText_Rom_239405 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239405) < 0x36
	.space 0x36 - (. - gText_Rom_239405)
	.endif
