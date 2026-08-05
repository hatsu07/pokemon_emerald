	@ src/data/region_map/region_map_entries.h:133 region_map_entries_line_133
	.globl gText_Rom_57C75E
gText_Rom_57C75E: @ 0x0857C75E
	.string "102ばん どうろ$"
	.if (. - gText_Rom_57C75E) > 0xa
	.error "gText_Rom_57C75E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C75E) < 0xa
	.space 0xa - (. - gText_Rom_57C75E)
	.endif
