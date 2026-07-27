	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_2C18A9
gText_Rom_2C18A9: @ 0x082C18A9
	.string "します$"
	.if (. - gText_Rom_2C18A9) > 0x4
	.error "gText_Rom_2C18A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C18A9) < 0x4
	.space 0x4 - (. - gText_Rom_2C18A9)
	.endif
	.incbin "baserom.gba", 0x2c18ad, 0x1f
	.globl gUnknown_82C18CC
gUnknown_82C18CC: @ 0x082C18CC
	.incbin "baserom.gba", 0x2c18cc, 0x4c
	.globl gUnknown_82C1918
gUnknown_82C1918: @ 0x082C1918
	.incbin "baserom.gba", 0x2c1918, 0x20
	.globl gUnknown_82C1938
gUnknown_82C1938: @ 0x082C1938
	.incbin "baserom.gba", 0x2c1938, 0x60
	.globl gUnknown_82C1998
gUnknown_82C1998: @ 0x082C1998
	.incbin "baserom.gba", 0x2c1998, 0x14
	.globl gUnknown_82C19AC
gUnknown_82C19AC: @ 0x082C19AC
	.incbin "baserom.gba", 0x2c19ac, 0x4

