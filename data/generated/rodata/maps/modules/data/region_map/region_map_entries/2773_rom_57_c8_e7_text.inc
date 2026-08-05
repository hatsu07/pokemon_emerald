	@ src/data/region_map/region_map_entries.h:434 region_map_entries_line_434
	.globl gText_Rom_57C8E7
gText_Rom_57C8E7: @ 0x0857C8E7
	.string "カナシダトンネル$"
	.if (. - gText_Rom_57C8E7) > 0x9
	.error "gText_Rom_57C8E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8E7) < 0x9
	.space 0x9 - (. - gText_Rom_57C8E7)
	.endif
