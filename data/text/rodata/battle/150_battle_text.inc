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
	@ Replaced baserom.gba range: offset=0x5ABC05, size=0x7
	.byte 0xAE, 0xFF, 0xC2, 0xCA, 0x00, 0x00, 0xFF

