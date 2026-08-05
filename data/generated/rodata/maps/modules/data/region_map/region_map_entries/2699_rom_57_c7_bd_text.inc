	@ src/data/region_map/region_map_entries.h:196 region_map_entries_line_196
	.globl gText_Rom_57C7BD
gText_Rom_57C7BD: @ 0x0857C7BD
	.string "111ばん どうろ$"
	.if (. - gText_Rom_57C7BD) > 0xa
	.error "gText_Rom_57C7BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7BD) < 0xa
	.space 0xa - (. - gText_Rom_57C7BD)
	.endif
