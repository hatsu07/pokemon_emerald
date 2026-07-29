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
	.globl gDecorations
gDecorations: @ 0x08580CD0
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

	@ src/data/decoration/header.h:1294 header_line_1294
	.globl gText_Rom_5816E1
gText_Rom_5816E1: @ 0x085816E1
	.string "ソーナノドール$"
	.if (. - gText_Rom_5816E1) > 0x8
	.error "gText_Rom_5816E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5816E1) < 0x8
	.space 0x8 - (. - gText_Rom_5816E1)
	.endif
	.incbin "baserom.gba", 0x5816e9, 0x14

	@ src/data/decoration/header.h:1308 header_line_1308
	.globl gText_Rom_5816FD
gText_Rom_5816FD: @ 0x085816FD
	.string "ヤジロンドール$"
	.if (. - gText_Rom_5816FD) > 0x8
	.error "gText_Rom_5816FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5816FD) < 0x8
	.space 0x8 - (. - gText_Rom_5816FD)
	.endif
	.incbin "baserom.gba", 0x581705, 0x14

	@ src/data/decoration/header.h:1322 header_line_1322
	.globl gText_Rom_581719
gText_Rom_581719: @ 0x08581719
	.string "カクレオンドール$"
	.if (. - gText_Rom_581719) > 0x9
	.error "gText_Rom_581719 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581719) < 0x9
	.space 0x9 - (. - gText_Rom_581719)
	.endif
	.incbin "baserom.gba", 0x581722, 0x13

	@ src/data/decoration/header.h:1336 header_line_1336
	.globl gText_Rom_581735
gText_Rom_581735: @ 0x08581735
	.string "ルリリドール$"
	.if (. - gText_Rom_581735) > 0x7
	.error "gText_Rom_581735 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581735) < 0x7
	.space 0x7 - (. - gText_Rom_581735)
	.endif
	.incbin "baserom.gba", 0x58173c, 0x15

	@ src/data/decoration/header.h:1350 header_line_1350
	.globl gText_Rom_581751
gText_Rom_581751: @ 0x08581751
	.string "エネコドール$"
	.if (. - gText_Rom_581751) > 0x7
	.error "gText_Rom_581751 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581751) < 0x7
	.space 0x7 - (. - gText_Rom_581751)
	.endif
	.incbin "baserom.gba", 0x581758, 0x15

	@ src/data/decoration/header.h:1364 header_line_1364
	.globl gText_Rom_58176D
gText_Rom_58176D: @ 0x0858176D
	.string "チルットドール$"
	.if (. - gText_Rom_58176D) > 0x8
	.error "gText_Rom_58176D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58176D) < 0x8
	.space 0x8 - (. - gText_Rom_58176D)
	.endif
	.incbin "baserom.gba", 0x581775, 0x14

	@ src/data/decoration/header.h:1378 header_line_1378
	.globl gText_Rom_581789
gText_Rom_581789: @ 0x08581789
	.string "ゴクリンドール$"
	.if (. - gText_Rom_581789) > 0x8
	.error "gText_Rom_581789 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581789) < 0x8
	.space 0x8 - (. - gText_Rom_581789)
	.endif
	.incbin "baserom.gba", 0x581791, 0x14

	@ src/data/decoration/header.h:1392 header_line_1392
	.globl gText_Rom_5817A5
gText_Rom_5817A5: @ 0x085817A5
	.string "ハスボードール$"
	.if (. - gText_Rom_5817A5) > 0x8
	.error "gText_Rom_5817A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5817A5) < 0x8
	.space 0x8 - (. - gText_Rom_5817A5)
	.endif
	.incbin "baserom.gba", 0x5817ad, 0x14

	@ src/data/decoration/header.h:1406 header_line_1406
	.globl gText_Rom_5817C1
gText_Rom_5817C1: @ 0x085817C1
	.string "タネボードール$"
	.if (. - gText_Rom_5817C1) > 0x8
	.error "gText_Rom_5817C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5817C1) < 0x8
	.space 0x8 - (. - gText_Rom_5817C1)
	.endif
	.incbin "baserom.gba", 0x5817c9, 0x14

	@ src/data/decoration/header.h:1420 header_line_1420
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5817DD
gText_Rom_5817DD: @ 0x085817DD
	.string "ピカクッション$"
	.if (. - gText_Rom_5817DD) != 0x8
	.error "gText_Rom_5817DD must retain its original byte length"
	.endif
	.globl gText_Rom_5817DF
	.set gText_Rom_5817DF, gText_Rom_5817DD + 0x2
	.incbin "baserom.gba", 0x5817e5, 0x14

	@ src/data/decoration/header.h:1434 header_line_1434
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5817F9
gText_Rom_5817F9: @ 0x085817F9
	.string "まるいクッション$"
	.if (. - gText_Rom_5817F9) != 0x9
	.error "gText_Rom_5817F9 must retain its original byte length"
	.endif
	.globl gText_Rom_5817FC
	.set gText_Rom_5817FC, gText_Rom_5817F9 + 0x3
	.incbin "baserom.gba", 0x581802, 0x13

	@ src/data/decoration/header.h:1448 header_line_1448
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581815
gText_Rom_581815: @ 0x08581815
	.string "キッスクッション$"
	.if (. - gText_Rom_581815) != 0x9
	.error "gText_Rom_581815 must retain its original byte length"
	.endif
	.globl gText_Rom_581818
	.set gText_Rom_581818, gText_Rom_581815 + 0x3
	.incbin "baserom.gba", 0x58181e, 0x13

	@ src/data/decoration/header.h:1462 header_line_1462
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581831
gText_Rom_581831: @ 0x08581831
	.string "ジグザクッション$"
	.if (. - gText_Rom_581831) != 0x9
	.error "gText_Rom_581831 must retain its original byte length"
	.endif
	.globl gText_Rom_581834
	.set gText_Rom_581834, gText_Rom_581831 + 0x3
	.incbin "baserom.gba", 0x58183a, 0x13

	@ src/data/decoration/header.h:1476 header_line_1476
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_58184D
gText_Rom_58184D: @ 0x0858184D
	.string "グルルクッション$"
	.if (. - gText_Rom_58184D) != 0x9
	.error "gText_Rom_58184D must retain its original byte length"
	.endif
	.globl gText_Rom_581850
	.set gText_Rom_581850, gText_Rom_58184D + 0x3
	.incbin "baserom.gba", 0x581856, 0x13

	@ src/data/decoration/header.h:1490 header_line_1490
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581869
gText_Rom_581869: @ 0x08581869
	.string "ダイヤクッション$"
	.if (. - gText_Rom_581869) != 0x9
	.error "gText_Rom_581869 must retain its original byte length"
	.endif
	.globl gText_Rom_58186C
	.set gText_Rom_58186C, gText_Rom_581869 + 0x3
	.incbin "baserom.gba", 0x581872, 0x13

	@ src/data/decoration/header.h:1504 header_line_1504
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_581885
gText_Rom_581885: @ 0x08581885
	.string "ボールクッション$"
	.if (. - gText_Rom_581885) != 0x9
	.error "gText_Rom_581885 must retain its original byte length"
	.endif
	.globl gText_Rom_581888
	.set gText_Rom_581888, gText_Rom_581885 + 0x3
	.incbin "baserom.gba", 0x58188e, 0x13

	@ src/data/decoration/header.h:1518 header_line_1518
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5818A1
gText_Rom_5818A1: @ 0x085818A1
	.string "くさクッション$"
	.if (. - gText_Rom_5818A1) != 0x8
	.error "gText_Rom_5818A1 must retain its original byte length"
	.endif
	.globl gText_Rom_5818A3
	.set gText_Rom_5818A3, gText_Rom_5818A1 + 0x2
	.incbin "baserom.gba", 0x5818a9, 0x14

	@ src/data/decoration/header.h:1532 header_line_1532
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5818BD
gText_Rom_5818BD: @ 0x085818BD
	.string "ほのおクッション$"
	.if (. - gText_Rom_5818BD) != 0x9
	.error "gText_Rom_5818BD must retain its original byte length"
	.endif
	.globl gText_Rom_5818C0
	.set gText_Rom_5818C0, gText_Rom_5818BD + 0x3
	.incbin "baserom.gba", 0x5818c6, 0x13

	@ src/data/decoration/header.h:1546 header_line_1546
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5818D9
gText_Rom_5818D9: @ 0x085818D9
	.string "みずクッション$"
	.if (. - gText_Rom_5818D9) != 0x8
	.error "gText_Rom_5818D9 must retain its original byte length"
	.endif
	.globl gText_Rom_5818DB
	.set gText_Rom_5818DB, gText_Rom_5818D9 + 0x2
	.incbin "baserom.gba", 0x5818e1, 0x14

	@ src/data/decoration/header.h:1560 header_line_1560
	.globl gText_Rom_5818F5
gText_Rom_5818F5: @ 0x085818F5
	.string "カビゴンドール$"
	.if (. - gText_Rom_5818F5) > 0x8
	.error "gText_Rom_5818F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5818F5) < 0x8
	.space 0x8 - (. - gText_Rom_5818F5)
	.endif
	.incbin "baserom.gba", 0x5818fd, 0x14

	@ src/data/decoration/header.h:1574 header_line_1574
	.globl gText_Rom_581911
gText_Rom_581911: @ 0x08581911
	.string "サイドンドール$"
	.if (. - gText_Rom_581911) > 0x8
	.error "gText_Rom_581911 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581911) < 0x8
	.space 0x8 - (. - gText_Rom_581911)
	.endif
	.incbin "baserom.gba", 0x581919, 0x14

	@ src/data/decoration/header.h:1588 header_line_1588
	.globl gText_Rom_58192D
gText_Rom_58192D: @ 0x0858192D
	.string "ラプラスドール$"
	.if (. - gText_Rom_58192D) > 0x8
	.error "gText_Rom_58192D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58192D) < 0x8
	.space 0x8 - (. - gText_Rom_58192D)
	.endif
	.incbin "baserom.gba", 0x581935, 0x14

	@ src/data/decoration/header.h:1602 header_line_1602
	.globl gText_Rom_581949
gText_Rom_581949: @ 0x08581949
	.string "フシギバナドール$"
	.if (. - gText_Rom_581949) > 0x9
	.error "gText_Rom_581949 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581949) < 0x9
	.space 0x9 - (. - gText_Rom_581949)
	.endif
	.incbin "baserom.gba", 0x581952, 0x13

	@ src/data/decoration/header.h:1616 header_line_1616
	.globl gText_Rom_581965
gText_Rom_581965: @ 0x08581965
	.string "リザードンドール$"
	.if (. - gText_Rom_581965) > 0x9
	.error "gText_Rom_581965 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581965) < 0x9
	.space 0x9 - (. - gText_Rom_581965)
	.endif
	.incbin "baserom.gba", 0x58196e, 0x13

	@ src/data/decoration/header.h:1630 header_line_1630
	.globl gText_Rom_581981
gText_Rom_581981: @ 0x08581981
	.string "カメックスドール$"
	.if (. - gText_Rom_581981) > 0x9
	.error "gText_Rom_581981 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_581981) < 0x9
	.space 0x9 - (. - gText_Rom_581981)
	.endif
	.incbin "baserom.gba", 0x58198a, 0x13

	@ src/data/decoration/header.h:1644 header_line_1644
	.globl gText_Rom_58199D
gText_Rom_58199D: @ 0x0858199D
	.string "ホエルコドール$"
	.if (. - gText_Rom_58199D) > 0x8
	.error "gText_Rom_58199D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_58199D) < 0x8
	.space 0x8 - (. - gText_Rom_58199D)
	.endif
	.incbin "baserom.gba", 0x5819a5, 0x14

	@ src/data/decoration/header.h:1658 header_line_1658
	.globl gText_Rom_5819B9
gText_Rom_5819B9: @ 0x085819B9
	.string "レジロックドール$"
	.if (. - gText_Rom_5819B9) > 0x9
	.error "gText_Rom_5819B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5819B9) < 0x9
	.space 0x9 - (. - gText_Rom_5819B9)
	.endif
	.incbin "baserom.gba", 0x5819c2, 0x13

	@ src/data/decoration/header.h:1672 header_line_1672
	.globl gText_Rom_5819D5
gText_Rom_5819D5: @ 0x085819D5
	.string "レジアイスドール$"
	.if (. - gText_Rom_5819D5) > 0x9
	.error "gText_Rom_5819D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5819D5) < 0x9
	.space 0x9 - (. - gText_Rom_5819D5)
	.endif
	.incbin "baserom.gba", 0x5819de, 0x13

	@ src/data/decoration/header.h:1686 header_line_1686
	.globl gText_Rom_5819F1
gText_Rom_5819F1: @ 0x085819F1
	.string "レジスチルドール$"
	.if (. - gText_Rom_5819F1) > 0x9
	.error "gText_Rom_5819F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5819F1) < 0x9
	.space 0x9 - (. - gText_Rom_5819F1)
	.endif
	.incbin "baserom.gba", 0x5819fa, 0x12
	.globl gUnknown_8581A0C
gUnknown_8581A0C: @ 0x08581A0C
	.incbin "baserom.gba", 0x581a0c, 0x20
	.globl gUnknown_8581A2C
gUnknown_8581A2C: @ 0x08581A2C
	.incbin "baserom.gba", 0x581a2c, 0x20
	.globl gUnknown_8581A4C
gUnknown_8581A4C: @ 0x08581A4C
	.incbin "baserom.gba", 0x581a4c, 0x10
	.globl gUnknown_8581A5C
gUnknown_8581A5C: @ 0x08581A5C
	.incbin "baserom.gba", 0x581a5c, 0x18
	.globl gUnknown_8581A74
gUnknown_8581A74: @ 0x08581A74
	.incbin "baserom.gba", 0x581a74, 0x20
	.globl gUnknown_8581A94
gUnknown_8581A94: @ 0x08581A94
	.incbin "baserom.gba", 0x581a94, 0x20
	.globl gUnknown_8581AB4
gUnknown_8581AB4: @ 0x08581AB4
	.incbin "baserom.gba", 0x581ab4, 0x18
	.globl gUnknown_8581ACC
gUnknown_8581ACC: @ 0x08581ACC
	.incbin "baserom.gba", 0x581acc, 0x5c8
	.globl gUnknown_8582094
gUnknown_8582094: @ 0x08582094
	.incbin "baserom.gba", 0x582094, 0xa0
	.globl gUnknown_8582134
gUnknown_8582134: @ 0x08582134
	.incbin "baserom.gba", 0x582134, 0x3c
	.globl gUnknown_8582170
gUnknown_8582170: @ 0x08582170
	.incbin "baserom.gba", 0x582170, 0x18
	.globl gUnknown_8582188
gUnknown_8582188: @ 0x08582188
	.incbin "baserom.gba", 0x582188, 0x18
	.globl gUnknown_85821A0
gUnknown_85821A0: @ 0x085821A0
	.incbin "baserom.gba", 0x5821a0, 0x8
	.globl gUnknown_85821A8
gUnknown_85821A8: @ 0x085821A8
	.incbin "baserom.gba", 0x5821a8, 0x8
	.globl gUnknown_85821B0
gUnknown_85821B0: @ 0x085821B0
	.incbin "baserom.gba", 0x5821b0, 0x8
	.globl gUnknown_85821B8
gUnknown_85821B8: @ 0x085821B8
	.incbin "baserom.gba", 0x5821b8, 0x10
	.globl gUnknown_85821C8
gUnknown_85821C8: @ 0x085821C8
	.incbin "baserom.gba", 0x5821c8, 0x8
	.globl gUnknown_85821D0
gUnknown_85821D0: @ 0x085821D0
	.incbin "baserom.gba", 0x5821d0, 0x8
	.globl gUnknown_85821D8
gUnknown_85821D8: @ 0x085821D8
	.incbin "baserom.gba", 0x5821d8, 0x54
	.globl gUnknown_858222C
gUnknown_858222C: @ 0x0858222C
	.incbin "baserom.gba", 0x58222c, 0x8
	.globl gUnknown_8582234
gUnknown_8582234: @ 0x08582234
	.incbin "baserom.gba", 0x582234, 0x88
	.globl gUnknown_85822BC
gUnknown_85822BC: @ 0x085822BC
	.incbin "baserom.gba", 0x5822bc, 0x8
	.globl gUnknown_85822C4
gUnknown_85822C4: @ 0x085822C4
	.incbin "baserom.gba", 0x5822c4, 0x24
	.globl gUnknown_85822E8
gUnknown_85822E8: @ 0x085822E8
	.incbin "baserom.gba", 0x5822e8, 0x18
	.globl gUnknown_8582300
gUnknown_8582300: @ 0x08582300
	.incbin "baserom.gba", 0x582300, 0x72d

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_582A2D
gText_Rom_582A2D: @ 0x08582A2D
	.string "ラララ$"
	.if (. - gText_Rom_582A2D) > 0x4
	.error "gText_Rom_582A2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_582A2D) < 0x4
	.space 0x4 - (. - gText_Rom_582A2D)
	.endif
	.incbin "baserom.gba", 0x582a31, 0x1977
	.globl gUnknown_85843A8
gUnknown_85843A8: @ 0x085843A8
	.incbin "baserom.gba", 0x5843a8, 0x10
	.globl gUnknown_85843B8
gUnknown_85843B8: @ 0x085843B8
	.incbin "baserom.gba", 0x5843b8, 0x10
	.globl gUnknown_85843C8
gUnknown_85843C8: @ 0x085843C8
	.incbin "baserom.gba", 0x5843c8, 0x8
	.globl gUnknown_85843D0
gUnknown_85843D0: @ 0x085843D0
	.incbin "baserom.gba", 0x5843d0, 0x4
	.globl gUnknown_85843D4
gUnknown_85843D4: @ 0x085843D4
	.incbin "baserom.gba", 0x5843d4, 0x74
	.globl gUnknown_8584448
gUnknown_8584448: @ 0x08584448
	.incbin "baserom.gba", 0x584448, 0xc
	.globl gUnknown_8584454
gUnknown_8584454: @ 0x08584454
	.incbin "baserom.gba", 0x584454, 0x14
	.globl gUnknown_8584468
gUnknown_8584468: @ 0x08584468
	.incbin "baserom.gba", 0x584468, 0xc
	.globl gUnknown_8584474
gUnknown_8584474: @ 0x08584474
	.incbin "baserom.gba", 0x584474, 0xc
	.globl gUnknown_8584480
gUnknown_8584480: @ 0x08584480
	.incbin "baserom.gba", 0x584480, 0xc
	.globl gUnknown_858448C
gUnknown_858448C: @ 0x0858448C
	.incbin "baserom.gba", 0x58448c, 0xc
	.globl gUnknown_8584498
gUnknown_8584498: @ 0x08584498
	.incbin "baserom.gba", 0x584498, 0xc
	.globl gUnknown_85844A4
gUnknown_85844A4: @ 0x085844A4
	.incbin "baserom.gba", 0x5844a4, 0xc
	.globl gUnknown_85844B0
gUnknown_85844B0: @ 0x085844B0
	.incbin "baserom.gba", 0x5844b0, 0xc
	.globl gUnknown_85844BC
gUnknown_85844BC: @ 0x085844BC
	.incbin "baserom.gba", 0x5844bc, 0xc
	.globl gUnknown_85844C8
gUnknown_85844C8: @ 0x085844C8
	.incbin "baserom.gba", 0x5844c8, 0xc
	.globl gUnknown_85844D4
gUnknown_85844D4: @ 0x085844D4
	.incbin "baserom.gba", 0x5844d4, 0x8
	.globl gUnknown_85844DC
gUnknown_85844DC: @ 0x085844DC
	.incbin "baserom.gba", 0x5844dc, 0x10
	.globl gUnknown_85844EC
gUnknown_85844EC: @ 0x085844EC
	.incbin "baserom.gba", 0x5844ec, 0x2
	.globl gUnknown_85844EE
gUnknown_85844EE: @ 0x085844EE
	.incbin "baserom.gba", 0x5844ee, 0xa
	.globl gUnknown_85844F8
gUnknown_85844F8: @ 0x085844F8
	.incbin "baserom.gba", 0x5844f8, 0x4c
	.globl gUnknown_8584544
gUnknown_8584544: @ 0x08584544
	.incbin "baserom.gba", 0x584544, 0x4
	.globl gUnknown_8584548
gUnknown_8584548: @ 0x08584548
	.incbin "baserom.gba", 0x584548, 0x8
	.globl gUnknown_8584550
gUnknown_8584550: @ 0x08584550
	.incbin "baserom.gba", 0x584550, 0x8
	.globl gUnknown_8584558
gUnknown_8584558: @ 0x08584558
	.incbin "baserom.gba", 0x584558, 0x3c
	.globl gUnknown_8584594
gUnknown_8584594: @ 0x08584594
	.incbin "baserom.gba", 0x584594, 0x4
	.globl gUnknown_8584598
gUnknown_8584598: @ 0x08584598
	.incbin "baserom.gba", 0x584598, 0x2
	.globl gUnknown_858459A
gUnknown_858459A: @ 0x0858459A
	.incbin "baserom.gba", 0x58459a, 0x8
	.globl gUnknown_85845A2
gUnknown_85845A2: @ 0x085845A2
	.incbin "baserom.gba", 0x5845a2, 0x8
	.globl gUnknown_85845AA
gUnknown_85845AA: @ 0x085845AA
	.incbin "baserom.gba", 0x5845aa, 0x8
	.globl gUnknown_85845B2
gUnknown_85845B2: @ 0x085845B2
	.incbin "baserom.gba", 0x5845b2, 0x10
	.globl gUnknown_85845C2
gUnknown_85845C2: @ 0x085845C2
	.incbin "baserom.gba", 0x5845c2, 0x10
	.globl gUnknown_85845D2
gUnknown_85845D2: @ 0x085845D2
	.incbin "baserom.gba", 0x5845d2, 0x10
	.globl gUnknown_85845E2
gUnknown_85845E2: @ 0x085845E2
	.incbin "baserom.gba", 0x5845e2, 0x10
	.globl gUnknown_85845F2
gUnknown_85845F2: @ 0x085845F2
	.incbin "baserom.gba", 0x5845f2, 0x3f
	.globl gUnknown_8584631
gUnknown_8584631: @ 0x08584631
	.incbin "baserom.gba", 0x584631, 0x7
	.globl gUnknown_8584638
gUnknown_8584638: @ 0x08584638
	.incbin "baserom.gba", 0x584638, 0xc
	.globl gUnknown_8584644
gUnknown_8584644: @ 0x08584644
	.incbin "baserom.gba", 0x584644, 0x12
	.globl gUnknown_8584656
gUnknown_8584656: @ 0x08584656
	.incbin "baserom.gba", 0x584656, 0x12
	.globl gUnknown_8584668
gUnknown_8584668: @ 0x08584668
	.incbin "baserom.gba", 0x584668, 0x1e
	.globl gUnknown_8584686
gUnknown_8584686: @ 0x08584686
	.incbin "baserom.gba", 0x584686, 0x66
	.globl gUnknown_85846EC
gUnknown_85846EC: @ 0x085846EC
	.incbin "baserom.gba", 0x5846ec, 0x66
	.globl gUnknown_8584752
gUnknown_8584752: @ 0x08584752
	.incbin "baserom.gba", 0x584752, 0xa
	.globl gUnknown_858475C
gUnknown_858475C: @ 0x0858475C
	.incbin "baserom.gba", 0x58475c, 0x14
	.globl gUnknown_8584770
gUnknown_8584770: @ 0x08584770
	.incbin "baserom.gba", 0x584770, 0xa
	.globl gUnknown_858477A
gUnknown_858477A: @ 0x0858477A
	.incbin "baserom.gba", 0x58477a, 0x8
	.globl gUnknown_8584782
gUnknown_8584782: @ 0x08584782
	.incbin "baserom.gba", 0x584782, 0x6
	.globl gUnknown_8584788
gUnknown_8584788: @ 0x08584788
	.incbin "baserom.gba", 0x584788, 0xa
	.globl gUnknown_8584792
gUnknown_8584792: @ 0x08584792
	.incbin "baserom.gba", 0x584792, 0x8
	.globl gUnknown_858479A
gUnknown_858479A: @ 0x0858479A
	.incbin "baserom.gba", 0x58479a, 0x12
	.globl gUnknown_85847AC
gUnknown_85847AC: @ 0x085847AC
	.incbin "baserom.gba", 0x5847ac, 0x12
	.globl gUnknown_85847BE
gUnknown_85847BE: @ 0x085847BE
	.incbin "baserom.gba", 0x5847be, 0x8e
	.globl gUnknown_858484C
gUnknown_858484C: @ 0x0858484C
	.incbin "baserom.gba", 0x58484c, 0x13c
	.globl gUnknown_8584988
gUnknown_8584988: @ 0x08584988
	.incbin "baserom.gba", 0x584988, 0x1c
	.globl gUnknown_85849A4
gUnknown_85849A4: @ 0x085849A4
	.incbin "baserom.gba", 0x5849a4, 0x2c0
	.globl gUnknown_8584C64
gUnknown_8584C64: @ 0x08584C64
	.incbin "baserom.gba", 0x584c64, 0x18
	.globl gUnknown_8584C7C
gUnknown_8584C7C: @ 0x08584C7C
	.incbin "baserom.gba", 0x584c7c, 0x18
	.globl gUnknown_8584C94
gUnknown_8584C94: @ 0x08584C94
	.incbin "baserom.gba", 0x584c94, 0x18
	.globl gUnknown_8584CAC
gUnknown_8584CAC: @ 0x08584CAC
	.incbin "baserom.gba", 0x584cac, 0x18
	.globl gUnknown_8584CC4
gUnknown_8584CC4: @ 0x08584CC4
	.incbin "baserom.gba", 0x584cc4, 0x18
	.globl gUnknown_8584CDC
gUnknown_8584CDC: @ 0x08584CDC
	.incbin "baserom.gba", 0x584cdc, 0x18
	.globl gUnknown_8584CF4
gUnknown_8584CF4: @ 0x08584CF4
	.incbin "baserom.gba", 0x584cf4, 0x18
	.globl gUnknown_8584D0C
gUnknown_8584D0C: @ 0x08584D0C
	.incbin "baserom.gba", 0x584d0c, 0x18
	.globl gUnknown_8584D24
gUnknown_8584D24: @ 0x08584D24
	.incbin "baserom.gba", 0x584d24, 0x18
	.globl gUnknown_8584D3C
gUnknown_8584D3C: @ 0x08584D3C
	.incbin "baserom.gba", 0x584d3c, 0x18
	.globl gUnknown_8584D54
gUnknown_8584D54: @ 0x08584D54
	.incbin "baserom.gba", 0x584d54, 0x18
	.globl gUnknown_8584D6C
gUnknown_8584D6C: @ 0x08584D6C
	.incbin "baserom.gba", 0x584d6c, 0x18
	.globl gUnknown_8584D84
gUnknown_8584D84: @ 0x08584D84
	.incbin "baserom.gba", 0x584d84, 0x18
	.globl gUnknown_8584D9C
gUnknown_8584D9C: @ 0x08584D9C
	.incbin "baserom.gba", 0x584d9c, 0x18
	.globl gUnknown_8584DB4
gUnknown_8584DB4: @ 0x08584DB4
	.incbin "baserom.gba", 0x584db4, 0x168
	.globl gUnknown_8584F1C
gUnknown_8584F1C: @ 0x08584F1C
	.incbin "baserom.gba", 0x584f1c, 0x28
	.globl gUnknown_8584F44
gUnknown_8584F44: @ 0x08584F44
	.incbin "baserom.gba", 0x584f44, 0x20
	.globl gUnknown_8584F64
gUnknown_8584F64: @ 0x08584F64
	.incbin "baserom.gba", 0x584f64, 0x14
	.globl gUnknown_8584F78
gUnknown_8584F78: @ 0x08584F78
	.incbin "baserom.gba", 0x584f78, 0x1c
	.globl gUnknown_8584F94
gUnknown_8584F94: @ 0x08584F94
	.incbin "baserom.gba", 0x584f94, 0x18
	.globl gUnknown_8584FAC
gUnknown_8584FAC: @ 0x08584FAC
	.incbin "baserom.gba", 0x584fac, 0x14
	.globl gUnknown_8584FC0
gUnknown_8584FC0: @ 0x08584FC0
	.incbin "baserom.gba", 0x584fc0, 0x228
	.globl gUnknown_85851E8
gUnknown_85851E8: @ 0x085851E8
	.incbin "baserom.gba", 0x5851e8, 0x68
	.globl gUnknown_8585250
gUnknown_8585250: @ 0x08585250
	.incbin "baserom.gba", 0x585250, 0x68
	.globl gUnknown_85852B8
gUnknown_85852B8: @ 0x085852B8
	.incbin "baserom.gba", 0x5852b8, 0xb0
	.globl gUnknown_8585368
gUnknown_8585368: @ 0x08585368
	.incbin "baserom.gba", 0x585368, 0xe4
	.globl gUnknown_858544C
gUnknown_858544C: @ 0x0858544C
	.incbin "baserom.gba", 0x58544c, 0xc0
	.globl gUnknown_858550C
gUnknown_858550C: @ 0x0858550C
	.incbin "baserom.gba", 0x58550c, 0x14
	.globl gUnknown_8585520
gUnknown_8585520: @ 0x08585520
	.incbin "baserom.gba", 0x585520, 0x14
	.globl gUnknown_8585534
gUnknown_8585534: @ 0x08585534
	.incbin "baserom.gba", 0x585534, 0x5
	.globl gUnknown_8585539
gUnknown_8585539: @ 0x08585539
	.incbin "baserom.gba", 0x585539, 0x6
	.globl gUnknown_858553F
gUnknown_858553F: @ 0x0858553F
	.incbin "baserom.gba", 0x58553f, 0x65
	.globl gUnknown_85855A4
gUnknown_85855A4: @ 0x085855A4
	.incbin "baserom.gba", 0x5855a4, 0xc
	.globl gUnknown_85855B0
gUnknown_85855B0: @ 0x085855B0
	.incbin "baserom.gba", 0x5855b0, 0x64
	.globl gUnknown_8585614
gUnknown_8585614: @ 0x08585614
	.incbin "baserom.gba", 0x585614, 0x10
	.globl gUnknown_8585624
gUnknown_8585624: @ 0x08585624
	.incbin "baserom.gba", 0x585624, 0x4
	.globl gUnknown_8585628
gUnknown_8585628: @ 0x08585628
	.incbin "baserom.gba", 0x585628, 0x20
	.globl gUnknown_8585648
gUnknown_8585648: @ 0x08585648
	.incbin "baserom.gba", 0x585648, 0x48
	.globl gUnknown_8585690
gUnknown_8585690: @ 0x08585690
	.incbin "baserom.gba", 0x585690, 0x768
	.globl gUnknown_8585DF8
gUnknown_8585DF8: @ 0x08585DF8
	.incbin "baserom.gba", 0x585df8, 0x1154
	.globl gUnknown_8586F4C
gUnknown_8586F4C: @ 0x08586F4C
	.incbin "baserom.gba", 0x586f4c, 0xba0
	.globl gUnknown_8587AEC
gUnknown_8587AEC: @ 0x08587AEC
	.incbin "baserom.gba", 0x587aec, 0x4b0
	.globl gUnknown_8587F9C
gUnknown_8587F9C: @ 0x08587F9C
	.incbin "baserom.gba", 0x587f9c, 0x1b8
	.globl gUnknown_8588154
gUnknown_8588154: @ 0x08588154
	.incbin "baserom.gba", 0x588154, 0x4b0
	.globl gUnknown_8588604
gUnknown_8588604: @ 0x08588604
	.incbin "baserom.gba", 0x588604, 0x2
	.globl gUnknown_8588606
gUnknown_8588606: @ 0x08588606

	@ src/slot_machine.c:653 sText_QuitTheGame
	.globl gText_Rom_588606
gText_Rom_588606: @ 0x08588606
	.string "ゲームを やめますか？$"
	.if (. - gText_Rom_588606) > 0xc
	.error "gText_Rom_588606 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_588606) < 0xc
	.space 0xc - (. - gText_Rom_588606)
	.endif
	.globl gUnknown_8588612
gUnknown_8588612: @ 0x08588612

	@ asm/slot_machine.s:1721 SlotAction_PrintMessage_9999Coins
	.globl gText_Rom_588612
gText_Rom_588612: @ 0x08588612
	.string "コインが　9999まい\nたまって　います$"
	.if (. - gText_Rom_588612) > 0x15
	.error "gText_Rom_588612 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_588612) < 0x15
	.space 0x15 - (. - gText_Rom_588612)
	.endif
	.globl gUnknown_8588627
gUnknown_8588627: @ 0x08588627

	@ asm/slot_machine.s:1778 SlotAction_PrintMessage_NoMoreCoins
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_588627
gText_Rom_588627: @ 0x08588627
	.string "コインが　ありません\nゲームを　しゅうりょうします$"
	.if (. - gText_Rom_588627) != 0x1a
	.error "gText_Rom_588627 must retain its original byte length"
	.endif
	.globl gText_Rom_58863D
	.set gText_Rom_58863D, gText_Rom_588627 + 0x16
	.globl gUnknown_8588641
gUnknown_8588641: @ 0x08588641

	@ asm/slot_machine.s:1036 SlotAction_PrintYouDontHaveThreeCoins
	.globl gText_Rom_588641
gText_Rom_588641: @ 0x08588641
	.string "コインが　3まい　ありません！$"
	.if (. - gText_Rom_588641) > 0x10
	.error "gText_Rom_588641 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_588641) < 0x10
	.space 0x10 - (. - gText_Rom_588641)
	.endif
	.globl gUnknown_8588651
gUnknown_8588651: @ 0x08588651
	.incbin "baserom.gba", 0x588651, 0x53

	@ src/data/easy_chat/easy_chat_group_time.h:124 easy_chat_group_time_line_124
	.globl gText_Rom_5886A4
gText_Rom_5886A4: @ 0x085886A4
	.string "しゅうりょう$"
	.if (. - gText_Rom_5886A4) > 0x7
	.error "gText_Rom_5886A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5886A4) < 0x7
	.space 0x7 - (. - gText_Rom_5886A4)
	.endif
	.incbin "baserom.gba", 0x5886ab, 0x1
	.globl gUnknown_85886AC
gUnknown_85886AC: @ 0x085886AC
	.incbin "baserom.gba", 0x5886ac, 0x200
	.globl gUnknown_85888AC
gUnknown_85888AC: @ 0x085888AC
	.incbin "baserom.gba", 0x5888ac, 0x1084
	.globl gUnknown_8589930
gUnknown_8589930: @ 0x08589930
	.incbin "baserom.gba", 0x589930, 0xc30
	.globl gUnknown_858A560
gUnknown_858A560: @ 0x0858A560
	.incbin "baserom.gba", 0x58a560, 0xb38
	.globl gUnknown_858B098
gUnknown_858B098: @ 0x0858B098
	.incbin "baserom.gba", 0x58b098, 0xfb8
	.globl gUnknown_858C050
gUnknown_858C050: @ 0x0858C050
	.incbin "baserom.gba", 0x58c050, 0x1130
	.globl gUnknown_858D180
gUnknown_858D180: @ 0x0858D180
	.incbin "baserom.gba", 0x58d180, 0x604
	.globl gUnknown_858D784
gUnknown_858D784: @ 0x0858D784
	.incbin "baserom.gba", 0x58d784, 0x50c
	.globl gUnknown_858DC90
gUnknown_858DC90: @ 0x0858DC90
	.incbin "baserom.gba", 0x58dc90, 0x50c
	.globl gUnknown_858E19C
gUnknown_858E19C: @ 0x0858E19C
	.incbin "baserom.gba", 0x58e19c, 0x50c
	.globl gUnknown_858E6A8
gUnknown_858E6A8: @ 0x0858E6A8
	.incbin "baserom.gba", 0x58e6a8, 0x50c
	.globl gUnknown_858EBB4
gUnknown_858EBB4: @ 0x0858EBB4
	.incbin "baserom.gba", 0x58ebb4, 0x50c
	.globl gUnknown_858F0C0
gUnknown_858F0C0: @ 0x0858F0C0
	.incbin "baserom.gba", 0x58f0c0, 0x510
	.globl gUnknown_858F5D0
gUnknown_858F5D0: @ 0x0858F5D0
	.incbin "baserom.gba", 0x58f5d0, 0x14
	.globl gUnknown_858F5E4
gUnknown_858F5E4: @ 0x0858F5E4
	.incbin "baserom.gba", 0x58f5e4, 0x14
	.globl gUnknown_858F5F8
gUnknown_858F5F8: @ 0x0858F5F8
	.incbin "baserom.gba", 0x58f5f8, 0x4
	.globl gUnknown_858F5FC
gUnknown_858F5FC: @ 0x0858F5FC
	.incbin "baserom.gba", 0x58f5fc, 0x8
	.globl gUnknown_858F604
gUnknown_858F604: @ 0x0858F604
	.incbin "baserom.gba", 0x58f604, 0x3c
	.globl gUnknown_858F640
gUnknown_858F640: @ 0x0858F640
	.incbin "baserom.gba", 0x58f640, 0x8
	.globl gUnknown_858F648
gUnknown_858F648: @ 0x0858F648
	.incbin "baserom.gba", 0x58f648, 0x4
	.globl gUnknown_858F64C
gUnknown_858F64C: @ 0x0858F64C
	.incbin "baserom.gba", 0x58f64c, 0x18c
	.globl gUnknown_858F7D8
gUnknown_858F7D8: @ 0x0858F7D8
	.incbin "baserom.gba", 0x58f7d8, 0x1c
	.globl gUnknown_858F7F4
gUnknown_858F7F4: @ 0x0858F7F4
	.incbin "baserom.gba", 0x58f7f4, 0x10
	.globl gUnknown_858F804
gUnknown_858F804: @ 0x0858F804
	.incbin "baserom.gba", 0x58f804, 0x4
	.globl gUnknown_858F808
gUnknown_858F808: @ 0x0858F808
	.incbin "baserom.gba", 0x58f808, 0x8
	.globl gUnknown_858F810
gUnknown_858F810: @ 0x0858F810
	.incbin "baserom.gba", 0x58f810, 0x2
	.globl gUnknown_858F812
gUnknown_858F812: @ 0x0858F812
	.incbin "baserom.gba", 0x58f812, 0x7e
	.globl gUnknown_858F890
gUnknown_858F890: @ 0x0858F890
	.incbin "baserom.gba", 0x58f890, 0x18c
	.globl gUnknown_858FA1C
gUnknown_858FA1C: @ 0x0858FA1C
	.incbin "baserom.gba", 0x58fa1c, 0x1f8
	.globl gUnknown_858FC14
gUnknown_858FC14: @ 0x0858FC14
	.incbin "baserom.gba", 0x58fc14, 0xfc8
	.globl gUnknown_8590BDC
gUnknown_8590BDC: @ 0x08590BDC
	.incbin "baserom.gba", 0x590bdc, 0x10
	.globl gUnknown_8590BEC
gUnknown_8590BEC: @ 0x08590BEC
	.incbin "baserom.gba", 0x590bec, 0x8
	.globl gUnknown_8590BF4
gUnknown_8590BF4: @ 0x08590BF4
	.incbin "baserom.gba", 0x590bf4, 0x8
	.globl gStarterPokemonSpritePositions
gStarterPokemonSpritePositions: @ 0x08590BFC
	.incbin "baserom.gba", 0x590bfc, 0x6
	.globl gUnknown_8590C02
gUnknown_8590C02: @ 0x08590C02
	.incbin "baserom.gba", 0x590c02, 0x6

