	@ src/strings.c:83 gText_DexSearchAlphaABC
	@ Preserve exact byte length: internal label.
	.globl gText_DexSearchAlphaABC_Copy_Pokemon
gText_DexSearchAlphaABC_Copy_Pokemon: @ 0x085443B3
	.string "あいうえお{EOS}"
	.if (. - gText_DexSearchAlphaABC_Copy_Pokemon) != 0x6
	.error "gText_DexSearchAlphaABC_Copy_Pokemon must retain its original byte length"
	.endif
