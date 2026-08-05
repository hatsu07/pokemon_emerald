	@ src/data/easy_chat/easy_chat_groups.h:141 easy_chat_groups_line_141
	.globl gText_Rom_579EB5
gText_Rom_579EB5: @ 0x08579EB5
	.string "くりかえし$"
	.if (. - gText_Rom_579EB5) > 0x6
	.error "gText_Rom_579EB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EB5) < 0x6
	.space 0x6 - (. - gText_Rom_579EB5)
	.endif
