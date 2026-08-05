	@ asm/battle_dome.s:1959 BufferDomeRoundText (+3 aliases)
	.globl gText_Rom_5ABD26
gText_Rom_5ABD26: @ 0x085ABD26
	.string "2かい$"
	.if (. - gText_Rom_5ABD26) > 0x4
	.error "gText_Rom_5ABD26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD26) < 0x4
	.space 0x4 - (. - gText_Rom_5ABD26)
	.endif
