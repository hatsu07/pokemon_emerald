	@ src/data/region_map/region_map_entries.h:574 region_map_entries_line_574
	.globl gText_Rom_59896B
gText_Rom_59896B: @ 0x0859896B
	.string "ひでりのいわと$"
	.if (. - gText_Rom_59896B) > 0x8
	.error "gText_Rom_59896B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59896B) < 0x8
	.space 0x8 - (. - gText_Rom_59896B)
	.endif
