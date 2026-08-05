	@ src/data/region_map/region_map_entries.h:98 region_map_entries_line_98 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C737
gText_Rom_57C737: @ 0x0857C737
	.string "ミナモシティ$"
	.if (. - gText_Rom_57C737) != 0x7
	.error "gText_Rom_57C737 must retain its original byte length"
	.endif
