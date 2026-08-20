	@ src/strings.c:83 gText_DexSearchAlphaABC
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5443B3
gText_Rom_5443B3: @ 0x085443B3
	.string "あいうえお{EOS}"
	.if (. - gText_Rom_5443B3) != 0x6
	.error "gText_Rom_5443B3 must retain its original byte length"
	.endif
