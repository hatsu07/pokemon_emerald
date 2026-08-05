	@ src/data/region_map/region_map_entries.h:350 region_map_entries_line_350
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8A3
gText_Rom_57C8A3: @ 0x0857C8A3
	.string "133ばん すいどう$"
	.if (. - gText_Rom_57C8A3) != 0xb
	.error "gText_Rom_57C8A3 must retain its original byte length"
	.endif
