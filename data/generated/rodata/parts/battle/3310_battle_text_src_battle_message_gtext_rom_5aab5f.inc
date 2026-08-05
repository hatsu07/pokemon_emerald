	@ src/battle_message.c:404 battle_message_line_404
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB5F
gText_Rom_5AAB5F: @ 0x085AAB5F
	.string "ひざしが つよい$"
	.if (. - gText_Rom_5AAB5F) != 0x9
	.error "gText_Rom_5AAB5F must retain its original byte length"
	.endif
