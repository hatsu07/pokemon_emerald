	@ src/data/region_map/region_map_entries.h:1463 region_map_entries_line_1463 (+1 aliases)
	.globl gText_Rom_57CC55
gText_Rom_57CC55: @ 0x0857CC55
	.string "へそのいわ$"
	.if (. - gText_Rom_57CC55) > 0x6
	.error "gText_Rom_57CC55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC55) < 0x6
	.space 0x6 - (. - gText_Rom_57CC55)
	.endif
	@ analyzed canonical ROM range 0x0857CC5B-0x0857CC6D
	.globl gText_Rom_57CC5B
gText_Rom_57CC5B: @ 0x0857CC5B
	@ text fragments: "ともしびやま$", "きのみのもり$", "いてだきの"
	.byte 0x14, 0x23, 0x0C, 0x47, 0x24, 0x1F, 0xFF, 0x07, 0x19, 0x20, 0x19, 0x23, 0x28, 0xFF, 0x02, 0x13
	.byte 0x41, 0x07, 0x19
