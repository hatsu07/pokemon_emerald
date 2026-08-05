	@ src/data/region_map/region_map_entries.h:56 region_map_entries_line_56
	.globl gText_Rom_57C70A
gText_Rom_57C70A: @ 0x0857C70A
	.string "キナギタウン$"
	.if (. - gText_Rom_57C70A) > 0x7
	.error "gText_Rom_57C70A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C70A) < 0x7
	.space 0x7 - (. - gText_Rom_57C70A)
	.endif
