	@ src/pokemon_storage_system.c:8079 pokemon_storage_system_line_8079
	.globl gText_Rom_5C93E5
gText_Rom_5C93E5: @ 0x085C93E5
	.string "あずける$"
	.if (. - gText_Rom_5C93E5) > 0x5
	.error "gText_Rom_5C93E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93E5) < 0x5
	.space 0x5 - (. - gText_Rom_5C93E5)
	.endif
	@ Replaced baserom.gba range: offset=0x5C93EA, size=0x3
	.byte 0x20, 0x29, 0xFF
	.globl gUnknown_85C93ED
gUnknown_85C93ED: @ 0x085C93ED
	@ Replaced baserom.gba range: offset=0x5C93ED, size=0x8
	.byte 0x15, 0x0C, 0xFF, 0x06, 0x02, 0x3D, 0x36, 0xFF
	.globl gUnknown_85C93F5
gUnknown_85C93F5: @ 0x085C93F5

