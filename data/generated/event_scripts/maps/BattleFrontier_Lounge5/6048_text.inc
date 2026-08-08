	@ data/maps/BattleFrontier_Lounge5/scripts.inc:59 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow
	.globl gText_Rom_239129
gText_Rom_239129: @ 0x08239129
	.string "ふんふん……\pこのこ じぶん だいじ! って!\nでも あんまし いたいいたい だと\lちかえし してやる! って!"
	.byte EOS
	.if (. - gText_Rom_239129) > 0x39
	.error "gText_Rom_239129 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239129) < 0x39
	.space 0x39 - (. - gText_Rom_239129)
	.endif
