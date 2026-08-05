	@ data/maps/BattleFrontier_Lounge5/scripts.inc:65 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow
	.globl gText_Rom_239399
gText_Rom_239399: @ 0x08239399
	.string "ふんふん……\pこのこ じぶん だいじ! って!\nでも あんまし いたいいたい だと\lずるいの するよ! って!"
	.byte EOS
	.if (. - gText_Rom_239399) > 0x38
	.error "gText_Rom_239399 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239399) < 0x38
	.space 0x38 - (. - gText_Rom_239399)
	.endif
