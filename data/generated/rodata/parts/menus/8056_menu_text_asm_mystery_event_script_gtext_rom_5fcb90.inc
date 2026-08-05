	@ asm/mystery_event_script.s:733 MEScrCmd_givepokemon
	.globl gText_Rom_5FCB90
gText_Rom_5FCB90: @ 0x085FCB90
	.string "てもちが　いっぱいなので\n{0xFD}{0x02}は　もらえなかった…$"
	.if (. - gText_Rom_5FCB90) > 0x1a
	.error "gText_Rom_5FCB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB90) < 0x1a
	.space 0x1a - (. - gText_Rom_5FCB90)
	.endif
