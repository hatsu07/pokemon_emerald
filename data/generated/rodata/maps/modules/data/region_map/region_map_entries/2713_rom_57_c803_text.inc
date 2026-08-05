	@ src/data/region_map/region_map_entries.h:245 region_map_entries_line_245
	.globl gText_Rom_57C803
gText_Rom_57C803: @ 0x0857C803
	.string "118ばん どうろ$"
	.if (. - gText_Rom_57C803) > 0xa
	.error "gText_Rom_57C803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C803) < 0xa
	.space 0xa - (. - gText_Rom_57C803)
	.endif
