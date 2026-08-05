	@ src/data/region_map/region_map_entries.h:119 region_map_entries_line_119
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C74C
gText_Rom_57C74C: @ 0x0857C74C
	.string "サイユウシティ$"
	.if (. - gText_Rom_57C74C) != 0x8
	.error "gText_Rom_57C74C must retain its original byte length"
	.endif
