	@ asm/contest.s:4338 sub_080D8334
	.globl gText_Rom_24C008
gText_Rom_24C008: @ 0x0824C008
	.string "{0xFD}{0x02}の　{0xFD}{0x04}は\nここでは　うけなかった…{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24C008) > 0x21
	.error "gText_Rom_24C008 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C008) < 0x21
	.space 0x21 - (. - gText_Rom_24C008)
	.endif
