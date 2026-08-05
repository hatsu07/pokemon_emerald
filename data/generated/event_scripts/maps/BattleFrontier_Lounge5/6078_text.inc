	@ data/maps/BattleFrontier_Lounge5/scripts.inc:59 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow
	.globl gText_Rom_23946F
gText_Rom_23946F: @ 0x0823946F
	.string "ふんふん……\pこのこ じぶん だいじ! って!\nでも あんまし いたいいたい だと\lちかえし してやる! って!"
	.byte EOS
	.if (. - gText_Rom_23946F) > 0x39
	.error "gText_Rom_23946F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23946F) < 0x39
	.space 0x39 - (. - gText_Rom_23946F)
	.endif
