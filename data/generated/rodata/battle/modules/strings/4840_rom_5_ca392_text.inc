	@ src/strings.c:376 gText_RentalPkmn
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA392
gText_Rom_5CA392: @ 0x085CA392
	.string "レンタルポケモン$"
	.if (. - gText_Rom_5CA392) != 0x9
	.error "gText_Rom_5CA392 must retain its original byte length"
	.endif
