	@ src/data/easy_chat/easy_chat_group_endings.h:142 easy_chat_group_endings_line_142
	.globl gText_Rom_5763F7
gText_Rom_5763F7: @ 0x085763F7
	.string "だよねー!$"
	.if (. - gText_Rom_5763F7) > 0x6
	.error "gText_Rom_5763F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763F7) < 0x6
	.space 0x6 - (. - gText_Rom_5763F7)
	.endif
	@ Decoded text from ROM range: offset=0x5763FD, size=0x6
	.string "だわ$"
	.string "ッス$"
