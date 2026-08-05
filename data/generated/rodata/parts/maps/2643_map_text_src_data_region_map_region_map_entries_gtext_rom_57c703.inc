	@ src/data/region_map/region_map_entries.h:49 region_map_entries_line_49
	.globl gText_Rom_57C703
gText_Rom_57C703: @ 0x0857C703
	.string "シダケタウン$"
	.if (. - gText_Rom_57C703) > 0x7
	.error "gText_Rom_57C703 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C703) < 0x7
	.space 0x7 - (. - gText_Rom_57C703)
	.endif
