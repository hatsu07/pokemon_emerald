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
	.incbin "baserom.gba", 0x57cc5b, 0x13

