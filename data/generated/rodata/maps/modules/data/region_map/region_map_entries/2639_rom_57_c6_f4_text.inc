	@ src/data/region_map/region_map_entries.h:35 region_map_entries_line_35
	.globl gText_Rom_57C6F4
gText_Rom_57C6F4: @ 0x0857C6F4
	.string "フエンタウン$"
	.if (. - gText_Rom_57C6F4) > 0x7
	.error "gText_Rom_57C6F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6F4) < 0x7
	.space 0x7 - (. - gText_Rom_57C6F4)
	.endif
