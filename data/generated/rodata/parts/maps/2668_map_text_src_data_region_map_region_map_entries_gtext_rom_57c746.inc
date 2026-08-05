	@ src/data/region_map/region_map_entries.h:112 region_map_entries_line_112
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C746
gText_Rom_57C746: @ 0x0857C746
	.string "ルネシティ$"
	.if (. - gText_Rom_57C746) != 0x6
	.error "gText_Rom_57C746 must retain its original byte length"
	.endif
