	@ src/data/region_map/region_map_entries.h:427 region_map_entries_line_427
	.globl gText_Rom_57C8E0
gText_Rom_57C8E0: @ 0x0857C8E0
	.string "トウカのもり$"
	.if (. - gText_Rom_57C8E0) > 0x7
	.error "gText_Rom_57C8E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8E0) < 0x7
	.space 0x7 - (. - gText_Rom_57C8E0)
	.endif
