	@ asm/battle_dome.s:1959 BufferDomeRoundText (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABD2A
gText_Rom_5ABD2A: @ 0x085ABD2A
	.string "じゅんけっしょう$"
	.if (. - gText_Rom_5ABD2A) != 0x9
	.error "gText_Rom_5ABD2A must retain its original byte length"
	.endif
