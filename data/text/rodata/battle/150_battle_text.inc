	@ src/battle_message.c:1473 gText_BattleSwitchWhich4
	.globl gText_Rom_5ABC01
gText_Rom_5ABC01: @ 0x085ABC01
	.string "{ESCAPE 4}$"
	.if (. - gText_Rom_5ABC01) > 0x4
	.error "gText_Rom_5ABC01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC01) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC01)
	.endif
	.incbin "baserom.gba", 0x5abc05, 0x7

