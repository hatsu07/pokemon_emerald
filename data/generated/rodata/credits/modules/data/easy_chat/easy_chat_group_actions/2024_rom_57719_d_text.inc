	@ src/data/easy_chat/easy_chat_group_actions.h:268 easy_chat_group_actions_line_268
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57719D
gText_Rom_57719D: @ 0x0857719D
	.string "つかって$"
	.if (. - gText_Rom_57719D) != 0x5
	.error "gText_Rom_57719D must retain its original byte length"
	.endif
