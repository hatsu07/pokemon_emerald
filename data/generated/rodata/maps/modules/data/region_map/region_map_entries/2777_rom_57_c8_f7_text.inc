	@ src/data/region_map/region_map_entries.h:448 region_map_entries_line_448
	.globl gText_Rom_57C8F7
gText_Rom_57C8F7: @ 0x0857C8F7
	.string "ニューキンセツ$"
	.if (. - gText_Rom_57C8F7) > 0x8
	.error "gText_Rom_57C8F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8F7) < 0x8
	.space 0x8 - (. - gText_Rom_57C8F7)
	.endif
