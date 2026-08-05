	@ src/data/region_map/region_map_entries.h:322 region_map_entries_line_322
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C877
gText_Rom_57C877: @ 0x0857C877
	.string "129ばん すいどう$"
	.if (. - gText_Rom_57C877) != 0xb
	.error "gText_Rom_57C877 must retain its original byte length"
	.endif
