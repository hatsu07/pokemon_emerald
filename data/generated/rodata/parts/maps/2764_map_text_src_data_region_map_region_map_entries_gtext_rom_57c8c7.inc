	@ src/data/region_map/region_map_entries.h:406 region_map_entries_line_406
	.globl gText_Rom_57C8C7
gText_Rom_57C8C7: @ 0x0857C8C7
	.string "えんとつやま$"
	.if (. - gText_Rom_57C8C7) > 0x7
	.error "gText_Rom_57C8C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8C7) < 0x7
	.space 0x7 - (. - gText_Rom_57C8C7)
	.endif
