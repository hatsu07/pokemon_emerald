	@ src/data/region_map/region_map_entries.h:140 region_map_entries_line_140
	.globl gText_Rom_57C768
gText_Rom_57C768: @ 0x0857C768
	.string "103ばん どうろ$"
	.if (. - gText_Rom_57C768) > 0xa
	.error "gText_Rom_57C768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C768) < 0xa
	.space 0xa - (. - gText_Rom_57C768)
	.endif
