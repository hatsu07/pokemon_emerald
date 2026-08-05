	@ data/maps/BattleFrontier_Lounge5/scripts.inc:71 BattleFrontier_Lounge5_Text_NatureGirlSupportHighDefenseLow
	.globl gText_Rom_239162
gText_Rom_239162: @ 0x08239162
	.string "ふんふん……\pこのこ ずるいの ちゅき! って!\nでも あんまし いたいいたい だと\lじぶんが ちんぱい なるよ! って!"
	.byte EOS
	.if (. - gText_Rom_239162) > 0x3e
	.error "gText_Rom_239162 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239162) < 0x3e
	.space 0x3e - (. - gText_Rom_239162)
	.endif
