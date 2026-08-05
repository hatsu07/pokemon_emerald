	@ src/strings.c:1068 gText_WonderNewsReceived
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2853
gText_Rom_2C2853: @ 0x082C2853
	.string " あたらしい ニュースが\nおくられて きました!$"
	.if (. - gText_Rom_2C2853) != 0x19
	.error "gText_Rom_2C2853 must retain its original byte length"
	.endif
