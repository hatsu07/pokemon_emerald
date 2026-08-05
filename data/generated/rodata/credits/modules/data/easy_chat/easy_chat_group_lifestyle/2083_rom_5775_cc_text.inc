	@ src/data/easy_chat/easy_chat_group_lifestyle.h:4 easy_chat_group_lifestyle_line_4
	.globl gText_Rom_5775CC
gText_Rom_5775CC: @ 0x085775CC
	.string "アルバイト$"
	.if (. - gText_Rom_5775CC) > 0x6
	.error "gText_Rom_5775CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775CC) < 0x6
	.space 0x6 - (. - gText_Rom_5775CC)
	.endif
	@ Decoded text from ROM range: offset=0x5775D2, size=0x3
	.string "うち$"
