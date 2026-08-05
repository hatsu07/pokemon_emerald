	@ src/data/region_map/region_map_entries.h:399 region_map_entries_line_399
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_598921
gText_Rom_598921: @ 0x08598921
	.string "いしのどうくつ$"
	.if (. - gText_Rom_598921) != 0x8
	.error "gText_Rom_598921 must retain its original byte length"
	.endif
