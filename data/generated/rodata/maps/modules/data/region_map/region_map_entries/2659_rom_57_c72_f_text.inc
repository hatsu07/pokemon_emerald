	@ src/data/region_map/region_map_entries.h:91 region_map_entries_line_91
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C72F
gText_Rom_57C72F: @ 0x0857C72F
	.string "ヒワマキシティ$"
	.if (. - gText_Rom_57C72F) != 0x8
	.error "gText_Rom_57C72F must retain its original byte length"
	.endif
