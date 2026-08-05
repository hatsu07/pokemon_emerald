	@ src/battle_message.c:374 battle_message_line_374
	.globl gText_Rom_5AA6B0
gText_Rom_5AA6B0: @ 0x085AA6B0
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_SCR_ABILITY}で\nのうりょくが さがらない!$"
	.if (. - gText_Rom_5AA6B0) > 0x16
	.error "gText_Rom_5AA6B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6B0) < 0x16
	.space 0x16 - (. - gText_Rom_5AA6B0)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA6C6, size=0x13
	.byte 0xFD, 0x10, 0x19, 0x00, 0xFD, 0x19, 0x44, 0xFE, 0xFD, 0x0F, 0x1A, 0x00, 0x07, 0x3E, 0x12, 0x02
	.byte 0x10, 0xAB, 0xFF
