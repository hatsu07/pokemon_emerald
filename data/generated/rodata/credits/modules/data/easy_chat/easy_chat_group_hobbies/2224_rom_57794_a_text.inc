	@ src/data/easy_chat/easy_chat_group_hobbies.h:184 easy_chat_group_hobbies_line_184
	.globl gText_Rom_57794A
gText_Rom_57794A: @ 0x0857794A
	.string "チャンネル$"
	.if (. - gText_Rom_57794A) > 0x6
	.error "gText_Rom_57794A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57794A) < 0x6
	.space 0x6 - (. - gText_Rom_57794A)
	.endif
