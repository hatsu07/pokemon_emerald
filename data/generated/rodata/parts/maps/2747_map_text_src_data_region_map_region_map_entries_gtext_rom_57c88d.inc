	@ src/data/region_map/region_map_entries.h:336 region_map_entries_line_336
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C88D
gText_Rom_57C88D: @ 0x0857C88D
	.string "131ばん すいどう$"
	.if (. - gText_Rom_57C88D) != 0xb
	.error "gText_Rom_57C88D must retain its original byte length"
	.endif
