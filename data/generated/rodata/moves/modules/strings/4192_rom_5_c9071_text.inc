	@ src/strings.c:69 gText_SelectPokedexMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9071
gText_Rom_5C9071: @ 0x085C9071
	.string "ずかんモードを してい します$"
	.if (. - gText_Rom_5C9071) != 0x10
	.error "gText_Rom_5C9071 must retain its original byte length"
	.endif
