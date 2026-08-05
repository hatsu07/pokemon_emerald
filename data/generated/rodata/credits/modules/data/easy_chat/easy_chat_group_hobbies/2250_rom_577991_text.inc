	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_577991
gText_Rom_577991: @ 0x08577991
	.string "ボール$"
	.if (. - gText_Rom_577991) > 0x4
	.error "gText_Rom_577991 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577991) < 0x4
	.space 0x4 - (. - gText_Rom_577991)
	.endif
	@ Decoded text from ROM range: offset=0x577995, size=0x3
	.string "ほん$"
