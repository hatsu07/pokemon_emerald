	@ src/data/region_map/region_map_entries.h:441 region_map_entries_line_441
	.globl gText_Rom_57C8F0
gText_Rom_57C8F0: @ 0x0857C8F0
	.string "すてられぶね$"
	.if (. - gText_Rom_57C8F0) > 0x7
	.error "gText_Rom_57C8F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8F0) < 0x7
	.space 0x7 - (. - gText_Rom_57C8F0)
	.endif
