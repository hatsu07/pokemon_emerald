	@ src/data/region_map/region_map_entries.h:126 region_map_entries_line_126
	.globl gText_Rom_57C754
gText_Rom_57C754: @ 0x0857C754
	.string "101ばん どうろ$"
	.if (. - gText_Rom_57C754) > 0xa
	.error "gText_Rom_57C754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C754) < 0xa
	.space 0xa - (. - gText_Rom_57C754)
	.endif
