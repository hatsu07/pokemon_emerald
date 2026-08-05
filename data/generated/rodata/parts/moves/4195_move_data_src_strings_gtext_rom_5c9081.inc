	@ src/strings.c:70 gText_SelectPokedexListingMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9081
gText_Rom_5C9081: @ 0x085C9081
	.string "ずかんの ならびを してい します$"
	.if (. - gText_Rom_5C9081) != 0x12
	.error "gText_Rom_5C9081 must retain its original byte length"
	.endif
