	@ src/data/region_map/region_map_entries.h:42 region_map_entries_line_42
	.globl gText_Rom_57C6FB
gText_Rom_57C6FB: @ 0x0857C6FB
	.string "ハジツゲタウン$"
	.if (. - gText_Rom_57C6FB) > 0x8
	.error "gText_Rom_57C6FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6FB) < 0x8
	.space 0x8 - (. - gText_Rom_57C6FB)
	.endif
