	@ src/data/region_map/region_map_entries.h:1456 region_map_entries_line_1456
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CC9C
gText_Rom_57CC9C: @ 0x0857CC9C
	.string "へんげのどうくつ$"
	.if (. - gText_Rom_57CC9C) != 0x9
	.error "gText_Rom_57CC9C must retain its original byte length"
	.endif
