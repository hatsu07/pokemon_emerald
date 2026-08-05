	@ src/data/region_map/region_map_entries.h:189 region_map_entries_line_189
	.globl gText_Rom_57C7B3
gText_Rom_57C7B3: @ 0x0857C7B3
	.string "110ばん どうろ$"
	.if (. - gText_Rom_57C7B3) > 0xa
	.error "gText_Rom_57C7B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7B3) < 0xa
	.space 0xa - (. - gText_Rom_57C7B3)
	.endif
