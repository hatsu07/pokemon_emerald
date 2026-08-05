	@ src/data/region_map/region_map_entries.h:280 region_map_entries_line_280
	.globl gText_Rom_57C836
gText_Rom_57C836: @ 0x0857C836
	.string "123ばん どうろ$"
	.if (. - gText_Rom_57C836) > 0xa
	.error "gText_Rom_57C836 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C836) < 0xa
	.space 0xa - (. - gText_Rom_57C836)
	.endif
