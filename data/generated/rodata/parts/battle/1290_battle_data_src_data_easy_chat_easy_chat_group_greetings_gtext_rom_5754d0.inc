	@ src/data/easy_chat/easy_chat_group_greetings.h:136 easy_chat_group_greetings_line_136
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5754D0
gText_Rom_5754D0: @ 0x085754D0
	.string "すみません$"
	.if (. - gText_Rom_5754D0) != 0x6
	.error "gText_Rom_5754D0 must retain its original byte length"
	.endif
