	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_591C15
gText_Rom_591C15: @ 0x08591C15
	.string "けってい{EOS}"
	.if (. - gText_Rom_591C15) > 0x5
	.error "gText_Rom_591C15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C15) < 0x5
	.space 0x5 - (. - gText_Rom_591C15)
	.endif
