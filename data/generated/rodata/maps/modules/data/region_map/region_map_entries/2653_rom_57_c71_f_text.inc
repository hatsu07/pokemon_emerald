	@ src/data/region_map/region_map_entries.h:77 region_map_entries_line_77
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C71F
gText_Rom_57C71F: @ 0x0857C71F
	.string "キンセツシティ$"
	.if (. - gText_Rom_57C71F) != 0x8
	.error "gText_Rom_57C71F must retain its original byte length"
	.endif
