	@ src/strings.c:389 gText_PkmnInfo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA3E4
gText_Rom_5CA3E4: @ 0x085CA3E4
	.string "ポケモンじょうほう$"
	.if (. - gText_Rom_5CA3E4) != 0xa
	.error "gText_Rom_5CA3E4 must retain its original byte length"
	.endif
