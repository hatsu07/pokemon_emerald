	@ src/data/region_map/region_map_entries.h:217 region_map_entries_line_217
	.globl gText_Rom_57C7DB
gText_Rom_57C7DB: @ 0x0857C7DB
	.string "114ばん どうろ$"
	.if (. - gText_Rom_57C7DB) > 0xa
	.error "gText_Rom_57C7DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7DB) < 0xa
	.space 0xa - (. - gText_Rom_57C7DB)
	.endif
