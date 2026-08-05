	@ src/data/easy_chat/easy_chat_group_hobbies.h:124 easy_chat_group_hobbies_line_124
	.globl gText_Rom_57791C
gText_Rom_57791C: @ 0x0857791C
	.string "さんぽ$"
	.if (. - gText_Rom_57791C) > 0x4
	.error "gText_Rom_57791C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57791C) < 0x4
	.space 0x4 - (. - gText_Rom_57791C)
	.endif
