	@ data/maps/BattleFrontier_Lounge5/scripts.inc:50 BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow
	.globl gText_Rom_239047
gText_Rom_239047: @ 0x08239047
	.string "ふんふん……\pこのこ たたかうの ちゅき! って!\nいっぱい いたいいたい でも\lたたかうよ! って!"
	.byte EOS
	.if (. - gText_Rom_239047) > 0x34
	.error "gText_Rom_239047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239047) < 0x34
	.space 0x34 - (. - gText_Rom_239047)
	.endif
