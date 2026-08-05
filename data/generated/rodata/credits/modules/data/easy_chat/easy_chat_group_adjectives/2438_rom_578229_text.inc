	@ src/data/easy_chat/easy_chat_group_adjectives.h:142 easy_chat_group_adjectives_line_142
	.globl gText_Rom_578229
gText_Rom_578229: @ 0x08578229
	.string "バリバリ$"
	.if (. - gText_Rom_578229) > 0x5
	.error "gText_Rom_578229 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578229) < 0x5
	.space 0x5 - (. - gText_Rom_578229)
	.endif
