	@ src/data/easy_chat/easy_chat_group_greetings.h:76 easy_chat_group_greetings_line_76
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_575499
gText_Rom_575499: @ 0x08575499
	.string "ごめんなさい$"
	.if (. - gText_Rom_575499) != 0x7
	.error "gText_Rom_575499 must retain its original byte length"
	.endif
