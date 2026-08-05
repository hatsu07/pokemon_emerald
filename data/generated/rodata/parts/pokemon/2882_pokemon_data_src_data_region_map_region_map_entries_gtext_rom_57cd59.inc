	@ src/data/region_map/region_map_entries.h:1449 region_map_entries_line_1449
	.globl gText_Rom_57CD59
gText_Rom_57CD59: @ 0x0857CD59
	.string "さばくのちかどう$"
	.if (. - gText_Rom_57CD59) > 0x9
	.error "gText_Rom_57CD59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD59) < 0x9
	.space 0x9 - (. - gText_Rom_57CD59)
	.endif
