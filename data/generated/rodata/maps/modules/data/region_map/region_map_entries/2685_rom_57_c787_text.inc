	@ src/data/region_map/region_map_entries.h:161 region_map_entries_line_161
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C787
gText_Rom_57C787: @ 0x0857C787
	.string "106ばん すいどう$"
	.if (. - gText_Rom_57C787) != 0xb
	.error "gText_Rom_57C787 must retain its original byte length"
	.endif
