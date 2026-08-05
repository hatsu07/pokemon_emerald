	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB0F9
gText_Rom_5AB0F9: @ 0x085AB0F9
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB0F9) != 0xa
	.error "gText_Rom_5AB0F9 must retain its original byte length"
	.endif
