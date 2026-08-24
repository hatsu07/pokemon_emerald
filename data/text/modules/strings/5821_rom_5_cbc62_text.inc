	@ src/strings.c:610 gText_YouCannotQuitHere
	.globl gText_YouCannotQuitHere
gText_YouCannotQuitHere: @ 0x085CBC62
	.string "ここでは とちゅうで{EOS}"
	.if (. - gText_YouCannotQuitHere) > 0xb
	.error "gText_YouCannotQuitHere may not grow beyond its original slot"
	.endif
	.if (. - gText_YouCannotQuitHere) < 0xb
	.space 0xb - (. - gText_YouCannotQuitHere)
	.endif
