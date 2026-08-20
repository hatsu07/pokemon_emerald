	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BDE4
gText_Rom_24BDE4: @ 0x0824BDE4
	.string "ほかの　ポケモンを\nびっくり　させようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BDE4) > 0x25
	.error "gText_Rom_24BDE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BDE4) < 0x25
	.space 0x25 - (. - gText_Rom_24BDE4)
	.endif
