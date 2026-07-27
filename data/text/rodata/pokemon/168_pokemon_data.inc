	@ src/pokedex_plus_hgss.c:6706 pokedex_plus_hgss_line_6706 (+1 aliases)
	.globl gText_Rom_5C8BB1
gText_Rom_5C8BB1: @ 0x085C8BB1
	.string "ホウエン$"
	.if (. - gText_Rom_5C8BB1) > 0x5
	.error "gText_Rom_5C8BB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BB1) < 0x5
	.space 0x5 - (. - gText_Rom_5C8BB1)
	.endif
	.globl gUnknown_85C8BB6
gUnknown_85C8BB6: @ 0x085C8BB6

	@ src/strings.c:970 gText_DexNational
	.globl gText_Rom_5C8BB6
gText_Rom_5C8BB6: @ 0x085C8BB6
	.string "ぜんこく$"
	.if (. - gText_Rom_5C8BB6) > 0x5
	.error "gText_Rom_5C8BB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BB6) < 0x5
	.space 0x5 - (. - gText_Rom_5C8BB6)
	.endif
	.globl gUnknown_85C8BBB
gUnknown_85C8BBB: @ 0x085C8BBB
	.incbin "baserom.gba", 0x5c8bbb, 0x33

