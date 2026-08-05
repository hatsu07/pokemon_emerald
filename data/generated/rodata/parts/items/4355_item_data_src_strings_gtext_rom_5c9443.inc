	@ src/strings.c:157 gText_Coins
	.globl gText_Rom_5C9443
gText_Rom_5C9443: @ 0x085C9443
	.string "{STR_VAR_1}まい$"
	.if (. - gText_Rom_5C9443) > 0x5
	.error "gText_Rom_5C9443 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9443) < 0x5
	.space 0x5 - (. - gText_Rom_5C9443)
	.endif
