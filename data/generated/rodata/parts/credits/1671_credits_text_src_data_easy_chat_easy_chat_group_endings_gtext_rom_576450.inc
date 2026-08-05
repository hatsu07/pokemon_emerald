	@ src/data/easy_chat/easy_chat_group_endings.h:256 easy_chat_group_endings_line_256
	.globl gText_Rom_576450
gText_Rom_576450: @ 0x08576450
	.string "なさい$"
	.if (. - gText_Rom_576450) > 0x4
	.error "gText_Rom_576450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576450) < 0x4
	.space 0x4 - (. - gText_Rom_576450)
	.endif
	@ Decoded text from ROM range: offset=0x576454, size=0x3
	.string "なの$"
