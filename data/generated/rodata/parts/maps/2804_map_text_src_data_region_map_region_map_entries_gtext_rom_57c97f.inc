	@ src/data/region_map/region_map_entries.h:595 region_map_entries_line_595
	.globl gText_Rom_57C97F
gText_Rom_57C97F: @ 0x0857C97F
	.string "こだいづか$"
	.if (. - gText_Rom_57C97F) > 0x6
	.error "gText_Rom_57C97F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C97F) < 0x6
	.space 0x6 - (. - gText_Rom_57C97F)
	.endif
