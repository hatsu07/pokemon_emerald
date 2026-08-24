	@ src/data/region_map/region_map_entries.h:1456 region_map_entries_line_1456
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CC9C
gText_Rom_57CC9C: @ 0x0857CC9C
	.string "へんげのどうくつ{EOS}"
	.if (. - gText_Rom_57CC9C) != 0x9
	.error "gText_Rom_57CC9C must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x57CCA5, size=0x1C
	.string "アスカナのせきしつ{EOS}"
	.string "3のしま　よこあな{EOS}"
	.string "アスカナのかぎ{EOS}"

	@ src/data/region_map/region_map_entries.h:1386 region_map_entries_line_1386 (+1 aliases)
	.globl gText_Rom_57CCC1
gText_Rom_57CCC1: @ 0x0857CCC1
	.string "たんじょうのしま{EOS}"
	.if (. - gText_Rom_57CCC1) > 0x9
	.error "gText_Rom_57CCC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CCC1) < 0x9
	.space 0x9 - (. - gText_Rom_57CCC1)
	.endif
	@ Decoded text from ROM range: offset=0x57CCCA, size=0x52
	.string "イレスのせきしつ{EOS}"
	.string "ナザンのせきしつ{EOS}"
	.string "ユゴのせきしつ{EOS}"
	.string "アレボカのせきしつ{EOS}"
	.string "コトーのせきしつ{EOS}"
	.string "アヌザのせきしつ{EOS}"
	.string "オリフのせきしつ{EOS}"
	.string "ともしびおんせん{EOS}"
	.string "あかみどりとくしゅ{EOS}"

	@ src/data/region_map/region_map_entries.h:1365 region_map_entries_line_1365
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD1C
gText_Rom_57CD1C: @ 0x0857CD1C
	.string "アクアだん アジト{EOS}"
	.if (. - gText_Rom_57CD1C) != 0xa
	.error "gText_Rom_57CD1C must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:1372 region_map_entries_line_1372
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD26
gText_Rom_57CD26: @ 0x0857CD26
	.string "マグマだん アジト{EOS}"
	.if (. - gText_Rom_57CD26) != 0xa
	.error "gText_Rom_57CD26 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:1379 region_map_entries_line_1379
	.globl gText_Rom_57CD30
gText_Rom_57CD30: @ 0x0857CD30
	.string "げんえいのとう{EOS}"
	.if (. - gText_Rom_57CD30) > 0x8
	.error "gText_Rom_57CD30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD30) < 0x8
	.space 0x8 - (. - gText_Rom_57CD30)
	.endif

	@ src/data/region_map/region_map_entries.h:1393 region_map_entries_line_1393 (+1 aliases)
	.globl gText_Rom_57CD38
gText_Rom_57CD38: @ 0x0857CD38
	.string "さいはてのことう{EOS}"
	.if (. - gText_Rom_57CD38) > 0x9
	.error "gText_Rom_57CD38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD38) < 0x9
	.space 0x9 - (. - gText_Rom_57CD38)
	.endif

	@ src/data/region_map/region_map_entries.h:1400 region_map_entries_line_1400
	.globl gText_Rom_57CD41
gText_Rom_57CD41: @ 0x0857CD41
	.string "アトリエのあな{EOS}"
	.if (. - gText_Rom_57CD41) > 0x8
	.error "gText_Rom_57CD41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD41) < 0x8
	.space 0x8 - (. - gText_Rom_57CD41)
	.endif

	@ src/data/region_map/region_map_entries.h:1407 region_map_entries_line_1407
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD49
gText_Rom_57CD49: @ 0x0857CD49
	.string "うみのどうくつ{EOS}"
	.if (. - gText_Rom_57CD49) != 0x8
	.error "gText_Rom_57CD49 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:1421 region_map_entries_line_1421
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD51
gText_Rom_57CD51: @ 0x0857CD51
	.string "りくのどうくつ{EOS}"
	.if (. - gText_Rom_57CD51) != 0x8
	.error "gText_Rom_57CD51 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:1449 region_map_entries_line_1449
	.globl gText_Rom_57CD59
gText_Rom_57CD59: @ 0x0857CD59
	.string "さばくのちかどう{EOS}"
	.if (. - gText_Rom_57CD59) > 0x9
	.error "gText_Rom_57CD59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD59) < 0x9
	.space 0x9 - (. - gText_Rom_57CD59)
	.endif

	@ src/data/region_map/region_map_entries.h:1470 region_map_entries_line_1470
	.globl gText_Rom_57CD62
gText_Rom_57CD62: @ 0x0857CD62
	.string "トレーナーヒル{EOS}"
	.if (. - gText_Rom_57CD62) > 0x8
	.error "gText_Rom_57CD62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD62) < 0x8
	.space 0x8 - (. - gText_Rom_57CD62)
	.endif
	.space 0x2, 0x00
