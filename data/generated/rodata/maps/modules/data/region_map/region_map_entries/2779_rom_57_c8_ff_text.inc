	@ src/data/region_map/region_map_entries.h:455 region_map_entries_line_455
	.globl gText_Rom_57C8FF
gText_Rom_57C8FF: @ 0x0857C8FF
	.string "りゅうせいのたき$"
	.if (. - gText_Rom_57C8FF) > 0x9
	.error "gText_Rom_57C8FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8FF) < 0x9
	.space 0x9 - (. - gText_Rom_57C8FF)
	.endif
