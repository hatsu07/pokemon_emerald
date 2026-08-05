	@ src/battle_message.c:240 battle_message_line_240
	.globl gText_Rom_5A9A58
gText_Rom_5A9A58: @ 0x085A9A58
	.string "{B_ATK_NAME_WITH_PREFIX}は\nこんらんしている!$"
	.if (. - gText_Rom_5A9A58) > 0xe
	.error "gText_Rom_5A9A58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9A58) < 0xe
	.space 0xe - (. - gText_Rom_5A9A58)
	.endif
