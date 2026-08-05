	@ src/data/region_map/region_map_entries.h:28 region_map_entries_line_28
	.globl gText_Rom_57C6EE
gText_Rom_57C6EE: @ 0x0857C6EE
	.string "ムロタウン$"
	.if (. - gText_Rom_57C6EE) > 0x6
	.error "gText_Rom_57C6EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6EE) < 0x6
	.space 0x6 - (. - gText_Rom_57C6EE)
	.endif
