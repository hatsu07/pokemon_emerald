	@ src/data/region_map/region_map_entries.h:518 region_map_entries_line_518 (+1 aliases)
	.globl gText_Rom_5CB19B
gText_Rom_5CB19B: @ 0x085CB19B
	.string "めざめのほこら$"
	.if (. - gText_Rom_5CB19B) > 0x8
	.error "gText_Rom_5CB19B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB19B) < 0x8
	.space 0x8 - (. - gText_Rom_5CB19B)
	.endif
