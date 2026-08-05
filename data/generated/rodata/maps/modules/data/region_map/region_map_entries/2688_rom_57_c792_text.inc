	@ src/data/region_map/region_map_entries.h:168 region_map_entries_line_168
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C792
gText_Rom_57C792: @ 0x0857C792
	.string "107ばん すいどう$"
	.if (. - gText_Rom_57C792) != 0xb
	.error "gText_Rom_57C792 must retain its original byte length"
	.endif
