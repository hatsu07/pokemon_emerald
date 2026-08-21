	@ src/data/region_map/region_map_entries.h:427 region_map_entries_line_427
	.globl gText_Rom_59885D
gText_Rom_59885D: @ 0x0859885D
	.string "トウカのもり{EOS}"
	.if (. - gText_Rom_59885D) > 0x7
	.error "gText_Rom_59885D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59885D) < 0x7
	.space 0x7 - (. - gText_Rom_59885D)
	.endif
	@ Decoded text from ROM range: offset=0x598864, size=0xA
	.string "ハギろうじんのこや{EOS}"

	@ src/data/region_map/region_map_entries.h:441 region_map_entries_line_441
	.globl gText_Rom_59886E
gText_Rom_59886E: @ 0x0859886E
	.string "すてられぶね{EOS}"
	.if (. - gText_Rom_59886E) > 0x7
	.error "gText_Rom_59886E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59886E) < 0x7
	.space 0x7 - (. - gText_Rom_59886E)
	.endif
	@ Decoded text from ROM range: offset=0x598875, size=0x1A
	.string "うみのいえ{EOS}"
	.string "カイナのすなはま{EOS}"
	.string "サイクリング　ロード{EOS}"

	@ src/data/region_map/region_map_entries.h:448 region_map_entries_line_448
	.globl gText_Rom_59888F
gText_Rom_59888F: @ 0x0859888F
	.string "ニューキンセツ{EOS}"
	.if (. - gText_Rom_59888F) > 0x8
	.error "gText_Rom_59888F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59888F) < 0x8
	.space 0x8 - (. - gText_Rom_59888F)
	.endif
	@ Decoded text from ROM range: offset=0x598897, size=0x11
	.string "カラクリやしき{EOS}"
	.string "ケンコーばあさん{EOS}"

