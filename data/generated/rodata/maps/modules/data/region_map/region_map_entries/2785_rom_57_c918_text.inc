	@ src/data/region_map/region_map_entries.h:483 region_map_entries_line_483
	.globl gText_Rom_57C918
gText_Rom_57C918: @ 0x0857C918
	.string "あさせのほらあな$"
	.if (. - gText_Rom_57C918) > 0x9
	.error "gText_Rom_57C918 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C918) < 0x9
	.space 0x9 - (. - gText_Rom_57C918)
	.endif
