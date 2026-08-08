
	@ src/strings.c:531 gText_ExchangeService
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB184
gText_Rom_5CB184: @ 0x085CB184
	.string "ひきかえサービス$"
	.if (. - gText_Rom_5CB184) != 0x9
	.error "gText_Rom_5CB184 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB188
	.set gText_Rom_5CB188, gText_Rom_5CB184 + 0x4

	@ src/data/region_map/region_map_entries.h:98 region_map_entries_line_98 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB18D
gText_Rom_5CB18D: @ 0x085CB18D
	.string "ミナモシティ$"
	.if (. - gText_Rom_5CB18D) != 0x7
	.error "gText_Rom_5CB18D must retain its original byte length"
	.endif
	.globl gText_Rom_5CB190
	.set gText_Rom_5CB190, gText_Rom_5CB18D + 0x3

	@ src/data/region_map/region_map_entries.h:70 region_map_entries_line_70 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB194
gText_Rom_5CB194: @ 0x085CB194
	.string "カイナシティ$"
	.if (. - gText_Rom_5CB194) != 0x7
	.error "gText_Rom_5CB194 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB197
	.set gText_Rom_5CB197, gText_Rom_5CB194 + 0x3

	@ src/data/region_map/region_map_entries.h:518 region_map_entries_line_518 (+1 aliases)
	.globl gText_Rom_5CB19B
gText_Rom_5CB19B: @ 0x085CB19B
	.string "めざめのほこら$"
	.if (. - gText_Rom_5CB19B) > 0x8
	.error "gText_Rom_5CB19B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB19B) < 0x8
	.space 0x8 - (. - gText_Rom_5CB19B)
	.endif

	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_5CB1A3
gText_Rom_5CB1A3: @ 0x085CB1A3
	.string "おくりびやま$"
	.if (. - gText_Rom_5CB1A3) > 0x7
	.error "gText_Rom_5CB1A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1A3) < 0x7
	.space 0x7 - (. - gText_Rom_5CB1A3)
	.endif

	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl gText_Rom_5CB1AA
gText_Rom_5CB1AA: @ 0x085CB1AA
	.string "そらのはしら$"
	.if (. - gText_Rom_5CB1AA) > 0x7
	.error "gText_Rom_5CB1AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1AA) < 0x7
	.space 0x7 - (. - gText_Rom_5CB1AA)
	.endif

