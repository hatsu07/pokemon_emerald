	@ src/data/easy_chat/easy_chat_group_time.h:154 easy_chat_group_time_line_154
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_577CB1
gText_Rom_577CB1: @ 0x08577CB1
	.string "ストップ$"
	.if (. - gText_Rom_577CB1) != 0x5
	.error "gText_Rom_577CB1 must retain its original byte length"
	.endif
