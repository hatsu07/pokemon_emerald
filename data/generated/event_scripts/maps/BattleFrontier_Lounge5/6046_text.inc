	@ data/maps/BattleFrontier_Lounge5/scripts.inc:50 BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow
	.globl gText_Rom_2390F5
gText_Rom_2390F5: @ 0x082390F5
	.string "ふんふん……\pこのこ たたかうの ちゅき! って!\nいっぱい いたいいたい でも\lたたかうよ! って!"
	.byte EOS
	.if (. - gText_Rom_2390F5) > 0x34
	.error "gText_Rom_2390F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2390F5) < 0x34
	.space 0x34 - (. - gText_Rom_2390F5)
	.endif
