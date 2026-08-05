	@ src/data/region_map/region_map_entries.h:1449 region_map_entries_line_1449
	.globl gText_Rom_5989AE
gText_Rom_5989AE: @ 0x085989AE
	.string "さばくのちかどう$"
	.if (. - gText_Rom_5989AE) > 0x9
	.error "gText_Rom_5989AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5989AE) < 0x9
	.space 0x9 - (. - gText_Rom_5989AE)
	.endif
