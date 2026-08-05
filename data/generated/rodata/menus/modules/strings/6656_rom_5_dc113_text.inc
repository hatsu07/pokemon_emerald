	@ src/strings.c:1013 gText_PkmnForSwap
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DC113
gText_Rom_5DC113: @ 0x085DC113
	.string "てばなすポケモン$"
	.if (. - gText_Rom_5DC113) != 0x9
	.error "gText_Rom_5DC113 must retain its original byte length"
	.endif
