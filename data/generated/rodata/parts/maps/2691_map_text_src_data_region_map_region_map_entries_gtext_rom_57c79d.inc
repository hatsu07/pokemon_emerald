	@ src/data/region_map/region_map_entries.h:175 region_map_entries_line_175
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C79D
gText_Rom_57C79D: @ 0x0857C79D
	.string "108ばん すいどう$"
	.if (. - gText_Rom_57C79D) != 0xb
	.error "gText_Rom_57C79D must retain its original byte length"
	.endif
