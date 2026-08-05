	@ data/maps/BattleFrontier_Lounge5/scripts.inc:65 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow
	.globl gText_Rom_2394E2
gText_Rom_2394E2: @ 0x082394E2
	.string "ふんふん……\pこのこ じぶん だいじ! って!\nでも あんまし いたいいたい だと\lずるいの するよ! って!"
	.byte EOS
	.if (. - gText_Rom_2394E2) > 0x38
	.error "gText_Rom_2394E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2394E2) < 0x38
	.space 0x38 - (. - gText_Rom_2394E2)
	.endif
