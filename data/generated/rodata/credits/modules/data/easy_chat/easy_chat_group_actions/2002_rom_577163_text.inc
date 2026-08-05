	@ src/data/easy_chat/easy_chat_group_actions.h:178 easy_chat_group_actions_line_178
	.globl gText_Rom_577163
gText_Rom_577163: @ 0x08577163
	.string "さがし$"
	.if (. - gText_Rom_577163) > 0x4
	.error "gText_Rom_577163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577163) < 0x4
	.space 0x4 - (. - gText_Rom_577163)
	.endif
	@ Decoded text from ROM range: offset=0x577167, size=0x3
	.string "させ$"
