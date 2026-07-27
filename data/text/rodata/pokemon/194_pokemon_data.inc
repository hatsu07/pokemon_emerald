	@ src/pokedex_plus_hgss.c:146 sText_Stats_EvStr1Str2
	.globl gText_Rom_5C9771
gText_Rom_5C9771: @ 0x085C9771
	.string "{STR_VAR_1}{STR_VAR_2}$"
	.if (. - gText_Rom_5C9771) > 0x5
	.error "gText_Rom_5C9771 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9771) < 0x5
	.space 0x5 - (. - gText_Rom_5C9771)
	.endif
	.globl gUnknown_85C9776
gUnknown_85C9776: @ 0x085C9776
	.incbin "baserom.gba", 0x5c9776, 0x2

	@ src/pokedex_plus_hgss.c:146 sText_Stats_EvStr1Str2
	.globl gText_Rom_5C9778
gText_Rom_5C9778: @ 0x085C9778
	.string "{STR_VAR_1}{STR_VAR_2}$"
	.if (. - gText_Rom_5C9778) > 0x5
	.error "gText_Rom_5C9778 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9778) < 0x5
	.space 0x5 - (. - gText_Rom_5C9778)
	.endif
	.globl gUnknown_85C977D
gUnknown_85C977D: @ 0x085C977D

