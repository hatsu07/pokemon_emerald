	@ src/data/region_map/region_map_entries.h:1372 region_map_entries_line_1372
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD26
gText_Rom_57CD26: @ 0x0857CD26
	.string "マグマだん アジト$"
	.if (. - gText_Rom_57CD26) != 0xa
	.error "gText_Rom_57CD26 must retain its original byte length"
	.endif
