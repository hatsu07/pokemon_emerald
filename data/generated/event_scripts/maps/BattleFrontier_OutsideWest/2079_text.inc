	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:339 BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo (+1 aliases)
	.globl gText_Rom_209CBE
gText_Rom_209CBE: @ 0x08209CBE
	.string "いきさきは どちら でしょう?$"
	.if (. - gText_Rom_209CBE) > 0x10
	.error "gText_Rom_209CBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209CBE) < 0x10
	.space 0x10 - (. - gText_Rom_209CBE)
	.endif
