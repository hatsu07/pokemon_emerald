	@ asm/contest.s:4355 sub_080D8334
	.globl gText_Rom_24BFE6
gText_Rom_24BFE6: @ 0x0824BFE6
	.string "{0xFD}{0x02}の　{0xFD}{0x04}が\nまわりに　とても　うけた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BFE6) > 0x22
	.error "gText_Rom_24BFE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BFE6) < 0x22
	.space 0x22 - (. - gText_Rom_24BFE6)
	.endif
