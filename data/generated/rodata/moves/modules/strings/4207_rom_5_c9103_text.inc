	@ src/strings.c:75 gText_DexHoennTitle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9103
gText_Rom_5C9103: @ 0x085C9103
	.string "ホウエン ずかん$"
	.if (. - gText_Rom_5C9103) != 0x9
	.error "gText_Rom_5C9103 must retain its original byte length"
	.endif
