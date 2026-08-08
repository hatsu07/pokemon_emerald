	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BF7C
gText_Rom_24BF7C: @ 0x0824BF7C
	.string "ちょうしが　よく　なくて\nあまり　うまく　できなかった…{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BF7C) > 0x29
	.error "gText_Rom_24BF7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BF7C) < 0x29
	.space 0x29 - (. - gText_Rom_24BF7C)
	.endif
