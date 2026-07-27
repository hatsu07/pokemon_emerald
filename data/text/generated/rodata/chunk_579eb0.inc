	@ src/data/easy_chat/easy_chat_groups.h:134 easy_chat_groups_line_134
	.globl gText_Rom_579EB0
gText_Rom_579EB0: @ 0x08579EB0
	.string "あれこれ$"
	.if (. - gText_Rom_579EB0) > 0x5
	.error "gText_Rom_579EB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EB0) < 0x5
	.space 0x5 - (. - gText_Rom_579EB0)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:141 easy_chat_groups_line_141
	.globl gText_Rom_579EB5
gText_Rom_579EB5: @ 0x08579EB5
	.string "くりかえし$"
	.if (. - gText_Rom_579EB5) > 0x6
	.error "gText_Rom_579EB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EB5) < 0x6
	.space 0x6 - (. - gText_Rom_579EB5)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gText_Rom_579EBB
gText_Rom_579EBB: @ 0x08579EBB
	.string "イベント$"
	.if (. - gText_Rom_579EBB) > 0x5
	.error "gText_Rom_579EBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EBB) < 0x5
	.space 0x5 - (. - gText_Rom_579EBB)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:155 easy_chat_groups_line_155
	.globl gText_Rom_579EC0
gText_Rom_579EC0: @ 0x08579EC0
	.string "わざ1$"
	.if (. - gText_Rom_579EC0) > 0x4
	.error "gText_Rom_579EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EC0) < 0x4
	.space 0x4 - (. - gText_Rom_579EC0)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:162 easy_chat_groups_line_162
	.globl gText_Rom_579EC4
gText_Rom_579EC4: @ 0x08579EC4
	.string "わざ2$"
	.if (. - gText_Rom_579EC4) > 0x4
	.error "gText_Rom_579EC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EC4) < 0x4
	.space 0x4 - (. - gText_Rom_579EC4)
	.endif
	.incbin "baserom.gba", 0x579ec8, 0x3

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:64 easy_chat_group_lifestyle_line_64
	.globl gText_Rom_579ECB
gText_Rom_579ECB: @ 0x08579ECB
	.string "ことば$"
	.if (. - gText_Rom_579ECB) > 0x4
	.error "gText_Rom_579ECB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579ECB) < 0x4
	.space 0x4 - (. - gText_Rom_579ECB)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:176 easy_chat_groups_line_176
	.globl gText_Rom_579ECF
gText_Rom_579ECF: @ 0x08579ECF
	.string "ポケモン2$"
	.if (. - gText_Rom_579ECF) > 0x6
	.error "gText_Rom_579ECF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579ECF) < 0x6
	.space 0x6 - (. - gText_Rom_579ECF)
	.endif
	.incbin "baserom.gba", 0x579ed5, 0x3
	.globl gUnknown_8579ED8
gUnknown_8579ED8: @ 0x08579ED8
	.incbin "baserom.gba", 0x579ed8, 0x58
	.globl gUnknown_8579F30
gUnknown_8579F30: @ 0x08579F30
	.incbin "baserom.gba", 0x579f30, 0x4
	.globl gUnknown_8579F34
gUnknown_8579F34: @ 0x08579F34
	.incbin "baserom.gba", 0x579f34, 0x4
	.globl gUnknown_8579F38
gUnknown_8579F38: @ 0x08579F38
	.incbin "baserom.gba", 0x579f38, 0x20
	.globl gUnknown_8579F58
gUnknown_8579F58: @ 0x08579F58
	.incbin "baserom.gba", 0x579f58, 0x320
	.globl gUnknown_857A278
gUnknown_857A278: @ 0x0857A278
	.incbin "baserom.gba", 0x57a278, 0x20
	.globl gUnknown_857A298
gUnknown_857A298: @ 0x0857A298
	.incbin "baserom.gba", 0x57a298, 0x800

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_57AA98
gText_Rom_57AA98: @ 0x0857AA98
	.string "けってい$"
	.if (. - gText_Rom_57AA98) > 0x5
	.error "gText_Rom_57AA98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57AA98) < 0x5
	.space 0x5 - (. - gText_Rom_57AA98)
	.endif
	.incbin "baserom.gba", 0x57aa9d, 0x3
	.globl gUnknown_857AAA0
gUnknown_857AAA0: @ 0x0857AAA0
	.incbin "baserom.gba", 0x57aaa0, 0x8
	.globl gUnknown_857AAA8
gUnknown_857AAA8: @ 0x0857AAA8
	.incbin "baserom.gba", 0x57aaa8, 0x58
	.globl gUnknown_857AB00
gUnknown_857AB00: @ 0x0857AB00
	.incbin "baserom.gba", 0x57ab00, 0x38
	.globl gUnknown_857AB38
gUnknown_857AB38: @ 0x0857AB38
	.incbin "baserom.gba", 0x57ab38, 0x8
	.globl gUnknown_857AB40
gUnknown_857AB40: @ 0x0857AB40
	.incbin "baserom.gba", 0x57ab40, 0x88
	.globl gUnknown_857ABC8
gUnknown_857ABC8: @ 0x0857ABC8
	.incbin "baserom.gba", 0x57abc8, 0x40
	.globl gUnknown_857AC08
gUnknown_857AC08: @ 0x0857AC08
	.incbin "baserom.gba", 0x57ac08, 0xc
	.globl gUnknown_857AC14
gUnknown_857AC14: @ 0x0857AC14
	.incbin "baserom.gba", 0x57ac14, 0x20
	.globl gUnknown_857AC34
gUnknown_857AC34: @ 0x0857AC34
	.incbin "baserom.gba", 0x57ac34, 0x20
	.globl gUnknown_857AC54
gUnknown_857AC54: @ 0x0857AC54
	.incbin "baserom.gba", 0x57ac54, 0x18
	.globl gUnknown_857AC6C
gUnknown_857AC6C: @ 0x0857AC6C
	.incbin "baserom.gba", 0x57ac6c, 0x230
	.globl gUnknown_857AE9C
gUnknown_857AE9C: @ 0x0857AE9C
	.incbin "baserom.gba", 0x57ae9c, 0x10
	.globl gUnknown_857AEAC
gUnknown_857AEAC: @ 0x0857AEAC
	.incbin "baserom.gba", 0x57aeac, 0x8
	.globl gUnknown_857AEB4
gUnknown_857AEB4: @ 0x0857AEB4
	.incbin "baserom.gba", 0x57aeb4, 0xc
	.globl gUnknown_857AEC0
gUnknown_857AEC0: @ 0x0857AEC0
	.incbin "baserom.gba", 0x57aec0, 0x18
	.globl gUnknown_857AED8
gUnknown_857AED8: @ 0x0857AED8
	.incbin "baserom.gba", 0x57aed8, 0x4
	.globl gUnknown_857AEDC
gUnknown_857AEDC: @ 0x0857AEDC
	.incbin "baserom.gba", 0x57aedc, 0x8
	.globl gUnknown_857AEE4
gUnknown_857AEE4: @ 0x0857AEE4
	.incbin "baserom.gba", 0x57aee4, 0xfc
	.globl gUnknown_857AFE0
gUnknown_857AFE0: @ 0x0857AFE0
	.incbin "baserom.gba", 0x57afe0, 0x74
	.globl gUnknown_857B054
gUnknown_857B054: @ 0x0857B054
	.incbin "baserom.gba", 0x57b054, 0x60
	.globl gUnknown_857B0B4
gUnknown_857B0B4: @ 0x0857B0B4
	.incbin "baserom.gba", 0x57b0b4, 0x30
	.globl gUnknown_857B0E4
gUnknown_857B0E4: @ 0x0857B0E4
	.incbin "baserom.gba", 0x57b0e4, 0x8
	.globl gUnknown_857B0EC
gUnknown_857B0EC: @ 0x0857B0EC
	.incbin "baserom.gba", 0x57b0ec, 0x8
	.globl gUnknown_857B0F4
gUnknown_857B0F4: @ 0x0857B0F4
	.incbin "baserom.gba", 0x57b0f4, 0x10
	.globl gUnknown_857B104
gUnknown_857B104: @ 0x0857B104
	.incbin "baserom.gba", 0x57b104, 0x8
	.globl gUnknown_857B10C
gUnknown_857B10C: @ 0x0857B10C
	.incbin "baserom.gba", 0x57b10c, 0xd0
	.globl gUnknown_857B1DC
gUnknown_857B1DC: @ 0x0857B1DC
	.incbin "baserom.gba", 0x57b1dc, 0x44
	.globl gUnknown_857B220
gUnknown_857B220: @ 0x0857B220
	.incbin "baserom.gba", 0x57b220, 0xec
	.globl gUnknown_857B30C
gUnknown_857B30C: @ 0x0857B30C
	.incbin "baserom.gba", 0x57b30c, 0x40
	.globl gUnknown_857B34C
gUnknown_857B34C: @ 0x0857B34C
	.incbin "baserom.gba", 0x57b34c, 0xd64
	.globl gUnknown_857C0B0
gUnknown_857C0B0: @ 0x0857C0B0
	.incbin "baserom.gba", 0x57c0b0, 0x34c
	.globl gUnknown_857C3FC
gUnknown_857C3FC: @ 0x0857C3FC
	.incbin "baserom.gba", 0x57c3fc, 0x20
	.globl gUnknown_857C41C
gUnknown_857C41C: @ 0x0857C41C
	.incbin "baserom.gba", 0x57c41c, 0x80
	.globl gUnknown_857C49C
gUnknown_857C49C: @ 0x0857C49C
	.incbin "baserom.gba", 0x57c49c, 0x20
	.globl gUnknown_857C4BC
gUnknown_857C4BC: @ 0x0857C4BC
	.incbin "baserom.gba", 0x57c4bc, 0x80
	.globl gUnknown_857C53C
gUnknown_857C53C: @ 0x0857C53C
	.incbin "baserom.gba", 0x57c53c, 0x1a4

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

	@ src/data/region_map/region_map_entries.h:105 region_map_entries_line_105
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C73E
gText_Rom_57C73E: @ 0x0857C73E
	.string "トクサネシティ$"
	.if (. - gText_Rom_57C73E) != 0x8
	.error "gText_Rom_57C73E must retain its original byte length"
	.endif
	.globl gText_Rom_57C742
	.set gText_Rom_57C742, gText_Rom_57C73E + 0x4

	@ src/data/region_map/region_map_entries.h:112 region_map_entries_line_112
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C746
gText_Rom_57C746: @ 0x0857C746
	.string "ルネシティ$"
	.if (. - gText_Rom_57C746) != 0x6
	.error "gText_Rom_57C746 must retain its original byte length"
	.endif
	.globl gText_Rom_57C748
	.set gText_Rom_57C748, gText_Rom_57C746 + 0x2

	@ src/data/region_map/region_map_entries.h:119 region_map_entries_line_119
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C74C
gText_Rom_57C74C: @ 0x0857C74C
	.string "サイユウシティ$"
	.if (. - gText_Rom_57C74C) != 0x8
	.error "gText_Rom_57C74C must retain its original byte length"
	.endif
	.globl gText_Rom_57C750
	.set gText_Rom_57C750, gText_Rom_57C74C + 0x4

	@ src/data/region_map/region_map_entries.h:126 region_map_entries_line_126
	.globl gText_Rom_57C754
gText_Rom_57C754: @ 0x0857C754
	.string "101ばん どうろ$"
	.if (. - gText_Rom_57C754) > 0xa
	.error "gText_Rom_57C754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C754) < 0xa
	.space 0xa - (. - gText_Rom_57C754)
	.endif

	@ src/data/region_map/region_map_entries.h:133 region_map_entries_line_133
	.globl gText_Rom_57C75E
gText_Rom_57C75E: @ 0x0857C75E
	.string "102ばん どうろ$"
	.if (. - gText_Rom_57C75E) > 0xa
	.error "gText_Rom_57C75E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C75E) < 0xa
	.space 0xa - (. - gText_Rom_57C75E)
	.endif

	@ src/data/region_map/region_map_entries.h:140 region_map_entries_line_140
	.globl gText_Rom_57C768
gText_Rom_57C768: @ 0x0857C768
	.string "103ばん どうろ$"
	.if (. - gText_Rom_57C768) > 0xa
	.error "gText_Rom_57C768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C768) < 0xa
	.space 0xa - (. - gText_Rom_57C768)
	.endif

	@ src/data/region_map/region_map_entries.h:147 region_map_entries_line_147
	.globl gText_Rom_57C772
gText_Rom_57C772: @ 0x0857C772
	.string "104ばん どうろ$"
	.if (. - gText_Rom_57C772) > 0xa
	.error "gText_Rom_57C772 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C772) < 0xa
	.space 0xa - (. - gText_Rom_57C772)
	.endif

	@ src/data/region_map/region_map_entries.h:154 region_map_entries_line_154
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C77C
gText_Rom_57C77C: @ 0x0857C77C
	.string "105ばん すいどう$"
	.if (. - gText_Rom_57C77C) != 0xb
	.error "gText_Rom_57C77C must retain its original byte length"
	.endif
	.globl gText_Rom_57C783
	.set gText_Rom_57C783, gText_Rom_57C77C + 0x7

	@ src/data/region_map/region_map_entries.h:161 region_map_entries_line_161
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C787
gText_Rom_57C787: @ 0x0857C787
	.string "106ばん すいどう$"
	.if (. - gText_Rom_57C787) != 0xb
	.error "gText_Rom_57C787 must retain its original byte length"
	.endif
	.globl gText_Rom_57C78E
	.set gText_Rom_57C78E, gText_Rom_57C787 + 0x7

	@ src/data/region_map/region_map_entries.h:168 region_map_entries_line_168
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C792
gText_Rom_57C792: @ 0x0857C792
	.string "107ばん すいどう$"
	.if (. - gText_Rom_57C792) != 0xb
	.error "gText_Rom_57C792 must retain its original byte length"
	.endif
	.globl gText_Rom_57C799
	.set gText_Rom_57C799, gText_Rom_57C792 + 0x7

	@ src/data/region_map/region_map_entries.h:175 region_map_entries_line_175
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C79D
gText_Rom_57C79D: @ 0x0857C79D
	.string "108ばん すいどう$"
	.if (. - gText_Rom_57C79D) != 0xb
	.error "gText_Rom_57C79D must retain its original byte length"
	.endif
	.globl gText_Rom_57C7A4
	.set gText_Rom_57C7A4, gText_Rom_57C79D + 0x7

	@ src/data/region_map/region_map_entries.h:182 region_map_entries_line_182
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C7A8
gText_Rom_57C7A8: @ 0x0857C7A8
	.string "109ばん すいどう$"
	.if (. - gText_Rom_57C7A8) != 0xb
	.error "gText_Rom_57C7A8 must retain its original byte length"
	.endif
	.globl gText_Rom_57C7AF
	.set gText_Rom_57C7AF, gText_Rom_57C7A8 + 0x7

	@ src/data/region_map/region_map_entries.h:189 region_map_entries_line_189
	.globl gText_Rom_57C7B3
gText_Rom_57C7B3: @ 0x0857C7B3
	.string "110ばん どうろ$"
	.if (. - gText_Rom_57C7B3) > 0xa
	.error "gText_Rom_57C7B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7B3) < 0xa
	.space 0xa - (. - gText_Rom_57C7B3)
	.endif

	@ src/data/region_map/region_map_entries.h:196 region_map_entries_line_196
	.globl gText_Rom_57C7BD
gText_Rom_57C7BD: @ 0x0857C7BD
	.string "111ばん どうろ$"
	.if (. - gText_Rom_57C7BD) > 0xa
	.error "gText_Rom_57C7BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7BD) < 0xa
	.space 0xa - (. - gText_Rom_57C7BD)
	.endif

	@ src/data/region_map/region_map_entries.h:203 region_map_entries_line_203
	.globl gText_Rom_57C7C7
gText_Rom_57C7C7: @ 0x0857C7C7
	.string "112ばん どうろ$"
	.if (. - gText_Rom_57C7C7) > 0xa
	.error "gText_Rom_57C7C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7C7) < 0xa
	.space 0xa - (. - gText_Rom_57C7C7)
	.endif

	@ src/data/region_map/region_map_entries.h:210 region_map_entries_line_210
	.globl gText_Rom_57C7D1
gText_Rom_57C7D1: @ 0x0857C7D1
	.string "113ばん どうろ$"
	.if (. - gText_Rom_57C7D1) > 0xa
	.error "gText_Rom_57C7D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7D1) < 0xa
	.space 0xa - (. - gText_Rom_57C7D1)
	.endif

	@ src/data/region_map/region_map_entries.h:217 region_map_entries_line_217
	.globl gText_Rom_57C7DB
gText_Rom_57C7DB: @ 0x0857C7DB
	.string "114ばん どうろ$"
	.if (. - gText_Rom_57C7DB) > 0xa
	.error "gText_Rom_57C7DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7DB) < 0xa
	.space 0xa - (. - gText_Rom_57C7DB)
	.endif

	@ src/data/region_map/region_map_entries.h:224 region_map_entries_line_224
	.globl gText_Rom_57C7E5
gText_Rom_57C7E5: @ 0x0857C7E5
	.string "115ばん どうろ$"
	.if (. - gText_Rom_57C7E5) > 0xa
	.error "gText_Rom_57C7E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7E5) < 0xa
	.space 0xa - (. - gText_Rom_57C7E5)
	.endif

	@ src/data/region_map/region_map_entries.h:231 region_map_entries_line_231
	.globl gText_Rom_57C7EF
gText_Rom_57C7EF: @ 0x0857C7EF
	.string "116ばん どうろ$"
	.if (. - gText_Rom_57C7EF) > 0xa
	.error "gText_Rom_57C7EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7EF) < 0xa
	.space 0xa - (. - gText_Rom_57C7EF)
	.endif

	@ src/data/region_map/region_map_entries.h:238 region_map_entries_line_238
	.globl gText_Rom_57C7F9
gText_Rom_57C7F9: @ 0x0857C7F9
	.string "117ばん どうろ$"
	.if (. - gText_Rom_57C7F9) > 0xa
	.error "gText_Rom_57C7F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7F9) < 0xa
	.space 0xa - (. - gText_Rom_57C7F9)
	.endif

	@ src/data/region_map/region_map_entries.h:245 region_map_entries_line_245
	.globl gText_Rom_57C803
gText_Rom_57C803: @ 0x0857C803
	.string "118ばん どうろ$"
	.if (. - gText_Rom_57C803) > 0xa
	.error "gText_Rom_57C803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C803) < 0xa
	.space 0xa - (. - gText_Rom_57C803)
	.endif

	@ src/data/region_map/region_map_entries.h:252 region_map_entries_line_252
	.globl gText_Rom_57C80D
gText_Rom_57C80D: @ 0x0857C80D
	.string "119ばん どうろ$"
	.if (. - gText_Rom_57C80D) > 0xa
	.error "gText_Rom_57C80D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C80D) < 0xa
	.space 0xa - (. - gText_Rom_57C80D)
	.endif

	@ src/data/region_map/region_map_entries.h:259 region_map_entries_line_259
	.globl gText_Rom_57C817
gText_Rom_57C817: @ 0x0857C817
	.string "120ばん どうろ$"
	.if (. - gText_Rom_57C817) > 0xa
	.error "gText_Rom_57C817 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C817) < 0xa
	.space 0xa - (. - gText_Rom_57C817)
	.endif

	@ src/data/region_map/region_map_entries.h:266 region_map_entries_line_266
	.globl gText_Rom_57C821
gText_Rom_57C821: @ 0x0857C821
	.string "121ばん どうろ$"
	.if (. - gText_Rom_57C821) > 0xa
	.error "gText_Rom_57C821 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C821) < 0xa
	.space 0xa - (. - gText_Rom_57C821)
	.endif

	@ src/data/region_map/region_map_entries.h:273 region_map_entries_line_273
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C82B
gText_Rom_57C82B: @ 0x0857C82B
	.string "122ばん すいどう$"
	.if (. - gText_Rom_57C82B) != 0xb
	.error "gText_Rom_57C82B must retain its original byte length"
	.endif
	.globl gText_Rom_57C832
	.set gText_Rom_57C832, gText_Rom_57C82B + 0x7

	@ src/data/region_map/region_map_entries.h:280 region_map_entries_line_280
	.globl gText_Rom_57C836
gText_Rom_57C836: @ 0x0857C836
	.string "123ばん どうろ$"
	.if (. - gText_Rom_57C836) > 0xa
	.error "gText_Rom_57C836 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C836) < 0xa
	.space 0xa - (. - gText_Rom_57C836)
	.endif

	@ src/data/region_map/region_map_entries.h:287 region_map_entries_line_287
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C840
gText_Rom_57C840: @ 0x0857C840
	.string "124ばん すいどう$"
	.if (. - gText_Rom_57C840) != 0xb
	.error "gText_Rom_57C840 must retain its original byte length"
	.endif
	.globl gText_Rom_57C847
	.set gText_Rom_57C847, gText_Rom_57C840 + 0x7

	@ src/data/region_map/region_map_entries.h:294 region_map_entries_line_294
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C84B
gText_Rom_57C84B: @ 0x0857C84B
	.string "125ばん すいどう$"
	.if (. - gText_Rom_57C84B) != 0xb
	.error "gText_Rom_57C84B must retain its original byte length"
	.endif
	.globl gText_Rom_57C852
	.set gText_Rom_57C852, gText_Rom_57C84B + 0x7

	@ src/data/region_map/region_map_entries.h:301 region_map_entries_line_301
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C856
gText_Rom_57C856: @ 0x0857C856
	.string "126ばん すいどう$"
	.if (. - gText_Rom_57C856) != 0xb
	.error "gText_Rom_57C856 must retain its original byte length"
	.endif
	.globl gText_Rom_57C85D
	.set gText_Rom_57C85D, gText_Rom_57C856 + 0x7

	@ src/data/region_map/region_map_entries.h:308 region_map_entries_line_308
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C861
gText_Rom_57C861: @ 0x0857C861
	.string "127ばん すいどう$"
	.if (. - gText_Rom_57C861) != 0xb
	.error "gText_Rom_57C861 must retain its original byte length"
	.endif
	.globl gText_Rom_57C868
	.set gText_Rom_57C868, gText_Rom_57C861 + 0x7

	@ src/data/region_map/region_map_entries.h:315 region_map_entries_line_315
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C86C
gText_Rom_57C86C: @ 0x0857C86C
	.string "128ばん すいどう$"
	.if (. - gText_Rom_57C86C) != 0xb
	.error "gText_Rom_57C86C must retain its original byte length"
	.endif
	.globl gText_Rom_57C873
	.set gText_Rom_57C873, gText_Rom_57C86C + 0x7

	@ src/data/region_map/region_map_entries.h:322 region_map_entries_line_322
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C877
gText_Rom_57C877: @ 0x0857C877
	.string "129ばん すいどう$"
	.if (. - gText_Rom_57C877) != 0xb
	.error "gText_Rom_57C877 must retain its original byte length"
	.endif
	.globl gText_Rom_57C87E
	.set gText_Rom_57C87E, gText_Rom_57C877 + 0x7

	@ src/data/region_map/region_map_entries.h:329 region_map_entries_line_329
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C882
gText_Rom_57C882: @ 0x0857C882
	.string "130ばん すいどう$"
	.if (. - gText_Rom_57C882) != 0xb
	.error "gText_Rom_57C882 must retain its original byte length"
	.endif
	.globl gText_Rom_57C889
	.set gText_Rom_57C889, gText_Rom_57C882 + 0x7

	@ src/data/region_map/region_map_entries.h:336 region_map_entries_line_336
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C88D
gText_Rom_57C88D: @ 0x0857C88D
	.string "131ばん すいどう$"
	.if (. - gText_Rom_57C88D) != 0xb
	.error "gText_Rom_57C88D must retain its original byte length"
	.endif
	.globl gText_Rom_57C894
	.set gText_Rom_57C894, gText_Rom_57C88D + 0x7

	@ src/data/region_map/region_map_entries.h:343 region_map_entries_line_343
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C898
gText_Rom_57C898: @ 0x0857C898
	.string "132ばん すいどう$"
	.if (. - gText_Rom_57C898) != 0xb
	.error "gText_Rom_57C898 must retain its original byte length"
	.endif
	.globl gText_Rom_57C89F
	.set gText_Rom_57C89F, gText_Rom_57C898 + 0x7

	@ src/data/region_map/region_map_entries.h:350 region_map_entries_line_350
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8A3
gText_Rom_57C8A3: @ 0x0857C8A3
	.string "133ばん すいどう$"
	.if (. - gText_Rom_57C8A3) != 0xb
	.error "gText_Rom_57C8A3 must retain its original byte length"
	.endif
	.globl gText_Rom_57C8AA
	.set gText_Rom_57C8AA, gText_Rom_57C8A3 + 0x7

	@ src/data/region_map/region_map_entries.h:357 region_map_entries_line_357
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8AE
gText_Rom_57C8AE: @ 0x0857C8AE
	.string "134ばん すいどう$"
	.if (. - gText_Rom_57C8AE) != 0xb
	.error "gText_Rom_57C8AE must retain its original byte length"
	.endif
	.globl gText_Rom_57C8B5
	.set gText_Rom_57C8B5, gText_Rom_57C8AE + 0x7

	@ src/data/region_map/region_map_entries.h:364 region_map_entries_line_364 (+10 aliases)
	.globl gText_Rom_57C8B9
gText_Rom_57C8B9: @ 0x0857C8B9
	.string "すいちゅう$"
	.if (. - gText_Rom_57C8B9) > 0x6
	.error "gText_Rom_57C8B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8B9) < 0x6
	.space 0x6 - (. - gText_Rom_57C8B9)
	.endif

	@ src/data/region_map/region_map_entries.h:399 region_map_entries_line_399
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8BF
gText_Rom_57C8BF: @ 0x0857C8BF
	.string "いしのどうくつ$"
	.if (. - gText_Rom_57C8BF) != 0x8
	.error "gText_Rom_57C8BF must retain its original byte length"
	.endif
	.globl gText_Rom_57C8C2
	.set gText_Rom_57C8C2, gText_Rom_57C8BF + 0x3

	@ src/data/region_map/region_map_entries.h:406 region_map_entries_line_406
	.globl gText_Rom_57C8C7
gText_Rom_57C8C7: @ 0x0857C8C7
	.string "えんとつやま$"
	.if (. - gText_Rom_57C8C7) > 0x7
	.error "gText_Rom_57C8C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8C7) < 0x7
	.space 0x7 - (. - gText_Rom_57C8C7)
	.endif

	@ src/data/region_map/region_map_entries.h:413 region_map_entries_line_413
	.globl gText_Rom_57C8CE
gText_Rom_57C8CE: @ 0x0857C8CE
	.string "サファリゾーン$"
	.if (. - gText_Rom_57C8CE) > 0x8
	.error "gText_Rom_57C8CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8CE) < 0x8
	.space 0x8 - (. - gText_Rom_57C8CE)
	.endif

	@ src/data/info_viewer.h:25 sInfoText_TitleFrontierRules (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8D6
gText_Rom_57C8D6: @ 0x0857C8D6
	.string "バトルフロンティア$"
	.if (. - gText_Rom_57C8D6) != 0xa
	.error "gText_Rom_57C8D6 must retain its original byte length"
	.endif
	.globl gText_Rom_57C8D9
	.set gText_Rom_57C8D9, gText_Rom_57C8D6 + 0x3

	@ src/data/region_map/region_map_entries.h:427 region_map_entries_line_427
	.globl gText_Rom_57C8E0
gText_Rom_57C8E0: @ 0x0857C8E0
	.string "トウカのもり$"
	.if (. - gText_Rom_57C8E0) > 0x7
	.error "gText_Rom_57C8E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8E0) < 0x7
	.space 0x7 - (. - gText_Rom_57C8E0)
	.endif

	@ src/data/region_map/region_map_entries.h:434 region_map_entries_line_434
	.globl gText_Rom_57C8E7
gText_Rom_57C8E7: @ 0x0857C8E7
	.string "カナシダトンネル$"
	.if (. - gText_Rom_57C8E7) > 0x9
	.error "gText_Rom_57C8E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8E7) < 0x9
	.space 0x9 - (. - gText_Rom_57C8E7)
	.endif

	@ src/data/region_map/region_map_entries.h:441 region_map_entries_line_441
	.globl gText_Rom_57C8F0
gText_Rom_57C8F0: @ 0x0857C8F0
	.string "すてられぶね$"
	.if (. - gText_Rom_57C8F0) > 0x7
	.error "gText_Rom_57C8F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8F0) < 0x7
	.space 0x7 - (. - gText_Rom_57C8F0)
	.endif

	@ src/data/region_map/region_map_entries.h:448 region_map_entries_line_448
	.globl gText_Rom_57C8F7
gText_Rom_57C8F7: @ 0x0857C8F7
	.string "ニューキンセツ$"
	.if (. - gText_Rom_57C8F7) > 0x8
	.error "gText_Rom_57C8F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8F7) < 0x8
	.space 0x8 - (. - gText_Rom_57C8F7)
	.endif

	@ src/data/region_map/region_map_entries.h:455 region_map_entries_line_455
	.globl gText_Rom_57C8FF
gText_Rom_57C8FF: @ 0x0857C8FF
	.string "りゅうせいのたき$"
	.if (. - gText_Rom_57C8FF) > 0x9
	.error "gText_Rom_57C8FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8FF) < 0x9
	.space 0x9 - (. - gText_Rom_57C8FF)
	.endif

	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_57C908
gText_Rom_57C908: @ 0x0857C908
	.string "おくりびやま$"
	.if (. - gText_Rom_57C908) > 0x7
	.error "gText_Rom_57C908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C908) < 0x7
	.space 0x7 - (. - gText_Rom_57C908)
	.endif
	.incbin "baserom.gba", 0x57c90f, 0x5

	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_57C914
gText_Rom_57C914: @ 0x0857C914
	.string "アジト$"
	.if (. - gText_Rom_57C914) > 0x4
	.error "gText_Rom_57C914 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C914) < 0x4
	.space 0x4 - (. - gText_Rom_57C914)
	.endif

	@ src/data/region_map/region_map_entries.h:483 region_map_entries_line_483
	.globl gText_Rom_57C918
gText_Rom_57C918: @ 0x0857C918
	.string "あさせのほらあな$"
	.if (. - gText_Rom_57C918) > 0x9
	.error "gText_Rom_57C918 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C918) < 0x9
	.space 0x9 - (. - gText_Rom_57C918)
	.endif

	@ src/data/region_map/region_map_entries.h:490 region_map_entries_line_490
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C921
gText_Rom_57C921: @ 0x0857C921
	.string "かいていどうくつ$"
	.if (. - gText_Rom_57C921) != 0x9
	.error "gText_Rom_57C921 must retain its original byte length"
	.endif
	.globl gText_Rom_57C925
	.set gText_Rom_57C925, gText_Rom_57C921 + 0x4

	@ src/data/region_map/region_map_entries.h:504 region_map_entries_line_504
	.globl gText_Rom_57C92A
gText_Rom_57C92A: @ 0x0857C92A
	.string "チャンピオンロード$"
	.if (. - gText_Rom_57C92A) > 0xa
	.error "gText_Rom_57C92A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C92A) < 0xa
	.space 0xa - (. - gText_Rom_57C92A)
	.endif
	.incbin "baserom.gba", 0x57c934, 0x7

	@ src/data/region_map/region_map_entries.h:518 region_map_entries_line_518 (+1 aliases)
	.globl gText_Rom_57C93B
gText_Rom_57C93B: @ 0x0857C93B
	.string "めざめのほこら$"
	.if (. - gText_Rom_57C93B) > 0x8
	.error "gText_Rom_57C93B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C93B) < 0x8
	.space 0x8 - (. - gText_Rom_57C93B)
	.endif
	.incbin "baserom.gba", 0x57c943, 0x9

	@ src/data/region_map/region_map_entries.h:532 region_map_entries_line_532
	.globl gText_Rom_57C94C
gText_Rom_57C94C: @ 0x0857C94C
	.string "ほのおのぬけみち$"
	.if (. - gText_Rom_57C94C) > 0x9
	.error "gText_Rom_57C94C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C94C) < 0x9
	.space 0x9 - (. - gText_Rom_57C94C)
	.endif

	@ src/data/region_map/region_map_entries.h:546 region_map_entries_line_546
	.globl gText_Rom_57C955
gText_Rom_57C955: @ 0x0857C955
	.string "デコボコさんどう$"
	.if (. - gText_Rom_57C955) > 0x9
	.error "gText_Rom_57C955 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C955) < 0x9
	.space 0x9 - (. - gText_Rom_57C955)
	.endif
	.incbin "baserom.gba", 0x57c95e, 0x9

	@ src/data/region_map/region_map_entries.h:574 region_map_entries_line_574
	.globl gText_Rom_57C967
gText_Rom_57C967: @ 0x0857C967
	.string "ひでりのいわと$"
	.if (. - gText_Rom_57C967) > 0x8
	.error "gText_Rom_57C967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C967) < 0x8
	.space 0x8 - (. - gText_Rom_57C967)
	.endif

	@ src/data/region_map/region_map_entries.h:581 region_map_entries_line_581
	.globl gText_Rom_57C96F
gText_Rom_57C96F: @ 0x0857C96F
	.string "こじまのよこあな$"
	.if (. - gText_Rom_57C96F) > 0x9
	.error "gText_Rom_57C96F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C96F) < 0x9
	.space 0x9 - (. - gText_Rom_57C96F)
	.endif

	@ src/data/region_map/region_map_entries.h:588 region_map_entries_line_588
	.globl gText_Rom_57C978
gText_Rom_57C978: @ 0x0857C978
	.string "さばくいせき$"
	.if (. - gText_Rom_57C978) > 0x7
	.error "gText_Rom_57C978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C978) < 0x7
	.space 0x7 - (. - gText_Rom_57C978)
	.endif

	@ src/data/region_map/region_map_entries.h:595 region_map_entries_line_595
	.globl gText_Rom_57C97F
gText_Rom_57C97F: @ 0x0857C97F
	.string "こだいづか$"
	.if (. - gText_Rom_57C97F) > 0x6
	.error "gText_Rom_57C97F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C97F) < 0x6
	.space 0x6 - (. - gText_Rom_57C97F)
	.endif

	@ src/data/region_map/region_map_entries.h:602 region_map_entries_line_602
	.globl gText_Rom_57C985
gText_Rom_57C985: @ 0x0857C985
	.string "トラックのなか$"
	.if (. - gText_Rom_57C985) > 0x8
	.error "gText_Rom_57C985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C985) < 0x8
	.space 0x8 - (. - gText_Rom_57C985)
	.endif

	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl gText_Rom_57C98D
gText_Rom_57C98D: @ 0x0857C98D
	.string "そらのはしら$"
	.if (. - gText_Rom_57C98D) > 0x7
	.error "gText_Rom_57C98D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C98D) < 0x7
	.space 0x7 - (. - gText_Rom_57C98D)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gText_Rom_57C994
gText_Rom_57C994: @ 0x0857C994
	.string "ひみつきち$"
	.if (. - gText_Rom_57C994) > 0x6
	.error "gText_Rom_57C994 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C994) < 0x6
	.space 0x6 - (. - gText_Rom_57C994)
	.endif
	.incbin "baserom.gba", 0x57c99a, 0xf

	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9A9
gText_Rom_57C9A9: @ 0x0857C9A9
	.string "シティ$"
	.if (. - gText_Rom_57C9A9) > 0x4
	.error "gText_Rom_57C9A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9A9) < 0x4
	.space 0x4 - (. - gText_Rom_57C9A9)
	.endif
	.incbin "baserom.gba", 0x57c9ad, 0x2

	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9AF
gText_Rom_57C9AF: @ 0x0857C9AF
	.string "シティ$"
	.if (. - gText_Rom_57C9AF) > 0x4
	.error "gText_Rom_57C9AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9AF) < 0x4
	.space 0x4 - (. - gText_Rom_57C9AF)
	.endif
	.incbin "baserom.gba", 0x57c9b3, 0x3

	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9B6
gText_Rom_57C9B6: @ 0x0857C9B6
	.string "シティ$"
	.if (. - gText_Rom_57C9B6) > 0x4
	.error "gText_Rom_57C9B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9B6) < 0x4
	.space 0x4 - (. - gText_Rom_57C9B6)
	.endif
	.incbin "baserom.gba", 0x57c9ba, 0xa

	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9C4
gText_Rom_57C9C4: @ 0x0857C9C4
	.string "シティ$"
	.if (. - gText_Rom_57C9C4) > 0x4
	.error "gText_Rom_57C9C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9C4) < 0x4
	.space 0x4 - (. - gText_Rom_57C9C4)
	.endif
	.incbin "baserom.gba", 0x57c9c8, 0x4

	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9CC
gText_Rom_57C9CC: @ 0x0857C9CC
	.string "シティ$"
	.if (. - gText_Rom_57C9CC) > 0x4
	.error "gText_Rom_57C9CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9CC) < 0x4
	.space 0x4 - (. - gText_Rom_57C9CC)
	.endif
	.incbin "baserom.gba", 0x57c9d0, 0x4

	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9D4
gText_Rom_57C9D4: @ 0x0857C9D4
	.string "シティ$"
	.if (. - gText_Rom_57C9D4) > 0x4
	.error "gText_Rom_57C9D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9D4) < 0x4
	.space 0x4 - (. - gText_Rom_57C9D4)
	.endif
	.incbin "baserom.gba", 0x57c9d8, 0x13

	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9EB
gText_Rom_57C9EB: @ 0x0857C9EB
	.string "シティ$"
	.if (. - gText_Rom_57C9EB) > 0x4
	.error "gText_Rom_57C9EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9EB) < 0x4
	.space 0x4 - (. - gText_Rom_57C9EB)
	.endif
	.incbin "baserom.gba", 0x57c9ef, 0xb0

	@ src/data/party_menu.h:802 party_menu_line_802
	.globl gText_Rom_57CA9F
gText_Rom_57CA9F: @ 0x0857CA9F
	.string "いどう$"
	.if (. - gText_Rom_57CA9F) > 0x4
	.error "gText_Rom_57CA9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CA9F) < 0x4
	.space 0x4 - (. - gText_Rom_57CA9F)
	.endif
	.incbin "baserom.gba", 0x57caa3, 0x6

	@ src/data/party_menu.h:802 party_menu_line_802
	.globl gText_Rom_57CAA9
gText_Rom_57CAA9: @ 0x0857CAA9
	.string "いどう$"
	.if (. - gText_Rom_57CAA9) > 0x4
	.error "gText_Rom_57CAA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CAA9) < 0x4
	.space 0x4 - (. - gText_Rom_57CAA9)
	.endif
	.incbin "baserom.gba", 0x57caad, 0x6

	@ src/data/party_menu.h:802 party_menu_line_802
	.globl gText_Rom_57CAB3
gText_Rom_57CAB3: @ 0x0857CAB3
	.string "いどう$"
	.if (. - gText_Rom_57CAB3) > 0x4
	.error "gText_Rom_57CAB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CAB3) < 0x4
	.space 0x4 - (. - gText_Rom_57CAB3)
	.endif
	.incbin "baserom.gba", 0x57cab7, 0x50

	@ src/data/region_map/region_map_entries.h:504 region_map_entries_line_504
	.globl gText_Rom_57CB07
gText_Rom_57CB07: @ 0x0857CB07
	.string "チャンピオンロード$"
	.if (. - gText_Rom_57CB07) > 0xa
	.error "gText_Rom_57CB07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB07) < 0xa
	.space 0xa - (. - gText_Rom_57CB07)
	.endif
	.incbin "baserom.gba", 0x57cb11, 0x6

	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_57CB17
gText_Rom_57CB17: @ 0x0857CB17
	.string "アジト$"
	.if (. - gText_Rom_57CB17) > 0x4
	.error "gText_Rom_57CB17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB17) < 0x4
	.space 0x4 - (. - gText_Rom_57CB17)
	.endif
	.incbin "baserom.gba", 0x57cb1b, 0x11

	@ src/data/region_map/region_map_entries.h:413 region_map_entries_line_413
	.globl gText_Rom_57CB2C
gText_Rom_57CB2C: @ 0x0857CB2C
	.string "サファリゾーン$"
	.if (. - gText_Rom_57CB2C) > 0x8
	.error "gText_Rom_57CB2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB2C) < 0x8
	.space 0x8 - (. - gText_Rom_57CB2C)
	.endif

	@ src/strings.c:623 gText_PokemonLeague
	.globl gText_Rom_57CB34
gText_Rom_57CB34: @ 0x0857CB34
	.string "ポケモンリーグ$"
	.if (. - gText_Rom_57CB34) > 0x8
	.error "gText_Rom_57CB34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB34) < 0x8
	.space 0x8 - (. - gText_Rom_57CB34)
	.endif
	.incbin "baserom.gba", 0x57cb3c, 0x13

	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_57CB4F
gText_Rom_57CB4F: @ 0x0857CB4F
	.string "タワー$"
	.if (. - gText_Rom_57CB4F) > 0x4
	.error "gText_Rom_57CB4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB4F) < 0x4
	.space 0x4 - (. - gText_Rom_57CB4F)
	.endif
	.incbin "baserom.gba", 0x57cb53, 0x4

	@ src/pokemon_storage_system.c:8108 pokemon_storage_system_line_8108
	.globl gText_Rom_57CB57
gText_Rom_57CB57: @ 0x0857CB57
	.string "どうくつ$"
	.if (. - gText_Rom_57CB57) > 0x5
	.error "gText_Rom_57CB57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB57) < 0x5
	.space 0x5 - (. - gText_Rom_57CB57)
	.endif
	.incbin "baserom.gba", 0x57cb5c, 0xa

	@ src/data/script_menu.h:842 gText_OneIsland
	.globl gText_Rom_57CB66
gText_Rom_57CB66: @ 0x0857CB66
	.string "1のしま$"
	.if (. - gText_Rom_57CB66) > 0x5
	.error "gText_Rom_57CB66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB66) < 0x5
	.space 0x5 - (. - gText_Rom_57CB66)
	.endif

	@ src/data/script_menu.h:843 gText_TwoIsland
	.globl gText_Rom_57CB6B
gText_Rom_57CB6B: @ 0x0857CB6B
	.string "2のしま$"
	.if (. - gText_Rom_57CB6B) > 0x5
	.error "gText_Rom_57CB6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB6B) < 0x5
	.space 0x5 - (. - gText_Rom_57CB6B)
	.endif

	@ src/data/script_menu.h:844 gText_ThreeIsland
	.globl gText_Rom_57CB70
gText_Rom_57CB70: @ 0x0857CB70
	.string "3のしま$"
	.if (. - gText_Rom_57CB70) > 0x5
	.error "gText_Rom_57CB70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB70) < 0x5
	.space 0x5 - (. - gText_Rom_57CB70)
	.endif

	@ src/data/script_menu.h:1428 script_menu_line_1428
	.globl gText_Rom_57CB75
gText_Rom_57CB75: @ 0x0857CB75
	.string "4のしま$"
	.if (. - gText_Rom_57CB75) > 0x5
	.error "gText_Rom_57CB75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB75) < 0x5
	.space 0x5 - (. - gText_Rom_57CB75)
	.endif

	@ src/data/script_menu.h:1429 script_menu_line_1429
	.globl gText_Rom_57CB7A
gText_Rom_57CB7A: @ 0x0857CB7A
	.string "5のしま$"
	.if (. - gText_Rom_57CB7A) > 0x5
	.error "gText_Rom_57CB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB7A) < 0x5
	.space 0x5 - (. - gText_Rom_57CB7A)
	.endif

	@ src/data/script_menu.h:1431 script_menu_line_1431
	.globl gText_Rom_57CB7F
gText_Rom_57CB7F: @ 0x0857CB7F
	.string "7のしま$"
	.if (. - gText_Rom_57CB7F) > 0x5
	.error "gText_Rom_57CB7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB7F) < 0x5
	.space 0x5 - (. - gText_Rom_57CB7F)
	.endif

	@ src/data/script_menu.h:1430 script_menu_line_1430
	.globl gText_Rom_57CB84
gText_Rom_57CB84: @ 0x0857CB84
	.string "6のしま$"
	.if (. - gText_Rom_57CB84) > 0x5
	.error "gText_Rom_57CB84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB84) < 0x5
	.space 0x5 - (. - gText_Rom_57CB84)
	.endif
	.incbin "baserom.gba", 0x57cb89, 0x90

	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_57CC19
gText_Rom_57CC19: @ 0x0857CC19
	.string "タワー$"
	.if (. - gText_Rom_57CC19) > 0x4
	.error "gText_Rom_57CC19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC19) < 0x4
	.space 0x4 - (. - gText_Rom_57CC19)
	.endif
	.incbin "baserom.gba", 0x57cc1d, 0x38

	@ src/data/region_map/region_map_entries.h:1463 region_map_entries_line_1463 (+1 aliases)
	.globl gText_Rom_57CC55
gText_Rom_57CC55: @ 0x0857CC55
	.string "へそのいわ$"
	.if (. - gText_Rom_57CC55) > 0x6
	.error "gText_Rom_57CC55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC55) < 0x6
	.space 0x6 - (. - gText_Rom_57CC55)
	.endif
	.incbin "baserom.gba", 0x57cc5b, 0x13

	@ src/pokemon_storage_system.c:8108 pokemon_storage_system_line_8108
	.globl gText_Rom_57CC6E
gText_Rom_57CC6E: @ 0x0857CC6E
	.string "どうくつ$"
	.if (. - gText_Rom_57CC6E) > 0x5
	.error "gText_Rom_57CC6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC6E) < 0x5
	.space 0x5 - (. - gText_Rom_57CC6E)
	.endif
	.incbin "baserom.gba", 0x57cc73, 0xf

	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_57CC82
gText_Rom_57CC82: @ 0x0857CC82
	.string "タワー$"
	.if (. - gText_Rom_57CC82) > 0x4
	.error "gText_Rom_57CC82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC82) < 0x4
	.space 0x4 - (. - gText_Rom_57CC82)
	.endif
	.incbin "baserom.gba", 0x57cc86, 0x16

	@ src/data/region_map/region_map_entries.h:1456 region_map_entries_line_1456
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CC9C
gText_Rom_57CC9C: @ 0x0857CC9C
	.string "へんげのどうくつ$"
	.if (. - gText_Rom_57CC9C) != 0x9
	.error "gText_Rom_57CC9C must retain its original byte length"
	.endif
	.globl gText_Rom_57CCA0
	.set gText_Rom_57CCA0, gText_Rom_57CC9C + 0x4
	.incbin "baserom.gba", 0x57cca5, 0x1c

	@ src/data/region_map/region_map_entries.h:1386 region_map_entries_line_1386 (+1 aliases)
	.globl gText_Rom_57CCC1
gText_Rom_57CCC1: @ 0x0857CCC1
	.string "たんじょうのしま$"
	.if (. - gText_Rom_57CCC1) > 0x9
	.error "gText_Rom_57CCC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CCC1) < 0x9
	.space 0x9 - (. - gText_Rom_57CCC1)
	.endif
	.incbin "baserom.gba", 0x57ccca, 0x52

	@ src/data/region_map/region_map_entries.h:1365 region_map_entries_line_1365
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD1C
gText_Rom_57CD1C: @ 0x0857CD1C
	.string "アクアだん アジト$"
	.if (. - gText_Rom_57CD1C) != 0xa
	.error "gText_Rom_57CD1C must retain its original byte length"
	.endif
	.globl gText_Rom_57CD22
	.set gText_Rom_57CD22, gText_Rom_57CD1C + 0x6

	@ src/data/region_map/region_map_entries.h:1372 region_map_entries_line_1372
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD26
gText_Rom_57CD26: @ 0x0857CD26
	.string "マグマだん アジト$"
	.if (. - gText_Rom_57CD26) != 0xa
	.error "gText_Rom_57CD26 must retain its original byte length"
	.endif
	.globl gText_Rom_57CD2C
	.set gText_Rom_57CD2C, gText_Rom_57CD26 + 0x6

	@ src/data/region_map/region_map_entries.h:1379 region_map_entries_line_1379
	.globl gText_Rom_57CD30
gText_Rom_57CD30: @ 0x0857CD30
	.string "げんえいのとう$"
	.if (. - gText_Rom_57CD30) > 0x8
	.error "gText_Rom_57CD30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD30) < 0x8
	.space 0x8 - (. - gText_Rom_57CD30)
	.endif

	@ src/data/region_map/region_map_entries.h:1393 region_map_entries_line_1393 (+1 aliases)
	.globl gText_Rom_57CD38
gText_Rom_57CD38: @ 0x0857CD38
	.string "さいはてのことう$"
	.if (. - gText_Rom_57CD38) > 0x9
	.error "gText_Rom_57CD38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD38) < 0x9
	.space 0x9 - (. - gText_Rom_57CD38)
	.endif

	@ src/data/region_map/region_map_entries.h:1400 region_map_entries_line_1400
	.globl gText_Rom_57CD41
gText_Rom_57CD41: @ 0x0857CD41
	.string "アトリエのあな$"
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
	.string "うみのどうくつ$"
	.if (. - gText_Rom_57CD49) != 0x8
	.error "gText_Rom_57CD49 must retain its original byte length"
	.endif
	.globl gText_Rom_57CD4C
	.set gText_Rom_57CD4C, gText_Rom_57CD49 + 0x3

	@ src/data/region_map/region_map_entries.h:1421 region_map_entries_line_1421
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD51
gText_Rom_57CD51: @ 0x0857CD51
	.string "りくのどうくつ$"
	.if (. - gText_Rom_57CD51) != 0x8
	.error "gText_Rom_57CD51 must retain its original byte length"
	.endif
	.globl gText_Rom_57CD54
	.set gText_Rom_57CD54, gText_Rom_57CD51 + 0x3

	@ src/data/region_map/region_map_entries.h:1449 region_map_entries_line_1449
	.globl gText_Rom_57CD59
gText_Rom_57CD59: @ 0x0857CD59
	.string "さばくのちかどう$"
	.if (. - gText_Rom_57CD59) > 0x9
	.error "gText_Rom_57CD59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD59) < 0x9
	.space 0x9 - (. - gText_Rom_57CD59)
	.endif

	@ src/data/region_map/region_map_entries.h:1470 region_map_entries_line_1470
	.globl gText_Rom_57CD62
gText_Rom_57CD62: @ 0x0857CD62
	.string "トレーナーヒル$"
	.if (. - gText_Rom_57CD62) > 0x8
	.error "gText_Rom_57CD62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD62) < 0x8
	.space 0x8 - (. - gText_Rom_57CD62)
	.endif
	.incbin "baserom.gba", 0x57cd6a, 0x2
	.globl gUnknown_857CD6C
gUnknown_857CD6C: @ 0x0857CD6C
	.incbin "baserom.gba", 0x57cd6c, 0x6a8
	.globl gUnknown_857D414
gUnknown_857D414: @ 0x0857D414
	.incbin "baserom.gba", 0x57d414, 0x60
	.globl gUnknown_857D474
gUnknown_857D474: @ 0x0857D474
	.incbin "baserom.gba", 0x57d474, 0x6
	.globl gUnknown_857D47A
gUnknown_857D47A: @ 0x0857D47A
	.incbin "baserom.gba", 0x57d47a, 0x22
	.globl gUnknown_857D49C
gUnknown_857D49C: @ 0x0857D49C
	.incbin "baserom.gba", 0x57d49c, 0x20
	.globl gUnknown_857D4BC
gUnknown_857D4BC: @ 0x0857D4BC
	.incbin "baserom.gba", 0x57d4bc, 0x34
	.globl gUnknown_857D4F0
gUnknown_857D4F0: @ 0x0857D4F0
	.incbin "baserom.gba", 0x57d4f0, 0x8
	.globl gUnknown_857D4F8
gUnknown_857D4F8: @ 0x0857D4F8
	.incbin "baserom.gba", 0x57d4f8, 0x18
	.globl gUnknown_857D510
gUnknown_857D510: @ 0x0857D510
	.incbin "baserom.gba", 0x57d510, 0x10
	.globl gUnknown_857D520
gUnknown_857D520: @ 0x0857D520
	.incbin "baserom.gba", 0x57d520, 0x4
	.globl gUnknown_857D524
gUnknown_857D524: @ 0x0857D524
	.incbin "baserom.gba", 0x57d524, 0x4
	.globl gUnknown_857D528
gUnknown_857D528: @ 0x0857D528
	.incbin "baserom.gba", 0x57d528, 0x20
	.globl gUnknown_857D548
gUnknown_857D548: @ 0x0857D548
	.incbin "baserom.gba", 0x57d548, 0x38
	.globl gUnknown_857D580
gUnknown_857D580: @ 0x0857D580
	.incbin "baserom.gba", 0x57d580, 0xd8
	.globl gUnknown_857D658
gUnknown_857D658: @ 0x0857D658
	.incbin "baserom.gba", 0x57d658, 0xd4
	.globl gUnknown_857D72C
gUnknown_857D72C: @ 0x0857D72C
	.incbin "baserom.gba", 0x57d72c, 0xa0
	.globl gUnknown_857D7CC
gUnknown_857D7CC: @ 0x0857D7CC
	.incbin "baserom.gba", 0x57d7cc, 0x8
	.globl gUnknown_857D7D4
gUnknown_857D7D4: @ 0x0857D7D4
	.incbin "baserom.gba", 0x57d7d4, 0xc
	.globl gUnknown_857D7E0
gUnknown_857D7E0: @ 0x0857D7E0
	.incbin "baserom.gba", 0x57d7e0, 0x20
	.globl gUnknown_857D800
gUnknown_857D800: @ 0x0857D800
	.incbin "baserom.gba", 0x57d800, 0x8
	.globl gUnknown_857D808
gUnknown_857D808: @ 0x0857D808
	.incbin "baserom.gba", 0x57d808, 0x64
	.globl gUnknown_857D86C
gUnknown_857D86C: @ 0x0857D86C
	.incbin "baserom.gba", 0x57d86c, 0x18
	.globl gUnknown_857D884
gUnknown_857D884: @ 0x0857D884
	.incbin "baserom.gba", 0x57d884, 0x27b4

	@ src/data/decoration/header.h:11 header_line_11 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580038
gText_Rom_580038: @ 0x08580038
	.string "ひとり サイズの\nちいさな つくえ$"
	.if (. - gText_Rom_580038) != 0x12
	.error "gText_Rom_580038 must retain its original byte length"
	.endif
	.globl gText_Rom_580046
	.set gText_Rom_580046, gText_Rom_580038 + 0xe

	@ src/data/decoration/header.h:39 header_line_39
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58004A
gText_Rom_58004A: @ 0x0858004A
	.string "モンスターボールの\nかたちをした\nちいさな つくえ$"
	.if (. - gText_Rom_58004A) != 0x1a
	.error "gText_Rom_58004A must retain its original byte length"
	.endif
	.globl gText_Rom_580060
	.set gText_Rom_580060, gText_Rom_58004A + 0x16

	@ src/data/decoration/header.h:53 header_line_53
	.globl gText_Rom_580064
gText_Rom_580064: @ 0x08580064
	.string "てつで つくられた\nおおきな つくえ\nうえに ものを おける$"
	.if (. - gText_Rom_580064) > 0x1f
	.error "gText_Rom_580064 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580064) < 0x1f
	.space 0x1f - (. - gText_Rom_580064)
	.endif

	@ src/data/decoration/header.h:67 header_line_67
	.globl gText_Rom_580083
gText_Rom_580083: @ 0x08580083
	.string "きで つくられた\nおおきな つくえ\nうえに ものを おける$"
	.if (. - gText_Rom_580083) > 0x1e
	.error "gText_Rom_580083 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580083) < 0x1e
	.space 0x1e - (. - gText_Rom_580083)
	.endif

	@ src/data/decoration/header.h:81 header_line_81
	.globl gText_Rom_5800A1
gText_Rom_5800A1: @ 0x085800A1
	.string "はっぱで つくられた\nおおきな つくえ\nうえに ものを おける$"
	.if (. - gText_Rom_5800A1) > 0x20
	.error "gText_Rom_5800A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5800A1) < 0x20
	.space 0x20 - (. - gText_Rom_5800A1)
	.endif

	@ src/data/decoration/header.h:95 header_line_95
	.globl gText_Rom_5800C1
gText_Rom_5800C1: @ 0x085800C1
	.string "ガラスで つくられた\nきょだいな つくえ\nたくさん ものを おける$"
	.if (. - gText_Rom_5800C1) > 0x22
	.error "gText_Rom_5800C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5800C1) < 0x22
	.space 0x22 - (. - gText_Rom_5800C1)
	.endif

	@ src/data/decoration/header.h:109 header_line_109
	.globl gText_Rom_5800E3
gText_Rom_5800E3: @ 0x085800E3
	.string "レンガで つくられた\nきょだいな つくえ\nたくさん ものを おける$"
	.if (. - gText_Rom_5800E3) > 0x22
	.error "gText_Rom_5800E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5800E3) < 0x22
	.space 0x22 - (. - gText_Rom_5800E3)
	.endif

	@ src/data/decoration/header.h:123 header_line_123
	.globl gText_Rom_580105
gText_Rom_580105: @ 0x08580105
	.string "まるたで つくられた\nきょだいな つくえ\nたくさん ものを おける$"
	.if (. - gText_Rom_580105) > 0x22
	.error "gText_Rom_580105 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580105) < 0x22
	.space 0x22 - (. - gText_Rom_580105)
	.endif

	@ src/data/decoration/header.h:137 header_line_137
	.globl gText_Rom_580127
gText_Rom_580127: @ 0x08580127
	.string "いしで つくられた\nきょだいな つくえ\nたくさん ものを おける$"
	.if (. - gText_Rom_580127) > 0x21
	.error "gText_Rom_580127 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580127) < 0x21
	.space 0x21 - (. - gText_Rom_580127)
	.endif

	@ src/data/decoration/header.h:151 header_line_151
	.globl gText_Rom_580148
gText_Rom_580148: @ 0x08580148
	.string "ひとりで すわる\nちいさな イス$"
	.if (. - gText_Rom_580148) > 0x11
	.error "gText_Rom_580148 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580148) < 0x11
	.space 0x11 - (. - gText_Rom_580148)
	.endif

	@ src/data/decoration/header.h:165 header_line_165
	.globl gText_Rom_580159
gText_Rom_580159: @ 0x08580159
	.string "モンスターボールの\nかたちをした\nちいさな イス$"
	.if (. - gText_Rom_580159) > 0x19
	.error "gText_Rom_580159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580159) < 0x19
	.space 0x19 - (. - gText_Rom_580159)
	.endif

	@ src/data/decoration/header.h:179 header_line_179
	.globl gText_Rom_580172
gText_Rom_580172: @ 0x08580172
	.string "てつで つくられた\nちいさな イス$"
	.if (. - gText_Rom_580172) > 0x12
	.error "gText_Rom_580172 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580172) < 0x12
	.space 0x12 - (. - gText_Rom_580172)
	.endif

	@ src/data/decoration/header.h:193 header_line_193
	.globl gText_Rom_580184
gText_Rom_580184: @ 0x08580184
	.string "ガラスで つくられた\nちいさな イス$"
	.if (. - gText_Rom_580184) > 0x13
	.error "gText_Rom_580184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580184) < 0x13
	.space 0x13 - (. - gText_Rom_580184)
	.endif

	@ src/data/decoration/header.h:207 header_line_207
	.globl gText_Rom_580197
gText_Rom_580197: @ 0x08580197
	.string "はっぱで つくられた\nちいさな イス$"
	.if (. - gText_Rom_580197) > 0x13
	.error "gText_Rom_580197 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580197) < 0x13
	.space 0x13 - (. - gText_Rom_580197)
	.endif

	@ src/data/decoration/header.h:221 header_line_221
	.globl gText_Rom_5801AA
gText_Rom_5801AA: @ 0x085801AA
	.string "きで つくられた\nちいさな イス$"
	.if (. - gText_Rom_5801AA) > 0x11
	.error "gText_Rom_5801AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5801AA) < 0x11
	.space 0x11 - (. - gText_Rom_5801AA)
	.endif

	@ src/data/decoration/header.h:235 header_line_235
	.globl gText_Rom_5801BB
gText_Rom_5801BB: @ 0x085801BB
	.string "レンガで つくられた\nちいさな イス$"
	.if (. - gText_Rom_5801BB) > 0x13
	.error "gText_Rom_5801BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5801BB) < 0x13
	.space 0x13 - (. - gText_Rom_5801BB)
	.endif

	@ src/data/decoration/header.h:249 header_line_249
	.globl gText_Rom_5801CE
gText_Rom_5801CE: @ 0x085801CE
	.string "まるたで つくられた\nちいさな イス$"
	.if (. - gText_Rom_5801CE) > 0x13
	.error "gText_Rom_5801CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5801CE) < 0x13
	.space 0x13 - (. - gText_Rom_5801CE)
	.endif

	@ src/data/decoration/header.h:263 header_line_263
	.globl gText_Rom_5801E1
gText_Rom_5801E1: @ 0x085801E1
	.string "いしで つくられた\nちいさな イス$"
	.if (. - gText_Rom_5801E1) > 0x12
	.error "gText_Rom_5801E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5801E1) < 0x12
	.space 0x12 - (. - gText_Rom_5801E1)
	.endif

	@ src/data/decoration/header.h:277 header_line_277
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5801F3
gText_Rom_5801F3: @ 0x085801F3
	.string "まっかな はなが\nうえられた うえき$"
	.if (. - gText_Rom_5801F3) != 0x13
	.error "gText_Rom_5801F3 must retain its original byte length"
	.endif
	.globl gText_Rom_580202
	.set gText_Rom_580202, gText_Rom_5801F3 + 0xf

	@ src/data/decoration/header.h:291 header_line_291
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580206
gText_Rom_580206: @ 0x08580206
	.string "なんごくの はなが\nうえられた うえき$"
	.if (. - gText_Rom_580206) != 0x14
	.error "gText_Rom_580206 must retain its original byte length"
	.endif
	.globl gText_Rom_580216
	.set gText_Rom_580216, gText_Rom_580206 + 0x10

	@ src/data/decoration/header.h:305 header_line_305
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58021A
gText_Rom_58021A: @ 0x0858021A
	.string "かわいい はなが\nうえられた うえき$"
	.if (. - gText_Rom_58021A) != 0x13
	.error "gText_Rom_58021A must retain its original byte length"
	.endif
	.globl gText_Rom_580229
	.set gText_Rom_580229, gText_Rom_58021A + 0xf

	@ src/data/decoration/header.h:319 header_line_319
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58022D
gText_Rom_58022D: @ 0x0858022D
	.string "いろいろな はなが\nうえられた\nおおきな うえき$"
	.if (. - gText_Rom_58022D) != 0x19
	.error "gText_Rom_58022D must retain its original byte length"
	.endif
	.globl gText_Rom_580242
	.set gText_Rom_580242, gText_Rom_58022D + 0x15

	@ src/data/decoration/header.h:333 header_line_333
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580246
gText_Rom_580246: @ 0x08580246
	.string "カサのような きが\nうえられた\nおおきな うえき$"
	.if (. - gText_Rom_580246) != 0x19
	.error "gText_Rom_580246 must retain its original byte length"
	.endif
	.globl gText_Rom_58025B
	.set gText_Rom_58025B, gText_Rom_580246 + 0x15

	@ src/data/decoration/header.h:347 header_line_347
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58025F
gText_Rom_58025F: @ 0x0858025F
	.string "りっぱな きが\nうえられた\nおおきな うえき$"
	.if (. - gText_Rom_58025F) != 0x17
	.error "gText_Rom_58025F must retain its original byte length"
	.endif
	.globl gText_Rom_580272
	.set gText_Rom_580272, gText_Rom_58025F + 0x13

	@ src/data/decoration/header.h:361 header_line_361
	.globl gText_Rom_580276
gText_Rom_580276: @ 0x08580276
	.string "あかいろの レンガ\nうえに ものを おける$"
	.if (. - gText_Rom_580276) > 0x16
	.error "gText_Rom_580276 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580276) < 0x16
	.space 0x16 - (. - gText_Rom_580276)
	.endif

	@ src/data/decoration/header.h:375 header_line_375
	.globl gText_Rom_58028C
gText_Rom_58028C: @ 0x0858028C
	.string "きいろの レンガ\nうえに ものを おける$"
	.if (. - gText_Rom_58028C) > 0x15
	.error "gText_Rom_58028C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58028C) < 0x15
	.space 0x15 - (. - gText_Rom_58028C)
	.endif

	@ src/data/decoration/header.h:389 header_line_389
	.globl gText_Rom_5802A1
gText_Rom_5802A1: @ 0x085802A1
	.string "あおいろの レンガ\nうえに ものを おける$"
	.if (. - gText_Rom_5802A1) > 0x16
	.error "gText_Rom_5802A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5802A1) < 0x16
	.space 0x16 - (. - gText_Rom_5802A1)
	.endif

	@ src/data/decoration/header.h:403 header_line_403
	.globl gText_Rom_5802B7
gText_Rom_5802B7: @ 0x085802B7
	.string "みずの はいった\nあかい ふうせん\nふむと われる$"
	.if (. - gText_Rom_5802B7) > 0x1a
	.error "gText_Rom_5802B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5802B7) < 0x1a
	.space 0x1a - (. - gText_Rom_5802B7)
	.endif

	@ src/data/decoration/header.h:417 header_line_417
	.globl gText_Rom_5802D1
gText_Rom_5802D1: @ 0x085802D1
	.string "みずの はいった\nあおい ふうせん\nふむと われる$"
	.if (. - gText_Rom_5802D1) > 0x1a
	.error "gText_Rom_5802D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5802D1) < 0x1a
	.space 0x1a - (. - gText_Rom_5802D1)
	.endif

	@ src/data/decoration/header.h:431 header_line_431
	.globl gText_Rom_5802EB
gText_Rom_5802EB: @ 0x085802EB
	.string "みずの はいった\nきいろい ふうせん\nふむと われる$"
	.if (. - gText_Rom_5802EB) > 0x1b
	.error "gText_Rom_5802EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5802EB) < 0x1b
	.space 0x1b - (. - gText_Rom_5802EB)
	.endif

	@ src/data/decoration/header.h:445 header_line_445
	.globl gText_Rom_580306
gText_Rom_580306: @ 0x08580306
	.string "おおきな あかい テント\nなかに はいれる$"
	.if (. - gText_Rom_580306) > 0x16
	.error "gText_Rom_580306 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580306) < 0x16
	.space 0x16 - (. - gText_Rom_580306)
	.endif

	@ src/data/decoration/header.h:459 header_line_459
	.globl gText_Rom_58031C
gText_Rom_58031C: @ 0x0858031C
	.string "おおきな あおい テント\nなかに はいれる$"
	.if (. - gText_Rom_58031C) > 0x16
	.error "gText_Rom_58031C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58031C) < 0x16
	.space 0x16 - (. - gText_Rom_58031C)
	.endif

	@ src/data/decoration/header.h:473 header_line_473
	.globl gText_Rom_580332
gText_Rom_580332: @ 0x08580332
	.string "あなの うえに おけば\nむこうへ わたれる$"
	.if (. - gText_Rom_580332) > 0x16
	.error "gText_Rom_580332 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580332) < 0x16
	.space 0x16 - (. - gText_Rom_580332)
	.endif

	@ src/data/decoration/header.h:487 header_line_487
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580348
gText_Rom_580348: @ 0x08580348
	.string "だいの うえから\nすべって したへ\nいくことが できる$"
	.if (. - gText_Rom_580348) != 0x1c
	.error "gText_Rom_580348 must retain its original byte length"
	.endif
	.globl gText_Rom_580360
	.set gText_Rom_580360, gText_Rom_580348 + 0x18

	@ src/data/decoration/header.h:501 header_line_501 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580364
gText_Rom_580364: @ 0x08580364
	.string "ちいさい さく\nとおることが できない$"
	.if (. - gText_Rom_580364) != 0x14
	.error "gText_Rom_580364 must retain its original byte length"
	.endif
	.globl gText_Rom_580373
	.set gText_Rom_580373, gText_Rom_580364 + 0xf

	@ src/data/decoration/header.h:501 header_line_501 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580378
gText_Rom_580378: @ 0x08580378
	.string "ちいさい さく\nとおることが できない$"
	.if (. - gText_Rom_580378) != 0x14
	.error "gText_Rom_580378 must retain its original byte length"
	.endif
	.globl gText_Rom_580387
	.set gText_Rom_580387, gText_Rom_580378 + 0xf

	@ src/data/decoration/header.h:529 header_line_529
	.globl gText_Rom_58038C
gText_Rom_58038C: @ 0x0858038C
	.string "ふるい おおきな タイヤ\nうえに ものを おける$"
	.if (. - gText_Rom_58038C) > 0x19
	.error "gText_Rom_58038C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58038C) < 0x19
	.space 0x19 - (. - gText_Rom_58038C)
	.endif

	@ src/data/decoration/header.h:543 header_line_543
	.globl gText_Rom_5803A5
gText_Rom_5803A5: @ 0x085803A5
	.string "かいだんを のぼって\nだいに あがれる$"
	.if (. - gText_Rom_5803A5) > 0x14
	.error "gText_Rom_5803A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5803A5) < 0x14
	.space 0x14 - (. - gText_Rom_5803A5)
	.endif

	@ src/data/decoration/header.h:557 header_line_557
	.globl gText_Rom_5803B9
gText_Rom_5803B9: @ 0x085803B9
	.string "まるい どろだんご\nふむと こわれる$"
	.if (. - gText_Rom_5803B9) > 0x13
	.error "gText_Rom_5803B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5803B9) < 0x13
	.space 0x13 - (. - gText_Rom_5803B9)
	.endif

	@ src/data/decoration/header.h:571 header_line_571
	.globl gText_Rom_5803CC
gText_Rom_5803CC: @ 0x085803CC
	.string "とおりぬけ できる\nおかしな ドア$"
	.if (. - gText_Rom_5803CC) > 0x12
	.error "gText_Rom_5803CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5803CC) < 0x12
	.space 0x12 - (. - gText_Rom_5803CC)
	.endif

	@ src/data/decoration/header.h:585 header_line_585
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5803DE
gText_Rom_5803DE: @ 0x085803DE
	.string "さわると くずれる\nすなの おきもの$"
	.if (. - gText_Rom_5803DE) != 0x13
	.error "gText_Rom_5803DE must retain its original byte length"
	.endif
	.globl gText_Rom_5803EC
	.set gText_Rom_5803EC, gText_Rom_5803DE + 0xe

	@ src/data/decoration/header.h:599 header_line_599
	.globl gText_Rom_5803F1
gText_Rom_5803F1: @ 0x085803F1
	.string "バトルタワーで\n50にん かちぬいた\nきねんの たて$"
	.if (. - gText_Rom_5803F1) > 0x1b
	.error "gText_Rom_5803F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5803F1) < 0x1b
	.space 0x1b - (. - gText_Rom_5803F1)
	.endif

	@ src/data/decoration/header.h:613 header_line_613
	.globl gText_Rom_58040C
gText_Rom_58040C: @ 0x0858040C
	.string "バトルタワーで\n100にん かちぬいた\nきねんの たて$"
	.if (. - gText_Rom_58040C) > 0x1c
	.error "gText_Rom_58040C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58040C) < 0x1c
	.space 0x1c - (. - gText_Rom_58040C)
	.endif

	@ src/data/decoration/header.h:627 header_line_627
	.globl gText_Rom_580428
gText_Rom_580428: @ 0x08580428
	.string "びじゅつかんに ある\nゆうめいな ちょうこくを\nガラスで かたどったもの$"
	.if (. - gText_Rom_580428) > 0x25
	.error "gText_Rom_580428 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580428) < 0x25
	.space 0x25 - (. - gText_Rom_580428)
	.endif

	@ src/data/decoration/header.h:641 header_line_641
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58044D
gText_Rom_58044D: @ 0x0858044D
	.string "はいいろの ちいさな\nおもちゃの テレビ$"
	.if (. - gText_Rom_58044D) != 0x15
	.error "gText_Rom_58044D must retain its original byte length"
	.endif
	.globl gText_Rom_58045E
	.set gText_Rom_58045E, gText_Rom_58044D + 0x11

	@ src/data/decoration/header.h:655 header_line_655
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580462
gText_Rom_580462: @ 0x08580462
	.string "タネボーの イメージで\nつくられた\nおもちゃの テレビ$"
	.if (. - gText_Rom_580462) != 0x1c
	.error "gText_Rom_580462 must retain its original byte length"
	.endif
	.globl gText_Rom_58047A
	.set gText_Rom_58047A, gText_Rom_580462 + 0x18

	@ src/data/decoration/header.h:669 header_line_669
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58047E
gText_Rom_58047E: @ 0x0858047E
	.string "エネコの イメージで\nつくられた\nおもちゃの テレビ$"
	.if (. - gText_Rom_58047E) != 0x1b
	.error "gText_Rom_58047E must retain its original byte length"
	.endif
	.globl gText_Rom_580495
	.set gText_Rom_580495, gText_Rom_58047E + 0x17

	@ src/data/decoration/header.h:683 header_line_683
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580499
gText_Rom_580499: @ 0x08580499
	.string "ふむと きらきらする\nふしぎな マット$"
	.if (. - gText_Rom_580499) != 0x14
	.error "gText_Rom_580499 must retain its original byte length"
	.endif
	.globl gText_Rom_5804A9
	.set gText_Rom_5804A9, gText_Rom_580499 + 0x10

	@ src/data/decoration/header.h:697 header_line_697
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5804AD
gText_Rom_5804AD: @ 0x085804AD
	.string "ふむと ジャンプする\nいたずら マット$"
	.if (. - gText_Rom_5804AD) != 0x14
	.error "gText_Rom_5804AD must retain its original byte length"
	.endif
	.globl gText_Rom_5804BD
	.set gText_Rom_5804BD, gText_Rom_5804AD + 0x10

	@ src/data/decoration/header.h:711 header_line_711
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5804C1
gText_Rom_5804C1: @ 0x085804C1
	.string "ふむと くるくる まわる\nいたずら マット$"
	.if (. - gText_Rom_5804C1) != 0x16
	.error "gText_Rom_5804C1 must retain its original byte length"
	.endif
	.globl gText_Rom_5804D3
	.set gText_Rom_5804D3, gText_Rom_5804C1 + 0x12

	@ src/data/decoration/header.h:725 header_line_725
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5804D7
gText_Rom_5804D7: @ 0x085804D7
	.string "ふむと ドの\nおとがなる マット$"
	.if (. - gText_Rom_5804D7) != 0x11
	.error "gText_Rom_5804D7 must retain its original byte length"
	.endif
	.globl gText_Rom_5804E4
	.set gText_Rom_5804E4, gText_Rom_5804D7 + 0xd

	@ src/data/decoration/header.h:739 header_line_739
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5804E8
gText_Rom_5804E8: @ 0x085804E8
	.string "ふむと レの\nおとがなる マット$"
	.if (. - gText_Rom_5804E8) != 0x11
	.error "gText_Rom_5804E8 must retain its original byte length"
	.endif
	.globl gText_Rom_5804F5
	.set gText_Rom_5804F5, gText_Rom_5804E8 + 0xd

	@ src/data/decoration/header.h:753 header_line_753
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5804F9
gText_Rom_5804F9: @ 0x085804F9
	.string "ふむと ミの\nおとがなる マット$"
	.if (. - gText_Rom_5804F9) != 0x11
	.error "gText_Rom_5804F9 must retain its original byte length"
	.endif
	.globl gText_Rom_580506
	.set gText_Rom_580506, gText_Rom_5804F9 + 0xd

	@ src/data/decoration/header.h:767 header_line_767
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58050A
gText_Rom_58050A: @ 0x0858050A
	.string "ふむと ファの\nおとがなる マット$"
	.if (. - gText_Rom_58050A) != 0x12
	.error "gText_Rom_58050A must retain its original byte length"
	.endif
	.globl gText_Rom_580518
	.set gText_Rom_580518, gText_Rom_58050A + 0xe

	@ src/data/decoration/header.h:781 header_line_781
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58051C
gText_Rom_58051C: @ 0x0858051C
	.string "ふむと ソの\nおとがなる マット$"
	.if (. - gText_Rom_58051C) != 0x11
	.error "gText_Rom_58051C must retain its original byte length"
	.endif
	.globl gText_Rom_580529
	.set gText_Rom_580529, gText_Rom_58051C + 0xd

	@ src/data/decoration/header.h:795 header_line_795
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58052D
gText_Rom_58052D: @ 0x0858052D
	.string "ふむと ラの\nおとがなる マット$"
	.if (. - gText_Rom_58052D) != 0x11
	.error "gText_Rom_58052D must retain its original byte length"
	.endif
	.globl gText_Rom_58053A
	.set gText_Rom_58053A, gText_Rom_58052D + 0xd

	@ src/data/decoration/header.h:809 header_line_809
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58053E
gText_Rom_58053E: @ 0x0858053E
	.string "ふむと シの\nおとがなる マット$"
	.if (. - gText_Rom_58053E) != 0x11
	.error "gText_Rom_58053E must retain its original byte length"
	.endif
	.globl gText_Rom_58054B
	.set gText_Rom_58054B, gText_Rom_58053E + 0xd

	@ src/data/decoration/header.h:823 header_line_823
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58054F
gText_Rom_58054F: @ 0x0858054F
	.string "ふむと たかい ドの\nおとがなる マット$"
	.if (. - gText_Rom_58054F) != 0x15
	.error "gText_Rom_58054F must retain its original byte length"
	.endif
	.globl gText_Rom_580560
	.set gText_Rom_580560, gText_Rom_58054F + 0x11

	@ src/data/decoration/header.h:837 header_line_837
	.globl gText_Rom_580564
gText_Rom_580564: @ 0x08580564
	.string "なみのりの イメージで\nつくられた マット\nうえに ものを おける$"
	.if (. - gText_Rom_580564) > 0x22
	.error "gText_Rom_580564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580564) < 0x22
	.space 0x22 - (. - gText_Rom_580564)
	.endif

	@ src/data/decoration/header.h:851 header_line_851
	.globl gText_Rom_580586
gText_Rom_580586: @ 0x08580586
	.string "かみなりの イメージで\nつくられた マット\nうえに ものを おける$"
	.if (. - gText_Rom_580586) > 0x22
	.error "gText_Rom_580586 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580586) < 0x22
	.space 0x22 - (. - gText_Rom_580586)
	.endif

	@ src/data/decoration/header.h:865 header_line_865
	.globl gText_Rom_5805A8
gText_Rom_5805A8: @ 0x085805A8
	.string "だいもんじの イメージで\nつくられた マット\nうえに ものを おける$"
	.if (. - gText_Rom_5805A8) > 0x23
	.error "gText_Rom_5805A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5805A8) < 0x23
	.space 0x23 - (. - gText_Rom_5805A8)
	.endif

	@ src/data/decoration/header.h:879 header_line_879
	.globl gText_Rom_5805CB
gText_Rom_5805CB: @ 0x085805CB
	.string "こなゆきの イメージで\nつくられた マット\nうえに ものを おける$"
	.if (. - gText_Rom_5805CB) > 0x22
	.error "gText_Rom_5805CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5805CB) < 0x22
	.space 0x22 - (. - gText_Rom_5805CB)
	.endif

	@ src/data/decoration/header.h:893 header_line_893
	.globl gText_Rom_5805ED
gText_Rom_5805ED: @ 0x085805ED
	.string "メロメロの イメージで\nつくられた マット\nうえに ものを おける$"
	.if (. - gText_Rom_5805ED) > 0x22
	.error "gText_Rom_5805ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5805ED) < 0x22
	.space 0x22 - (. - gText_Rom_5805ED)
	.endif

	@ src/data/decoration/header.h:907 header_line_907
	.globl gText_Rom_58060F
gText_Rom_58060F: @ 0x0858060F
	.string "じわれの イメージで\nつくられた マット\nうえに ものを おける$"
	.if (. - gText_Rom_58060F) > 0x21
	.error "gText_Rom_58060F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58060F) < 0x21
	.space 0x21 - (. - gText_Rom_58060F)
	.endif

	@ src/data/decoration/header.h:921 header_line_921
	.globl gText_Rom_580630
gText_Rom_580630: @ 0x08580630
	.string "まきびしの イメージで\nつくられた マット\nうえに ものを おける$"
	.if (. - gText_Rom_580630) > 0x22
	.error "gText_Rom_580630 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580630) < 0x22
	.space 0x22 - (. - gText_Rom_580630)
	.endif

	@ src/data/decoration/header.h:935 header_line_935
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580652
gText_Rom_580652: @ 0x08580652
	.string "モンスターボールが\nプリント されている\nちいさいポスター$"
	.if (. - gText_Rom_580652) != 0x1e
	.error "gText_Rom_580652 must retain its original byte length"
	.endif
	.globl gText_Rom_58066B
	.set gText_Rom_58066B, gText_Rom_580652 + 0x19

	@ src/data/decoration/header.h:949 header_line_949
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580670
gText_Rom_580670: @ 0x08580670
	.string "キモリが\nプリント されている\nちいさいポスター$"
	.if (. - gText_Rom_580670) != 0x19
	.error "gText_Rom_580670 must retain its original byte length"
	.endif
	.globl gText_Rom_580684
	.set gText_Rom_580684, gText_Rom_580670 + 0x14

	@ src/data/decoration/header.h:963 header_line_963
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580689
gText_Rom_580689: @ 0x08580689
	.string "アチャモが\nプリント されている\nちいさいポスター$"
	.if (. - gText_Rom_580689) != 0x1a
	.error "gText_Rom_580689 must retain its original byte length"
	.endif
	.globl gText_Rom_58069E
	.set gText_Rom_58069E, gText_Rom_580689 + 0x15

	@ src/data/decoration/header.h:977 header_line_977
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5806A3
gText_Rom_5806A3: @ 0x085806A3
	.string "ミズゴロウが\nプリント されている\nちいさいポスター$"
	.if (. - gText_Rom_5806A3) != 0x1b
	.error "gText_Rom_5806A3 must retain its original byte length"
	.endif
	.globl gText_Rom_5806B9
	.set gText_Rom_5806B9, gText_Rom_5806A3 + 0x16

	@ src/data/decoration/header.h:991 header_line_991
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5806BE
gText_Rom_5806BE: @ 0x085806BE
	.string "ルリリが\nプリント されている\nちいさいポスター$"
	.if (. - gText_Rom_5806BE) != 0x19
	.error "gText_Rom_5806BE must retain its original byte length"
	.endif
	.globl gText_Rom_5806D2
	.set gText_Rom_5806D2, gText_Rom_5806BE + 0x14

	@ src/data/decoration/header.h:1005 header_line_1005
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5806D7
gText_Rom_5806D7: @ 0x085806D7
	.string "ピカチュウと ピチューが\nプリント されている\nおおきなポスター$"
	.if (. - gText_Rom_5806D7) != 0x21
	.error "gText_Rom_5806D7 must retain its original byte length"
	.endif
	.globl gText_Rom_5806F3
	.set gText_Rom_5806F3, gText_Rom_5806D7 + 0x1c

	@ src/data/decoration/header.h:1019 header_line_1019
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5806F8
gText_Rom_5806F8: @ 0x085806F8
	.string "ハブネークが\nプリント されている\nおおきなポスター$"
	.if (. - gText_Rom_5806F8) != 0x1b
	.error "gText_Rom_5806F8 must retain its original byte length"
	.endif
	.globl gText_Rom_58070E
	.set gText_Rom_58070E, gText_Rom_5806F8 + 0x16

	@ src/data/decoration/header.h:1033 header_line_1033
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580713
gText_Rom_580713: @ 0x08580713
	.string "ジーランスが\nプリント されている\nおおきなポスター$"
	.if (. - gText_Rom_580713) != 0x1b
	.error "gText_Rom_580713 must retain its original byte length"
	.endif
	.globl gText_Rom_580729
	.set gText_Rom_580729, gText_Rom_580713 + 0x16

	@ src/data/decoration/header.h:1047 header_line_1047
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58072E
gText_Rom_58072E: @ 0x0858072E
	.string "キャモメが\nプリント されている\nおおきなポスター$"
	.if (. - gText_Rom_58072E) != 0x1a
	.error "gText_Rom_58072E must retain its original byte length"
	.endif
	.globl gText_Rom_580743
	.set gText_Rom_580743, gText_Rom_58072E + 0x15

	@ src/data/decoration/header.h:1061 header_line_1061
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580748
gText_Rom_580748: @ 0x08580748
	.string "ムチュールが\nプリント されている\nおおきなポスター$"
	.if (. - gText_Rom_580748) != 0x1b
	.error "gText_Rom_580748 must retain its original byte length"
	.endif
	.globl gText_Rom_58075E
	.set gText_Rom_58075E, gText_Rom_580748 + 0x16

	@ src/data/decoration/header.h:1075 header_line_1075
	.globl gText_Rom_580763
gText_Rom_580763: @ 0x08580763
	.string "ピチューの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580763) > 0x1f
	.error "gText_Rom_580763 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580763) < 0x1f
	.space 0x1f - (. - gText_Rom_580763)
	.endif

	@ src/data/decoration/header.h:1089 header_line_1089
	.globl gText_Rom_580782
gText_Rom_580782: @ 0x08580782
	.string "ピカチュウの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580782) > 0x20
	.error "gText_Rom_580782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580782) < 0x20
	.space 0x20 - (. - gText_Rom_580782)
	.endif

	@ src/data/decoration/header.h:1103 header_line_1103
	.globl gText_Rom_5807A2
gText_Rom_5807A2: @ 0x085807A2
	.string "マリルの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_5807A2) > 0x1e
	.error "gText_Rom_5807A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5807A2) < 0x1e
	.space 0x1e - (. - gText_Rom_5807A2)
	.endif

	@ src/data/decoration/header.h:1117 header_line_1117
	.globl gText_Rom_5807C0
gText_Rom_5807C0: @ 0x085807C0
	.string "トゲピーの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_5807C0) > 0x1f
	.error "gText_Rom_5807C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5807C0) < 0x1f
	.space 0x1f - (. - gText_Rom_5807C0)
	.endif

	@ src/data/decoration/header.h:1131 header_line_1131
	.globl gText_Rom_5807DF
gText_Rom_5807DF: @ 0x085807DF
	.string "ヒノアラシの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_5807DF) > 0x20
	.error "gText_Rom_5807DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5807DF) < 0x20
	.space 0x20 - (. - gText_Rom_5807DF)
	.endif

	@ src/data/decoration/header.h:1145 header_line_1145
	.globl gText_Rom_5807FF
gText_Rom_5807FF: @ 0x085807FF
	.string "チコリータの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_5807FF) > 0x20
	.error "gText_Rom_5807FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5807FF) < 0x20
	.space 0x20 - (. - gText_Rom_5807FF)
	.endif

	@ src/data/decoration/header.h:1159 header_line_1159
	.globl gText_Rom_58081F
gText_Rom_58081F: @ 0x0858081F
	.string "ワニノコの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_58081F) > 0x1f
	.error "gText_Rom_58081F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58081F) < 0x1f
	.space 0x1f - (. - gText_Rom_58081F)
	.endif

	@ src/data/decoration/header.h:1173 header_line_1173
	.globl gText_Rom_58083E
gText_Rom_58083E: @ 0x0858083E
	.string "プリンの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_58083E) > 0x1e
	.error "gText_Rom_58083E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58083E) < 0x1e
	.space 0x1e - (. - gText_Rom_58083E)
	.endif

	@ src/data/decoration/header.h:1187 header_line_1187
	.globl gText_Rom_58085C
gText_Rom_58085C: @ 0x0858085C
	.string "ニャースの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_58085C) > 0x1f
	.error "gText_Rom_58085C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58085C) < 0x1f
	.space 0x1f - (. - gText_Rom_58085C)
	.endif

	@ src/data/decoration/header.h:1201 header_line_1201
	.globl gText_Rom_58087B
gText_Rom_58087B: @ 0x0858087B
	.string "ピッピの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_58087B) > 0x1e
	.error "gText_Rom_58087B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58087B) < 0x1e
	.space 0x1e - (. - gText_Rom_58087B)
	.endif

	@ src/data/decoration/header.h:1215 header_line_1215
	.globl gText_Rom_580899
gText_Rom_580899: @ 0x08580899
	.string "メタモンの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580899) > 0x1f
	.error "gText_Rom_580899 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580899) < 0x1f
	.space 0x1f - (. - gText_Rom_580899)
	.endif

	@ src/data/decoration/header.h:1229 header_line_1229
	.globl gText_Rom_5808B8
gText_Rom_5808B8: @ 0x085808B8
	.string "ムチュールの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_5808B8) > 0x20
	.error "gText_Rom_5808B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5808B8) < 0x20
	.space 0x20 - (. - gText_Rom_5808B8)
	.endif

	@ src/data/decoration/header.h:1243 header_line_1243
	.globl gText_Rom_5808D8
gText_Rom_5808D8: @ 0x085808D8
	.string "キモリの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_5808D8) > 0x1e
	.error "gText_Rom_5808D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5808D8) < 0x1e
	.space 0x1e - (. - gText_Rom_5808D8)
	.endif

	@ src/data/decoration/header.h:1257 header_line_1257
	.globl gText_Rom_5808F6
gText_Rom_5808F6: @ 0x085808F6
	.string "アチャモの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_5808F6) > 0x1f
	.error "gText_Rom_5808F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5808F6) < 0x1f
	.space 0x1f - (. - gText_Rom_5808F6)
	.endif

	@ src/data/decoration/header.h:1271 header_line_1271
	.globl gText_Rom_580915
gText_Rom_580915: @ 0x08580915
	.string "ミズゴロウの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580915) > 0x20
	.error "gText_Rom_580915 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580915) < 0x20
	.space 0x20 - (. - gText_Rom_580915)
	.endif

	@ src/data/decoration/header.h:1285 header_line_1285
	.globl gText_Rom_580935
gText_Rom_580935: @ 0x08580935
	.string "ヨマワルの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580935) > 0x1f
	.error "gText_Rom_580935 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580935) < 0x1f
	.space 0x1f - (. - gText_Rom_580935)
	.endif

	@ src/data/decoration/header.h:1299 header_line_1299
	.globl gText_Rom_580954
gText_Rom_580954: @ 0x08580954
	.string "ソーナノの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580954) > 0x1f
	.error "gText_Rom_580954 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580954) < 0x1f
	.space 0x1f - (. - gText_Rom_580954)
	.endif

	@ src/data/decoration/header.h:1313 header_line_1313
	.globl gText_Rom_580973
gText_Rom_580973: @ 0x08580973
	.string "ヤジロンの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580973) > 0x1f
	.error "gText_Rom_580973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580973) < 0x1f
	.space 0x1f - (. - gText_Rom_580973)
	.endif

	@ src/data/decoration/header.h:1327 header_line_1327
	.globl gText_Rom_580992
gText_Rom_580992: @ 0x08580992
	.string "カクレオンの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580992) > 0x20
	.error "gText_Rom_580992 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580992) < 0x20
	.space 0x20 - (. - gText_Rom_580992)
	.endif

	@ src/data/decoration/header.h:1341 header_line_1341
	.globl gText_Rom_5809B2
gText_Rom_5809B2: @ 0x085809B2
	.string "ルリリの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_5809B2) > 0x1e
	.error "gText_Rom_5809B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5809B2) < 0x1e
	.space 0x1e - (. - gText_Rom_5809B2)
	.endif

	@ src/data/decoration/header.h:1355 header_line_1355
	.globl gText_Rom_5809D0
gText_Rom_5809D0: @ 0x085809D0
	.string "エネコの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_5809D0) > 0x1e
	.error "gText_Rom_5809D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5809D0) < 0x1e
	.space 0x1e - (. - gText_Rom_5809D0)
	.endif

	@ src/data/decoration/header.h:1369 header_line_1369
	.globl gText_Rom_5809EE
gText_Rom_5809EE: @ 0x085809EE
	.string "チルットの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_5809EE) > 0x1f
	.error "gText_Rom_5809EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5809EE) < 0x1f
	.space 0x1f - (. - gText_Rom_5809EE)
	.endif

	@ src/data/decoration/header.h:1383 header_line_1383
	.globl gText_Rom_580A0D
gText_Rom_580A0D: @ 0x08580A0D
	.string "ゴクリンの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580A0D) > 0x1f
	.error "gText_Rom_580A0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580A0D) < 0x1f
	.space 0x1f - (. - gText_Rom_580A0D)
	.endif

	@ src/data/decoration/header.h:1397 header_line_1397
	.globl gText_Rom_580A2C
gText_Rom_580A2C: @ 0x08580A2C
	.string "ハスボーの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580A2C) > 0x1f
	.error "gText_Rom_580A2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580A2C) < 0x1f
	.space 0x1f - (. - gText_Rom_580A2C)
	.endif

	@ src/data/decoration/header.h:1411 header_line_1411
	.globl gText_Rom_580A4B
gText_Rom_580A4B: @ 0x08580A4B
	.string "タネボーの ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580A4B) > 0x1f
	.error "gText_Rom_580A4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580A4B) < 0x1f
	.space 0x1f - (. - gText_Rom_580A4B)
	.endif

	@ src/data/decoration/header.h:1425 header_line_1425
	.globl gText_Rom_580A6A
gText_Rom_580A6A: @ 0x08580A6A
	.string "ピカチュウの クッション\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580A6A) > 0x20
	.error "gText_Rom_580A6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580A6A) < 0x20
	.space 0x20 - (. - gText_Rom_580A6A)
	.endif

	@ src/data/decoration/header.h:1439 header_line_1439
	.globl gText_Rom_580A8A
gText_Rom_580A8A: @ 0x08580A8A
	.string "マリルリの クッション\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580A8A) > 0x1f
	.error "gText_Rom_580A8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580A8A) < 0x1f
	.space 0x1f - (. - gText_Rom_580A8A)
	.endif

	@ src/data/decoration/header.h:1453 header_line_1453
	.globl gText_Rom_580AA9
gText_Rom_580AA9: @ 0x08580AA9
	.string "ムチュールの クッション\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580AA9) > 0x20
	.error "gText_Rom_580AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580AA9) < 0x20
	.space 0x20 - (. - gText_Rom_580AA9)
	.endif

	@ src/data/decoration/header.h:1467 header_line_1467
	.globl gText_Rom_580AC9
gText_Rom_580AC9: @ 0x08580AC9
	.string "ジグザグマの クッション\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580AC9) > 0x20
	.error "gText_Rom_580AC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580AC9) < 0x20
	.space 0x20 - (. - gText_Rom_580AC9)
	.endif

	@ src/data/decoration/header.h:1481 header_line_1481
	.globl gText_Rom_580AE9
gText_Rom_580AE9: @ 0x08580AE9
	.string "パッチールの クッション\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580AE9) > 0x20
	.error "gText_Rom_580AE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580AE9) < 0x20
	.space 0x20 - (. - gText_Rom_580AE9)
	.endif

	@ src/data/decoration/header.h:1495 header_line_1495
	.globl gText_Rom_580B09
gText_Rom_580B09: @ 0x08580B09
	.string "ヤミラミの クッション\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580B09) > 0x1f
	.error "gText_Rom_580B09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580B09) < 0x1f
	.space 0x1f - (. - gText_Rom_580B09)
	.endif

	@ src/data/decoration/header.h:1509 header_line_1509
	.globl gText_Rom_580B28
gText_Rom_580B28: @ 0x08580B28
	.string "ボールの クッション\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580B28) > 0x1e
	.error "gText_Rom_580B28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580B28) < 0x1e
	.space 0x1e - (. - gText_Rom_580B28)
	.endif

	@ src/data/decoration/header.h:1523 header_line_1523
	.globl gText_Rom_580B46
gText_Rom_580B46: @ 0x08580B46
	.string "くさマーク クッション\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580B46) > 0x1f
	.error "gText_Rom_580B46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580B46) < 0x1f
	.space 0x1f - (. - gText_Rom_580B46)
	.endif

	@ src/data/decoration/header.h:1537 header_line_1537
	.globl gText_Rom_580B65
gText_Rom_580B65: @ 0x08580B65
	.string "ほのおマーク クッション\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580B65) > 0x20
	.error "gText_Rom_580B65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580B65) < 0x20
	.space 0x20 - (. - gText_Rom_580B65)
	.endif

	@ src/data/decoration/header.h:1551 header_line_1551
	.globl gText_Rom_580B85
gText_Rom_580B85: @ 0x08580B85
	.string "みずマーク クッション\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580B85) > 0x1f
	.error "gText_Rom_580B85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580B85) < 0x1f
	.space 0x1f - (. - gText_Rom_580B85)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gText_Rom_580BA4
gText_Rom_580BA4: @ 0x08580BA4
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580BA4) > 0x1e
	.error "gText_Rom_580BA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580BA4) < 0x1e
	.space 0x1e - (. - gText_Rom_580BA4)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gText_Rom_580BC2
gText_Rom_580BC2: @ 0x08580BC2
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580BC2) > 0x1e
	.error "gText_Rom_580BC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580BC2) < 0x1e
	.space 0x1e - (. - gText_Rom_580BC2)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gText_Rom_580BE0
gText_Rom_580BE0: @ 0x08580BE0
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580BE0) > 0x1e
	.error "gText_Rom_580BE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580BE0) < 0x1e
	.space 0x1e - (. - gText_Rom_580BE0)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gText_Rom_580BFE
gText_Rom_580BFE: @ 0x08580BFE
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580BFE) > 0x1e
	.error "gText_Rom_580BFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580BFE) < 0x1e
	.space 0x1e - (. - gText_Rom_580BFE)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gText_Rom_580C1C
gText_Rom_580C1C: @ 0x08580C1C
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580C1C) > 0x1e
	.error "gText_Rom_580C1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580C1C) < 0x1e
	.space 0x1e - (. - gText_Rom_580C1C)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gText_Rom_580C3A
gText_Rom_580C3A: @ 0x08580C3A
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580C3A) > 0x1e
	.error "gText_Rom_580C3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580C3A) < 0x1e
	.space 0x1e - (. - gText_Rom_580C3A)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gText_Rom_580C58
gText_Rom_580C58: @ 0x08580C58
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580C58) > 0x1e
	.error "gText_Rom_580C58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580C58) < 0x1e
	.space 0x1e - (. - gText_Rom_580C58)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gText_Rom_580C76
gText_Rom_580C76: @ 0x08580C76
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580C76) > 0x1e
	.error "gText_Rom_580C76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580C76) < 0x1e
	.space 0x1e - (. - gText_Rom_580C76)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gText_Rom_580C94
gText_Rom_580C94: @ 0x08580C94
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580C94) > 0x1e
	.error "gText_Rom_580C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580C94) < 0x1e
	.space 0x1e - (. - gText_Rom_580C94)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gText_Rom_580CB2
gText_Rom_580CB2: @ 0x08580CB2
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの$"
	.if (. - gText_Rom_580CB2) > 0x1e
	.error "gText_Rom_580CB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580CB2) < 0x1e
	.space 0x1e - (. - gText_Rom_580CB2)
	.endif
	.globl gUnknown_8580CD0
gUnknown_8580CD0: @ 0x08580CD0
	.incbin "baserom.gba", 0x580cd0, 0x1
	.globl gUnknown_8580CD1
gUnknown_8580CD1: @ 0x08580CD1

	@ src/data/decoration/header.h:6 header_line_6 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580CD1
gText_Rom_580CD1: @ 0x08580CD1
	.string "ちいさいつくえ$"
	.if (. - gText_Rom_580CD1) != 0x8
	.error "gText_Rom_580CD1 must retain its original byte length"
	.endif
	.globl gText_Rom_580CD5
	.set gText_Rom_580CD5, gText_Rom_580CD1 + 0x4
	.incbin "baserom.gba", 0x580cd9, 0xf
	.globl gUnknown_8580CE8
gUnknown_8580CE8: @ 0x08580CE8
	.incbin "baserom.gba", 0x580ce8, 0x5

	@ src/data/decoration/header.h:6 header_line_6 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580CED
gText_Rom_580CED: @ 0x08580CED
	.string "ちいさいつくえ$"
	.if (. - gText_Rom_580CED) != 0x8
	.error "gText_Rom_580CED must retain its original byte length"
	.endif
	.globl gText_Rom_580CF1
	.set gText_Rom_580CF1, gText_Rom_580CED + 0x4
	.incbin "baserom.gba", 0x580cf5, 0x14

	@ src/data/decoration/header.h:34 header_line_34
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580D09
gText_Rom_580D09: @ 0x08580D09
	.string "ポケモンつくえ$"
	.if (. - gText_Rom_580D09) != 0x8
	.error "gText_Rom_580D09 must retain its original byte length"
	.endif
	.globl gText_Rom_580D0D
	.set gText_Rom_580D0D, gText_Rom_580D09 + 0x4
	.incbin "baserom.gba", 0x580d11, 0x14

	@ src/data/decoration/header.h:48 header_line_48
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580D25
gText_Rom_580D25: @ 0x08580D25
	.string "ずっしりつくえ$"
	.if (. - gText_Rom_580D25) != 0x8
	.error "gText_Rom_580D25 must retain its original byte length"
	.endif
	.globl gText_Rom_580D29
	.set gText_Rom_580D29, gText_Rom_580D25 + 0x4
	.incbin "baserom.gba", 0x580d2d, 0x14

	@ src/data/decoration/header.h:62 header_line_62
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580D41
gText_Rom_580D41: @ 0x08580D41
	.string "ゴツゴツつくえ$"
	.if (. - gText_Rom_580D41) != 0x8
	.error "gText_Rom_580D41 must retain its original byte length"
	.endif
	.globl gText_Rom_580D45
	.set gText_Rom_580D45, gText_Rom_580D41 + 0x4
	.incbin "baserom.gba", 0x580d49, 0x14

	@ src/data/decoration/header.h:76 header_line_76
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580D5D
gText_Rom_580D5D: @ 0x08580D5D
	.string "ふわふわつくえ$"
	.if (. - gText_Rom_580D5D) != 0x8
	.error "gText_Rom_580D5D must retain its original byte length"
	.endif
	.globl gText_Rom_580D61
	.set gText_Rom_580D61, gText_Rom_580D5D + 0x4
	.incbin "baserom.gba", 0x580d65, 0x14

	@ src/data/decoration/header.h:90 header_line_90 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580D79
gText_Rom_580D79: @ 0x08580D79
	.string "きれいなつくえ$"
	.if (. - gText_Rom_580D79) != 0x8
	.error "gText_Rom_580D79 must retain its original byte length"
	.endif
	.globl gText_Rom_580D7D
	.set gText_Rom_580D7D, gText_Rom_580D79 + 0x4
	.incbin "baserom.gba", 0x580d81, 0x14

	@ src/data/decoration/header.h:104 header_line_104
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580D95
gText_Rom_580D95: @ 0x08580D95
	.string "レンガのつくえ$"
	.if (. - gText_Rom_580D95) != 0x8
	.error "gText_Rom_580D95 must retain its original byte length"
	.endif
	.globl gText_Rom_580D99
	.set gText_Rom_580D99, gText_Rom_580D95 + 0x4
	.incbin "baserom.gba", 0x580d9d, 0x14

	@ src/data/decoration/header.h:118 header_line_118
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580DB1
gText_Rom_580DB1: @ 0x08580DB1
	.string "キャンプつくえ$"
	.if (. - gText_Rom_580DB1) != 0x8
	.error "gText_Rom_580DB1 must retain its original byte length"
	.endif
	.globl gText_Rom_580DB5
	.set gText_Rom_580DB5, gText_Rom_580DB1 + 0x4
	.incbin "baserom.gba", 0x580db9, 0x14

	@ src/data/decoration/header.h:132 header_line_132
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580DCD
gText_Rom_580DCD: @ 0x08580DCD
	.string "かたいつくえ$"
	.if (. - gText_Rom_580DCD) != 0x7
	.error "gText_Rom_580DCD must retain its original byte length"
	.endif
	.globl gText_Rom_580DD0
	.set gText_Rom_580DD0, gText_Rom_580DCD + 0x3
	.incbin "baserom.gba", 0x580dd4, 0x15

	@ src/data/decoration/header.h:146 header_line_146
	.globl gText_Rom_580DE9
gText_Rom_580DE9: @ 0x08580DE9
	.string "ちいさいイス$"
	.if (. - gText_Rom_580DE9) > 0x7
	.error "gText_Rom_580DE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580DE9) < 0x7
	.space 0x7 - (. - gText_Rom_580DE9)
	.endif
	.incbin "baserom.gba", 0x580df0, 0x15

	@ src/data/decoration/header.h:160 header_line_160
	.globl gText_Rom_580E05
gText_Rom_580E05: @ 0x08580E05
	.string "ポケモンイス$"
	.if (. - gText_Rom_580E05) > 0x7
	.error "gText_Rom_580E05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580E05) < 0x7
	.space 0x7 - (. - gText_Rom_580E05)
	.endif
	.incbin "baserom.gba", 0x580e0c, 0x15

	@ src/data/decoration/header.h:174 header_line_174
	.globl gText_Rom_580E21
gText_Rom_580E21: @ 0x08580E21
	.string "ずっしりイス$"
	.if (. - gText_Rom_580E21) > 0x7
	.error "gText_Rom_580E21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580E21) < 0x7
	.space 0x7 - (. - gText_Rom_580E21)
	.endif
	.incbin "baserom.gba", 0x580e28, 0x15

	@ src/data/decoration/header.h:188 header_line_188 (+1 aliases)
	.globl gText_Rom_580E3D
gText_Rom_580E3D: @ 0x08580E3D
	.string "きれいなイス$"
	.if (. - gText_Rom_580E3D) > 0x7
	.error "gText_Rom_580E3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580E3D) < 0x7
	.space 0x7 - (. - gText_Rom_580E3D)
	.endif
	.incbin "baserom.gba", 0x580e44, 0x15

	@ src/data/decoration/header.h:202 header_line_202
	.globl gText_Rom_580E59
gText_Rom_580E59: @ 0x08580E59
	.string "ふわふわのイス$"
	.if (. - gText_Rom_580E59) > 0x8
	.error "gText_Rom_580E59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580E59) < 0x8
	.space 0x8 - (. - gText_Rom_580E59)
	.endif
	.incbin "baserom.gba", 0x580e61, 0x14

	@ src/data/decoration/header.h:216 header_line_216
	.globl gText_Rom_580E75
gText_Rom_580E75: @ 0x08580E75
	.string "ゴツゴツのイス$"
	.if (. - gText_Rom_580E75) > 0x8
	.error "gText_Rom_580E75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580E75) < 0x8
	.space 0x8 - (. - gText_Rom_580E75)
	.endif
	.incbin "baserom.gba", 0x580e7d, 0x14

	@ src/data/decoration/header.h:230 header_line_230
	.globl gText_Rom_580E91
gText_Rom_580E91: @ 0x08580E91
	.string "レンガのイス$"
	.if (. - gText_Rom_580E91) > 0x7
	.error "gText_Rom_580E91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580E91) < 0x7
	.space 0x7 - (. - gText_Rom_580E91)
	.endif
	.incbin "baserom.gba", 0x580e98, 0x15

	@ src/data/decoration/header.h:244 header_line_244
	.globl gText_Rom_580EAD
gText_Rom_580EAD: @ 0x08580EAD
	.string "キャンプイス$"
	.if (. - gText_Rom_580EAD) > 0x7
	.error "gText_Rom_580EAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580EAD) < 0x7
	.space 0x7 - (. - gText_Rom_580EAD)
	.endif
	.incbin "baserom.gba", 0x580eb4, 0x15

	@ src/data/decoration/header.h:258 header_line_258
	.globl gText_Rom_580EC9
gText_Rom_580EC9: @ 0x08580EC9
	.string "かたいイス$"
	.if (. - gText_Rom_580EC9) > 0x6
	.error "gText_Rom_580EC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580EC9) < 0x6
	.space 0x6 - (. - gText_Rom_580EC9)
	.endif
	.incbin "baserom.gba", 0x580ecf, 0x16

	@ src/data/decoration/header.h:272 header_line_272
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580EE5
gText_Rom_580EE5: @ 0x08580EE5
	.string "まっかなうえき$"
	.if (. - gText_Rom_580EE5) != 0x8
	.error "gText_Rom_580EE5 must retain its original byte length"
	.endif
	.globl gText_Rom_580EE9
	.set gText_Rom_580EE9, gText_Rom_580EE5 + 0x4
	.incbin "baserom.gba", 0x580eed, 0x14

	@ src/data/decoration/header.h:286 header_line_286
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580F01
gText_Rom_580F01: @ 0x08580F01
	.string "なんごくのうえき$"
	.if (. - gText_Rom_580F01) != 0x9
	.error "gText_Rom_580F01 must retain its original byte length"
	.endif
	.globl gText_Rom_580F06
	.set gText_Rom_580F06, gText_Rom_580F01 + 0x5
	.incbin "baserom.gba", 0x580f0a, 0x13

	@ src/data/decoration/header.h:300 header_line_300
	.globl gText_Rom_580F1D
gText_Rom_580F1D: @ 0x08580F1D
	.string "かわいいはな$"
	.if (. - gText_Rom_580F1D) > 0x7
	.error "gText_Rom_580F1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580F1D) < 0x7
	.space 0x7 - (. - gText_Rom_580F1D)
	.endif
	.incbin "baserom.gba", 0x580f24, 0x15

	@ src/data/decoration/header.h:314 header_line_314
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580F39
gText_Rom_580F39: @ 0x08580F39
	.string "カラフルなうえき$"
	.if (. - gText_Rom_580F39) != 0x9
	.error "gText_Rom_580F39 must retain its original byte length"
	.endif
	.globl gText_Rom_580F3E
	.set gText_Rom_580F3E, gText_Rom_580F39 + 0x5
	.incbin "baserom.gba", 0x580f42, 0x13

	@ src/data/decoration/header.h:328 header_line_328
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580F55
gText_Rom_580F55: @ 0x08580F55
	.string "おっきなうえき$"
	.if (. - gText_Rom_580F55) != 0x8
	.error "gText_Rom_580F55 must retain its original byte length"
	.endif
	.globl gText_Rom_580F59
	.set gText_Rom_580F59, gText_Rom_580F55 + 0x4
	.incbin "baserom.gba", 0x580f5d, 0x14

	@ src/data/decoration/header.h:342 header_line_342
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_580F71
gText_Rom_580F71: @ 0x08580F71
	.string "りっぱなうえき$"
	.if (. - gText_Rom_580F71) != 0x8
	.error "gText_Rom_580F71 must retain its original byte length"
	.endif
	.globl gText_Rom_580F75
	.set gText_Rom_580F75, gText_Rom_580F71 + 0x4
	.incbin "baserom.gba", 0x580f79, 0x14

	@ src/data/decoration/header.h:356 header_line_356
	.globl gText_Rom_580F8D
gText_Rom_580F8D: @ 0x08580F8D
	.string "あかいレンガ$"
	.if (. - gText_Rom_580F8D) > 0x7
	.error "gText_Rom_580F8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580F8D) < 0x7
	.space 0x7 - (. - gText_Rom_580F8D)
	.endif
	.incbin "baserom.gba", 0x580f94, 0x15

	@ src/data/decoration/header.h:370 header_line_370
	.globl gText_Rom_580FA9
gText_Rom_580FA9: @ 0x08580FA9
	.string "きいろいレンガ$"
	.if (. - gText_Rom_580FA9) > 0x8
	.error "gText_Rom_580FA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580FA9) < 0x8
	.space 0x8 - (. - gText_Rom_580FA9)
	.endif
	.incbin "baserom.gba", 0x580fb1, 0x14

	@ src/data/decoration/header.h:384 header_line_384
	.globl gText_Rom_580FC5
gText_Rom_580FC5: @ 0x08580FC5
	.string "あおいレンガ$"
	.if (. - gText_Rom_580FC5) > 0x7
	.error "gText_Rom_580FC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580FC5) < 0x7
	.space 0x7 - (. - gText_Rom_580FC5)
	.endif
	.incbin "baserom.gba", 0x580fcc, 0x15

	@ src/data/decoration/header.h:398 header_line_398
	.globl gText_Rom_580FE1
gText_Rom_580FE1: @ 0x08580FE1
	.string "あかいふうせん$"
	.if (. - gText_Rom_580FE1) > 0x8
	.error "gText_Rom_580FE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580FE1) < 0x8
	.space 0x8 - (. - gText_Rom_580FE1)
	.endif
	.incbin "baserom.gba", 0x580fe9, 0x14

	@ src/data/decoration/header.h:412 header_line_412
	.globl gText_Rom_580FFD
gText_Rom_580FFD: @ 0x08580FFD
	.string "あおいふうせん$"
	.if (. - gText_Rom_580FFD) > 0x8
	.error "gText_Rom_580FFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_580FFD) < 0x8
	.space 0x8 - (. - gText_Rom_580FFD)
	.endif
	.incbin "baserom.gba", 0x581005, 0x14

	@ src/data/decoration/header.h:426 header_line_426
	.globl gText_Rom_581019
gText_Rom_581019: @ 0x08581019
	.string "きいろいふうせん$"
	.if (. - gText_Rom_581019) > 0x9
	.error "gText_Rom_581019 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581019) < 0x9
	.space 0x9 - (. - gText_Rom_581019)
	.endif
	.incbin "baserom.gba", 0x581022, 0x13

	@ src/data/decoration/header.h:440 header_line_440 (+1 aliases)
	.globl gText_Rom_581035
gText_Rom_581035: @ 0x08581035
	.string "あかいテント$"
	.if (. - gText_Rom_581035) > 0x7
	.error "gText_Rom_581035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581035) < 0x7
	.space 0x7 - (. - gText_Rom_581035)
	.endif
	.incbin "baserom.gba", 0x58103c, 0x15

	@ src/data/decoration/header.h:454 header_line_454 (+1 aliases)
	.globl gText_Rom_581051
gText_Rom_581051: @ 0x08581051
	.string "あおいテント$"
	.if (. - gText_Rom_581051) > 0x7
	.error "gText_Rom_581051 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581051) < 0x7
	.space 0x7 - (. - gText_Rom_581051)
	.endif
	.incbin "baserom.gba", 0x581058, 0x15

	@ src/data/decoration/header.h:468 header_line_468
	.globl gText_Rom_58106D
gText_Rom_58106D: @ 0x0858106D
	.string "じょうぶないた$"
	.if (. - gText_Rom_58106D) > 0x8
	.error "gText_Rom_58106D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58106D) < 0x8
	.space 0x8 - (. - gText_Rom_58106D)
	.endif
	.incbin "baserom.gba", 0x581075, 0x14

	@ src/data/decoration/header.h:482 header_line_482
	.globl gText_Rom_581089
gText_Rom_581089: @ 0x08581089
	.string "すべりだい$"
	.if (. - gText_Rom_581089) > 0x6
	.error "gText_Rom_581089 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581089) < 0x6
	.space 0x6 - (. - gText_Rom_581089)
	.endif
	.incbin "baserom.gba", 0x58108f, 0x16

	@ src/data/decoration/header.h:496 header_line_496
	.globl gText_Rom_5810A5
gText_Rom_5810A5: @ 0x085810A5
	.string "タテのさく$"
	.if (. - gText_Rom_5810A5) > 0x6
	.error "gText_Rom_5810A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5810A5) < 0x6
	.space 0x6 - (. - gText_Rom_5810A5)
	.endif
	.incbin "baserom.gba", 0x5810ab, 0x16

	@ src/data/decoration/header.h:510 header_line_510
	.globl gText_Rom_5810C1
gText_Rom_5810C1: @ 0x085810C1
	.string "ヨコのさく$"
	.if (. - gText_Rom_5810C1) > 0x6
	.error "gText_Rom_5810C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5810C1) < 0x6
	.space 0x6 - (. - gText_Rom_5810C1)
	.endif
	.incbin "baserom.gba", 0x5810c7, 0x16

	@ src/data/decoration/header.h:524 header_line_524
	.globl gText_Rom_5810DD
gText_Rom_5810DD: @ 0x085810DD
	.string "タイヤ$"
	.if (. - gText_Rom_5810DD) > 0x4
	.error "gText_Rom_5810DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5810DD) < 0x4
	.space 0x4 - (. - gText_Rom_5810DD)
	.endif
	.incbin "baserom.gba", 0x5810e1, 0x18

	@ src/data/decoration/header.h:538 header_line_538
	.globl gText_Rom_5810F9
gText_Rom_5810F9: @ 0x085810F9
	.string "おおきなだい$"
	.if (. - gText_Rom_5810F9) > 0x7
	.error "gText_Rom_5810F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5810F9) < 0x7
	.space 0x7 - (. - gText_Rom_5810F9)
	.endif
	.incbin "baserom.gba", 0x581100, 0x15

	@ src/data/decoration/header.h:552 header_line_552
	.globl gText_Rom_581115
gText_Rom_581115: @ 0x08581115
	.string "どろだんご$"
	.if (. - gText_Rom_581115) > 0x6
	.error "gText_Rom_581115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581115) < 0x6
	.space 0x6 - (. - gText_Rom_581115)
	.endif
	.incbin "baserom.gba", 0x58111b, 0x16

	@ src/data/decoration/header.h:566 header_line_566
	.globl gText_Rom_581131
gText_Rom_581131: @ 0x08581131
	.string "やぶれるドア$"
	.if (. - gText_Rom_581131) > 0x7
	.error "gText_Rom_581131 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581131) < 0x7
	.space 0x7 - (. - gText_Rom_581131)
	.endif
	.incbin "baserom.gba", 0x581138, 0x15

	@ src/data/decoration/header.h:580 header_line_580
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58114D
gText_Rom_58114D: @ 0x0858114D
	.string "すなのおきもの$"
	.if (. - gText_Rom_58114D) != 0x8
	.error "gText_Rom_58114D must retain its original byte length"
	.endif
	.globl gText_Rom_581150
	.set gText_Rom_581150, gText_Rom_58114D + 0x3
	.incbin "baserom.gba", 0x581155, 0x14

	@ src/data/decoration/header.h:594 header_line_594
	.globl gText_Rom_581169
gText_Rom_581169: @ 0x08581169
	.string "ぎんのたて$"
	.if (. - gText_Rom_581169) > 0x6
	.error "gText_Rom_581169 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581169) < 0x6
	.space 0x6 - (. - gText_Rom_581169)
	.endif
	.incbin "baserom.gba", 0x58116f, 0x16

	@ src/data/decoration/header.h:608 header_line_608
	.globl gText_Rom_581185
gText_Rom_581185: @ 0x08581185
	.string "きんのたて$"
	.if (. - gText_Rom_581185) > 0x6
	.error "gText_Rom_581185 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581185) < 0x6
	.space 0x6 - (. - gText_Rom_581185)
	.endif
	.incbin "baserom.gba", 0x58118b, 0x16

	@ src/data/decoration/header.h:622 header_line_622
	.globl gText_Rom_5811A1
gText_Rom_5811A1: @ 0x085811A1
	.string "ガラスのオブジェ$"
	.if (. - gText_Rom_5811A1) > 0x9
	.error "gText_Rom_5811A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5811A1) < 0x9
	.space 0x9 - (. - gText_Rom_5811A1)
	.endif
	.incbin "baserom.gba", 0x5811aa, 0x13

	@ src/data/decoration/header.h:636 header_line_636 (+1 aliases)
	.globl gText_Rom_5811BD
gText_Rom_5811BD: @ 0x085811BD
	.string "テレビ$"
	.if (. - gText_Rom_5811BD) > 0x4
	.error "gText_Rom_5811BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5811BD) < 0x4
	.space 0x4 - (. - gText_Rom_5811BD)
	.endif
	.incbin "baserom.gba", 0x5811c1, 0x18

	@ src/data/decoration/header.h:650 header_line_650
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5811D9
gText_Rom_5811D9: @ 0x085811D9
	.string "まるいテレビ$"
	.if (. - gText_Rom_5811D9) != 0x7
	.error "gText_Rom_5811D9 must retain its original byte length"
	.endif
	.globl gText_Rom_5811DC
	.set gText_Rom_5811DC, gText_Rom_5811D9 + 0x3
	.incbin "baserom.gba", 0x5811e0, 0x15

	@ src/data/decoration/header.h:664 header_line_664
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5811F5
gText_Rom_5811F5: @ 0x085811F5
	.string "かわいいテレビ$"
	.if (. - gText_Rom_5811F5) != 0x8
	.error "gText_Rom_5811F5 must retain its original byte length"
	.endif
	.globl gText_Rom_5811F9
	.set gText_Rom_5811F9, gText_Rom_5811F5 + 0x4
	.incbin "baserom.gba", 0x5811fd, 0x14

	@ src/data/decoration/header.h:678 header_line_678
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581211
gText_Rom_581211: @ 0x08581211
	.string "きらきらマット$"
	.if (. - gText_Rom_581211) != 0x8
	.error "gText_Rom_581211 must retain its original byte length"
	.endif
	.globl gText_Rom_581215
	.set gText_Rom_581215, gText_Rom_581211 + 0x4
	.incbin "baserom.gba", 0x581219, 0x14

	@ src/data/decoration/header.h:692 header_line_692
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58122D
gText_Rom_58122D: @ 0x0858122D
	.string "ジャンプマット$"
	.if (. - gText_Rom_58122D) != 0x8
	.error "gText_Rom_58122D must retain its original byte length"
	.endif
	.globl gText_Rom_581231
	.set gText_Rom_581231, gText_Rom_58122D + 0x4
	.incbin "baserom.gba", 0x581235, 0x14

	@ src/data/decoration/header.h:706 header_line_706
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581249
gText_Rom_581249: @ 0x08581249
	.string "くるっとマット$"
	.if (. - gText_Rom_581249) != 0x8
	.error "gText_Rom_581249 must retain its original byte length"
	.endif
	.globl gText_Rom_58124D
	.set gText_Rom_58124D, gText_Rom_581249 + 0x4
	.incbin "baserom.gba", 0x581251, 0x14

	@ src/data/decoration/header.h:720 header_line_720
	.globl gText_Rom_581265
gText_Rom_581265: @ 0x08581265
	.string "おんぷマットCL$"
	.if (. - gText_Rom_581265) > 0x9
	.error "gText_Rom_581265 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581265) < 0x9
	.space 0x9 - (. - gText_Rom_581265)
	.endif
	.incbin "baserom.gba", 0x58126e, 0x13

	@ src/data/decoration/header.h:734 header_line_734
	.globl gText_Rom_581281
gText_Rom_581281: @ 0x08581281
	.string "おんぷマットD$"
	.if (. - gText_Rom_581281) > 0x8
	.error "gText_Rom_581281 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581281) < 0x8
	.space 0x8 - (. - gText_Rom_581281)
	.endif
	.incbin "baserom.gba", 0x581289, 0x14

	@ src/data/decoration/header.h:748 header_line_748
	.globl gText_Rom_58129D
gText_Rom_58129D: @ 0x0858129D
	.string "おんぷマットE$"
	.if (. - gText_Rom_58129D) > 0x8
	.error "gText_Rom_58129D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58129D) < 0x8
	.space 0x8 - (. - gText_Rom_58129D)
	.endif
	.incbin "baserom.gba", 0x5812a5, 0x14

	@ src/data/decoration/header.h:762 header_line_762
	.globl gText_Rom_5812B9
gText_Rom_5812B9: @ 0x085812B9
	.string "おんぷマットF$"
	.if (. - gText_Rom_5812B9) > 0x8
	.error "gText_Rom_5812B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5812B9) < 0x8
	.space 0x8 - (. - gText_Rom_5812B9)
	.endif
	.incbin "baserom.gba", 0x5812c1, 0x14

	@ src/data/decoration/header.h:776 header_line_776
	.globl gText_Rom_5812D5
gText_Rom_5812D5: @ 0x085812D5
	.string "おんぷマットG$"
	.if (. - gText_Rom_5812D5) > 0x8
	.error "gText_Rom_5812D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5812D5) < 0x8
	.space 0x8 - (. - gText_Rom_5812D5)
	.endif
	.incbin "baserom.gba", 0x5812dd, 0x14

	@ src/data/decoration/header.h:790 header_line_790
	.globl gText_Rom_5812F1
gText_Rom_5812F1: @ 0x085812F1
	.string "おんぷマットA$"
	.if (. - gText_Rom_5812F1) > 0x8
	.error "gText_Rom_5812F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5812F1) < 0x8
	.space 0x8 - (. - gText_Rom_5812F1)
	.endif
	.incbin "baserom.gba", 0x5812f9, 0x14

	@ src/data/decoration/header.h:804 header_line_804
	.globl gText_Rom_58130D
gText_Rom_58130D: @ 0x0858130D
	.string "おんぷマットB$"
	.if (. - gText_Rom_58130D) > 0x8
	.error "gText_Rom_58130D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58130D) < 0x8
	.space 0x8 - (. - gText_Rom_58130D)
	.endif
	.incbin "baserom.gba", 0x581315, 0x14

	@ src/data/decoration/header.h:818 header_line_818
	.globl gText_Rom_581329
gText_Rom_581329: @ 0x08581329
	.string "おんぷマットCH$"
	.if (. - gText_Rom_581329) > 0x9
	.error "gText_Rom_581329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581329) < 0x9
	.space 0x9 - (. - gText_Rom_581329)
	.endif
	.incbin "baserom.gba", 0x581332, 0x13

	@ src/data/decoration/header.h:832 header_line_832
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581345
gText_Rom_581345: @ 0x08581345
	.string "なみのりマット$"
	.if (. - gText_Rom_581345) != 0x8
	.error "gText_Rom_581345 must retain its original byte length"
	.endif
	.globl gText_Rom_581349
	.set gText_Rom_581349, gText_Rom_581345 + 0x4
	.incbin "baserom.gba", 0x58134d, 0x14

	@ src/data/decoration/header.h:846 header_line_846
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581361
gText_Rom_581361: @ 0x08581361
	.string "かみなりマット$"
	.if (. - gText_Rom_581361) != 0x8
	.error "gText_Rom_581361 must retain its original byte length"
	.endif
	.globl gText_Rom_581365
	.set gText_Rom_581365, gText_Rom_581361 + 0x4
	.incbin "baserom.gba", 0x581369, 0x14

	@ src/data/decoration/header.h:860 header_line_860
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58137D
gText_Rom_58137D: @ 0x0858137D
	.string "だいもんじマット$"
	.if (. - gText_Rom_58137D) != 0x9
	.error "gText_Rom_58137D must retain its original byte length"
	.endif
	.globl gText_Rom_581382
	.set gText_Rom_581382, gText_Rom_58137D + 0x5
	.incbin "baserom.gba", 0x581386, 0x13

	@ src/data/decoration/header.h:874 header_line_874
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581399
gText_Rom_581399: @ 0x08581399
	.string "こなゆきマット$"
	.if (. - gText_Rom_581399) != 0x8
	.error "gText_Rom_581399 must retain its original byte length"
	.endif
	.globl gText_Rom_58139D
	.set gText_Rom_58139D, gText_Rom_581399 + 0x4
	.incbin "baserom.gba", 0x5813a1, 0x14

	@ src/data/decoration/header.h:888 header_line_888
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5813B5
gText_Rom_5813B5: @ 0x085813B5
	.string "メロメロマット$"
	.if (. - gText_Rom_5813B5) != 0x8
	.error "gText_Rom_5813B5 must retain its original byte length"
	.endif
	.globl gText_Rom_5813B9
	.set gText_Rom_5813B9, gText_Rom_5813B5 + 0x4
	.incbin "baserom.gba", 0x5813bd, 0x14

	@ src/data/decoration/header.h:902 header_line_902
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5813D1
gText_Rom_5813D1: @ 0x085813D1
	.string "じわれマット$"
	.if (. - gText_Rom_5813D1) != 0x7
	.error "gText_Rom_5813D1 must retain its original byte length"
	.endif
	.globl gText_Rom_5813D4
	.set gText_Rom_5813D4, gText_Rom_5813D1 + 0x3
	.incbin "baserom.gba", 0x5813d8, 0x15

	@ src/data/decoration/header.h:916 header_line_916
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5813ED
gText_Rom_5813ED: @ 0x085813ED
	.string "まきびしマット$"
	.if (. - gText_Rom_5813ED) != 0x8
	.error "gText_Rom_5813ED must retain its original byte length"
	.endif
	.globl gText_Rom_5813F1
	.set gText_Rom_5813F1, gText_Rom_5813ED + 0x4
	.incbin "baserom.gba", 0x5813f5, 0x14

	@ src/data/decoration/header.h:930 header_line_930
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581409
gText_Rom_581409: @ 0x08581409
	.string "ボールポスター$"
	.if (. - gText_Rom_581409) != 0x8
	.error "gText_Rom_581409 must retain its original byte length"
	.endif
	.globl gText_Rom_58140C
	.set gText_Rom_58140C, gText_Rom_581409 + 0x3
	.incbin "baserom.gba", 0x581411, 0x14

	@ src/data/decoration/header.h:944 header_line_944
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581425
gText_Rom_581425: @ 0x08581425
	.string "みどりのポスター$"
	.if (. - gText_Rom_581425) != 0x9
	.error "gText_Rom_581425 must retain its original byte length"
	.endif
	.globl gText_Rom_581429
	.set gText_Rom_581429, gText_Rom_581425 + 0x4
	.incbin "baserom.gba", 0x58142e, 0x13

	@ src/data/decoration/header.h:958 header_line_958
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581441
gText_Rom_581441: @ 0x08581441
	.string "あかいポスター$"
	.if (. - gText_Rom_581441) != 0x8
	.error "gText_Rom_581441 must retain its original byte length"
	.endif
	.globl gText_Rom_581444
	.set gText_Rom_581444, gText_Rom_581441 + 0x3
	.incbin "baserom.gba", 0x581449, 0x14

	@ src/data/decoration/header.h:972 header_line_972
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58145D
gText_Rom_58145D: @ 0x0858145D
	.string "みずいろポスター$"
	.if (. - gText_Rom_58145D) != 0x9
	.error "gText_Rom_58145D must retain its original byte length"
	.endif
	.globl gText_Rom_581461
	.set gText_Rom_581461, gText_Rom_58145D + 0x4
	.incbin "baserom.gba", 0x581466, 0x13

	@ src/data/decoration/header.h:986 header_line_986
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581479
gText_Rom_581479: @ 0x08581479
	.string "かわいいポスター$"
	.if (. - gText_Rom_581479) != 0x9
	.error "gText_Rom_581479 must retain its original byte length"
	.endif
	.globl gText_Rom_58147D
	.set gText_Rom_58147D, gText_Rom_581479 + 0x4
	.incbin "baserom.gba", 0x581482, 0x13

	@ src/data/decoration/header.h:1000 header_line_1000
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581495
gText_Rom_581495: @ 0x08581495
	.string "ピカピカポスター$"
	.if (. - gText_Rom_581495) != 0x9
	.error "gText_Rom_581495 must retain its original byte length"
	.endif
	.globl gText_Rom_581499
	.set gText_Rom_581499, gText_Rom_581495 + 0x4
	.incbin "baserom.gba", 0x58149e, 0x13

	@ src/data/decoration/header.h:1014 header_line_1014
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5814B1
gText_Rom_5814B1: @ 0x085814B1
	.string "ながいポスター$"
	.if (. - gText_Rom_5814B1) != 0x8
	.error "gText_Rom_5814B1 must retain its original byte length"
	.endif
	.globl gText_Rom_5814B4
	.set gText_Rom_5814B4, gText_Rom_5814B1 + 0x3
	.incbin "baserom.gba", 0x5814b9, 0x14

	@ src/data/decoration/header.h:1028 header_line_1028
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5814CD
gText_Rom_5814CD: @ 0x085814CD
	.string "うみのポスター$"
	.if (. - gText_Rom_5814CD) != 0x8
	.error "gText_Rom_5814CD must retain its original byte length"
	.endif
	.globl gText_Rom_5814D0
	.set gText_Rom_5814D0, gText_Rom_5814CD + 0x3
	.incbin "baserom.gba", 0x5814d5, 0x14

	@ src/data/decoration/header.h:1042 header_line_1042
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5814E9
gText_Rom_5814E9: @ 0x085814E9
	.string "そらのポスター$"
	.if (. - gText_Rom_5814E9) != 0x8
	.error "gText_Rom_5814E9 must retain its original byte length"
	.endif
	.globl gText_Rom_5814EC
	.set gText_Rom_5814EC, gText_Rom_5814E9 + 0x3
	.incbin "baserom.gba", 0x5814f1, 0x14

	@ src/data/decoration/header.h:1056 header_line_1056
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581505
gText_Rom_581505: @ 0x08581505
	.string "キッスポスター$"
	.if (. - gText_Rom_581505) != 0x8
	.error "gText_Rom_581505 must retain its original byte length"
	.endif
	.globl gText_Rom_581508
	.set gText_Rom_581508, gText_Rom_581505 + 0x3
	.incbin "baserom.gba", 0x58150d, 0x14

	@ src/data/decoration/header.h:1070 header_line_1070
	.globl gText_Rom_581521
gText_Rom_581521: @ 0x08581521
	.string "ピチュードール$"
	.if (. - gText_Rom_581521) > 0x8
	.error "gText_Rom_581521 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581521) < 0x8
	.space 0x8 - (. - gText_Rom_581521)
	.endif
	.incbin "baserom.gba", 0x581529, 0x14

	@ src/data/decoration/header.h:1084 header_line_1084
	.globl gText_Rom_58153D
gText_Rom_58153D: @ 0x0858153D
	.string "ピカチュウドール$"
	.if (. - gText_Rom_58153D) > 0x9
	.error "gText_Rom_58153D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58153D) < 0x9
	.space 0x9 - (. - gText_Rom_58153D)
	.endif
	.incbin "baserom.gba", 0x581546, 0x13

	@ src/data/decoration/header.h:1098 header_line_1098
	.globl gText_Rom_581559
gText_Rom_581559: @ 0x08581559
	.string "マリルドール$"
	.if (. - gText_Rom_581559) > 0x7
	.error "gText_Rom_581559 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581559) < 0x7
	.space 0x7 - (. - gText_Rom_581559)
	.endif
	.incbin "baserom.gba", 0x581560, 0x15

	@ src/data/decoration/header.h:1112 header_line_1112
	.globl gText_Rom_581575
gText_Rom_581575: @ 0x08581575
	.string "トゲピードール$"
	.if (. - gText_Rom_581575) > 0x8
	.error "gText_Rom_581575 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581575) < 0x8
	.space 0x8 - (. - gText_Rom_581575)
	.endif
	.incbin "baserom.gba", 0x58157d, 0x14

	@ src/data/decoration/header.h:1126 header_line_1126
	.globl gText_Rom_581591
gText_Rom_581591: @ 0x08581591
	.string "ヒノアラシドール$"
	.if (. - gText_Rom_581591) > 0x9
	.error "gText_Rom_581591 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581591) < 0x9
	.space 0x9 - (. - gText_Rom_581591)
	.endif
	.incbin "baserom.gba", 0x58159a, 0x13

	@ src/data/decoration/header.h:1140 header_line_1140
	.globl gText_Rom_5815AD
gText_Rom_5815AD: @ 0x085815AD
	.string "チコリータドール$"
	.if (. - gText_Rom_5815AD) > 0x9
	.error "gText_Rom_5815AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5815AD) < 0x9
	.space 0x9 - (. - gText_Rom_5815AD)
	.endif
	.incbin "baserom.gba", 0x5815b6, 0x13

	@ src/data/decoration/header.h:1154 header_line_1154
	.globl gText_Rom_5815C9
gText_Rom_5815C9: @ 0x085815C9
	.string "ワニノコドール$"
	.if (. - gText_Rom_5815C9) > 0x8
	.error "gText_Rom_5815C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5815C9) < 0x8
	.space 0x8 - (. - gText_Rom_5815C9)
	.endif
	.incbin "baserom.gba", 0x5815d1, 0x14

	@ src/data/decoration/header.h:1168 header_line_1168
	.globl gText_Rom_5815E5
gText_Rom_5815E5: @ 0x085815E5
	.string "プリンドール$"
	.if (. - gText_Rom_5815E5) > 0x7
	.error "gText_Rom_5815E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5815E5) < 0x7
	.space 0x7 - (. - gText_Rom_5815E5)
	.endif
	.incbin "baserom.gba", 0x5815ec, 0x15

	@ src/data/decoration/header.h:1182 header_line_1182
	.globl gText_Rom_581601
gText_Rom_581601: @ 0x08581601
	.string "ニャースドール$"
	.if (. - gText_Rom_581601) > 0x8
	.error "gText_Rom_581601 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581601) < 0x8
	.space 0x8 - (. - gText_Rom_581601)
	.endif
	.incbin "baserom.gba", 0x581609, 0x14

	@ src/data/decoration/header.h:1196 header_line_1196
	.globl gText_Rom_58161D
gText_Rom_58161D: @ 0x0858161D
	.string "ピッピドール$"
	.if (. - gText_Rom_58161D) > 0x7
	.error "gText_Rom_58161D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58161D) < 0x7
	.space 0x7 - (. - gText_Rom_58161D)
	.endif
	.incbin "baserom.gba", 0x581624, 0x15

	@ src/data/decoration/header.h:1210 header_line_1210
	.globl gText_Rom_581639
gText_Rom_581639: @ 0x08581639
	.string "メタモンドール$"
	.if (. - gText_Rom_581639) > 0x8
	.error "gText_Rom_581639 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581639) < 0x8
	.space 0x8 - (. - gText_Rom_581639)
	.endif
	.incbin "baserom.gba", 0x581641, 0x14

	@ src/data/decoration/header.h:1224 header_line_1224
	.globl gText_Rom_581655
gText_Rom_581655: @ 0x08581655
	.string "ムチュールドール$"
	.if (. - gText_Rom_581655) > 0x9
	.error "gText_Rom_581655 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581655) < 0x9
	.space 0x9 - (. - gText_Rom_581655)
	.endif
	.incbin "baserom.gba", 0x58165e, 0x13

	@ src/data/decoration/header.h:1238 header_line_1238
	.globl gText_Rom_581671
gText_Rom_581671: @ 0x08581671
	.string "キモリドール$"
	.if (. - gText_Rom_581671) > 0x7
	.error "gText_Rom_581671 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581671) < 0x7
	.space 0x7 - (. - gText_Rom_581671)
	.endif
	.incbin "baserom.gba", 0x581678, 0x15

	@ src/data/decoration/header.h:1252 header_line_1252
	.globl gText_Rom_58168D
gText_Rom_58168D: @ 0x0858168D
	.string "アチャモドール$"
	.if (. - gText_Rom_58168D) > 0x8
	.error "gText_Rom_58168D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58168D) < 0x8
	.space 0x8 - (. - gText_Rom_58168D)
	.endif
	.incbin "baserom.gba", 0x581695, 0x14

	@ src/data/decoration/header.h:1266 header_line_1266
	.globl gText_Rom_5816A9
gText_Rom_5816A9: @ 0x085816A9
	.string "ミズゴロウドール$"
	.if (. - gText_Rom_5816A9) > 0x9
	.error "gText_Rom_5816A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5816A9) < 0x9
	.space 0x9 - (. - gText_Rom_5816A9)
	.endif
	.incbin "baserom.gba", 0x5816b2, 0x13

	@ src/data/decoration/header.h:1280 header_line_1280
	.globl gText_Rom_5816C5
gText_Rom_5816C5: @ 0x085816C5
	.string "ヨマワルドール$"
	.if (. - gText_Rom_5816C5) > 0x8
	.error "gText_Rom_5816C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5816C5) < 0x8
	.space 0x8 - (. - gText_Rom_5816C5)
	.endif
	.incbin "baserom.gba", 0x5816cd, 0x14

