	@ src/data/region_map/region_map_entries.h:266 region_map_entries_line_266
	.globl gText_Rom_57C821
gText_Rom_57C821: @ 0x0857C821
	.string "121ばん どうろ$"
	.if (. - gText_Rom_57C821) > 0xa
	.error "gText_Rom_57C821 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C821) < 0xa
	.space 0xa - (. - gText_Rom_57C821)
	.endif
