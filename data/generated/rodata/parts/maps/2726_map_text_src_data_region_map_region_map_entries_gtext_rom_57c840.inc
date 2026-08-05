	@ src/data/region_map/region_map_entries.h:287 region_map_entries_line_287
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C840
gText_Rom_57C840: @ 0x0857C840
	.string "124ばん すいどう$"
	.if (. - gText_Rom_57C840) != 0xb
	.error "gText_Rom_57C840 must retain its original byte length"
	.endif
