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
	@ analyzed canonical ROM range 0x085A9862-0x085A986C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0x0D, 0x44, 0x16, 0xFE, 0x18, 0x21, 0x50
	.globl gText_Rom_5A986D
gText_Rom_5A986D: @ 0x085A986D
	.string "ている$"
	.if (. - gText_Rom_5A986D) > 0x4
	.error "gText_Rom_5A986D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A986D) < 0x4
	.space 0x4 - (. - gText_Rom_5A986D)
	.endif
	@ analyzed canonical ROM range 0x085A9871-0x085A987C
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x060C, 0x000C, 0x10FD, 0x1A16, 0x07FE, 0x1506
