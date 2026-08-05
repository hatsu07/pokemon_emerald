	@ src/data/region_map/region_map_entries.h:105 region_map_entries_line_105
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C73E
gText_Rom_57C73E: @ 0x0857C73E
	.string "トクサネシティ$"
	.if (. - gText_Rom_57C73E) != 0x8
	.error "gText_Rom_57C73E must retain its original byte length"
	.endif
