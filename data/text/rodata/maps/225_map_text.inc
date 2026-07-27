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
	.incbin "baserom.gba", 0x5cae11, 0x24

