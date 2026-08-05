	@ src/pokemon_storage_system.c:8093 pokemon_storage_system_line_8093
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB3CD
gText_Rom_5CB3CD: @ 0x085CB3CD
	.string "とりかえる$"
	.if (. - gText_Rom_5CB3CD) != 0x6
	.error "gText_Rom_5CB3CD must retain its original byte length"
	.endif
