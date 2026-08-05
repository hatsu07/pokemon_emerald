	@ src/data/region_map/region_map_entries.h:63 region_map_entries_line_63
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C711
gText_Rom_57C711: @ 0x0857C711
	.string "トウカシティ$"
	.if (. - gText_Rom_57C711) != 0x7
	.error "gText_Rom_57C711 must retain its original byte length"
	.endif
