	@ src/strings.c:208 strings_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C974B
gText_Rom_5C974B: @ 0x085C974B
	.string "モンスターボール$"
	.if (. - gText_Rom_5C974B) != 0x9
	.error "gText_Rom_5C974B must retain its original byte length"
	.endif
