	@ data/maps/BattleFrontier_Lounge5/scripts.inc:68 BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow
	.globl gText_Rom_2391D4
gText_Rom_2391D4: @ 0x082391D4
	.string "ふんふん……\pこのこ ずるいの ちゅき! って!\nでも あんまし いたいいたい だと\lちかえし してやる! って!"
	.byte EOS
	.if (. - gText_Rom_2391D4) > 0x3a
	.error "gText_Rom_2391D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2391D4) < 0x3a
	.space 0x3a - (. - gText_Rom_2391D4)
	.endif
