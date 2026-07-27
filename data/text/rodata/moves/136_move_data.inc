	@ src/battle_z_move.c:102 sText_RecoverHP
	.globl gText_Rom_5AA72D
gText_Rom_5AA72D: @ 0x085AA72D
	.string "かいふく$"
	.if (. - gText_Rom_5AA72D) > 0x5
	.error "gText_Rom_5AA72D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA72D) < 0x5
	.space 0x5 - (. - gText_Rom_5AA72D)
	.endif
	.incbin "baserom.gba", 0x5aa732, 0x14

