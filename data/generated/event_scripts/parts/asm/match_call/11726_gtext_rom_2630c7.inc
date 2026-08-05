	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_2630C7
gText_Rom_2630C7: @ 0x082630C7
	.string "きみの　ずかんを　みれば\nホウエンちほうの　ポケモンの\lすべてが　わかるようだ！$"
	.if (. - gText_Rom_2630C7) > 0x29
	.error "gText_Rom_2630C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2630C7) < 0x29
	.space 0x29 - (. - gText_Rom_2630C7)
	.endif
