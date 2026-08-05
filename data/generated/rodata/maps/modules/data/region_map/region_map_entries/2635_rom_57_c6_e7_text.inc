	@ src/data/region_map/region_map_entries.h:21 region_map_entries_line_21
	.globl gText_Rom_57C6E7
gText_Rom_57C6E7: @ 0x0857C6E7
	.string "コトキタウン$"
	.if (. - gText_Rom_57C6E7) > 0x7
	.error "gText_Rom_57C6E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6E7) < 0x7
	.space 0x7 - (. - gText_Rom_57C6E7)
	.endif
