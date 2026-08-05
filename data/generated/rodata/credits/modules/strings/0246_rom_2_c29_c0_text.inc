	@ src/strings.c:1083 gText_WonderCardSentTo
	.globl gText_Rom_2C29C0
gText_Rom_2C29C0: @ 0x082C29C0
	.string "{STR_VAR_1}に ふしぎなカードを\nおくり ました!$"
	.if (. - gText_Rom_2C29C0) > 0x16
	.error "gText_Rom_2C29C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C29C0) < 0x16
	.space 0x16 - (. - gText_Rom_2C29C0)
	.endif
	.space 0x2, 0x00
