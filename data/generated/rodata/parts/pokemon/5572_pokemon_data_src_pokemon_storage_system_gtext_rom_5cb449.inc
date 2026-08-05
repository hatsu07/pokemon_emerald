	@ src/pokemon_storage_system.c:870 pokemon_storage_system_line_870
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB449
gText_Rom_5CB449: @ 0x085CB449
	.string "ポケモンを つれていく$"
	.if (. - gText_Rom_5CB449) != 0xc
	.error "gText_Rom_5CB449 must retain its original byte length"
	.endif
