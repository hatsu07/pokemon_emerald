	@ src/data/region_map/region_map_entries.h:427 region_map_entries_line_427
	.globl gText_Rom_59885D
gText_Rom_59885D: @ 0x0859885D
	.string "トウカのもり$"
	.if (. - gText_Rom_59885D) > 0x7
	.error "gText_Rom_59885D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59885D) < 0x7
	.space 0x7 - (. - gText_Rom_59885D)
	.endif
	@ Decoded text from ROM range: offset=0x598864, size=0xA
	.string "ハギろうじんのこや$"
