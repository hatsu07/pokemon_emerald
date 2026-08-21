	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_57AA98
gText_Rom_57AA98: @ 0x0857AA98
	.string "けってい{EOS}"
	.if (. - gText_Rom_57AA98) > 0x5
	.error "gText_Rom_57AA98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57AA98) < 0x5
	.space 0x5 - (. - gText_Rom_57AA98)
	.endif
	.space 0x3, 0x00
