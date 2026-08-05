	@ src/data/easy_chat/easy_chat_group_time.h:256 easy_chat_group_time_line_256
	.globl gText_Rom_577CF7
gText_Rom_577CF7: @ 0x08577CF7
	.string "よなか$"
	.if (. - gText_Rom_577CF7) > 0x4
	.error "gText_Rom_577CF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CF7) < 0x4
	.space 0x4 - (. - gText_Rom_577CF7)
	.endif
	@ Decoded text from ROM range: offset=0x577CFB, size=0x3
	.string "よる$"
