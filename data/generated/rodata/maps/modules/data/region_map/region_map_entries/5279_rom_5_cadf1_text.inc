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
