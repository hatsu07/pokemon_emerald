	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:342 BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends
	.globl gText_Rom_21F01B
gText_Rom_21F01B: @ 0x0821F01B
	.string "ぼく ともだちの なかでは\nいちばん つよいのに\lここに きてみたら てんで ダメ!"
	.byte EOS
	.if (. - gText_Rom_21F01B) > 0x2b
	.error "gText_Rom_21F01B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F01B) < 0x2b
	.space 0x2b - (. - gText_Rom_21F01B)
	.endif
