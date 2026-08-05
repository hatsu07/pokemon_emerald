	@ src/data/region_map/region_map_entries.h:1421 region_map_entries_line_1421
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD51
gText_Rom_57CD51: @ 0x0857CD51
	.string "りくのどうくつ$"
	.if (. - gText_Rom_57CD51) != 0x8
	.error "gText_Rom_57CD51 must retain its original byte length"
	.endif
