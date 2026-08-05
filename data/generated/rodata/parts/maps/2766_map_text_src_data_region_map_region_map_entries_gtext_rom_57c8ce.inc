	@ src/data/region_map/region_map_entries.h:413 region_map_entries_line_413
	.globl gText_Rom_57C8CE
gText_Rom_57C8CE: @ 0x0857C8CE
	.string "サファリゾーン$"
	.if (. - gText_Rom_57C8CE) > 0x8
	.error "gText_Rom_57C8CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8CE) < 0x8
	.space 0x8 - (. - gText_Rom_57C8CE)
	.endif
