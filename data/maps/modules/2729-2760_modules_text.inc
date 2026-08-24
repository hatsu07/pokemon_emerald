	@ src/data/region_map/region_map_entries.h:294 region_map_entries_line_294
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C84B
gText_Rom_57C84B: @ 0x0857C84B
	.string "125ばん すいどう{EOS}"
	.if (. - gText_Rom_57C84B) != 0xb
	.error "gText_Rom_57C84B must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:301 region_map_entries_line_301
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C856
gText_Rom_57C856: @ 0x0857C856
	.string "126ばん すいどう{EOS}"
	.if (. - gText_Rom_57C856) != 0xb
	.error "gText_Rom_57C856 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:308 region_map_entries_line_308
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C861
gText_Rom_57C861: @ 0x0857C861
	.string "127ばん すいどう{EOS}"
	.if (. - gText_Rom_57C861) != 0xb
	.error "gText_Rom_57C861 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:315 region_map_entries_line_315
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C86C
gText_Rom_57C86C: @ 0x0857C86C
	.string "128ばん すいどう{EOS}"
	.if (. - gText_Rom_57C86C) != 0xb
	.error "gText_Rom_57C86C must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:322 region_map_entries_line_322
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C877
gText_Rom_57C877: @ 0x0857C877
	.string "129ばん すいどう{EOS}"
	.if (. - gText_Rom_57C877) != 0xb
	.error "gText_Rom_57C877 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:329 region_map_entries_line_329
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C882
gText_Rom_57C882: @ 0x0857C882
	.string "130ばん すいどう{EOS}"
	.if (. - gText_Rom_57C882) != 0xb
	.error "gText_Rom_57C882 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:336 region_map_entries_line_336
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C88D
gText_Rom_57C88D: @ 0x0857C88D
	.string "131ばん すいどう{EOS}"
	.if (. - gText_Rom_57C88D) != 0xb
	.error "gText_Rom_57C88D must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:343 region_map_entries_line_343
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C898
gText_Rom_57C898: @ 0x0857C898
	.string "132ばん すいどう{EOS}"
	.if (. - gText_Rom_57C898) != 0xb
	.error "gText_Rom_57C898 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:350 region_map_entries_line_350
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8A3
gText_Rom_57C8A3: @ 0x0857C8A3
	.string "133ばん すいどう{EOS}"
	.if (. - gText_Rom_57C8A3) != 0xb
	.error "gText_Rom_57C8A3 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:357 region_map_entries_line_357
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8AE
gText_Rom_57C8AE: @ 0x0857C8AE
	.string "134ばん すいどう{EOS}"
	.if (. - gText_Rom_57C8AE) != 0xb
	.error "gText_Rom_57C8AE must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:364 region_map_entries_line_364 (+10 aliases)
	.globl gText_Rom_57C8B9
gText_Rom_57C8B9: @ 0x0857C8B9
	.string "すいちゅう{EOS}"
	.if (. - gText_Rom_57C8B9) > 0x6
	.error "gText_Rom_57C8B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8B9) < 0x6
	.space 0x6 - (. - gText_Rom_57C8B9)
	.endif

