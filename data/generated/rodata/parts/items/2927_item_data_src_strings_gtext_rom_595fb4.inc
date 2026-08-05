	@ src/strings.c:157 gText_Coins
	.globl gText_Rom_595FB4
gText_Rom_595FB4: @ 0x08595FB4
	.string "{STR_VAR_1}まい$"
	.if (. - gText_Rom_595FB4) > 0x5
	.error "gText_Rom_595FB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_595FB4) < 0x5
	.space 0x5 - (. - gText_Rom_595FB4)
	.endif
	.space 0x3, 0x00
