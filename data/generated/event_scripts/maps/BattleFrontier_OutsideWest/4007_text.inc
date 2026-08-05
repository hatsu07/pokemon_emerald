	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:339 BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo (+1 aliases)
	.globl gText_Rom_21F00B
gText_Rom_21F00B: @ 0x0821F00B
	.string "いきさきは どちら でしょう?"
	.byte EOS
	.if (. - gText_Rom_21F00B) > 0x10
	.error "gText_Rom_21F00B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F00B) < 0x10
	.space 0x10 - (. - gText_Rom_21F00B)
	.endif
