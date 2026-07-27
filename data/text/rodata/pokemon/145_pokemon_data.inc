	@ asm/pokemon.s:10677 sub_0806C9E8 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB057
gText_Rom_5AB057: @ 0x085AB057
	.string "たいりょく$"
	.if (. - gText_Rom_5AB057) != 0x6
	.error "gText_Rom_5AB057 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB058
	.set gText_Rom_5AB058, gText_Rom_5AB057 + 0x1

	@ asm/pokemon.s:10677 sub_0806C9E8
	.globl gText_Rom_5AB05D
gText_Rom_5AB05D: @ 0x085AB05D
	.string "こうげきりょく$"
	.if (. - gText_Rom_5AB05D) > 0x8
	.error "gText_Rom_5AB05D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB05D) < 0x8
	.space 0x8 - (. - gText_Rom_5AB05D)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8
	.globl gText_Rom_5AB065
gText_Rom_5AB065: @ 0x085AB065
	.string "ぼうぎょりょく$"
	.if (. - gText_Rom_5AB065) > 0x8
	.error "gText_Rom_5AB065 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB065) < 0x8
	.space 0x8 - (. - gText_Rom_5AB065)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+5 aliases)
	.globl gText_Rom_5AB06D
gText_Rom_5AB06D: @ 0x085AB06D
	.string "すばやさ$"
	.if (. - gText_Rom_5AB06D) > 0x5
	.error "gText_Rom_5AB06D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB06D) < 0x5
	.space 0x5 - (. - gText_Rom_5AB06D)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+6 aliases)
	.globl gText_Rom_5AB072
gText_Rom_5AB072: @ 0x085AB072
	.string "とくこう$"
	.if (. - gText_Rom_5AB072) > 0x5
	.error "gText_Rom_5AB072 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB072) < 0x5
	.space 0x5 - (. - gText_Rom_5AB072)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+6 aliases)
	.globl gText_Rom_5AB077
gText_Rom_5AB077: @ 0x085AB077
	.string "とくぼう$"
	.if (. - gText_Rom_5AB077) > 0x5
	.error "gText_Rom_5AB077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB077) < 0x5
	.space 0x5 - (. - gText_Rom_5AB077)
	.endif

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

	@ asm/pokemon.s:10677 sub_0806C9E8 (+1 aliases)
	.globl gText_Rom_5AB084
gText_Rom_5AB084: @ 0x085AB084
	.string "かいひりつ$"
	.if (. - gText_Rom_5AB084) > 0x6
	.error "gText_Rom_5AB084 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB084) < 0x6
	.space 0x6 - (. - gText_Rom_5AB084)
	.endif
	.incbin "baserom.gba", 0x5ab08a, 0x2
	.globl gUnknown_85AB08C
gUnknown_85AB08C: @ 0x085AB08C
	.incbin "baserom.gba", 0x5ab08c, 0x20

