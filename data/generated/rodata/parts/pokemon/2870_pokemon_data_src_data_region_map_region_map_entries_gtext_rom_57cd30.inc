	@ src/data/region_map/region_map_entries.h:1379 region_map_entries_line_1379
	.globl gText_Rom_57CD30
gText_Rom_57CD30: @ 0x0857CD30
	.string "げんえいのとう$"
	.if (. - gText_Rom_57CD30) > 0x8
	.error "gText_Rom_57CD30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD30) < 0x8
	.space 0x8 - (. - gText_Rom_57CD30)
	.endif
