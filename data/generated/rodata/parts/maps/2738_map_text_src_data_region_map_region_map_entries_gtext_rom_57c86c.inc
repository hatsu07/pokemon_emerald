	@ src/data/region_map/region_map_entries.h:315 region_map_entries_line_315
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C86C
gText_Rom_57C86C: @ 0x0857C86C
	.string "128ばん すいどう$"
	.if (. - gText_Rom_57C86C) != 0xb
	.error "gText_Rom_57C86C must retain its original byte length"
	.endif
