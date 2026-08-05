	@ src/data/easy_chat/easy_chat_group_endings.h:250 easy_chat_group_endings_line_250
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57644A
gText_Rom_57644A: @ 0x0857644A
	.string "とかいって$"
	.if (. - gText_Rom_57644A) != 0x6
	.error "gText_Rom_57644A must retain its original byte length"
	.endif
