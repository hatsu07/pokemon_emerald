	@ src/data/region_map/region_map_entries.h:581 region_map_entries_line_581
	.globl gText_Rom_59895B
gText_Rom_59895B: @ 0x0859895B
	.string "こじまのよこあな$"
	.if (. - gText_Rom_59895B) > 0x9
	.error "gText_Rom_59895B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59895B) < 0x9
	.space 0x9 - (. - gText_Rom_59895B)
	.endif
