	@ src/data/region_map/region_map_entries.h:1470 region_map_entries_line_1470
	.globl gText_Rom_57CD62
gText_Rom_57CD62: @ 0x0857CD62
	.string "トレーナーヒル$"
	.if (. - gText_Rom_57CD62) > 0x8
	.error "gText_Rom_57CD62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD62) < 0x8
	.space 0x8 - (. - gText_Rom_57CD62)
	.endif
	.space 0x2, 0x00
