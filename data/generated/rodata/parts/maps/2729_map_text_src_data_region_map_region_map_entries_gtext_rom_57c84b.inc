	@ src/data/region_map/region_map_entries.h:294 region_map_entries_line_294
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C84B
gText_Rom_57C84B: @ 0x0857C84B
	.string "125ばん すいどう$"
	.if (. - gText_Rom_57C84B) != 0xb
	.error "gText_Rom_57C84B must retain its original byte length"
	.endif
