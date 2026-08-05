	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB10B
gText_Rom_5AB10B: @ 0x085AB10B
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB10B) != 0xa
	.error "gText_Rom_5AB10B must retain its original byte length"
	.endif
