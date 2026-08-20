	@ asm/contest.s:4741 sub_080D8334
	.globl gText_Rom_24C0B1
gText_Rom_24C0B1: @ 0x0824C0B1
	.string "{0xFD}{0x02}の　{0xFD}{0x03}は\nめを　むけられなかった…{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24C0B1) > 0x21
	.error "gText_Rom_24C0B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0B1) < 0x21
	.space 0x21 - (. - gText_Rom_24C0B1)
	.endif
