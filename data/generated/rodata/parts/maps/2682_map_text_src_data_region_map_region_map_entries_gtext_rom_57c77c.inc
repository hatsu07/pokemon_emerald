	@ src/data/region_map/region_map_entries.h:154 region_map_entries_line_154
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C77C
gText_Rom_57C77C: @ 0x0857C77C
	.string "105ばん すいどう$"
	.if (. - gText_Rom_57C77C) != 0xb
	.error "gText_Rom_57C77C must retain its original byte length"
	.endif
