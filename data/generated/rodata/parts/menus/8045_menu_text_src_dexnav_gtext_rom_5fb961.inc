	@ src/dexnav.c:183 sText_DexNav_NoInfo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5FB961
gText_Rom_5FB961: @ 0x085FB961
	.string "--------$"
	.if (. - gText_Rom_5FB961) != 0x9
	.error "gText_Rom_5FB961 must retain its original byte length"
	.endif
