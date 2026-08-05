	@ src/data/region_map/region_map_entries.h:364 region_map_entries_line_364 (+10 aliases)
	.globl gText_Rom_57C8B9
gText_Rom_57C8B9: @ 0x0857C8B9
	.string "すいちゅう$"
	.if (. - gText_Rom_57C8B9) > 0x6
	.error "gText_Rom_57C8B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8B9) < 0x6
	.space 0x6 - (. - gText_Rom_57C8B9)
	.endif
