	@ src/data/region_map/region_map_entries.h:357 region_map_entries_line_357
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8AE
gText_Rom_57C8AE: @ 0x0857C8AE
	.string "134ばん すいどう$"
	.if (. - gText_Rom_57C8AE) != 0xb
	.error "gText_Rom_57C8AE must retain its original byte length"
	.endif
