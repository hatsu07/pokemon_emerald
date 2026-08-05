	@ src/data/region_map/region_map_entries.h:203 region_map_entries_line_203
	.globl gText_Rom_57C7C7
gText_Rom_57C7C7: @ 0x0857C7C7
	.string "112ばん どうろ$"
	.if (. - gText_Rom_57C7C7) > 0xa
	.error "gText_Rom_57C7C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7C7) < 0xa
	.space 0xa - (. - gText_Rom_57C7C7)
	.endif
