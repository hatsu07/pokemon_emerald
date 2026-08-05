	@ src/data/region_map/region_map_entries.h:301 region_map_entries_line_301
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C856
gText_Rom_57C856: @ 0x0857C856
	.string "126ばん すいどう$"
	.if (. - gText_Rom_57C856) != 0xb
	.error "gText_Rom_57C856 must retain its original byte length"
	.endif
