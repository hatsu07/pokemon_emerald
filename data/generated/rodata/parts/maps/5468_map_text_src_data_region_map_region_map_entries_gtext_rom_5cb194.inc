	@ src/data/region_map/region_map_entries.h:70 region_map_entries_line_70 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB194
gText_Rom_5CB194: @ 0x085CB194
	.string "カイナシティ$"
	.if (. - gText_Rom_5CB194) != 0x7
	.error "gText_Rom_5CB194 must retain its original byte length"
	.endif
