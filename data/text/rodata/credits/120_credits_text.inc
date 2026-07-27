	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A985E
gText_Rom_5A985E: @ 0x085A985E
	.string "ている$"
	.if (. - gText_Rom_5A985E) > 0x4
	.error "gText_Rom_5A985E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A985E) < 0x4
	.space 0x4 - (. - gText_Rom_5A985E)
	.endif
	.incbin "baserom.gba", 0x5a9862, 0xb

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A986D
gText_Rom_5A986D: @ 0x085A986D
	.string "ている$"
	.if (. - gText_Rom_5A986D) > 0x4
	.error "gText_Rom_5A986D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A986D) < 0x4
	.space 0x4 - (. - gText_Rom_5A986D)
	.endif
	.incbin "baserom.gba", 0x5a9871, 0xc

