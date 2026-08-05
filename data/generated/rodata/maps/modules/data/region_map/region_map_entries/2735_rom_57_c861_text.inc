	@ src/data/region_map/region_map_entries.h:308 region_map_entries_line_308
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C861
gText_Rom_57C861: @ 0x0857C861
	.string "127ばん すいどう$"
	.if (. - gText_Rom_57C861) != 0xb
	.error "gText_Rom_57C861 must retain its original byte length"
	.endif
