	@ src/data/easy_chat/easy_chat_group_hobbies.h:10 easy_chat_group_hobbies_line_10
	.globl gText_Rom_5778C1
gText_Rom_5778C1: @ 0x085778C1
	.string "アニメ$"
	.if (. - gText_Rom_5778C1) > 0x4
	.error "gText_Rom_5778C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778C1) < 0x4
	.space 0x4 - (. - gText_Rom_5778C1)
	.endif
	@ Decoded text from ROM range: offset=0x5778C5, size=0x3
	.string "うた$"
