	@ src/data/easy_chat/easy_chat_group_adjectives.h:202 easy_chat_group_adjectives_line_202
	.globl gText_Rom_57825F
gText_Rom_57825F: @ 0x0857825F
	.string "ラブラブ$"
	.if (. - gText_Rom_57825F) > 0x5
	.error "gText_Rom_57825F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57825F) < 0x5
	.space 0x5 - (. - gText_Rom_57825F)
	.endif
