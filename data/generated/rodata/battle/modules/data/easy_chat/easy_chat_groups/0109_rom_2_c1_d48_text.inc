	@ src/data/easy_chat/easy_chat_groups.h:57 easy_chat_groups_line_57 (+1 aliases)
	.globl gText_Rom_2C1D48
gText_Rom_2C1D48: @ 0x082C1D48
	.string "あいさつ$"
	.if (. - gText_Rom_2C1D48) > 0x5
	.error "gText_Rom_2C1D48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D48) < 0x5
	.space 0x5 - (. - gText_Rom_2C1D48)
	.endif
	.space 0x3, 0x00

