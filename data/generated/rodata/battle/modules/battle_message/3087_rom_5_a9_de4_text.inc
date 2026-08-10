	@ src/battle_message.c:283 battle_message_line_283
	.globl gText_Rom_5A9DE4
gText_Rom_5A9DE4: @ 0x085A9DE4
	.string "{B_ATK_NAME_WITH_PREFIX}は めを さました！$"
	.if (. - gText_Rom_5A9DE4) > 0xd
	.error "gText_Rom_5A9DE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9DE4) < 0xd
	.space 0xd - (. - gText_Rom_5A9DE4)
	.endif
	@ analyzed canonical ROM range 0x085A9DF1-0x085A9E03
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x06, 0x0C, 0x00, 0xFD, 0x13, 0x37, 0xFE, 0x0B, 0x2C, 0x02, 0x44, 0x02, 0x13, 0x00, 0x18
	.byte 0x21, 0x2A, 0x15
