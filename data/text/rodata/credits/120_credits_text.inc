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
	@ Replaced baserom.gba range: offset=0x5A9862, size=0xB
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0x0D, 0x44, 0x16, 0xFE, 0x18, 0x21, 0x50

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
	@ Replaced baserom.gba range: offset=0x5A9871, size=0xC
	.byte 0x0C, 0x06, 0x0C, 0x00, 0xFD, 0x10, 0x16, 0x1A, 0xFE, 0x07, 0x06, 0x15

