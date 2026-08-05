	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:736 BattleFrontier_BattlePikeRoomNormal_Text_Silence (+1 aliases)
	.globl gText_Rom_234E5B
gText_Rom_234E5B: @ 0x08234E5B
	.string "…… …… ……\n…… …… ……"
	.byte EOS
	.if (. - gText_Rom_234E5B) > 0x12
	.error "gText_Rom_234E5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234E5B) < 0x12
	.space 0x12 - (. - gText_Rom_234E5B)
	.endif
