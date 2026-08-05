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
	@ Replaced baserom.gba range: offset=0x57C90F, size=0x5
	.byte 0xFD, 0x08, 0x41, 0x2E, 0x00

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
	@ Replaced baserom.gba range: offset=0x57C934, size=0x7
	.byte 0x1F, 0x4A, 0x2B, 0x0C, 0x3D, 0x1F, 0xFF

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
	@ Replaced baserom.gba range: offset=0x57C943, size=0x9
	.byte 0x20, 0x15, 0x20, 0x19, 0x00, 0x0A, 0x14, 0x03, 0xFF

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
	@ Replaced baserom.gba range: offset=0x57C95E, size=0x9
	.byte 0x05, 0x1C, 0x2A, 0x19, 0x0E, 0x07, 0x0C, 0x12, 0xFF

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
	@ Replaced baserom.gba range: offset=0x57C99A, size=0xF
	.byte 0x14, 0x08, 0x0C, 0x35, 0xFF, 0x6F, 0x5B, 0x77, 0x60, 0x53, 0x7E, 0xFF, 0x64, 0x57, 0x7C

