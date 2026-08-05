	@ asm/battle_dome.s:1959 BufferDomeRoundText (+2 aliases)
	.globl gText_Rom_5ABD33
gText_Rom_5ABD33: @ 0x085ABD33
	.string "けっしょう$"
	.if (. - gText_Rom_5ABD33) > 0x6
	.error "gText_Rom_5ABD33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD33) < 0x6
	.space 0x6 - (. - gText_Rom_5ABD33)
	.endif
	.space 0x3, 0x00
