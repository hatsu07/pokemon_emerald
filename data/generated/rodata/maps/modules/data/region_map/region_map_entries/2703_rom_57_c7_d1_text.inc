	@ src/data/region_map/region_map_entries.h:210 region_map_entries_line_210
	.globl gText_Rom_57C7D1
gText_Rom_57C7D1: @ 0x0857C7D1
	.string "113ばん どうろ$"
	.if (. - gText_Rom_57C7D1) > 0xa
	.error "gText_Rom_57C7D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7D1) < 0xa
	.space 0xa - (. - gText_Rom_57C7D1)
	.endif
