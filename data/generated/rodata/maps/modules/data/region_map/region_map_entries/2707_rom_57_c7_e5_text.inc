	@ src/data/region_map/region_map_entries.h:224 region_map_entries_line_224
	.globl gText_Rom_57C7E5
gText_Rom_57C7E5: @ 0x0857C7E5
	.string "115ばん どうろ$"
	.if (. - gText_Rom_57C7E5) > 0xa
	.error "gText_Rom_57C7E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7E5) < 0xa
	.space 0xa - (. - gText_Rom_57C7E5)
	.endif
