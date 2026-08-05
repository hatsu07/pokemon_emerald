	@ asm/pokemon.s:10677 sub_0806C9E8 (+1 aliases)
	.globl gText_Rom_5AB07C
gText_Rom_5AB07C: @ 0x085AB07C
	.string "めいちゅうりつ$"
	.if (. - gText_Rom_5AB07C) > 0x8
	.error "gText_Rom_5AB07C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB07C) < 0x8
	.space 0x8 - (. - gText_Rom_5AB07C)
	.endif
