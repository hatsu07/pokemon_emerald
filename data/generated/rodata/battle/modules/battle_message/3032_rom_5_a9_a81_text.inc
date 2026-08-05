	@ src/battle_message.c:243 battle_message_line_243
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9A81
gText_Rom_5A9A81: @ 0x085A9A81
	.string "{B_DEF_NAME_WITH_PREFIX}は\nすでに こんらん している$"
	.if (. - gText_Rom_5A9A81) != 0x12
	.error "gText_Rom_5A9A81 must retain its original byte length"
	.endif
