	@ src/data/easy_chat/easy_chat_group_lifestyle.h:106 easy_chat_group_lifestyle_line_106
	.globl gText_Rom_57761B
gText_Rom_57761B: @ 0x0857761B
	.string "じゅく$"
	.if (. - gText_Rom_57761B) > 0x4
	.error "gText_Rom_57761B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57761B) < 0x4
	.space 0x4 - (. - gText_Rom_57761B)
	.endif
