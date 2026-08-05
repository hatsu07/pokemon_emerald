	@ src/data/easy_chat/easy_chat_group_endings.h:358 easy_chat_group_endings_line_358
	.globl gText_Rom_576491
gText_Rom_576491: @ 0x08576491
	.string "みたいな$"
	.if (. - gText_Rom_576491) > 0x5
	.error "gText_Rom_576491 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576491) < 0x5
	.space 0x5 - (. - gText_Rom_576491)
	.endif
	@ Decoded text from ROM range: offset=0x576496, size=0xC
	.string "もの$"
	.string "もん$"
	.string "よ！$"
	.string "よー$"
