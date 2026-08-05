	@ src/data/region_map/region_map_entries.h:14 region_map_entries_line_14
	.globl gText_Rom_57C6E0
gText_Rom_57C6E0: @ 0x0857C6E0
	.string "ミシロタウン$"
	.if (. - gText_Rom_57C6E0) > 0x7
	.error "gText_Rom_57C6E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6E0) < 0x7
	.space 0x7 - (. - gText_Rom_57C6E0)
	.endif
