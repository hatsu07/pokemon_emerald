	@ src/data/region_map/region_map_entries.h:525 region_map_entries_line_525 (+1 aliases)
	.globl gText_Rom_5CADF1
gText_Rom_5CADF1: @ 0x085CADF1
	.string "みなみのことう$"
	.if (. - gText_Rom_5CADF1) > 0x8
	.error "gText_Rom_5CADF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADF1) < 0x8
	.space 0x8 - (. - gText_Rom_5CADF1)
	.endif

	@ src/data/region_map/region_map_entries.h:1386 region_map_entries_line_1386 (+1 aliases)
	.globl gText_Rom_5CADF9
gText_Rom_5CADF9: @ 0x085CADF9
	.string "たんじょうのしま$"
	.if (. - gText_Rom_5CADF9) > 0x9
	.error "gText_Rom_5CADF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADF9) < 0x9
	.space 0x9 - (. - gText_Rom_5CADF9)
	.endif

	@ src/data/region_map/region_map_entries.h:1393 region_map_entries_line_1393 (+1 aliases)
	.globl gText_Rom_5CAE02
gText_Rom_5CAE02: @ 0x085CAE02
	.string "さいはてのことう$"
	.if (. - gText_Rom_5CAE02) > 0x9
	.error "gText_Rom_5CAE02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE02) < 0x9
	.space 0x9 - (. - gText_Rom_5CAE02)
	.endif

	@ src/data/region_map/region_map_entries.h:1463 region_map_entries_line_1463 (+1 aliases)
	.globl gText_Rom_5CAE0B
gText_Rom_5CAE0B: @ 0x085CAE0B
	.string "へそのいわ$"
	.if (. - gText_Rom_5CAE0B) > 0x6
	.error "gText_Rom_5CAE0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE0B) < 0x6
	.space 0x6 - (. - gText_Rom_5CAE0B)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAE11, size=0x24
	.byte 0x62, 0x72, 0x19, 0x06, 0x0E, 0x07, 0xFF, 0x18, 0x50, 0x0A, 0x19, 0x06, 0x0E, 0x07, 0xFF, 0x02
	.byte 0x02, 0x04, 0x00, 0xFF, 0x0A, 0x2A, 0x06, 0x27, 0x0C, 0x36, 0x03, 0x48, 0x41, 0xAB, 0xFF, 0x0C
	.byte 0x36, 0x03, 0x48, 0x16

