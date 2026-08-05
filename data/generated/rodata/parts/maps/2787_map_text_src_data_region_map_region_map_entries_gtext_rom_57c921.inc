	@ src/data/region_map/region_map_entries.h:490 region_map_entries_line_490
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C921
gText_Rom_57C921: @ 0x0857C921
	.string "かいていどうくつ$"
	.if (. - gText_Rom_57C921) != 0x9
	.error "gText_Rom_57C921 must retain its original byte length"
	.endif
