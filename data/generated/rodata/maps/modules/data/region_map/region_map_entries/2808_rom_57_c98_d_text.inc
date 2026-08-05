	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl gText_Rom_57C98D
gText_Rom_57C98D: @ 0x0857C98D
	.string "そらのはしら$"
	.if (. - gText_Rom_57C98D) > 0x7
	.error "gText_Rom_57C98D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C98D) < 0x7
	.space 0x7 - (. - gText_Rom_57C98D)
	.endif
