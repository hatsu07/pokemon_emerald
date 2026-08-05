	@ src/data/easy_chat/easy_chat_group_misc.h:10 easy_chat_group_misc_line_10
	.globl gText_Rom_577F23
gText_Rom_577F23: @ 0x08577F23
	.string "あっち$"
	.if (. - gText_Rom_577F23) > 0x4
	.error "gText_Rom_577F23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F23) < 0x4
	.space 0x4 - (. - gText_Rom_577F23)
	.endif
	@ Decoded text from ROM range: offset=0x577F27, size=0x3
	.string "あの$"
