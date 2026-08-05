	@ src/battle_message.c:242 battle_message_line_242
	.globl gText_Rom_5A9A75
gText_Rom_5A9A75: @ 0x085A9A75
	.string "{B_EFF_NAME_WITH_PREFIX}は\nこんらんした!$"
	.if (. - gText_Rom_5A9A75) > 0xc
	.error "gText_Rom_5A9A75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9A75) < 0xc
	.space 0xc - (. - gText_Rom_5A9A75)
	.endif
