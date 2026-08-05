	@ src/data/region_map/region_map_entries.h:588 region_map_entries_line_588
	.globl gText_Rom_598964
gText_Rom_598964: @ 0x08598964
	.string "さばくいせき$"
	.if (. - gText_Rom_598964) > 0x7
	.error "gText_Rom_598964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598964) < 0x7
	.space 0x7 - (. - gText_Rom_598964)
	.endif
