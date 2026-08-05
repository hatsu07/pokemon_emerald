	@ src/data/region_map/region_map_entries.h:1456 region_map_entries_line_1456
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5989A5
gText_Rom_5989A5: @ 0x085989A5
	.string "へんげのどうくつ$"
	.if (. - gText_Rom_5989A5) != 0x9
	.error "gText_Rom_5989A5 must retain its original byte length"
	.endif
