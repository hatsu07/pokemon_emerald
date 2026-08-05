	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl gText_Rom_5CB1AA
gText_Rom_5CB1AA: @ 0x085CB1AA
	.string "そらのはしら$"
	.if (. - gText_Rom_5CB1AA) > 0x7
	.error "gText_Rom_5CB1AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1AA) < 0x7
	.space 0x7 - (. - gText_Rom_5CB1AA)
	.endif

