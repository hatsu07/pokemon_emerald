	@ src/battle_message.c:260 battle_message_line_260
	.globl gText_Rom_5A9BFE
gText_Rom_5A9BFE: @ 0x085A9BFE
	.string "{B_ATK_NAME_WITH_PREFIX}は\nひかりを きゅうしゅうした!$"
	.if (. - gText_Rom_5A9BFE) > 0x13
	.error "gText_Rom_5A9BFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9BFE) < 0x13
	.space 0x13 - (. - gText_Rom_5A9BFE)
	.endif
