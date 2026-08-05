	@ src/data/region_map/region_map_entries.h:259 region_map_entries_line_259
	.globl gText_Rom_57C817
gText_Rom_57C817: @ 0x0857C817
	.string "120ばん どうろ$"
	.if (. - gText_Rom_57C817) > 0xa
	.error "gText_Rom_57C817 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C817) < 0xa
	.space 0xa - (. - gText_Rom_57C817)
	.endif
