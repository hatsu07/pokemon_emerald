
	@ asm/battle_dome.s:1959 BufferDomeRoundText (+3 aliases)
	.globl gText_Rom_5ABD22
gText_Rom_5ABD22: @ 0x085ABD22
	.string "1かい{EOS}"
	.if (. - gText_Rom_5ABD22) > 0x4
	.error "gText_Rom_5ABD22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD22) < 0x4
	.space 0x4 - (. - gText_Rom_5ABD22)
	.endif

	@ asm/battle_dome.s:1959 BufferDomeRoundText (+3 aliases)
	.globl gText_Rom_5ABD26
gText_Rom_5ABD26: @ 0x085ABD26
	.string "2かい{EOS}"
	.if (. - gText_Rom_5ABD26) > 0x4
	.error "gText_Rom_5ABD26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD26) < 0x4
	.space 0x4 - (. - gText_Rom_5ABD26)
	.endif

	@ asm/battle_dome.s:1959 BufferDomeRoundText (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABD2A
gText_Rom_5ABD2A: @ 0x085ABD2A
	.string "じゅんけっしょう{EOS}"
	.if (. - gText_Rom_5ABD2A) != 0x9
	.error "gText_Rom_5ABD2A must retain its original byte length"
	.endif
	.globl gText_Rom_5ABD2D
	.set gText_Rom_5ABD2D, gText_Rom_5ABD2A + 0x3

	@ asm/battle_dome.s:1959 BufferDomeRoundText (+2 aliases)
	.globl gText_Rom_5ABD33
gText_Rom_5ABD33: @ 0x085ABD33
	.string "けっしょう{EOS}"
	.if (. - gText_Rom_5ABD33) > 0x6
	.error "gText_Rom_5ABD33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD33) < 0x6
	.space 0x6 - (. - gText_Rom_5ABD33)
	.endif
	.space 0x3, 0x00
