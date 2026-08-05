	@ src/data/region_map/region_map_entries.h:84 region_map_entries_line_84
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C727
gText_Rom_57C727: @ 0x0857C727
	.string "カナズミシティ$"
	.if (. - gText_Rom_57C727) != 0x8
	.error "gText_Rom_57C727 must retain its original byte length"
	.endif
