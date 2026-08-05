	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_2C2767
gText_Rom_2C2767: @ 0x082C2767
	.string "します$"
	.if (. - gText_Rom_2C2767) > 0x4
	.error "gText_Rom_2C2767 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2767) < 0x4
	.space 0x4 - (. - gText_Rom_2C2767)
	.endif
	.space 0x1, 0x00
