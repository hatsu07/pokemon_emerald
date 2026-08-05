	@ src/data/region_map/region_map_entries.h:273 region_map_entries_line_273
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C82B
gText_Rom_57C82B: @ 0x0857C82B
	.string "122ばん すいどう$"
	.if (. - gText_Rom_57C82B) != 0xb
	.error "gText_Rom_57C82B must retain its original byte length"
	.endif
