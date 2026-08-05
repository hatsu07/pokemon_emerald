	@ src/data/region_map/region_map_entries.h:147 region_map_entries_line_147
	.globl gText_Rom_57C772
gText_Rom_57C772: @ 0x0857C772
	.string "104ばん どうろ$"
	.if (. - gText_Rom_57C772) > 0xa
	.error "gText_Rom_57C772 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C772) < 0xa
	.space 0xa - (. - gText_Rom_57C772)
	.endif
