	@ src/battle_message.c:268 battle_message_line_268
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9CD5
gText_Rom_5A9CD5: @ 0x085A9CD5
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_BUFF1}の\nダメージを うけている$"
	.if (. - gText_Rom_5A9CD5) != 0x14
	.error "gText_Rom_5A9CD5 must retain its original byte length"
	.endif
