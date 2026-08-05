	@ src/data/region_map/region_map_entries.h:1407 region_map_entries_line_1407
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD49
gText_Rom_57CD49: @ 0x0857CD49
	.string "うみのどうくつ$"
	.if (. - gText_Rom_57CD49) != 0x8
	.error "gText_Rom_57CD49 must retain its original byte length"
	.endif
