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
	.incbin "baserom.gba", 0x5a9df1, 0x13

