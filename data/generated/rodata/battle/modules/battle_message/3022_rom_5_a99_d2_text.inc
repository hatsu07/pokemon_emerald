	@ src/battle_message.c:235 battle_message_line_235
	.globl gText_Rom_5A99D2
gText_Rom_5A99D2: @ 0x085A99D2
	.string "{B_ATK_NAME_WITH_PREFIX}は\nからだが しびれて うごけない$"
	.if (. - gText_Rom_5A99D2) > 0x14
	.error "gText_Rom_5A99D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A99D2) < 0x14
	.space 0x14 - (. - gText_Rom_5A99D2)
	.endif
	@ Replaced baserom.gba range: offset=0x5A99E6, size=0xB
	.byte 0xFD, 0x10, 0x1A, 0x00, 0x0D, 0x44, 0x16, 0xFE, 0x1F, 0x1B, 0x0C

