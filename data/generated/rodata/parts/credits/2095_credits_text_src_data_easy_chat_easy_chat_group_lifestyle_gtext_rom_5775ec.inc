	@ src/data/easy_chat/easy_chat_group_lifestyle.h:46 easy_chat_group_lifestyle_line_46
	.globl gText_Rom_5775EC
gText_Rom_5775EC: @ 0x085775EC
	.string "きねん$"
	.if (. - gText_Rom_5775EC) > 0x4
	.error "gText_Rom_5775EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775EC) < 0x4
	.space 0x4 - (. - gText_Rom_5775EC)
	.endif
	@ Decoded text from ROM range: offset=0x5775F0, size=0x3
	.string "くせ$"
