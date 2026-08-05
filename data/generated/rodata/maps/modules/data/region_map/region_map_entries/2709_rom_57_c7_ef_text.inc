	@ src/data/region_map/region_map_entries.h:231 region_map_entries_line_231
	.globl gText_Rom_57C7EF
gText_Rom_57C7EF: @ 0x0857C7EF
	.string "116ばん どうろ$"
	.if (. - gText_Rom_57C7EF) > 0xa
	.error "gText_Rom_57C7EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7EF) < 0xa
	.space 0xa - (. - gText_Rom_57C7EF)
	.endif
