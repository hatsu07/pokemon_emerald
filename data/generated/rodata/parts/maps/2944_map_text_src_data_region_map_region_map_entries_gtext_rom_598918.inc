	@ src/data/region_map/region_map_entries.h:490 region_map_entries_line_490
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_598918
gText_Rom_598918: @ 0x08598918
	.string "かいていどうくつ$"
	.if (. - gText_Rom_598918) != 0x9
	.error "gText_Rom_598918 must retain its original byte length"
	.endif
