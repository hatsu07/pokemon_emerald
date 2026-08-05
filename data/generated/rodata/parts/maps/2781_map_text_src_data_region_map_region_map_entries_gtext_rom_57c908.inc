	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_57C908
gText_Rom_57C908: @ 0x0857C908
	.string "おくりびやま$"
	.if (. - gText_Rom_57C908) > 0x7
	.error "gText_Rom_57C908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C908) < 0x7
	.space 0x7 - (. - gText_Rom_57C908)
	.endif
	@ Replaced baserom.gba range: offset=0x57C90F, size=0x5
	.byte 0xFD, 0x08, 0x41, 0x2E, 0x00
