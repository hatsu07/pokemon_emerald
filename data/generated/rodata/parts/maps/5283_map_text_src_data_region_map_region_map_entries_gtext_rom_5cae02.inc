	@ src/data/region_map/region_map_entries.h:1393 region_map_entries_line_1393 (+1 aliases)
	.globl gText_Rom_5CAE02
gText_Rom_5CAE02: @ 0x085CAE02
	.string "さいはてのことう$"
	.if (. - gText_Rom_5CAE02) > 0x9
	.error "gText_Rom_5CAE02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE02) < 0x9
	.space 0x9 - (. - gText_Rom_5CAE02)
	.endif
