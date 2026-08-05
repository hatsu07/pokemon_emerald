	@ data/maps/BattleFrontier_Lounge5/scripts.inc:62 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow
	.globl gText_Rom_2393D1
gText_Rom_2393D1: @ 0x082393D1
	.string "ふんふん……\pこのこ じぶん だいじ! って!\nいっぱい いたいいたい でも\lじぶん だいじ! って!"
	.byte EOS
	.if (. - gText_Rom_2393D1) > 0x34
	.error "gText_Rom_2393D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2393D1) < 0x34
	.space 0x34 - (. - gText_Rom_2393D1)
	.endif
