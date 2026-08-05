	@ data/maps/BattleFrontier_Lounge5/scripts.inc:62 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow
	.globl gText_Rom_23943B
gText_Rom_23943B: @ 0x0823943B
	.string "ふんふん……\pこのこ じぶん だいじ! って!\nいっぱい いたいいたい でも\lじぶん だいじ! って!"
	.byte EOS
	.if (. - gText_Rom_23943B) > 0x34
	.error "gText_Rom_23943B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23943B) < 0x34
	.space 0x34 - (. - gText_Rom_23943B)
	.endif
