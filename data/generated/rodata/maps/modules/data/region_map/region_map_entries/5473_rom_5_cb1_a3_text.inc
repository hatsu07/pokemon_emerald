	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_5CB1A3
gText_Rom_5CB1A3: @ 0x085CB1A3
	.string "おくりびやま$"
	.if (. - gText_Rom_5CB1A3) > 0x7
	.error "gText_Rom_5CB1A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1A3) < 0x7
	.space 0x7 - (. - gText_Rom_5CB1A3)
	.endif
