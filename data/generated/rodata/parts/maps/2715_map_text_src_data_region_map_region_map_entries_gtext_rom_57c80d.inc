	@ src/data/region_map/region_map_entries.h:252 region_map_entries_line_252
	.globl gText_Rom_57C80D
gText_Rom_57C80D: @ 0x0857C80D
	.string "119ばん どうろ$"
	.if (. - gText_Rom_57C80D) > 0xa
	.error "gText_Rom_57C80D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C80D) < 0xa
	.space 0xa - (. - gText_Rom_57C80D)
	.endif
