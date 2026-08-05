	@ src/data/region_map/region_map_entries.h:399 region_map_entries_line_399
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8BF
gText_Rom_57C8BF: @ 0x0857C8BF
	.string "いしのどうくつ$"
	.if (. - gText_Rom_57C8BF) != 0x8
	.error "gText_Rom_57C8BF must retain its original byte length"
	.endif
