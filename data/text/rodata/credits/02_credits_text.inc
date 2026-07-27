	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_2BFDBF
gText_Rom_2BFDBF: @ 0x082BFDBF
	.string "ません$"
	.if (. - gText_Rom_2BFDBF) > 0x4
	.error "gText_Rom_2BFDBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2BFDBF) < 0x4
	.space 0x4 - (. - gText_Rom_2BFDBF)
	.endif
	.incbin "baserom.gba", 0x2bfdc3, 0x20

	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_2BFDE3
gText_Rom_2BFDE3: @ 0x082BFDE3
	.string "ません$"
	.if (. - gText_Rom_2BFDE3) > 0x4
	.error "gText_Rom_2BFDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2BFDE3) < 0x4
	.space 0x4 - (. - gText_Rom_2BFDE3)
	.endif
	.incbin "baserom.gba", 0x2bfde7, 0x19
	.globl gUnknown_82BFE00
gUnknown_82BFE00: @ 0x082BFE00
	.incbin "baserom.gba", 0x2bfe00, 0x50
	.globl gUnknown_82BFE50
gUnknown_82BFE50: @ 0x082BFE50
	.incbin "baserom.gba", 0x2bfe50, 0x12
	.globl gUnknown_82BFE62
gUnknown_82BFE62: @ 0x082BFE62
	.incbin "baserom.gba", 0x2bfe62, 0x2b
	.globl gUnknown_82BFE8D
gUnknown_82BFE8D: @ 0x082BFE8D
	.incbin "baserom.gba", 0x2bfe8d, 0x12
	.globl gUnknown_82BFE9F
gUnknown_82BFE9F: @ 0x082BFE9F
	.incbin "baserom.gba", 0x2bfe9f, 0x15

