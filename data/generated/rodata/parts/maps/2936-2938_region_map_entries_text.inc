	@ src/data/region_map/region_map_entries.h:455 region_map_entries_line_455
	.globl gText_Rom_5988D6
gText_Rom_5988D6: @ 0x085988D6
	.string "りゅうせいのたき$"
	.if (. - gText_Rom_5988D6) > 0x9
	.error "gText_Rom_5988D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5988D6) < 0x9
	.space 0x9 - (. - gText_Rom_5988D6)
	.endif
	@ Decoded text from ROM range: offset=0x5988DF, size=0xB
	.string "さぎょういんつめしょ$"

	@ src/data/region_map/region_map_entries.h:434 region_map_entries_line_434
	.globl gText_Rom_5988EA
gText_Rom_5988EA: @ 0x085988EA
	.string "カナシダトンネル$"
	.if (. - gText_Rom_5988EA) > 0x9
	.error "gText_Rom_5988EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5988EA) < 0x9
	.space 0x9 - (. - gText_Rom_5988EA)
	.endif
	@ Decoded text from ROM range: offset=0x5988F3, size=0x15
	.string "ポケモンそだてや$"
	.string "サファリゾーンいりぐち$"
