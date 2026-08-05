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
