	@ src/strings.c:1065 gText_WonderCardReceivedFrom
	.globl gText_Rom_2C2804
gText_Rom_2C2804: @ 0x082C2804
	.string "{STR_VAR_1}から ふしぎなカードが\nおくられて きました!$"
	.if (. - gText_Rom_2C2804) > 0x1a
	.error "gText_Rom_2C2804 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2804) < 0x1a
	.space 0x1a - (. - gText_Rom_2C2804)
	.endif
	.space 0x2, 0x00
