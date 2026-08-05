	@ src/data/region_map/region_map_entries.h:343 region_map_entries_line_343
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C898
gText_Rom_57C898: @ 0x0857C898
	.string "132ばん すいどう$"
	.if (. - gText_Rom_57C898) != 0xb
	.error "gText_Rom_57C898 must retain its original byte length"
	.endif
