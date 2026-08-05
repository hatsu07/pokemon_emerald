	@ src/data/region_map/region_map_entries.h:238 region_map_entries_line_238
	.globl gText_Rom_57C7F9
gText_Rom_57C7F9: @ 0x0857C7F9
	.string "117ばん どうろ$"
	.if (. - gText_Rom_57C7F9) > 0xa
	.error "gText_Rom_57C7F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7F9) < 0xa
	.space 0xa - (. - gText_Rom_57C7F9)
	.endif
