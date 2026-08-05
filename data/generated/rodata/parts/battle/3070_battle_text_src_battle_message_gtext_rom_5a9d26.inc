	@ src/battle_message.c:272 battle_message_line_272
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9D26
gText_Rom_5A9D26: @ 0x085A9D26
	.string "{B_SCR_NAME_WITH_PREFIX}は しろいきりに\nまもられている$"
	.if (. - gText_Rom_5A9D26) != 0x13
	.error "gText_Rom_5A9D26 must retain its original byte length"
	.endif
