	@ src/data/easy_chat/easy_chat_groups.h:57 easy_chat_groups_line_57 (+1 aliases)
	.globl gText_Rom_579E81
gText_Rom_579E81: @ 0x08579E81
	.string "あいさつ$"
	.if (. - gText_Rom_579E81) > 0x5
	.error "gText_Rom_579E81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E81) < 0x5
	.space 0x5 - (. - gText_Rom_579E81)
	.endif
	@ Decoded text from ROM range: offset=0x579E86, size=0x6
	.string "ひと$"
	.string "こえ$"
