	@ src/strings.c:1067 gText_WonderCardReceived
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2837
gText_Rom_2C2837: @ 0x082C2837
	.string " あたらしい ふしぎなカードが\nおくられて きました!$"
	.if (. - gText_Rom_2C2837) != 0x1c
	.error "gText_Rom_2C2837 must retain its original byte length"
	.endif
