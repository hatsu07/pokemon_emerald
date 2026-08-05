	@ src/data/region_map/region_map_entries.h:1365 region_map_entries_line_1365
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD1C
gText_Rom_57CD1C: @ 0x0857CD1C
	.string "アクアだん アジト$"
	.if (. - gText_Rom_57CD1C) != 0xa
	.error "gText_Rom_57CD1C must retain its original byte length"
	.endif
