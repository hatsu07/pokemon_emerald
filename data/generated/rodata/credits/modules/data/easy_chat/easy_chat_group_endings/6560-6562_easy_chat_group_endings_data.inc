	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_5CD0FA
gText_Rom_5CD0FA: @ 0x085CD0FA
	.string "します$"
	.if (. - gText_Rom_5CD0FA) > 0x4
	.error "gText_Rom_5CD0FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD0FA) < 0x4
	.space 0x4 - (. - gText_Rom_5CD0FA)
	.endif
	.globl gUnknown_85CD0FE
gUnknown_85CD0FE: @ 0x085CD0FE
	@ analyzed canonical ROM range 0x085CD0FE-0x085CD11E
sAnalyzedData_085CD0FE: @ 0x085CD0FE
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xBB, 0x9A, 0x60, 0x7E, 0x44, 0x00, 0x44, 0x07, 0x3B, 0x14, 0x2D, 0x00, 0x26, 0x20, 0x0A, 0x20
	.byte 0x1F, 0x0D, 0xFE, 0xB0, 0xB0, 0xBC, 0x9A, 0x60, 0x7E, 0x44, 0x00, 0x57, 0x84, 0x7E, 0x5E, 0x79
	.byte 0x00
	.globl gText_Rom_5CD11F
gText_Rom_5CD11F: @ 0x085CD11F
	.string "します$"
	.if (. - gText_Rom_5CD11F) > 0x4
	.error "gText_Rom_5CD11F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD11F) < 0x4
	.space 0x4 - (. - gText_Rom_5CD11F)
	.endif
