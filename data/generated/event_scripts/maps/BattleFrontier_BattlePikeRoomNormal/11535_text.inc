	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:736 BattleFrontier_BattlePikeRoomNormal_Text_Silence (+2 aliases)
	.globl gText_Rom_26215E
gText_Rom_26215E: @ 0x0826215E
	.string "…… …… ……\n…… …… ……$"
	.if (. - gText_Rom_26215E) > 0x12
	.error "gText_Rom_26215E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26215E) < 0x12
	.space 0x12 - (. - gText_Rom_26215E)
	.endif
