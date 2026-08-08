	@ data/maps/BattleFrontier_Lounge5/scripts.inc:53 BattleFrontier_Lounge5_Text_NatureGirlAttackHighDefenseLow
	.globl gText_Rom_23920E
gText_Rom_23920E: @ 0x0823920E
	.string "ふんふん……\pこのこ たたかうの ちゅき! って!\nでも あんまし いたいいたい だと\lじぶんが ちんぱい なるよ! って!"
	.byte EOS
	.if (. - gText_Rom_23920E) > 0x3f
	.error "gText_Rom_23920E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23920E) < 0x3f
	.space 0x3f - (. - gText_Rom_23920E)
	.endif
