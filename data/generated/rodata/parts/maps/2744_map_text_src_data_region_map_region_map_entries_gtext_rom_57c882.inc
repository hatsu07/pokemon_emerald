	@ src/data/region_map/region_map_entries.h:329 region_map_entries_line_329
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C882
gText_Rom_57C882: @ 0x0857C882
	.string "130ばん すいどう$"
	.if (. - gText_Rom_57C882) != 0xb
	.error "gText_Rom_57C882 must retain its original byte length"
	.endif
