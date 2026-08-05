	@ src/data/easy_chat/easy_chat_group_time.h:232 easy_chat_group_time_line_232
	.globl gText_Rom_577CE5
gText_Rom_577CE5: @ 0x08577CE5
	.string "むかし$"
	.if (. - gText_Rom_577CE5) > 0x4
	.error "gText_Rom_577CE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CE5) < 0x4
	.space 0x4 - (. - gText_Rom_577CE5)
	.endif
	@ Decoded text from ROM range: offset=0x577CE9, size=0x3
	.string "もう$"
