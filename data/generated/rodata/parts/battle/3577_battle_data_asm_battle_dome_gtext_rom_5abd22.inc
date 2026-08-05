	@ asm/battle_dome.s:1959 BufferDomeRoundText (+3 aliases)
	.globl gText_Rom_5ABD22
gText_Rom_5ABD22: @ 0x085ABD22
	.string "1かい$"
	.if (. - gText_Rom_5ABD22) > 0x4
	.error "gText_Rom_5ABD22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD22) < 0x4
	.space 0x4 - (. - gText_Rom_5ABD22)
	.endif
