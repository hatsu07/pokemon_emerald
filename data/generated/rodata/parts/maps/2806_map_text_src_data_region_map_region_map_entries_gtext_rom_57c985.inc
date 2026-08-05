	@ src/data/region_map/region_map_entries.h:602 region_map_entries_line_602
	.globl gText_Rom_57C985
gText_Rom_57C985: @ 0x0857C985
	.string "トラックのなか$"
	.if (. - gText_Rom_57C985) > 0x8
	.error "gText_Rom_57C985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C985) < 0x8
	.space 0x8 - (. - gText_Rom_57C985)
	.endif
