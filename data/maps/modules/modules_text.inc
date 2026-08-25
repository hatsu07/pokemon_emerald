.if .L__inc_fragment_select_5e7795a77bd8 == 1
	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_4BE091
gText_Rom_4BE091: @ 0x084BE091
	.string "ラララ{EOS}"
	.if (. - gText_Rom_4BE091) > 0x4
	.error "gText_Rom_4BE091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE091) < 0x4
	.space 0x4 - (. - gText_Rom_4BE091)
	.endif
	@ analyzed canonical ROM range 0x084BE095-0x084BE0B0
gObjectEventFrameGfx_JP_084BE095: @ 0x084BE095
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ bytes also lie inside the declared 0x084BDCAC ObjectEvent frame range
	.byte 0xFF, 0xFF, 0xFF, 0xDF, 0x88, 0xFD, 0xFF, 0x68, 0x88, 0x86, 0xFF, 0x87, 0x66, 0x78, 0xFF, 0x7F
	.byte 0x88, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x7F, 0x77, 0x77, 0x77, 0x7F
	.globl gText_Rom_4BE0B1
gText_Rom_4BE0B1: @ 0x084BE0B1
	.string "ラララ{EOS}"
	.if (. - gText_Rom_4BE0B1) > 0x4
	.error "gText_Rom_4BE0B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE0B1) < 0x4
	.space 0x4 - (. - gText_Rom_4BE0B1)
	.endif
	@ analyzed canonical ROM range 0x084BE0B5-0x084BE0D0
gObjectEventFrameGfx_JP_084BE0B5: @ 0x084BE0B5
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GRAPHICS
	@ bytes also lie inside the declared 0x084BDCAC ObjectEvent frame range
	.byte 0x8F, 0xF8, 0xFF, 0xFF, 0x7F, 0xF7, 0xFF, 0x7F, 0x66, 0x66, 0x66, 0xFF, 0xFF, 0xFF, 0xFF, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0x77, 0x77, 0x77, 0x77, 0x77
	.globl gText_Rom_4BE0D1
gText_Rom_4BE0D1: @ 0x084BE0D1
	.string "ラララ{EOS}"
	.if (. - gText_Rom_4BE0D1) > 0x4
	.error "gText_Rom_4BE0D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE0D1) < 0x4
	.space 0x4 - (. - gText_Rom_4BE0D1)
	.endif
	@ analyzed canonical ROM range 0x084BE0D5-0x084BE0F0
gObjectEventFrameGfx_JP_084BE0D5: @ 0x084BE0D5
	@ ANALYSIS: SEMANTIC_NUMERIC_OBJECT_EVENT_GFX
	@ Object-event sprite frame graphics/data.
	@ bytes also lie inside the declared 0x084BDCAC ObjectEvent frame range
	.byte 0xFF, 0x88, 0xFF, 0xFF, 0xFF, 0x77, 0xFF, 0x66, 0x66, 0x66, 0x76, 0xFF, 0xFF, 0xFF, 0xFF, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0x77, 0x77, 0x77, 0x77, 0x77
.elseif .L__inc_fragment_select_5e7795a77bd8 == 2
	@ src/data/region_map/region_map_entries.h:14 region_map_entries_line_14
	.globl gText_Rom_57C6E0
gText_Rom_57C6E0: @ 0x0857C6E0
	.string "ミシロタウン{EOS}"
	.if (. - gText_Rom_57C6E0) > 0x7
	.error "gText_Rom_57C6E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6E0) < 0x7
	.space 0x7 - (. - gText_Rom_57C6E0)
	.endif

	@ src/data/region_map/region_map_entries.h:21 region_map_entries_line_21
	.globl gText_Rom_57C6E7
gText_Rom_57C6E7: @ 0x0857C6E7
	.string "コトキタウン{EOS}"
	.if (. - gText_Rom_57C6E7) > 0x7
	.error "gText_Rom_57C6E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6E7) < 0x7
	.space 0x7 - (. - gText_Rom_57C6E7)
	.endif

	@ src/data/region_map/region_map_entries.h:28 region_map_entries_line_28
	.globl gText_Rom_57C6EE
gText_Rom_57C6EE: @ 0x0857C6EE
	.string "ムロタウン{EOS}"
	.if (. - gText_Rom_57C6EE) > 0x6
	.error "gText_Rom_57C6EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6EE) < 0x6
	.space 0x6 - (. - gText_Rom_57C6EE)
	.endif

	@ src/data/region_map/region_map_entries.h:35 region_map_entries_line_35
	.globl gText_Rom_57C6F4
gText_Rom_57C6F4: @ 0x0857C6F4
	.string "フエンタウン{EOS}"
	.if (. - gText_Rom_57C6F4) > 0x7
	.error "gText_Rom_57C6F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6F4) < 0x7
	.space 0x7 - (. - gText_Rom_57C6F4)
	.endif

	@ src/data/region_map/region_map_entries.h:42 region_map_entries_line_42
	.globl gText_Rom_57C6FB
gText_Rom_57C6FB: @ 0x0857C6FB
	.string "ハジツゲタウン{EOS}"
	.if (. - gText_Rom_57C6FB) > 0x8
	.error "gText_Rom_57C6FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C6FB) < 0x8
	.space 0x8 - (. - gText_Rom_57C6FB)
	.endif

	@ src/data/region_map/region_map_entries.h:49 region_map_entries_line_49
	.globl gText_Rom_57C703
gText_Rom_57C703: @ 0x0857C703
	.string "シダケタウン{EOS}"
	.if (. - gText_Rom_57C703) > 0x7
	.error "gText_Rom_57C703 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C703) < 0x7
	.space 0x7 - (. - gText_Rom_57C703)
	.endif

	@ src/data/region_map/region_map_entries.h:56 region_map_entries_line_56
	.globl gText_Rom_57C70A
gText_Rom_57C70A: @ 0x0857C70A
	.string "キナギタウン{EOS}"
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
	.string "トウカシティ{EOS}"
	.if (. - gText_Rom_57C711) != 0x7
	.error "gText_Rom_57C711 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:70 region_map_entries_line_70 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C718
gText_Rom_57C718: @ 0x0857C718
	.string "カイナシティ{EOS}"
	.if (. - gText_Rom_57C718) != 0x7
	.error "gText_Rom_57C718 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:77 region_map_entries_line_77
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C71F
gText_Rom_57C71F: @ 0x0857C71F
	.string "キンセツシティ{EOS}"
	.if (. - gText_Rom_57C71F) != 0x8
	.error "gText_Rom_57C71F must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:84 region_map_entries_line_84
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C727
gText_Rom_57C727: @ 0x0857C727
	.string "カナズミシティ{EOS}"
	.if (. - gText_Rom_57C727) != 0x8
	.error "gText_Rom_57C727 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:91 region_map_entries_line_91
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C72F
gText_Rom_57C72F: @ 0x0857C72F
	.string "ヒワマキシティ{EOS}"
	.if (. - gText_Rom_57C72F) != 0x8
	.error "gText_Rom_57C72F must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:98 region_map_entries_line_98 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C737
gText_Rom_57C737: @ 0x0857C737
	.string "ミナモシティ{EOS}"
	.if (. - gText_Rom_57C737) != 0x7
	.error "gText_Rom_57C737 must retain its original byte length"
	.endif

.elseif .L__inc_fragment_select_5e7795a77bd8 == 3
	@ src/data/region_map/region_map_entries.h:105 region_map_entries_line_105
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C73E
gText_Rom_57C73E: @ 0x0857C73E
	.string "トクサネシティ{EOS}"
	.if (. - gText_Rom_57C73E) != 0x8
	.error "gText_Rom_57C73E must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:112 region_map_entries_line_112
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C746
gText_Rom_57C746: @ 0x0857C746
	.string "ルネシティ{EOS}"
	.if (. - gText_Rom_57C746) != 0x6
	.error "gText_Rom_57C746 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:119 region_map_entries_line_119
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C74C
gText_Rom_57C74C: @ 0x0857C74C
	.string "サイユウシティ{EOS}"
	.if (. - gText_Rom_57C74C) != 0x8
	.error "gText_Rom_57C74C must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:126 region_map_entries_line_126
	.globl gText_Rom_57C754
gText_Rom_57C754: @ 0x0857C754
	.string "101ばん どうろ{EOS}"
	.if (. - gText_Rom_57C754) > 0xa
	.error "gText_Rom_57C754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C754) < 0xa
	.space 0xa - (. - gText_Rom_57C754)
	.endif

	@ src/data/region_map/region_map_entries.h:133 region_map_entries_line_133
	.globl gText_Rom_57C75E
gText_Rom_57C75E: @ 0x0857C75E
	.string "102ばん どうろ{EOS}"
	.if (. - gText_Rom_57C75E) > 0xa
	.error "gText_Rom_57C75E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C75E) < 0xa
	.space 0xa - (. - gText_Rom_57C75E)
	.endif

	@ src/data/region_map/region_map_entries.h:140 region_map_entries_line_140
	.globl gText_Rom_57C768
gText_Rom_57C768: @ 0x0857C768
	.string "103ばん どうろ{EOS}"
	.if (. - gText_Rom_57C768) > 0xa
	.error "gText_Rom_57C768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C768) < 0xa
	.space 0xa - (. - gText_Rom_57C768)
	.endif

	@ src/data/region_map/region_map_entries.h:147 region_map_entries_line_147
	.globl gText_Rom_57C772
gText_Rom_57C772: @ 0x0857C772
	.string "104ばん どうろ{EOS}"
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
	.string "105ばん すいどう{EOS}"
	.if (. - gText_Rom_57C77C) != 0xb
	.error "gText_Rom_57C77C must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:161 region_map_entries_line_161
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C787
gText_Rom_57C787: @ 0x0857C787
	.string "106ばん すいどう{EOS}"
	.if (. - gText_Rom_57C787) != 0xb
	.error "gText_Rom_57C787 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:168 region_map_entries_line_168
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C792
gText_Rom_57C792: @ 0x0857C792
	.string "107ばん すいどう{EOS}"
	.if (. - gText_Rom_57C792) != 0xb
	.error "gText_Rom_57C792 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:175 region_map_entries_line_175
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C79D
gText_Rom_57C79D: @ 0x0857C79D
	.string "108ばん すいどう{EOS}"
	.if (. - gText_Rom_57C79D) != 0xb
	.error "gText_Rom_57C79D must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:182 region_map_entries_line_182
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C7A8
gText_Rom_57C7A8: @ 0x0857C7A8
	.string "109ばん すいどう{EOS}"
	.if (. - gText_Rom_57C7A8) != 0xb
	.error "gText_Rom_57C7A8 must retain its original byte length"
	.endif

.elseif .L__inc_fragment_select_5e7795a77bd8 == 4
	@ src/data/region_map/region_map_entries.h:189 region_map_entries_line_189
	.globl gText_Rom_57C7B3
gText_Rom_57C7B3: @ 0x0857C7B3
	.string "110ばん どうろ{EOS}"
	.if (. - gText_Rom_57C7B3) > 0xa
	.error "gText_Rom_57C7B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7B3) < 0xa
	.space 0xa - (. - gText_Rom_57C7B3)
	.endif

	@ src/data/region_map/region_map_entries.h:196 region_map_entries_line_196
	.globl gText_Rom_57C7BD
gText_Rom_57C7BD: @ 0x0857C7BD
	.string "111ばん どうろ{EOS}"
	.if (. - gText_Rom_57C7BD) > 0xa
	.error "gText_Rom_57C7BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7BD) < 0xa
	.space 0xa - (. - gText_Rom_57C7BD)
	.endif

	@ src/data/region_map/region_map_entries.h:203 region_map_entries_line_203
	.globl gText_Rom_57C7C7
gText_Rom_57C7C7: @ 0x0857C7C7
	.string "112ばん どうろ{EOS}"
	.if (. - gText_Rom_57C7C7) > 0xa
	.error "gText_Rom_57C7C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7C7) < 0xa
	.space 0xa - (. - gText_Rom_57C7C7)
	.endif

	@ src/data/region_map/region_map_entries.h:210 region_map_entries_line_210
	.globl gText_Rom_57C7D1
gText_Rom_57C7D1: @ 0x0857C7D1
	.string "113ばん どうろ{EOS}"
	.if (. - gText_Rom_57C7D1) > 0xa
	.error "gText_Rom_57C7D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7D1) < 0xa
	.space 0xa - (. - gText_Rom_57C7D1)
	.endif

	@ src/data/region_map/region_map_entries.h:217 region_map_entries_line_217
	.globl gText_Rom_57C7DB
gText_Rom_57C7DB: @ 0x0857C7DB
	.string "114ばん どうろ{EOS}"
	.if (. - gText_Rom_57C7DB) > 0xa
	.error "gText_Rom_57C7DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7DB) < 0xa
	.space 0xa - (. - gText_Rom_57C7DB)
	.endif

	@ src/data/region_map/region_map_entries.h:224 region_map_entries_line_224
	.globl gText_Rom_57C7E5
gText_Rom_57C7E5: @ 0x0857C7E5
	.string "115ばん どうろ{EOS}"
	.if (. - gText_Rom_57C7E5) > 0xa
	.error "gText_Rom_57C7E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7E5) < 0xa
	.space 0xa - (. - gText_Rom_57C7E5)
	.endif

	@ src/data/region_map/region_map_entries.h:231 region_map_entries_line_231
	.globl gText_Rom_57C7EF
gText_Rom_57C7EF: @ 0x0857C7EF
	.string "116ばん どうろ{EOS}"
	.if (. - gText_Rom_57C7EF) > 0xa
	.error "gText_Rom_57C7EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7EF) < 0xa
	.space 0xa - (. - gText_Rom_57C7EF)
	.endif

	@ src/data/region_map/region_map_entries.h:238 region_map_entries_line_238
	.globl gText_Rom_57C7F9
gText_Rom_57C7F9: @ 0x0857C7F9
	.string "117ばん どうろ{EOS}"
	.if (. - gText_Rom_57C7F9) > 0xa
	.error "gText_Rom_57C7F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C7F9) < 0xa
	.space 0xa - (. - gText_Rom_57C7F9)
	.endif

	@ src/data/region_map/region_map_entries.h:245 region_map_entries_line_245
	.globl gText_Rom_57C803
gText_Rom_57C803: @ 0x0857C803
	.string "118ばん どうろ{EOS}"
	.if (. - gText_Rom_57C803) > 0xa
	.error "gText_Rom_57C803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C803) < 0xa
	.space 0xa - (. - gText_Rom_57C803)
	.endif

	@ src/data/region_map/region_map_entries.h:252 region_map_entries_line_252
	.globl gText_Rom_57C80D
gText_Rom_57C80D: @ 0x0857C80D
	.string "119ばん どうろ{EOS}"
	.if (. - gText_Rom_57C80D) > 0xa
	.error "gText_Rom_57C80D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C80D) < 0xa
	.space 0xa - (. - gText_Rom_57C80D)
	.endif

	@ src/data/region_map/region_map_entries.h:259 region_map_entries_line_259
	.globl gText_Rom_57C817
gText_Rom_57C817: @ 0x0857C817
	.string "120ばん どうろ{EOS}"
	.if (. - gText_Rom_57C817) > 0xa
	.error "gText_Rom_57C817 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C817) < 0xa
	.space 0xa - (. - gText_Rom_57C817)
	.endif

	@ src/data/region_map/region_map_entries.h:266 region_map_entries_line_266
	.globl gText_Rom_57C821
gText_Rom_57C821: @ 0x0857C821
	.string "121ばん どうろ{EOS}"
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
	.string "122ばん すいどう{EOS}"
	.if (. - gText_Rom_57C82B) != 0xb
	.error "gText_Rom_57C82B must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:280 region_map_entries_line_280
	.globl gText_Rom_57C836
gText_Rom_57C836: @ 0x0857C836
	.string "123ばん どうろ{EOS}"
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
	.string "124ばん すいどう{EOS}"
	.if (. - gText_Rom_57C840) != 0xb
	.error "gText_Rom_57C840 must retain its original byte length"
	.endif

.elseif .L__inc_fragment_select_5e7795a77bd8 == 5
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

.elseif .L__inc_fragment_select_5e7795a77bd8 == 6
	@ src/data/region_map/region_map_entries.h:413 region_map_entries_line_413
	.globl gText_Rom_57CB2C
gText_Rom_57CB2C: @ 0x0857CB2C
	.string "サファリゾーン{EOS}"
	.if (. - gText_Rom_57CB2C) > 0x8
	.error "gText_Rom_57CB2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB2C) < 0x8
	.space 0x8 - (. - gText_Rom_57CB2C)
	.endif

	@ src/strings.c:623 gText_PokemonLeague
	.globl gText_PokemonLeague
gText_PokemonLeague: @ 0x0857CB34
	.string "ポケモンリーグ{EOS}"
	.if (. - gText_PokemonLeague) > 0x8
	.error "gText_PokemonLeague may not grow beyond its original slot"
	.endif
	.if (. - gText_PokemonLeague) < 0x8
	.space 0x8 - (. - gText_PokemonLeague)
	.endif
	@ analyzed canonical ROM range 0x0857CB3C-0x0857CB4E
	.globl gText_Rom_57CB3C
gText_Rom_57CB3C: @ 0x0857CB3C
	@ text fragments: "イワヤマトンネル$", "ふたごじま$", "ポケモン"
	.byte 0x52, 0x7C, 0x74, 0x6F, 0x64, 0x7E, 0x68, 0x79, 0xFF, 0x1C, 0x10, 0x3B, 0x3D, 0x1F, 0xFF, 0x9F
	.byte 0x59, 0x73, 0x7E
	.globl gText_Rom_57CB4F
gText_Rom_57CB4F: @ 0x0857CB4F
	.string "タワー{EOS}"
	.if (. - gText_Rom_57CB4F) > 0x4
	.error "gText_Rom_57CB4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB4F) < 0x4
	.space 0x4 - (. - gText_Rom_57CB4F)
	.endif
	@ analyzed canonical ROM range 0x0857CB53-0x0857CB56
	.globl gText_Rom_57CB53
gText_Rom_57CB53: @ 0x0857CB53
	@ text fragment: "ハナダの"
	.byte 0x6A, 0x65, 0x91, 0x19
.elseif .L__inc_fragment_select_5e7795a77bd8 == 7
	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_598908
gText_Rom_598908: @ 0x08598908
	.string "おくりびやま{EOS}"
	.if (. - gText_Rom_598908) > 0x7
	.error "gText_Rom_598908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598908) < 0x7
	.space 0x7 - (. - gText_Rom_598908)
	.endif

	@ src/data/region_map/region_map_entries.h:483 region_map_entries_line_483
	.globl gText_Rom_59890F
gText_Rom_59890F: @ 0x0859890F
	.string "あさせのほらあな{EOS}"
	.if (. - gText_Rom_59890F) > 0x9
	.error "gText_Rom_59890F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59890F) < 0x9
	.space 0x9 - (. - gText_Rom_59890F)
	.endif

	@ src/data/region_map/region_map_entries.h:490 region_map_entries_line_490
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_598918
gText_Rom_598918: @ 0x08598918
	.string "かいていどうくつ{EOS}"
	.if (. - gText_Rom_598918) != 0x9
	.error "gText_Rom_598918 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:399 region_map_entries_line_399
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_598921
gText_Rom_598921: @ 0x08598921
	.string "いしのどうくつ{EOS}"
	.if (. - gText_Rom_598921) != 0x8
	.error "gText_Rom_598921 must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x598929, size=0xD
	.string "かいりゅう{EOS}"
	.string "マユミのいえ{EOS}"

	@ src/data/region_map/region_map_entries.h:532 region_map_entries_line_532
	.globl gText_Rom_598936
gText_Rom_598936: @ 0x08598936
	.string "ほのおのぬけみち{EOS}"
	.if (. - gText_Rom_598936) > 0x9
	.error "gText_Rom_598936 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598936) < 0x9
	.space 0x9 - (. - gText_Rom_598936)
	.endif

	@ src/data/region_map/region_map_entries.h:546 region_map_entries_line_546
	.globl gText_Rom_59893F
gText_Rom_59893F: @ 0x0859893F
	.string "デコボコさんどう{EOS}"
	.if (. - gText_Rom_59893F) > 0x9
	.error "gText_Rom_59893F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59893F) < 0x9
	.space 0x9 - (. - gText_Rom_59893F)
	.endif
.elseif .L__inc_fragment_select_5e7795a77bd8 == 8
	@ src/data/region_map/region_map_entries.h:525 region_map_entries_line_525 (+1 aliases)
	.globl sScriptMenuText_SouthernIsland
sScriptMenuText_SouthernIsland: @ 0x085CADF1
	.string "みなみのことう{EOS}"
	.if (. - sScriptMenuText_SouthernIsland) > 0x8
	.error "sScriptMenuText_SouthernIsland may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_SouthernIsland) < 0x8
	.space 0x8 - (. - sScriptMenuText_SouthernIsland)
	.endif

	@ src/data/region_map/region_map_entries.h:1386 region_map_entries_line_1386 (+1 aliases)
	.globl sScriptMenuText_BirthIsland
sScriptMenuText_BirthIsland: @ 0x085CADF9
	.string "たんじょうのしま{EOS}"
	.if (. - sScriptMenuText_BirthIsland) > 0x9
	.error "sScriptMenuText_BirthIsland may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BirthIsland) < 0x9
	.space 0x9 - (. - sScriptMenuText_BirthIsland)
	.endif

	@ src/data/region_map/region_map_entries.h:1393 region_map_entries_line_1393 (+1 aliases)
	.globl sScriptMenuText_FarawayIsland
sScriptMenuText_FarawayIsland: @ 0x085CAE02
	.string "さいはてのことう{EOS}"
	.if (. - sScriptMenuText_FarawayIsland) > 0x9
	.error "sScriptMenuText_FarawayIsland may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_FarawayIsland) < 0x9
	.space 0x9 - (. - sScriptMenuText_FarawayIsland)
	.endif

	@ src/data/region_map/region_map_entries.h:1463 region_map_entries_line_1463 (+1 aliases)
	.globl sScriptMenuText_NavelRock
sScriptMenuText_NavelRock: @ 0x085CAE0B
	.string "へそのいわ{EOS}"
	.if (. - sScriptMenuText_NavelRock) > 0x6
	.error "sScriptMenuText_NavelRock may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_NavelRock) < 0x6
	.space 0x6 - (. - sScriptMenuText_NavelRock)
	.endif
	@ analyzed canonical ROM range 0x085CAE11-0x085CAE34
.Lbatch83_text_start_gText_Rom_5CAE11: @ 0x085CAE11
	.byte 0x62, 0x72, 0x19, 0x06, 0x0E, 0x07, 0xFF
.Lbatch83_text_start_gText_Rom_5CAE18: @ 0x085CAE18
	.byte 0x18, 0x50, 0x0A, 0x19, 0x06, 0x0E, 0x07, 0xFF
.Lbatch83_text_start_gText_Rom_5CAE20: @ 0x085CAE20
	.byte 0x02, 0x02, 0x04, 0x00, 0xFF
.Lbatch83_text_start_gText_Rom_5CAE25: @ 0x085CAE25
	.byte 0x0A, 0x2A, 0x06, 0x27, 0x0C, 0x36, 0x03, 0x48, 0x41, 0xAB, 0xFF
.Lbatch83_text_start_gText_Rom_5CAE30: @ 0x085CAE30
	.byte 0x0C, 0x36, 0x03, 0x48, 0x16
.elseif .L__inc_fragment_select_5e7795a77bd8 == 9

	@ asm/field_specials.s:4112 sub_08139BD4 (+2 aliases)
	.globl sScriptMenuText_1F
sScriptMenuText_1F: @ 0x085CB077
	.string "1かい{EOS}"
	.if (. - sScriptMenuText_1F) > 0x4
	.error "sScriptMenuText_1F may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_1F) < 0x4
	.space 0x4 - (. - sScriptMenuText_1F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+2 aliases)
	.globl sScriptMenuText_2F
sScriptMenuText_2F: @ 0x085CB07B
	.string "2かい{EOS}"
	.if (. - sScriptMenuText_2F) > 0x4
	.error "sScriptMenuText_2F may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_2F) < 0x4
	.space 0x4 - (. - sScriptMenuText_2F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl sScriptMenuText_3F
sScriptMenuText_3F: @ 0x085CB07F
	.string "3かい{EOS}"
	.if (. - sScriptMenuText_3F) > 0x4
	.error "sScriptMenuText_3F may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_3F) < 0x4
	.space 0x4 - (. - sScriptMenuText_3F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl sScriptMenuText_4F
sScriptMenuText_4F: @ 0x085CB083
	.string "4かい{EOS}"
	.if (. - sScriptMenuText_4F) > 0x4
	.error "sScriptMenuText_4F may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_4F) < 0x4
	.space 0x4 - (. - sScriptMenuText_4F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl sScriptMenuText_5F
sScriptMenuText_5F: @ 0x085CB087
	.string "5かい{EOS}"
	.if (. - sScriptMenuText_5F) > 0x4
	.error "sScriptMenuText_5F may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_5F) < 0x4
	.space 0x4 - (. - sScriptMenuText_5F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB08B
gText_Rom_5CB08B: @ 0x085CB08B
	.string "6かい{EOS}"
	.if (. - gText_Rom_5CB08B) > 0x4
	.error "gText_Rom_5CB08B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB08B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB08B)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB08F
gText_Rom_5CB08F: @ 0x085CB08F
	.string "7かい{EOS}"
	.if (. - gText_Rom_5CB08F) > 0x4
	.error "gText_Rom_5CB08F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB08F) < 0x4
	.space 0x4 - (. - gText_Rom_5CB08F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB093
gText_Rom_5CB093: @ 0x085CB093
	.string "8かい{EOS}"
	.if (. - gText_Rom_5CB093) > 0x4
	.error "gText_Rom_5CB093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB093) < 0x4
	.space 0x4 - (. - gText_Rom_5CB093)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB097
gText_Rom_5CB097: @ 0x085CB097
	.string "9かい{EOS}"
	.if (. - gText_Rom_5CB097) > 0x4
	.error "gText_Rom_5CB097 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB097) < 0x4
	.space 0x4 - (. - gText_Rom_5CB097)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB09B
gText_Rom_5CB09B: @ 0x085CB09B
	.string "10かい{EOS}"
	.if (. - gText_Rom_5CB09B) > 0x5
	.error "gText_Rom_5CB09B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB09B) < 0x5
	.space 0x5 - (. - gText_Rom_5CB09B)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0A0
gText_Rom_5CB0A0: @ 0x085CB0A0
	.string "11かい{EOS}"
	.if (. - gText_Rom_5CB0A0) != 0x5
	.error "gText_Rom_5CB0A0 must retain its original byte length"
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0A5
gText_Rom_5CB0A5: @ 0x085CB0A5
	.string "ビ1かい{EOS}"
	.if (. - gText_Rom_5CB0A5) != 0x5
	.error "gText_Rom_5CB0A5 must retain its original byte length"
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0AA
gText_Rom_5CB0AA: @ 0x085CB0AA
	.string "ビ2かい{EOS}"
	.if (. - gText_Rom_5CB0AA) != 0x5
	.error "gText_Rom_5CB0AA must retain its original byte length"
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0AF
gText_Rom_5CB0AF: @ 0x085CB0AF
	.string "ビ3かい{EOS}"
	.if (. - gText_Rom_5CB0AF) != 0x5
	.error "gText_Rom_5CB0AF must retain its original byte length"
	.endif

.elseif .L__inc_fragment_select_5e7795a77bd8 == 10

	@ src/strings.c:531 gText_ExchangeService
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ExchangeService
gText_ExchangeService: @ 0x085CB184
	.string "ひきかえサービス{EOS}"
	.if (. - gText_ExchangeService) != 0x9
	.error "gText_ExchangeService must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:98 region_map_entries_line_98 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_LilycoveCity
sScriptMenuText_LilycoveCity: @ 0x085CB18D
	.string "ミナモシティ{EOS}"
	.if (. - sScriptMenuText_LilycoveCity) != 0x7
	.error "sScriptMenuText_LilycoveCity must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:70 region_map_entries_line_70 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_SlateportCity
sScriptMenuText_SlateportCity: @ 0x085CB194
	.string "カイナシティ{EOS}"
	.if (. - sScriptMenuText_SlateportCity) != 0x7
	.error "sScriptMenuText_SlateportCity must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:518 region_map_entries_line_518 (+1 aliases)
	.globl sScriptMenuText_CaveOfOrigin
sScriptMenuText_CaveOfOrigin: @ 0x085CB19B
	.string "めざめのほこら{EOS}"
	.if (. - sScriptMenuText_CaveOfOrigin) > 0x8
	.error "sScriptMenuText_CaveOfOrigin may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_CaveOfOrigin) < 0x8
	.space 0x8 - (. - sScriptMenuText_CaveOfOrigin)
	.endif

	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl sScriptMenuText_MtPyre
sScriptMenuText_MtPyre: @ 0x085CB1A3
	.string "おくりびやま{EOS}"
	.if (. - sScriptMenuText_MtPyre) > 0x7
	.error "sScriptMenuText_MtPyre may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_MtPyre) < 0x7
	.space 0x7 - (. - sScriptMenuText_MtPyre)
	.endif

	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl sScriptMenuText_SkyPillar
sScriptMenuText_SkyPillar: @ 0x085CB1AA
	.string "そらのはしら{EOS}"
	.if (. - sScriptMenuText_SkyPillar) > 0x7
	.error "sScriptMenuText_SkyPillar may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_SkyPillar) < 0x7
	.space 0x7 - (. - sScriptMenuText_SkyPillar)
	.endif

.elseif .L__inc_fragment_select_5e7795a77bd8 == 11
	@ src/field_specials.c:2531 field_specials_line_2531
	.globl gFieldSpecialsMenuText_Block02_Item00
gFieldSpecialsMenuText_Block02_Item00: @ 0x085CBFEF
	.string "  0てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item00) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item00 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item00) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item00)
	.endif

	@ src/field_specials.c:2532 field_specials_line_2532
	.globl gFieldSpecialsMenuText_Block02_Item01
gFieldSpecialsMenuText_Block02_Item01: @ 0x085CBFF5
	.string " 10てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item01) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item01 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item01) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item01)
	.endif

	@ src/field_specials.c:2533 field_specials_line_2533
	.globl gFieldSpecialsMenuText_Block02_Item02
gFieldSpecialsMenuText_Block02_Item02: @ 0x085CBFFB
	.string " 20てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item02) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item02 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item02) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item02)
	.endif

	@ src/field_specials.c:2534 field_specials_line_2534
	.globl gFieldSpecialsMenuText_Block02_Item03
gFieldSpecialsMenuText_Block02_Item03: @ 0x085CC001
	.string " 30てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item03) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item03 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item03) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item03)
	.endif

	@ src/field_specials.c:2535 field_specials_line_2535
	.globl gFieldSpecialsMenuText_Block02_Item04
gFieldSpecialsMenuText_Block02_Item04: @ 0x085CC007
	.string " 40てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item04) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item04 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item04) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item04)
	.endif

	@ src/field_specials.c:2536 field_specials_line_2536
	.globl gFieldSpecialsMenuText_Block02_Item05
gFieldSpecialsMenuText_Block02_Item05: @ 0x085CC00D
	.string " 50てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item05) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item05 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item05) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item05)
	.endif

	@ src/field_specials.c:2537 field_specials_line_2537
	.globl gFieldSpecialsMenuText_Block02_Item06
gFieldSpecialsMenuText_Block02_Item06: @ 0x085CC013
	.string " 60てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item06) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item06 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item06) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item06)
	.endif

	@ src/field_specials.c:2538 field_specials_line_2538
	.globl gFieldSpecialsMenuText_Block02_Item07
gFieldSpecialsMenuText_Block02_Item07: @ 0x085CC019
	.string " 70てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item07) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item07 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item07) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item07)
	.endif

	@ src/field_specials.c:2539 field_specials_line_2539
	.globl gFieldSpecialsMenuText_Block02_Item08
gFieldSpecialsMenuText_Block02_Item08: @ 0x085CC01F
	.string " 80てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item08) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item08 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item08) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item08)
	.endif

	@ src/field_specials.c:2540 field_specials_line_2540
	.globl gFieldSpecialsMenuText_Block02_Item09
gFieldSpecialsMenuText_Block02_Item09: @ 0x085CC025
	.string " 90てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item09) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item09 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item09) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item09)
	.endif

	@ src/field_specials.c:2541 field_specials_line_2541
	.globl gFieldSpecialsMenuText_Block02_Item10
gFieldSpecialsMenuText_Block02_Item10: @ 0x085CC02B
	.string "100てん{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item10) > 0x6
	.error "gFieldSpecialsMenuText_Block02_Item10 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item10) < 0x6
	.space 0x6 - (. - gFieldSpecialsMenuText_Block02_Item10)
	.endif

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gFieldSpecialsMenuText_Block02_Item11
gFieldSpecialsMenuText_Block02_Item11: @ 0x085CC031
	.string "  ？{EOS}"
	.if (. - gFieldSpecialsMenuText_Block02_Item11) > 0x4
	.error "gFieldSpecialsMenuText_Block02_Item11 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block02_Item11) < 0x4
	.space 0x4 - (. - gFieldSpecialsMenuText_Block02_Item11)
	.endif

	@ src/field_specials.c:2546 field_specials_line_2546
	.globl gFieldSpecialsMenuText_Block03_Item00
gFieldSpecialsMenuText_Block03_Item00: @ 0x085CC035
	.string "キッスポスター   16BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block03_Item00) > 0xf
	.error "gFieldSpecialsMenuText_Block03_Item00 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block03_Item00) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block03_Item00)
	.endif

	@ src/field_specials.c:2547 field_specials_line_2547
	.globl gFieldSpecialsMenuText_Block03_Item01
gFieldSpecialsMenuText_Block03_Item01: @ 0x085CC044
	.string "キッスクッション  32BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block03_Item01) > 0xf
	.error "gFieldSpecialsMenuText_Block03_Item01 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block03_Item01) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block03_Item01)
	.endif

	@ src/field_specials.c:2548 field_specials_line_2548
	.globl gFieldSpecialsMenuText_Block03_Item02
gFieldSpecialsMenuText_Block03_Item02: @ 0x085CC053
	.string "ムチュールドール  32BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block03_Item02) > 0xf
	.error "gFieldSpecialsMenuText_Block03_Item02 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block03_Item02) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block03_Item02)
	.endif

	@ src/field_specials.c:2549 field_specials_line_2549
	.globl gFieldSpecialsMenuText_Block03_Item03
gFieldSpecialsMenuText_Block03_Item03: @ 0x085CC062
	.string "トゲピードール   48BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block03_Item03) > 0xf
	.error "gFieldSpecialsMenuText_Block03_Item03 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block03_Item03) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block03_Item03)
	.endif

.elseif .L__inc_fragment_select_5e7795a77bd8 == 12
	@ src/field_specials.c:2550 field_specials_line_2550
	.globl gFieldSpecialsMenuText_Block03_Item04
gFieldSpecialsMenuText_Block03_Item04: @ 0x085CC071
	.string "ニャースドール   48BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block03_Item04) > 0xf
	.error "gFieldSpecialsMenuText_Block03_Item04 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block03_Item04) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block03_Item04)
	.endif

	@ src/field_specials.c:2551 field_specials_line_2551
	.globl gFieldSpecialsMenuText_Block03_Item05
gFieldSpecialsMenuText_Block03_Item05: @ 0x085CC080
	.string "ピッピドール    48BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block03_Item05) > 0xf
	.error "gFieldSpecialsMenuText_Block03_Item05 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block03_Item05) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block03_Item05)
	.endif

	@ src/field_specials.c:2552 field_specials_line_2552
	.globl gFieldSpecialsMenuText_Block03_Item06
gFieldSpecialsMenuText_Block03_Item06: @ 0x085CC08F
	.string "メタモンドール   48BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block03_Item06) > 0xf
	.error "gFieldSpecialsMenuText_Block03_Item06 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block03_Item06) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block03_Item06)
	.endif

	@ src/field_specials.c:2553 field_specials_line_2553
	.globl gFieldSpecialsMenuText_Block03_Item07
gFieldSpecialsMenuText_Block03_Item07: @ 0x085CC09E
	.string "ヒノアラシドール  80BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block03_Item07) > 0xf
	.error "gFieldSpecialsMenuText_Block03_Item07 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block03_Item07) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block03_Item07)
	.endif

	@ src/field_specials.c:2554 field_specials_line_2554
	.globl gFieldSpecialsMenuText_Block03_Item08
gFieldSpecialsMenuText_Block03_Item08: @ 0x085CC0AD
	.string "チコリータドール  80BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block03_Item08) > 0xf
	.error "gFieldSpecialsMenuText_Block03_Item08 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block03_Item08) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block03_Item08)
	.endif

	@ src/field_specials.c:2555 field_specials_line_2555
	.globl gFieldSpecialsMenuText_Block03_Item09
gFieldSpecialsMenuText_Block03_Item09: @ 0x085CC0BC
	.string "ワニノコドール   80BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block03_Item09) > 0xf
	.error "gFieldSpecialsMenuText_Block03_Item09 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block03_Item09) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block03_Item09)
	.endif

	@ src/field_specials.c:2560 field_specials_line_2560
	.globl gFieldSpecialsMenuText_Block04_Item00
gFieldSpecialsMenuText_Block04_Item00: @ 0x085CC0CB
	.string "ラプラスドール  128BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block04_Item00) > 0xf
	.error "gFieldSpecialsMenuText_Block04_Item00 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block04_Item00) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block04_Item00)
	.endif

	@ src/field_specials.c:2561 field_specials_line_2561
	.globl gFieldSpecialsMenuText_Block04_Item01
gFieldSpecialsMenuText_Block04_Item01: @ 0x085CC0DA
	.string "カビゴンドール  128BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block04_Item01) > 0xf
	.error "gFieldSpecialsMenuText_Block04_Item01 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block04_Item01) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block04_Item01)
	.endif

	@ src/field_specials.c:2562 field_specials_line_2562
	.globl gFieldSpecialsMenuText_Block04_Item02
gFieldSpecialsMenuText_Block04_Item02: @ 0x085CC0E9
	.string "フシギバナドール 256BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block04_Item02) > 0xf
	.error "gFieldSpecialsMenuText_Block04_Item02 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block04_Item02) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block04_Item02)
	.endif

	@ src/field_specials.c:2563 field_specials_line_2563
	.globl gFieldSpecialsMenuText_Block04_Item03
gFieldSpecialsMenuText_Block04_Item03: @ 0x085CC0F8
	.string "リザードンドール 256BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block04_Item03) > 0xf
	.error "gFieldSpecialsMenuText_Block04_Item03 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block04_Item03) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block04_Item03)
	.endif

	@ src/field_specials.c:2564 field_specials_line_2564
	.globl gFieldSpecialsMenuText_Block04_Item04
gFieldSpecialsMenuText_Block04_Item04: @ 0x085CC107
	.string "カメックスドール 256BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block04_Item04) > 0xf
	.error "gFieldSpecialsMenuText_Block04_Item04 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block04_Item04) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block04_Item04)
	.endif

	@ src/field_specials.c:2569 field_specials_line_2569
	.globl gFieldSpecialsMenuText_Block05_Item00
gFieldSpecialsMenuText_Block05_Item00: @ 0x085CC116
	.string "タウリン       1BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block05_Item00) > 0xf
	.error "gFieldSpecialsMenuText_Block05_Item00 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block05_Item00) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block05_Item00)
	.endif

	@ src/field_specials.c:2570 field_specials_line_2570
	.globl gFieldSpecialsMenuText_Block05_Item01
gFieldSpecialsMenuText_Block05_Item01: @ 0x085CC125
	.string "リゾチウム      1BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block05_Item01) > 0xf
	.error "gFieldSpecialsMenuText_Block05_Item01 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block05_Item01) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block05_Item01)
	.endif

	@ src/field_specials.c:2571 field_specials_line_2571
	.globl gFieldSpecialsMenuText_Block05_Item02
gFieldSpecialsMenuText_Block05_Item02: @ 0x085CC134
	.string "ブロムヘキシン    1BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block05_Item02) > 0xf
	.error "gFieldSpecialsMenuText_Block05_Item02 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block05_Item02) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block05_Item02)
	.endif

	@ src/field_specials.c:2572 field_specials_line_2572
	.globl gFieldSpecialsMenuText_Block05_Item03
gFieldSpecialsMenuText_Block05_Item03: @ 0x085CC143
	.string "キトサン       1BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block05_Item03) > 0xf
	.error "gFieldSpecialsMenuText_Block05_Item03 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block05_Item03) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block05_Item03)
	.endif

	@ src/field_specials.c:2573 field_specials_line_2573
	.globl gFieldSpecialsMenuText_Block05_Item04
gFieldSpecialsMenuText_Block05_Item04: @ 0x085CC152
	.string "インドメタシン    1BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block05_Item04) > 0xf
	.error "gFieldSpecialsMenuText_Block05_Item04 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block05_Item04) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block05_Item04)
	.endif

.elseif .L__inc_fragment_select_5e7795a77bd8 == 13
	@ src/field_specials.c:2574 field_specials_line_2574
	.globl gFieldSpecialsMenuText_Block05_Item05
gFieldSpecialsMenuText_Block05_Item05: @ 0x085CC161
	.string "マックスアップ    1BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block05_Item05) > 0xf
	.error "gFieldSpecialsMenuText_Block05_Item05 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block05_Item05) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block05_Item05)
	.endif

	@ src/field_specials.c:2579 field_specials_line_2579
	.globl gFieldSpecialsMenuText_Block06_Item00
gFieldSpecialsMenuText_Block06_Item00: @ 0x085CC170
	.string "たべのこし     48BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block06_Item00) > 0xf
	.error "gFieldSpecialsMenuText_Block06_Item00 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block06_Item00) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block06_Item00)
	.endif

	@ src/field_specials.c:2580 field_specials_line_2580
	.globl gFieldSpecialsMenuText_Block06_Item01
gFieldSpecialsMenuText_Block06_Item01: @ 0x085CC17F
	.string "しろいハーブ    48BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block06_Item01) > 0xf
	.error "gFieldSpecialsMenuText_Block06_Item01 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block06_Item01) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block06_Item01)
	.endif

	@ src/field_specials.c:2581 field_specials_line_2581
	.globl gFieldSpecialsMenuText_Block06_Item02
gFieldSpecialsMenuText_Block06_Item02: @ 0x085CC18E
	.string "せんせいのツメ   48BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block06_Item02) > 0xf
	.error "gFieldSpecialsMenuText_Block06_Item02 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block06_Item02) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block06_Item02)
	.endif

	@ src/field_specials.c:2582 field_specials_line_2582
	.globl gFieldSpecialsMenuText_Block06_Item03
gFieldSpecialsMenuText_Block06_Item03: @ 0x085CC19D
	.string "メンタルハーブ   48BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block06_Item03) > 0xf
	.error "gFieldSpecialsMenuText_Block06_Item03 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block06_Item03) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block06_Item03)
	.endif

	@ src/field_specials.c:2583 field_specials_line_2583
	.globl gFieldSpecialsMenuText_Block06_Item04
gFieldSpecialsMenuText_Block06_Item04: @ 0x085CC1AC
	.string "ひかりのこな    64BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block06_Item04) > 0xf
	.error "gFieldSpecialsMenuText_Block06_Item04 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block06_Item04) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block06_Item04)
	.endif

	@ src/field_specials.c:2584 field_specials_line_2584
	.globl gFieldSpecialsMenuText_Block06_Item05
gFieldSpecialsMenuText_Block06_Item05: @ 0x085CC1BB
	.string "こだわりハチマキ  64BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block06_Item05) > 0xf
	.error "gFieldSpecialsMenuText_Block06_Item05 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block06_Item05) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block06_Item05)
	.endif

	@ src/field_specials.c:2585 field_specials_line_2585
	.globl gFieldSpecialsMenuText_Block06_Item06
gFieldSpecialsMenuText_Block06_Item06: @ 0x085CC1CA
	.string "おうじゃのしるし  64BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block06_Item06) > 0xf
	.error "gFieldSpecialsMenuText_Block06_Item06 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block06_Item06) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block06_Item06)
	.endif

	@ src/field_specials.c:2586 field_specials_line_2586
	.globl gFieldSpecialsMenuText_Block06_Item07
gFieldSpecialsMenuText_Block06_Item07: @ 0x085CC1D9
	.string "きあいのハチマキ  64BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block06_Item07) > 0xf
	.error "gFieldSpecialsMenuText_Block06_Item07 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block06_Item07) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block06_Item07)
	.endif

	@ src/field_specials.c:2587 field_specials_line_2587
	.globl gFieldSpecialsMenuText_Block06_Item08
gFieldSpecialsMenuText_Block06_Item08: @ 0x085CC1E8
	.string "ピントレンズ    64BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block06_Item08) > 0xf
	.error "gFieldSpecialsMenuText_Block06_Item08 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block06_Item08) < 0xf
	.space 0xf - (. - gFieldSpecialsMenuText_Block06_Item08)
	.endif

	@ src/field_specials.c:2620 field_specials_line_2620
	.globl gFieldSpecialsMenuText_Block09_Item00
gFieldSpecialsMenuText_Block09_Item00: @ 0x085CC1F7
	.string "タマゴうみ    16BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block09_Item00) > 0xe
	.error "gFieldSpecialsMenuText_Block09_Item00 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block09_Item00) < 0xe
	.space 0xe - (. - gFieldSpecialsMenuText_Block09_Item00)
	.endif

	@ src/field_specials.c:2621 field_specials_line_2621
	.globl gFieldSpecialsMenuText_Block09_Item01
gFieldSpecialsMenuText_Block09_Item01: @ 0x085CC205
	.string "ちきゅうなげ   24BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block09_Item01) > 0xe
	.error "gFieldSpecialsMenuText_Block09_Item01 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block09_Item01) < 0xe
	.space 0xe - (. - gFieldSpecialsMenuText_Block09_Item01)
	.endif

	@ src/field_specials.c:2622 field_specials_line_2622
	.globl gFieldSpecialsMenuText_Block09_Item02
gFieldSpecialsMenuText_Block09_Item02: @ 0x085CC213
	.string "ゆめくい     24BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block09_Item02) > 0xe
	.error "gFieldSpecialsMenuText_Block09_Item02 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block09_Item02) < 0xe
	.space 0xe - (. - gFieldSpecialsMenuText_Block09_Item02)
	.endif

	@ src/field_specials.c:2623 field_specials_line_2623
	.globl gFieldSpecialsMenuText_Block09_Item03
gFieldSpecialsMenuText_Block09_Item03: @ 0x085CC221
	.string "メガトンパンチ  24BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block09_Item03) > 0xe
	.error "gFieldSpecialsMenuText_Block09_Item03 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block09_Item03) < 0xe
	.space 0xe - (. - gFieldSpecialsMenuText_Block09_Item03)
	.endif

	@ src/field_specials.c:2624 field_specials_line_2624
	.globl gFieldSpecialsMenuText_Block09_Item04
gFieldSpecialsMenuText_Block09_Item04: @ 0x085CC22F
	.string "メガトンキック  48BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block09_Item04) > 0xe
	.error "gFieldSpecialsMenuText_Block09_Item04 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block09_Item04) < 0xe
	.space 0xe - (. - gFieldSpecialsMenuText_Block09_Item04)
	.endif

	@ src/field_specials.c:2625 field_specials_line_2625
	.globl gFieldSpecialsMenuText_Block09_Item05
gFieldSpecialsMenuText_Block09_Item05: @ 0x085CC23D
	.string "のしかかり    48BP{EOS}"
	.if (. - gFieldSpecialsMenuText_Block09_Item05) > 0xe
	.error "gFieldSpecialsMenuText_Block09_Item05 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block09_Item05) < 0xe
	.space 0xe - (. - gFieldSpecialsMenuText_Block09_Item05)
	.endif

.elseif .L__inc_fragment_select_5e7795a77bd8 == 14
	@ src/data/easy_chat/easy_chat_group_lifestyle.h:184 easy_chat_group_lifestyle_line_184 (+5 aliases)
	.globl gText_Rom_5CC31F
gText_Rom_5CC31F: @ 0x085CC31F
	.string "なまえ{EOS}"
	.if (. - gText_Rom_5CC31F) > 0x4
	.error "gText_Rom_5CC31F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC31F) < 0x4
	.space 0x4 - (. - gText_Rom_5CC31F)
	.endif
	.globl gText_Rom_5CC323
gText_Rom_5CC323: @ 0x085CC323
	@ Decoded text from ROM range: offset=0x5CC323, size=0x6
	.string "IDNo,{EOS}"

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:22 easy_chat_group_lifestyle_line_22 (+1 aliases)
	.globl gText_Rom_5CC329
gText_Rom_5CC329: @ 0x085CC329
	.string "おこづかい{EOS}"
	.if (. - gText_Rom_5CC329) > 0x6
	.error "gText_Rom_5CC329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC329) < 0x6
	.space 0x6 - (. - gText_Rom_5CC329)
	.endif
.endif
