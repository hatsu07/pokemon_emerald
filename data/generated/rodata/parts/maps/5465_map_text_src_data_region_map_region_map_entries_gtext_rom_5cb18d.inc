	@ src/data/region_map/region_map_entries.h:98 region_map_entries_line_98 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB18D
gText_Rom_5CB18D: @ 0x085CB18D
	.string "ミナモシティ$"
	.if (. - gText_Rom_5CB18D) != 0x7
	.error "gText_Rom_5CB18D must retain its original byte length"
	.endif
