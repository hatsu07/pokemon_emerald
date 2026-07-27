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
	.incbin "baserom.gba", 0x5cd0fe, 0x21

	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_5CD11F
gText_Rom_5CD11F: @ 0x085CD11F
	.string "します$"
	.if (. - gText_Rom_5CD11F) > 0x4
	.error "gText_Rom_5CD11F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD11F) < 0x4
	.space 0x4 - (. - gText_Rom_5CD11F)
	.endif
	.globl gUnknown_85CD123
gUnknown_85CD123: @ 0x085CD123
	.incbin "baserom.gba", 0x5cd123, 0x10
	.globl gUnknown_85CD133
gUnknown_85CD133: @ 0x085CD133
	.incbin "baserom.gba", 0x5cd133, 0x26
	.globl gUnknown_85CD159
gUnknown_85CD159: @ 0x085CD159

