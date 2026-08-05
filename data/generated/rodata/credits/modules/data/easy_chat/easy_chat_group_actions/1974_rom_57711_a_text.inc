	@ src/data/easy_chat/easy_chat_group_actions.h:70 easy_chat_group_actions_line_70
	.globl gText_Rom_57711A
gText_Rom_57711A: @ 0x0857711A
	.string "いって$"
	.if (. - gText_Rom_57711A) > 0x4
	.error "gText_Rom_57711A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57711A) < 0x4
	.space 0x4 - (. - gText_Rom_57711A)
	.endif
	@ Decoded text from ROM range: offset=0x57711E, size=0x3
	.string "おき$"
