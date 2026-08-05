	@ data/maps/BattleFrontier_Lounge5/scripts.inc:56 BattleFrontier_Lounge5_Text_NatureGirlAttackHighSupportLow
	.globl gText_Rom_2394A8
gText_Rom_2394A8: @ 0x082394A8
	.string "ふんふん……\pこのこ たたかうの ちゅき! って!\nでも あんまし いたいいたい だと\lずるいの するよ! って!"
	.byte EOS
	.if (. - gText_Rom_2394A8) > 0x3a
	.error "gText_Rom_2394A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2394A8) < 0x3a
	.space 0x3a - (. - gText_Rom_2394A8)
	.endif
