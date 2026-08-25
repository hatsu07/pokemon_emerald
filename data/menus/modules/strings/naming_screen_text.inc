	@ src/naming_screen.c:1428 sText_PageSwapSymbols (+1 aliases)
	.globl sText_PageSwapSymbols
sText_PageSwapSymbols: @ 0x085CC61E
	.string "きごう{EOS}"
	.if (. - sText_PageSwapSymbols) > 0x4
	.error "sText_PageSwapSymbols may not grow beyond its original slot"
	.endif
	.if (. - sText_PageSwapSymbols) < 0x4
	.space 0x4 - (. - sText_PageSwapSymbols)
	.endif

