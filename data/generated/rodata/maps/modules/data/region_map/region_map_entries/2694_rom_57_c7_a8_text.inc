	@ src/data/region_map/region_map_entries.h:182 region_map_entries_line_182
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C7A8
gText_Rom_57C7A8: @ 0x0857C7A8
	.string "109ばん すいどう$"
	.if (. - gText_Rom_57C7A8) != 0xb
	.error "gText_Rom_57C7A8 must retain its original byte length"
	.endif
