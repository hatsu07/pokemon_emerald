	@ src/data/easy_chat/easy_chat_group_conditions.h:394 easy_chat_group_conditions_line_394
	.globl gText_Rom_576DA4
gText_Rom_576DA4: @ 0x08576DA4
	.string "よわって$"
	.if (. - gText_Rom_576DA4) > 0x5
	.error "gText_Rom_576DA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DA4) < 0x5
	.space 0x5 - (. - gText_Rom_576DA4)
	.endif
	@ Decoded text from ROM range: offset=0x576DA9, size=0x3
	.string "らく$"
