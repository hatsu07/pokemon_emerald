	@ src/data/region_map/region_map_entries.h:14 region_map_entries_line_14
	.globl gText_Rom_57C6E0
gText_Rom_57C6E0: @ 0x0857C6E0
	.string "ミシロタウン$"
	.if (. - gText_Rom_57C6E0) > 0x7
	.error "gText_Rom_57C6E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6E0) < 0x7
	.space 0x7 - (. - gText_Rom_57C6E0)
	.endif

	@ src/data/region_map/region_map_entries.h:21 region_map_entries_line_21
	.globl gText_Rom_57C6E7
gText_Rom_57C6E7: @ 0x0857C6E7
	.string "コトキタウン$"
	.if (. - gText_Rom_57C6E7) > 0x7
	.error "gText_Rom_57C6E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6E7) < 0x7
	.space 0x7 - (. - gText_Rom_57C6E7)
	.endif

	@ src/data/region_map/region_map_entries.h:28 region_map_entries_line_28
	.globl gText_Rom_57C6EE
gText_Rom_57C6EE: @ 0x0857C6EE
	.string "ムロタウン$"
	.if (. - gText_Rom_57C6EE) > 0x6
	.error "gText_Rom_57C6EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6EE) < 0x6
	.space 0x6 - (. - gText_Rom_57C6EE)
	.endif

	@ src/data/region_map/region_map_entries.h:35 region_map_entries_line_35
	.globl gText_Rom_57C6F4
gText_Rom_57C6F4: @ 0x0857C6F4
	.string "フエンタウン$"
	.if (. - gText_Rom_57C6F4) > 0x7
	.error "gText_Rom_57C6F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6F4) < 0x7
	.space 0x7 - (. - gText_Rom_57C6F4)
	.endif

	@ src/data/region_map/region_map_entries.h:42 region_map_entries_line_42
	.globl gText_Rom_57C6FB
gText_Rom_57C6FB: @ 0x0857C6FB
	.string "ハジツゲタウン$"
	.if (. - gText_Rom_57C6FB) > 0x8
	.error "gText_Rom_57C6FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6FB) < 0x8
	.space 0x8 - (. - gText_Rom_57C6FB)
	.endif

	@ src/data/region_map/region_map_entries.h:49 region_map_entries_line_49
	.globl gText_Rom_57C703
gText_Rom_57C703: @ 0x0857C703
	.string "シダケタウン$"
	.if (. - gText_Rom_57C703) > 0x7
	.error "gText_Rom_57C703 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C703) < 0x7
	.space 0x7 - (. - gText_Rom_57C703)
	.endif

	@ src/data/region_map/region_map_entries.h:56 region_map_entries_line_56
	.globl gText_Rom_57C70A
gText_Rom_57C70A: @ 0x0857C70A
	.string "キナギタウン$"
	.if (. - gText_Rom_57C70A) > 0x7
	.error "gText_Rom_57C70A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C70A) < 0x7
	.space 0x7 - (. - gText_Rom_57C70A)
	.endif

	@ src/data/region_map/region_map_entries.h:63 region_map_entries_line_63
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C711
gText_Rom_57C711: @ 0x0857C711
	.string "トウカシティ$"
	.if (. - gText_Rom_57C711) != 0x7
	.error "gText_Rom_57C711 must retain its original byte length"
	.endif
	.globl gText_Rom_57C714
	.set gText_Rom_57C714, gText_Rom_57C711 + 0x3

	@ src/data/region_map/region_map_entries.h:70 region_map_entries_line_70 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C718
gText_Rom_57C718: @ 0x0857C718
	.string "カイナシティ$"
	.if (. - gText_Rom_57C718) != 0x7
	.error "gText_Rom_57C718 must retain its original byte length"
	.endif
	.globl gText_Rom_57C71B
	.set gText_Rom_57C71B, gText_Rom_57C718 + 0x3

	@ src/data/region_map/region_map_entries.h:77 region_map_entries_line_77
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C71F
gText_Rom_57C71F: @ 0x0857C71F
	.string "キンセツシティ$"
	.if (. - gText_Rom_57C71F) != 0x8
	.error "gText_Rom_57C71F must retain its original byte length"
	.endif
	.globl gText_Rom_57C723
	.set gText_Rom_57C723, gText_Rom_57C71F + 0x4

	@ src/data/region_map/region_map_entries.h:84 region_map_entries_line_84
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C727
gText_Rom_57C727: @ 0x0857C727
	.string "カナズミシティ$"
	.if (. - gText_Rom_57C727) != 0x8
	.error "gText_Rom_57C727 must retain its original byte length"
	.endif
	.globl gText_Rom_57C72B
	.set gText_Rom_57C72B, gText_Rom_57C727 + 0x4

	@ src/data/region_map/region_map_entries.h:91 region_map_entries_line_91
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C72F
gText_Rom_57C72F: @ 0x0857C72F
	.string "ヒワマキシティ$"
	.if (. - gText_Rom_57C72F) != 0x8
	.error "gText_Rom_57C72F must retain its original byte length"
	.endif
	.globl gText_Rom_57C733
	.set gText_Rom_57C733, gText_Rom_57C72F + 0x4

	@ src/data/region_map/region_map_entries.h:98 region_map_entries_line_98 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C737
gText_Rom_57C737: @ 0x0857C737
	.string "ミナモシティ$"
	.if (. - gText_Rom_57C737) != 0x7
	.error "gText_Rom_57C737 must retain its original byte length"
	.endif
	.globl gText_Rom_57C73A
	.set gText_Rom_57C73A, gText_Rom_57C737 + 0x3

