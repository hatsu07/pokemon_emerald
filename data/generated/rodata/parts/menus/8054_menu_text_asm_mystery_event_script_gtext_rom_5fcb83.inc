	@ asm/mystery_event_script.s:785 MEScrCmd_givepokemon
	.globl gText_Rom_5FCB83
gText_Rom_5FCB83: @ 0x085FCB83
	.string "{0xFD}{0x02}が　おくられてきた！$"
	.if (. - gText_Rom_5FCB83) > 0xd
	.error "gText_Rom_5FCB83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB83) < 0xd
	.space 0xd - (. - gText_Rom_5FCB83)
	.endif
