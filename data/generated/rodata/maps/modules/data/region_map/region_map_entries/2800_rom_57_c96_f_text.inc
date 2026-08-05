	@ src/data/region_map/region_map_entries.h:581 region_map_entries_line_581
	.globl gText_Rom_57C96F
gText_Rom_57C96F: @ 0x0857C96F
	.string "こじまのよこあな$"
	.if (. - gText_Rom_57C96F) > 0x9
	.error "gText_Rom_57C96F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C96F) < 0x9
	.space 0x9 - (. - gText_Rom_57C96F)
	.endif
