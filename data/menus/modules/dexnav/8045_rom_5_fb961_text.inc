	@ src/dexnav.c:183 sText_DexNav_NoInfo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_DexNav_NoInfo
sText_DexNav_NoInfo: @ 0x085FB961
	.string "--------{EOS}"
	.if (. - sText_DexNav_NoInfo) != 0x9
	.error "sText_DexNav_NoInfo must retain its original byte length"
	.endif
