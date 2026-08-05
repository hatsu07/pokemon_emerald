	@ src/data/region_map/region_map_entries.h:448 region_map_entries_line_448
	.globl gText_Rom_59888F
gText_Rom_59888F: @ 0x0859888F
	.string "ニューキンセツ$"
	.if (. - gText_Rom_59888F) > 0x8
	.error "gText_Rom_59888F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59888F) < 0x8
	.space 0x8 - (. - gText_Rom_59888F)
	.endif
	@ Decoded text from ROM range: offset=0x598897, size=0x11
	.string "カラクリやしき$"
	.string "ケンコーばあさん$"

