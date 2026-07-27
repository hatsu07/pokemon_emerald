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

	.include "data/starter_pokemon.inc"

	.globl gUnknown_8590C10
gUnknown_8590C10: @ 0x08590C10
	.incbin "baserom.gba", 0x590c10, 0xc
	.globl gUnknown_8590C1C
gUnknown_8590C1C: @ 0x08590C1C
	.incbin "baserom.gba", 0x590c1c, 0x1c
	.globl gUnknown_8590C38
gUnknown_8590C38: @ 0x08590C38
	.incbin "baserom.gba", 0x590c38, 0xa8
	.globl gUnknown_8590CE0
gUnknown_8590CE0: @ 0x08590CE0
	.incbin "baserom.gba", 0x590ce0, 0x8
	.globl gUnknown_8590CE8
gUnknown_8590CE8: @ 0x08590CE8
	.incbin "baserom.gba", 0x590ce8, 0x10
	.globl gUnknown_8590CF8
gUnknown_8590CF8: @ 0x08590CF8
	.incbin "baserom.gba", 0x590cf8, 0x10
	.globl gUnknown_8590D08
gUnknown_8590D08: @ 0x08590D08
	.incbin "baserom.gba", 0x590d08, 0x18
	.globl gUnknown_8590D20
gUnknown_8590D20: @ 0x08590D20
	.incbin "baserom.gba", 0x590d20, 0x18
	.globl gUnknown_8590D38
gUnknown_8590D38: @ 0x08590D38
	.incbin "baserom.gba", 0x590d38, 0x18
	.globl gUnknown_8590D50
gUnknown_8590D50: @ 0x08590D50
	.incbin "baserom.gba", 0x590d50, 0x18
	.globl gUnknown_8590D68
gUnknown_8590D68: @ 0x08590D68
	.incbin "baserom.gba", 0x590d68, 0x20
	.globl gUnknown_8590D88
gUnknown_8590D88: @ 0x08590D88
	.incbin "baserom.gba", 0x590d88, 0x20
	.globl gUnknown_8590DA8
gUnknown_8590DA8: @ 0x08590DA8
	.incbin "baserom.gba", 0x590da8, 0x2cc
	.globl gUnknown_8591074
gUnknown_8591074: @ 0x08591074
	.incbin "baserom.gba", 0x591074, 0x298
	.globl gUnknown_859130C
gUnknown_859130C: @ 0x0859130C
	.incbin "baserom.gba", 0x59130c, 0x8f8
	.globl gUnknown_8591C04
gUnknown_8591C04: @ 0x08591C04

	@ asm/wallclock.s:727 Task_SetClock3
	.globl gText_Rom_591C04
gText_Rom_591C04: @ 0x08591C04
	.string "この　じかんで　よろしいですか？$"
	.if (. - gText_Rom_591C04) > 0x11
	.error "gText_Rom_591C04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C04) < 0x11
	.space 0x11 - (. - gText_Rom_591C04)
	.endif
	.globl gUnknown_8591C15
gUnknown_8591C15: @ 0x08591C15

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_591C15
gText_Rom_591C15: @ 0x08591C15
	.string "けってい$"
	.if (. - gText_Rom_591C15) > 0x5
	.error "gText_Rom_591C15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C15) < 0x5
	.space 0x5 - (. - gText_Rom_591C15)
	.endif
	.globl gUnknown_8591C1A
gUnknown_8591C1A: @ 0x08591C1A

	@ asm/wallclock.s:530 CB2_ViewWallClock
	.globl gText_Rom_591C1A
gText_Rom_591C1A: @ 0x08591C1A
	.string "もどる　$"
	.if (. - gText_Rom_591C1A) > 0x5
	.error "gText_Rom_591C1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C1A) < 0x5
	.space 0x5 - (. - gText_Rom_591C1A)
	.endif
	.incbin "baserom.gba", 0x591c1f, 0x1
	.globl gUnknown_8591C20
gUnknown_8591C20: @ 0x08591C20
	.incbin "baserom.gba", 0x591c20, 0x8
	.globl gUnknown_8591C28
gUnknown_8591C28: @ 0x08591C28
	.incbin "baserom.gba", 0x591c28, 0x18
	.globl gUnknown_8591C40
gUnknown_8591C40: @ 0x08591C40
	.incbin "baserom.gba", 0x591c40, 0x8
	.globl gUnknown_8591C48
gUnknown_8591C48: @ 0x08591C48
	.incbin "baserom.gba", 0x591c48, 0xc
	.globl gUnknown_8591C54
gUnknown_8591C54: @ 0x08591C54
	.incbin "baserom.gba", 0x591c54, 0x10
	.globl gUnknown_8591C64
gUnknown_8591C64: @ 0x08591C64
	.incbin "baserom.gba", 0x591c64, 0x38
	.globl gUnknown_8591C9C
gUnknown_8591C9C: @ 0x08591C9C
	.incbin "baserom.gba", 0x591c9c, 0x18
	.globl gUnknown_8591CB4
gUnknown_8591CB4: @ 0x08591CB4
	.incbin "baserom.gba", 0x591cb4, 0x38
	.globl gUnknown_8591CEC
gUnknown_8591CEC: @ 0x08591CEC
	.incbin "baserom.gba", 0x591cec, 0x18
	.globl gUnknown_8591D04
gUnknown_8591D04: @ 0x08591D04
	.incbin "baserom.gba", 0x591d04, 0x18
	.globl gUnknown_8591D1C
gUnknown_8591D1C: @ 0x08591D1C
	.incbin "baserom.gba", 0x591d1c, 0x2d0
	.globl gUnknown_8591FEC
gUnknown_8591FEC: @ 0x08591FEC
	.incbin "baserom.gba", 0x591fec, 0x80
	.globl gUnknown_859206C
gUnknown_859206C: @ 0x0859206C
	.incbin "baserom.gba", 0x59206c, 0xc
	.globl gUnknown_8592078
gUnknown_8592078: @ 0x08592078
	.incbin "baserom.gba", 0x592078, 0x3c
	.globl gUnknown_85920B4
gUnknown_85920B4: @ 0x085920B4
	.incbin "baserom.gba", 0x5920b4, 0x30
	.globl gUnknown_85920E4
gUnknown_85920E4: @ 0x085920E4
	.incbin "baserom.gba", 0x5920e4, 0x3
	.globl gUnknown_85920E7
gUnknown_85920E7: @ 0x085920E7
	.incbin "baserom.gba", 0x5920e7, 0x2
	.globl gUnknown_85920E9
gUnknown_85920E9: @ 0x085920E9
	.incbin "baserom.gba", 0x5920e9, 0x2
	.globl gUnknown_85920EB
gUnknown_85920EB: @ 0x085920EB
	.incbin "baserom.gba", 0x5920eb, 0x5
	.globl gUnknown_85920F0
gUnknown_85920F0: @ 0x085920F0
	.incbin "baserom.gba", 0x5920f0, 0x4c
	.globl gUnknown_859213C
gUnknown_859213C: @ 0x0859213C
	.incbin "baserom.gba", 0x59213c, 0x4
	.globl gUnknown_8592140
gUnknown_8592140: @ 0x08592140
	.incbin "baserom.gba", 0x592140, 0x8
	.globl gUnknown_8592148
gUnknown_8592148: @ 0x08592148
	.incbin "baserom.gba", 0x592148, 0x8
	.globl gUnknown_8592150
gUnknown_8592150: @ 0x08592150
	.incbin "baserom.gba", 0x592150, 0x18
	.globl gUnknown_8592168
gUnknown_8592168: @ 0x08592168
	.incbin "baserom.gba", 0x592168, 0x4
	.globl gUnknown_859216C
gUnknown_859216C: @ 0x0859216C
	.incbin "baserom.gba", 0x59216c, 0x28
	.globl gUnknown_8592194
gUnknown_8592194: @ 0x08592194
	.incbin "baserom.gba", 0x592194, 0x60
	.globl gUnknown_85921F4
gUnknown_85921F4: @ 0x085921F4
	.incbin "baserom.gba", 0x5921f4, 0x8
	.globl gUnknown_85921FC
gUnknown_85921FC: @ 0x085921FC
	.incbin "baserom.gba", 0x5921fc, 0x18
	.globl gUnknown_8592214
gUnknown_8592214: @ 0x08592214
	.incbin "baserom.gba", 0x592214, 0x88
	.globl gUnknown_859229C
gUnknown_859229C: @ 0x0859229C
	.incbin "baserom.gba", 0x59229c, 0x20
	.globl gUnknown_85922BC
gUnknown_85922BC: @ 0x085922BC
	.incbin "baserom.gba", 0x5922bc, 0x20
	.globl gUnknown_85922DC
gUnknown_85922DC: @ 0x085922DC
	.incbin "baserom.gba", 0x5922dc, 0x10
	.globl gUnknown_85922EC
gUnknown_85922EC: @ 0x085922EC
	.incbin "baserom.gba", 0x5922ec, 0x10
	.globl gUnknown_85922FC
gUnknown_85922FC: @ 0x085922FC
	.incbin "baserom.gba", 0x5922fc, 0x1e0
	.globl gUnknown_85924DC
gUnknown_85924DC: @ 0x085924DC
	.incbin "baserom.gba", 0x5924dc, 0xb4
	.globl gUnknown_8592590
gUnknown_8592590: @ 0x08592590
	.incbin "baserom.gba", 0x592590, 0x18
	.globl gUnknown_85925A8
gUnknown_85925A8: @ 0x085925A8
	.incbin "baserom.gba", 0x5925a8, 0x4
	.globl gUnknown_85925AC
gUnknown_85925AC: @ 0x085925AC
	.incbin "baserom.gba", 0x5925ac, 0x8
	.globl gUnknown_85925B4
gUnknown_85925B4: @ 0x085925B4
	.incbin "baserom.gba", 0x5925b4, 0x10
	.globl gUnknown_85925C4
gUnknown_85925C4: @ 0x085925C4
	.incbin "baserom.gba", 0x5925c4, 0x6
	.globl gUnknown_85925CA
gUnknown_85925CA: @ 0x085925CA
	.incbin "baserom.gba", 0x5925ca, 0xa
	.globl gUnknown_85925D4
gUnknown_85925D4: @ 0x085925D4
	.incbin "baserom.gba", 0x5925d4, 0xc
	.globl gUnknown_85925E0
gUnknown_85925E0: @ 0x085925E0
	.incbin "baserom.gba", 0x5925e0, 0xc
	.globl gUnknown_85925EC
gUnknown_85925EC: @ 0x085925EC
	.incbin "baserom.gba", 0x5925ec, 0xc
	.globl gUnknown_85925F8
gUnknown_85925F8: @ 0x085925F8
	.incbin "baserom.gba", 0x5925f8, 0xc
	.globl gUnknown_8592604
gUnknown_8592604: @ 0x08592604
	.incbin "baserom.gba", 0x592604, 0x4
	.globl gUnknown_8592608
gUnknown_8592608: @ 0x08592608
	.incbin "baserom.gba", 0x592608, 0x8
	.globl gUnknown_8592610
gUnknown_8592610: @ 0x08592610
	.incbin "baserom.gba", 0x592610, 0x40
	.globl gUnknown_8592650
gUnknown_8592650: @ 0x08592650
	.incbin "baserom.gba", 0x592650, 0x12
	.globl gUnknown_8592662
gUnknown_8592662: @ 0x08592662
	.incbin "baserom.gba", 0x592662, 0x12
	.globl gUnknown_8592674
gUnknown_8592674: @ 0x08592674
	.incbin "baserom.gba", 0x592674, 0x9
	.globl gUnknown_859267D
gUnknown_859267D: @ 0x0859267D
	.incbin "baserom.gba", 0x59267d, 0x9
	.globl gUnknown_8592686
gUnknown_8592686: @ 0x08592686
	.incbin "baserom.gba", 0x592686, 0x26
	.globl gUnknown_85926AC
gUnknown_85926AC: @ 0x085926AC
	.incbin "baserom.gba", 0x5926ac, 0x78
	.globl gUnknown_8592724
gUnknown_8592724: @ 0x08592724
	.incbin "baserom.gba", 0x592724, 0x14
	.globl gUnknown_8592738
gUnknown_8592738: @ 0x08592738
	.incbin "baserom.gba", 0x592738, 0x14
	.globl gUnknown_859274C
gUnknown_859274C: @ 0x0859274C
	.incbin "baserom.gba", 0x59274c, 0x340
	.globl gUnknown_8592A8C
gUnknown_8592A8C: @ 0x08592A8C
	.incbin "baserom.gba", 0x592a8c, 0x10
	.globl gUnknown_8592A9C
gUnknown_8592A9C: @ 0x08592A9C
	.incbin "baserom.gba", 0x592a9c, 0x64
	.globl gUnknown_8592B00
gUnknown_8592B00: @ 0x08592B00
	.incbin "baserom.gba", 0x592b00, 0x30
	.globl gUnknown_8592B30
gUnknown_8592B30: @ 0x08592B30
	.incbin "baserom.gba", 0x592b30, 0x30
	.globl gUnknown_8592B60
gUnknown_8592B60: @ 0x08592B60
	.incbin "baserom.gba", 0x592b60, 0x18
	.globl gUnknown_8592B78
gUnknown_8592B78: @ 0x08592B78
	.incbin "baserom.gba", 0x592b78, 0x8
	.globl gUnknown_8592B80
gUnknown_8592B80: @ 0x08592B80
	.incbin "baserom.gba", 0x592b80, 0x8
	.globl gUnknown_8592B88
gUnknown_8592B88: @ 0x08592B88
	.incbin "baserom.gba", 0x592b88, 0x16
	.globl gUnknown_8592B9E
gUnknown_8592B9E: @ 0x08592B9E
	.incbin "baserom.gba", 0x592b9e, 0xc
	.globl gUnknown_8592BAA
gUnknown_8592BAA: @ 0x08592BAA
	.incbin "baserom.gba", 0x592baa, 0xe
	.globl gUnknown_8592BB8
gUnknown_8592BB8: @ 0x08592BB8
	.incbin "baserom.gba", 0x592bb8, 0x14
	.globl gUnknown_8592BCC
gUnknown_8592BCC: @ 0x08592BCC
	.incbin "baserom.gba", 0x592bcc, 0x2c
	.globl gUnknown_8592BF8
gUnknown_8592BF8: @ 0x08592BF8
	.incbin "baserom.gba", 0x592bf8, 0x18
	.globl gUnknown_8592C10
gUnknown_8592C10: @ 0x08592C10
	.incbin "baserom.gba", 0x592c10, 0x1c
	.globl gUnknown_8592C2C
gUnknown_8592C2C: @ 0x08592C2C
	.incbin "baserom.gba", 0x592c2c, 0x28
	.globl gUnknown_8592C54
gUnknown_8592C54: @ 0x08592C54
	.incbin "baserom.gba", 0x592c54, 0x14
	.globl gUnknown_8592C68
gUnknown_8592C68: @ 0x08592C68
	.incbin "baserom.gba", 0x592c68, 0x14
	.globl gUnknown_8592C7C
gUnknown_8592C7C: @ 0x08592C7C
	.incbin "baserom.gba", 0x592c7c, 0x8
	.globl gUnknown_8592C84
gUnknown_8592C84: @ 0x08592C84
	.incbin "baserom.gba", 0x592c84, 0x2c
	.globl gUnknown_8592CB0
gUnknown_8592CB0: @ 0x08592CB0
	.incbin "baserom.gba", 0x592cb0, 0x2c
	.globl gUnknown_8592CDC
gUnknown_8592CDC: @ 0x08592CDC
	.incbin "baserom.gba", 0x592cdc, 0x160
	.globl gUnknown_8592E3C
gUnknown_8592E3C: @ 0x08592E3C
	.incbin "baserom.gba", 0x592e3c, 0x16
	.globl gUnknown_8592E52
gUnknown_8592E52: @ 0x08592E52
	.incbin "baserom.gba", 0x592e52, 0xa
	.globl gUnknown_8592E5C
gUnknown_8592E5C: @ 0x08592E5C
	.incbin "baserom.gba", 0x592e5c, 0x10
	.globl gUnknown_8592E6C
gUnknown_8592E6C: @ 0x08592E6C
	.incbin "baserom.gba", 0x592e6c, 0x10
	.globl gUnknown_8592E7C
gUnknown_8592E7C: @ 0x08592E7C
	.incbin "baserom.gba", 0x592e7c, 0x24
	.globl gUnknown_8592EA0
gUnknown_8592EA0: @ 0x08592EA0
	.incbin "baserom.gba", 0x592ea0, 0x2c
	.globl gUnknown_8592ECC
gUnknown_8592ECC: @ 0x08592ECC
	.incbin "baserom.gba", 0x592ecc, 0x4
	.globl gUnknown_8592ED0
gUnknown_8592ED0: @ 0x08592ED0
	.incbin "baserom.gba", 0x592ed0, 0x8
	.globl gUnknown_8592ED8
gUnknown_8592ED8: @ 0x08592ED8
	.incbin "baserom.gba", 0x592ed8, 0x8
	.globl gUnknown_8592EE0
gUnknown_8592EE0: @ 0x08592EE0
	.incbin "baserom.gba", 0x592ee0, 0xc0
	.globl gUnknown_8592FA0
gUnknown_8592FA0: @ 0x08592FA0
	.incbin "baserom.gba", 0x592fa0, 0x20
	.globl gUnknown_8592FC0
gUnknown_8592FC0: @ 0x08592FC0
	.incbin "baserom.gba", 0x592fc0, 0x800
	.globl gUnknown_85937C0
gUnknown_85937C0: @ 0x085937C0
	.incbin "baserom.gba", 0x5937c0, 0x8
	.globl gUnknown_85937C8
gUnknown_85937C8: @ 0x085937C8
	.incbin "baserom.gba", 0x5937c8, 0x10
	.globl gUnknown_85937D8
gUnknown_85937D8: @ 0x085937D8
	.incbin "baserom.gba", 0x5937d8, 0x8
	.globl gUnknown_85937E0
gUnknown_85937E0: @ 0x085937E0

	@ src/strings.c:1102 gText_PlayersBattleResults
	.globl gText_Rom_5937E0
gText_Rom_5937E0: @ 0x085937E0
	.string "{PLAYER} の たいせん せいせき$"
	.if (. - gText_Rom_5937E0) > 0xf
	.error "gText_Rom_5937E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5937E0) < 0xf
	.space 0xf - (. - gText_Rom_5937E0)
	.endif
	.globl gUnknown_85937EF
gUnknown_85937EF: @ 0x085937EF

	@ src/strings.c:1103 gText_TotalRecordWLD
	.globl gText_Rom_5937EF
gText_Rom_5937EF: @ 0x085937EF
	.string "{STR_VAR_1}しょう {STR_VAR_2}はい {STR_VAR_3}ひきわけ$"
	.if (. - gText_Rom_5937EF) > 0x12
	.error "gText_Rom_5937EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5937EF) < 0x12
	.space 0x12 - (. - gText_Rom_5937EF)
	.endif
	.globl gUnknown_8593801
gUnknown_8593801: @ 0x08593801

	@ asm/battle_records.s:701 ShowLinkBattleRecords
	.globl gText_Rom_593801
gText_Rom_593801: @ 0x08593801
	.string "かち　　　　まけ　　　ひきわけ$"
	.if (. - gText_Rom_593801) > 0x10
	.error "gText_Rom_593801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_593801) < 0x10
	.space 0x10 - (. - gText_Rom_593801)
	.endif
	.globl gUnknown_8593811
gUnknown_8593811: @ 0x08593811

	@ asm/battle_records.s:542 PrintLinkBattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_593811
gText_Rom_593811: @ 0x08593811
	.string "ーーーーー$"
	.if (. - gText_Rom_593811) != 0x6
	.error "gText_Rom_593811 must retain its original byte length"
	.endif
	.globl gText_Rom_593812
	.set gText_Rom_593812, gText_Rom_593811 + 0x1
	.globl gText_Rom_593813
	.set gText_Rom_593813, gText_Rom_593811 + 0x2
	.globl gUnknown_8593817
gUnknown_8593817: @ 0x08593817

	@ src/battle_records.c:90 sText_DashesNoScore
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_593817
gText_Rom_593817: @ 0x08593817
	.string "----$"
	.if (. - gText_Rom_593817) != 0x5
	.error "gText_Rom_593817 must retain its original byte length"
	.endif
	.globl gText_Rom_593818
	.set gText_Rom_593818, gText_Rom_593817 + 0x1
	.globl gUnknown_859381C
gUnknown_859381C: @ 0x0859381C
	.incbin "baserom.gba", 0x59381c, 0x20
	.globl gUnknown_859383C
gUnknown_859383C: @ 0x0859383C
	.incbin "baserom.gba", 0x59383c, 0x134
	.globl gUnknown_8593970
gUnknown_8593970: @ 0x08593970
	.incbin "baserom.gba", 0x593970, 0x2
	.globl gUnknown_8593972
gUnknown_8593972: @ 0x08593972
	.incbin "baserom.gba", 0x593972, 0x6
	.globl gUnknown_8593978
gUnknown_8593978: @ 0x08593978
	.incbin "baserom.gba", 0x593978, 0xc
	.globl gUnknown_8593984
gUnknown_8593984: @ 0x08593984
	.incbin "baserom.gba", 0x593984, 0x1c
	.globl gUnknown_85939A0
gUnknown_85939A0: @ 0x085939A0
	.incbin "baserom.gba", 0x5939a0, 0x4
	.globl gUnknown_85939A4
gUnknown_85939A4: @ 0x085939A4
	.incbin "baserom.gba", 0x5939a4, 0x8
	.globl gUnknown_85939AC
gUnknown_85939AC: @ 0x085939AC
	.incbin "baserom.gba", 0x5939ac, 0x10
	.globl gUnknown_85939BC
gUnknown_85939BC: @ 0x085939BC
	.incbin "baserom.gba", 0x5939bc, 0xb8
	.globl gUnknown_8593A74
gUnknown_8593A74: @ 0x08593A74
	.incbin "baserom.gba", 0x593a74, 0x10
	.globl gUnknown_8593A84
gUnknown_8593A84: @ 0x08593A84
	.incbin "baserom.gba", 0x593a84, 0x38
	.globl gUnknown_8593ABC
gUnknown_8593ABC: @ 0x08593ABC
	.incbin "baserom.gba", 0x593abc, 0x1e4
	.globl gUnknown_8593CA0
gUnknown_8593CA0: @ 0x08593CA0
	.incbin "baserom.gba", 0x593ca0, 0x6f8
	.globl gUnknown_8594398
gUnknown_8594398: @ 0x08594398
	.incbin "baserom.gba", 0x594398, 0x4e4
	.globl gUnknown_859487C
gUnknown_859487C: @ 0x0859487C
	.incbin "baserom.gba", 0x59487c, 0x4d4
	.globl gUnknown_8594D50
gUnknown_8594D50: @ 0x08594D50
	.incbin "baserom.gba", 0x594d50, 0x6a0
	.globl gUnknown_85953F0
gUnknown_85953F0: @ 0x085953F0
	.incbin "baserom.gba", 0x5953f0, 0x40
	.globl gUnknown_8595430
gUnknown_8595430: @ 0x08595430

	@ src/berry_blender.c:278 sText_CommunicationStandby
	.globl gText_Rom_595430
gText_Rom_595430: @ 0x08595430
	.string "つうしんたいきちゅうです$"
	.if (. - gText_Rom_595430) > 0xd
	.error "gText_Rom_595430 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_595430) < 0xd
	.space 0xd - (. - gText_Rom_595430)
	.endif
	.incbin "baserom.gba", 0x59543d, 0x9

	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_595446
gText_Rom_595446: @ 0x08595446
	.string "はい\nいいえ$"
	.if (. - gText_Rom_595446) != 0x7
	.error "gText_Rom_595446 must retain its original byte length"
	.endif
	.globl gText_Rom_595449
	.set gText_Rom_595449, gText_Rom_595446 + 0x3
	.incbin "baserom.gba", 0x59544d, 0x28
	.globl gUnknown_8595475
gUnknown_8595475: @ 0x08595475
	.incbin "baserom.gba", 0x595475, 0x10
	.globl gUnknown_8595485
gUnknown_8595485: @ 0x08595485
	.incbin "baserom.gba", 0x595485, 0x323
	.globl gUnknown_85957A8
gUnknown_85957A8: @ 0x085957A8
	.incbin "baserom.gba", 0x5957a8, 0x200
	.globl gUnknown_85959A8
gUnknown_85959A8: @ 0x085959A8
	.incbin "baserom.gba", 0x5959a8, 0x1a4
	.globl gUnknown_8595B4C
gUnknown_8595B4C: @ 0x08595B4C
	.incbin "baserom.gba", 0x595b4c, 0x1a0
	.globl gUnknown_8595CEC
gUnknown_8595CEC: @ 0x08595CEC
	.incbin "baserom.gba", 0x595cec, 0xc
	.globl gUnknown_8595CF8
gUnknown_8595CF8: @ 0x08595CF8
	.incbin "baserom.gba", 0x595cf8, 0x8
	.globl gUnknown_8595D00
gUnknown_8595D00: @ 0x08595D00
	.incbin "baserom.gba", 0x595d00, 0xc
	.globl gUnknown_8595D0C
gUnknown_8595D0C: @ 0x08595D0C
	.incbin "baserom.gba", 0x595d0c, 0x184
	.globl gUnknown_8595E90
gUnknown_8595E90: @ 0x08595E90
	.incbin "baserom.gba", 0x595e90, 0x4
	.globl gUnknown_8595E94
gUnknown_8595E94: @ 0x08595E94
	.incbin "baserom.gba", 0x595e94, 0x5c
	.globl gUnknown_8595EF0
gUnknown_8595EF0: @ 0x08595EF0
	.incbin "baserom.gba", 0x595ef0, 0x4
	.globl gUnknown_8595EF4
gUnknown_8595EF4: @ 0x08595EF4
	.incbin "baserom.gba", 0x595ef4, 0x40
	.globl gUnknown_8595F34
gUnknown_8595F34: @ 0x08595F34
	.incbin "baserom.gba", 0x595f34, 0x68
	.globl gUnknown_8595F9C
gUnknown_8595F9C: @ 0x08595F9C
	.incbin "baserom.gba", 0x595f9c, 0x18

	@ src/strings.c:157 gText_Coins
	.globl gText_Rom_595FB4
gText_Rom_595FB4: @ 0x08595FB4
	.string "{STR_VAR_1}まい$"
	.if (. - gText_Rom_595FB4) > 0x5
	.error "gText_Rom_595FB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_595FB4) < 0x5
	.space 0x5 - (. - gText_Rom_595FB4)
	.endif
	.incbin "baserom.gba", 0x595fb9, 0x3
	.globl gUnknown_8595FBC
gUnknown_8595FBC: @ 0x08595FBC
	.incbin "baserom.gba", 0x595fbc, 0x8
	.globl gUnknown_8595FC4
gUnknown_8595FC4: @ 0x08595FC4
	.incbin "baserom.gba", 0x595fc4, 0x8
	.globl gUnknown_8595FCC
gUnknown_8595FCC: @ 0x08595FCC
	.incbin "baserom.gba", 0x595fcc, 0x6
	.globl gUnknown_8595FD2
gUnknown_8595FD2: @ 0x08595FD2
	.incbin "baserom.gba", 0x595fd2, 0x4
	.globl gUnknown_8595FD6
gUnknown_8595FD6: @ 0x08595FD6
	.incbin "baserom.gba", 0x595fd6, 0xa
	.globl gUnknown_8595FE0
gUnknown_8595FE0: @ 0x08595FE0
	.incbin "baserom.gba", 0x595fe0, 0x10
	.globl gUnknown_8595FF0
gUnknown_8595FF0: @ 0x08595FF0
	.incbin "baserom.gba", 0x595ff0, 0xc
	.globl gUnknown_8595FFC
gUnknown_8595FFC: @ 0x08595FFC
	.incbin "baserom.gba", 0x595ffc, 0xf3c
	.globl gUnknown_8596F38
gUnknown_8596F38: @ 0x08596F38
	.incbin "baserom.gba", 0x596f38, 0x98
	.globl gUnknown_8596FD0
gUnknown_8596FD0: @ 0x08596FD0
	.incbin "baserom.gba", 0x596fd0, 0x6c
	.globl gUnknown_859703C
gUnknown_859703C: @ 0x0859703C
	.incbin "baserom.gba", 0x59703c, 0x8
	.globl gUnknown_8597044
gUnknown_8597044: @ 0x08597044
	.incbin "baserom.gba", 0x597044, 0x78
	.globl gUnknown_85970BC
gUnknown_85970BC: @ 0x085970BC
	.incbin "baserom.gba", 0x5970bc, 0x60
	.globl gUnknown_859711C
gUnknown_859711C: @ 0x0859711C
	.incbin "baserom.gba", 0x59711c, 0x48
	.globl gUnknown_8597164
gUnknown_8597164: @ 0x08597164
	.incbin "baserom.gba", 0x597164, 0x60
	.globl gUnknown_85971C4
gUnknown_85971C4: @ 0x085971C4
	.incbin "baserom.gba", 0x5971c4, 0x140
	.globl gUnknown_8597304
gUnknown_8597304: @ 0x08597304
	.incbin "baserom.gba", 0x597304, 0x94
	.globl gUnknown_8597398
gUnknown_8597398: @ 0x08597398
	.incbin "baserom.gba", 0x597398, 0x18
	.globl gUnknown_85973B0
gUnknown_85973B0: @ 0x085973B0
	.incbin "baserom.gba", 0x5973b0, 0x18
	.globl gUnknown_85973C8
gUnknown_85973C8: @ 0x085973C8
	.incbin "baserom.gba", 0x5973c8, 0x18
	.globl gUnknown_85973E0
gUnknown_85973E0: @ 0x085973E0
	.incbin "baserom.gba", 0x5973e0, 0x18
	.globl gUnknown_85973F8
gUnknown_85973F8: @ 0x085973F8
	.incbin "baserom.gba", 0x5973f8, 0x20
	.globl gUnknown_8597418
gUnknown_8597418: @ 0x08597418
	.incbin "baserom.gba", 0x597418, 0xc4
	.globl gUnknown_85974DC
gUnknown_85974DC: @ 0x085974DC
	.incbin "baserom.gba", 0x5974dc, 0x20
	.globl gUnknown_85974FC
gUnknown_85974FC: @ 0x085974FC
	.incbin "baserom.gba", 0x5974fc, 0x8
	.globl gUnknown_8597504
gUnknown_8597504: @ 0x08597504
	.incbin "baserom.gba", 0x597504, 0x28
	.globl gUnknown_859752C
gUnknown_859752C: @ 0x0859752C
	.incbin "baserom.gba", 0x59752c, 0x80
	.globl gUnknown_85975AC
gUnknown_85975AC: @ 0x085975AC
	.incbin "baserom.gba", 0x5975ac, 0x18
	.globl gUnknown_85975C4
gUnknown_85975C4: @ 0x085975C4
	.incbin "baserom.gba", 0x5975c4, 0x30
	.globl gUnknown_85975F4
gUnknown_85975F4: @ 0x085975F4
	.incbin "baserom.gba", 0x5975f4, 0x7c
	.globl gUnknown_8597670
gUnknown_8597670: @ 0x08597670
	.incbin "baserom.gba", 0x597670, 0x30
	.globl gUnknown_85976A0
gUnknown_85976A0: @ 0x085976A0
	.incbin "baserom.gba", 0x5976a0, 0x18
	.globl gUnknown_85976B8
gUnknown_85976B8: @ 0x085976B8
	.incbin "baserom.gba", 0x5976b8, 0x6
	.globl gUnknown_85976BE
gUnknown_85976BE: @ 0x085976BE
	.incbin "baserom.gba", 0x5976be, 0x8
	.globl gUnknown_85976C6
gUnknown_85976C6: @ 0x085976C6
	.incbin "baserom.gba", 0x5976c6, 0x8
	.globl gUnknown_85976CE
gUnknown_85976CE: @ 0x085976CE
	.incbin "baserom.gba", 0x5976ce, 0x14
	.globl gUnknown_85976E2
gUnknown_85976E2: @ 0x085976E2
	.incbin "baserom.gba", 0x5976e2, 0x18
	.globl gUnknown_85976FA
gUnknown_85976FA: @ 0x085976FA
	.incbin "baserom.gba", 0x5976fa, 0x2
	.globl gUnknown_85976FC
gUnknown_85976FC: @ 0x085976FC
	.incbin "baserom.gba", 0x5976fc, 0x8d0
	.globl gUnknown_8597FCC
gUnknown_8597FCC: @ 0x08597FCC
	.incbin "baserom.gba", 0x597fcc, 0x20
	.globl gUnknown_8597FEC
gUnknown_8597FEC: @ 0x08597FEC
	.incbin "baserom.gba", 0x597fec, 0x338
	.globl gUnknown_8598324
gUnknown_8598324: @ 0x08598324
	.incbin "baserom.gba", 0x598324, 0x480
	.globl gUnknown_85987A4
gUnknown_85987A4: @ 0x085987A4
	.incbin "baserom.gba", 0x5987a4, 0x20
	.globl gUnknown_85987C4
gUnknown_85987C4: @ 0x085987C4
	.incbin "baserom.gba", 0x5987c4, 0x20
	.globl gUnknown_85987E4
gUnknown_85987E4: @ 0x085987E4
	.incbin "baserom.gba", 0x5987e4, 0x2
	.globl gUnknown_85987E6
gUnknown_85987E6: @ 0x085987E6
	.incbin "baserom.gba", 0x5987e6, 0x36
	.globl gUnknown_859881C
gUnknown_859881C: @ 0x0859881C
	.incbin "baserom.gba", 0x59881c, 0x18
	.globl gUnknown_8598834
gUnknown_8598834: @ 0x08598834
	.incbin "baserom.gba", 0x598834, 0x10
	.globl gUnknown_8598844
gUnknown_8598844: @ 0x08598844
	.incbin "baserom.gba", 0x598844, 0x14

	@ src/strings.c:175 gText_TheShop
	.globl gText_Rom_598858
gText_Rom_598858: @ 0x08598858
	.string "ショップ$"
	.if (. - gText_Rom_598858) > 0x5
	.error "gText_Rom_598858 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598858) < 0x5
	.space 0x5 - (. - gText_Rom_598858)
	.endif

	@ src/data/region_map/region_map_entries.h:427 region_map_entries_line_427
	.globl gText_Rom_59885D
gText_Rom_59885D: @ 0x0859885D
	.string "トウカのもり$"
	.if (. - gText_Rom_59885D) > 0x7
	.error "gText_Rom_59885D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59885D) < 0x7
	.space 0x7 - (. - gText_Rom_59885D)
	.endif
	.incbin "baserom.gba", 0x598864, 0xa

	@ src/data/region_map/region_map_entries.h:441 region_map_entries_line_441
	.globl gText_Rom_59886E
gText_Rom_59886E: @ 0x0859886E
	.string "すてられぶね$"
	.if (. - gText_Rom_59886E) > 0x7
	.error "gText_Rom_59886E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59886E) < 0x7
	.space 0x7 - (. - gText_Rom_59886E)
	.endif
	.incbin "baserom.gba", 0x598875, 0x1a

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
	.incbin "baserom.gba", 0x598897, 0x11

	@ src/pokemon_storage_system.c:8103 pokemon_storage_system_line_8103
	.globl gText_Rom_5988A8
gText_Rom_5988A8: @ 0x085988A8
	.string "さばく$"
	.if (. - gText_Rom_5988A8) > 0x4
	.error "gText_Rom_5988A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5988A8) < 0x4
	.space 0x4 - (. - gText_Rom_5988A8)
	.endif
	.incbin "baserom.gba", 0x5988ac, 0x2a

	@ src/data/region_map/region_map_entries.h:455 region_map_entries_line_455
	.globl gText_Rom_5988D6
gText_Rom_5988D6: @ 0x085988D6
	.string "りゅうせいのたき$"
	.if (. - gText_Rom_5988D6) > 0x9
	.error "gText_Rom_5988D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5988D6) < 0x9
	.space 0x9 - (. - gText_Rom_5988D6)
	.endif
	.incbin "baserom.gba", 0x5988df, 0xb

	@ src/data/region_map/region_map_entries.h:434 region_map_entries_line_434
	.globl gText_Rom_5988EA
gText_Rom_5988EA: @ 0x085988EA
	.string "カナシダトンネル$"
	.if (. - gText_Rom_5988EA) > 0x9
	.error "gText_Rom_5988EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5988EA) < 0x9
	.space 0x9 - (. - gText_Rom_5988EA)
	.endif
	.incbin "baserom.gba", 0x5988f3, 0x15

	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_598908
gText_Rom_598908: @ 0x08598908
	.string "おくりびやま$"
	.if (. - gText_Rom_598908) > 0x7
	.error "gText_Rom_598908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598908) < 0x7
	.space 0x7 - (. - gText_Rom_598908)
	.endif

	@ src/data/region_map/region_map_entries.h:483 region_map_entries_line_483
	.globl gText_Rom_59890F
gText_Rom_59890F: @ 0x0859890F
	.string "あさせのほらあな$"
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
	.string "かいていどうくつ$"
	.if (. - gText_Rom_598918) != 0x9
	.error "gText_Rom_598918 must retain its original byte length"
	.endif
	.globl gText_Rom_59891C
	.set gText_Rom_59891C, gText_Rom_598918 + 0x4

	@ src/data/region_map/region_map_entries.h:399 region_map_entries_line_399
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_598921
gText_Rom_598921: @ 0x08598921
	.string "いしのどうくつ$"
	.if (. - gText_Rom_598921) != 0x8
	.error "gText_Rom_598921 must retain its original byte length"
	.endif
	.globl gText_Rom_598924
	.set gText_Rom_598924, gText_Rom_598921 + 0x3
	.incbin "baserom.gba", 0x598929, 0xd

	@ src/data/region_map/region_map_entries.h:532 region_map_entries_line_532
	.globl gText_Rom_598936
gText_Rom_598936: @ 0x08598936
	.string "ほのおのぬけみち$"
	.if (. - gText_Rom_598936) > 0x9
	.error "gText_Rom_598936 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598936) < 0x9
	.space 0x9 - (. - gText_Rom_598936)
	.endif

	@ src/data/region_map/region_map_entries.h:546 region_map_entries_line_546
	.globl gText_Rom_59893F
gText_Rom_59893F: @ 0x0859893F
	.string "デコボコさんどう$"
	.if (. - gText_Rom_59893F) > 0x9
	.error "gText_Rom_59893F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59893F) < 0x9
	.space 0x9 - (. - gText_Rom_59893F)
	.endif

	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl gText_Rom_598948
gText_Rom_598948: @ 0x08598948
	.string "そらのはしら$"
	.if (. - gText_Rom_598948) > 0x7
	.error "gText_Rom_598948 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598948) < 0x7
	.space 0x7 - (. - gText_Rom_598948)
	.endif
	.incbin "baserom.gba", 0x59894f, 0xc

	@ src/data/region_map/region_map_entries.h:581 region_map_entries_line_581
	.globl gText_Rom_59895B
gText_Rom_59895B: @ 0x0859895B
	.string "こじまのよこあな$"
	.if (. - gText_Rom_59895B) > 0x9
	.error "gText_Rom_59895B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59895B) < 0x9
	.space 0x9 - (. - gText_Rom_59895B)
	.endif

	@ src/data/region_map/region_map_entries.h:588 region_map_entries_line_588
	.globl gText_Rom_598964
gText_Rom_598964: @ 0x08598964
	.string "さばくいせき$"
	.if (. - gText_Rom_598964) > 0x7
	.error "gText_Rom_598964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598964) < 0x7
	.space 0x7 - (. - gText_Rom_598964)
	.endif

	@ src/data/region_map/region_map_entries.h:574 region_map_entries_line_574
	.globl gText_Rom_59896B
gText_Rom_59896B: @ 0x0859896B
	.string "ひでりのいわと$"
	.if (. - gText_Rom_59896B) > 0x8
	.error "gText_Rom_59896B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59896B) < 0x8
	.space 0x8 - (. - gText_Rom_59896B)
	.endif

	@ src/data/region_map/region_map_entries.h:595 region_map_entries_line_595
	.globl gText_Rom_598973
gText_Rom_598973: @ 0x08598973
	.string "こだいづか$"
	.if (. - gText_Rom_598973) > 0x6
	.error "gText_Rom_598973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598973) < 0x6
	.space 0x6 - (. - gText_Rom_598973)
	.endif
	.incbin "baserom.gba", 0x598979, 0x20

	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_598999
gText_Rom_598999: @ 0x08598999
	.string "アジト$"
	.if (. - gText_Rom_598999) > 0x4
	.error "gText_Rom_598999 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598999) < 0x4
	.space 0x4 - (. - gText_Rom_598999)
	.endif

	@ src/data/region_map/region_map_entries.h:1379 region_map_entries_line_1379
	.globl gText_Rom_59899D
gText_Rom_59899D: @ 0x0859899D
	.string "げんえいのとう$"
	.if (. - gText_Rom_59899D) > 0x8
	.error "gText_Rom_59899D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59899D) < 0x8
	.space 0x8 - (. - gText_Rom_59899D)
	.endif

	@ src/data/region_map/region_map_entries.h:1456 region_map_entries_line_1456
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5989A5
gText_Rom_5989A5: @ 0x085989A5
	.string "へんげのどうくつ$"
	.if (. - gText_Rom_5989A5) != 0x9
	.error "gText_Rom_5989A5 must retain its original byte length"
	.endif
	.globl gText_Rom_5989A9
	.set gText_Rom_5989A9, gText_Rom_5989A5 + 0x4

	@ src/data/region_map/region_map_entries.h:1449 region_map_entries_line_1449
	.globl gText_Rom_5989AE
gText_Rom_5989AE: @ 0x085989AE
	.string "さばくのちかどう$"
	.if (. - gText_Rom_5989AE) > 0x9
	.error "gText_Rom_5989AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5989AE) < 0x9
	.space 0x9 - (. - gText_Rom_5989AE)
	.endif

	@ src/data/region_map/region_map_entries.h:1470 region_map_entries_line_1470
	.globl gText_Rom_5989B7
gText_Rom_5989B7: @ 0x085989B7
	.string "トレーナーヒル$"
	.if (. - gText_Rom_5989B7) > 0x8
	.error "gText_Rom_5989B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5989B7) < 0x8
	.space 0x8 - (. - gText_Rom_5989B7)
	.endif
	.incbin "baserom.gba", 0x5989bf, 0x2a9
	.globl gUnknown_8598C68
gUnknown_8598C68: @ 0x08598C68
	.incbin "baserom.gba", 0x598c68, 0x178
	.globl gUnknown_8598DE0
gUnknown_8598DE0: @ 0x08598DE0
	.incbin "baserom.gba", 0x598de0, 0x580
	.globl gUnknown_8599360
gUnknown_8599360: @ 0x08599360
	.incbin "baserom.gba", 0x599360, 0x240
	.globl gUnknown_85995A0
gUnknown_85995A0: @ 0x085995A0
	.incbin "baserom.gba", 0x5995a0, 0xe9

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_599689
gText_Rom_599689: @ 0x08599689
	.string "ラララ$"
	.if (. - gText_Rom_599689) > 0x4
	.error "gText_Rom_599689 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_599689) < 0x4
	.space 0x4 - (. - gText_Rom_599689)
	.endif
	.incbin "baserom.gba", 0x59968d, 0x10f3
	.globl gUnknown_859A780
gUnknown_859A780: @ 0x0859A780
	.incbin "baserom.gba", 0x59a780, 0x1e0
	.globl gUnknown_859A960
gUnknown_859A960: @ 0x0859A960
	.incbin "baserom.gba", 0x59a960, 0x20
	.globl gUnknown_859A980
gUnknown_859A980: @ 0x0859A980
	.incbin "baserom.gba", 0x59a980, 0x378
	.globl gUnknown_859ACF8
gUnknown_859ACF8: @ 0x0859ACF8
	.incbin "baserom.gba", 0x59acf8, 0x25c
	.globl gUnknown_859AF54
gUnknown_859AF54: @ 0x0859AF54
	.incbin "baserom.gba", 0x59af54, 0x48c
	.globl gUnknown_859B3E0
gUnknown_859B3E0: @ 0x0859B3E0
	.incbin "baserom.gba", 0x59b3e0, 0x2e4
	.globl gUnknown_859B6C4
gUnknown_859B6C4: @ 0x0859B6C4
	.incbin "baserom.gba", 0x59b6c4, 0x6a0
	.globl gUnknown_859BD64
gUnknown_859BD64: @ 0x0859BD64
	.incbin "baserom.gba", 0x59bd64, 0x20
	.globl gUnknown_859BD84
gUnknown_859BD84: @ 0x0859BD84
	.incbin "baserom.gba", 0x59bd84, 0x20
	.globl gUnknown_859BDA4
gUnknown_859BDA4: @ 0x0859BDA4
	.incbin "baserom.gba", 0x59bda4, 0x20
	.globl gUnknown_859BDC4
gUnknown_859BDC4: @ 0x0859BDC4
	.incbin "baserom.gba", 0x59bdc4, 0x800
	.globl gUnknown_859C5C4
gUnknown_859C5C4: @ 0x0859C5C4
	.incbin "baserom.gba", 0x59c5c4, 0x800
	.globl gUnknown_859CDC4
gUnknown_859CDC4: @ 0x0859CDC4
	.incbin "baserom.gba", 0x59cdc4, 0x820
	.globl gUnknown_859D5E4
gUnknown_859D5E4: @ 0x0859D5E4
	.incbin "baserom.gba", 0x59d5e4, 0x307

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_59D8EB
gText_Rom_59D8EB: @ 0x0859D8EB
	.string "ラララ$"
	.if (. - gText_Rom_59D8EB) > 0x4
	.error "gText_Rom_59D8EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59D8EB) < 0x4
	.space 0x4 - (. - gText_Rom_59D8EB)
	.endif
	.incbin "baserom.gba", 0x59d8ef, 0x3a9
	.globl gUnknown_859DC98
gUnknown_859DC98: @ 0x0859DC98
	.incbin "baserom.gba", 0x59dc98, 0x334
	.globl gUnknown_859DFCC
gUnknown_859DFCC: @ 0x0859DFCC
	.incbin "baserom.gba", 0x59dfcc, 0x56c
	.globl gUnknown_859E538
gUnknown_859E538: @ 0x0859E538
	.incbin "baserom.gba", 0x59e538, 0x318
	.globl gUnknown_859E850
gUnknown_859E850: @ 0x0859E850
	.incbin "baserom.gba", 0x59e850, 0x140
	.globl gUnknown_859E990
gUnknown_859E990: @ 0x0859E990
	.incbin "baserom.gba", 0x59e990, 0x1c0
	.globl gUnknown_859EB50
gUnknown_859EB50: @ 0x0859EB50
	.incbin "baserom.gba", 0x59eb50, 0x200
	.globl gUnknown_859ED50
gUnknown_859ED50: @ 0x0859ED50
	.incbin "baserom.gba", 0x59ed50, 0x200
	.globl gUnknown_859EF50
gUnknown_859EF50: @ 0x0859EF50
	.incbin "baserom.gba", 0x59ef50, 0xa0
	.globl gUnknown_859EFF0
gUnknown_859EFF0: @ 0x0859EFF0
	.incbin "baserom.gba", 0x59eff0, 0x160
	.globl gUnknown_859F150
gUnknown_859F150: @ 0x0859F150
	.incbin "baserom.gba", 0x59f150, 0x7540
	.globl gUnknown_85A6690
gUnknown_85A6690: @ 0x085A6690
	.incbin "baserom.gba", 0x5a6690, 0x1000
	.globl gUnknown_85A7690
gUnknown_85A7690: @ 0x085A7690
	.incbin "baserom.gba", 0x5a7690, 0x20
	.globl gUnknown_85A76B0
gUnknown_85A76B0: @ 0x085A76B0
	.incbin "baserom.gba", 0x5a76b0, 0x68c
	.globl gUnknown_85A7D3C
gUnknown_85A7D3C: @ 0x085A7D3C
	.incbin "baserom.gba", 0x5a7d3c, 0x2ec
	.globl gUnknown_85A8028
gUnknown_85A8028: @ 0x085A8028
	.incbin "baserom.gba", 0x5a8028, 0x20
	.globl gUnknown_85A8048
gUnknown_85A8048: @ 0x085A8048
	.incbin "baserom.gba", 0x5a8048, 0x15c
	.globl gUnknown_85A81A4
gUnknown_85A81A4: @ 0x085A81A4
	.incbin "baserom.gba", 0x5a81a4, 0x100
	.globl gUnknown_85A82A4
gUnknown_85A82A4: @ 0x085A82A4
	.incbin "baserom.gba", 0x5a82a4, 0xb0
	.globl gUnknown_85A8354
gUnknown_85A8354: @ 0x085A8354
	.incbin "baserom.gba", 0x5a8354, 0x84
	.globl gUnknown_85A83D8
gUnknown_85A83D8: @ 0x085A83D8
	.incbin "baserom.gba", 0x5a83d8, 0x20
	.globl gUnknown_85A83F8
gUnknown_85A83F8: @ 0x085A83F8
	.incbin "baserom.gba", 0x5a83f8, 0xa8
	.globl gUnknown_85A84A0
gUnknown_85A84A0: @ 0x085A84A0
	.incbin "baserom.gba", 0x5a84a0, 0xa8
	.globl gUnknown_85A8548
gUnknown_85A8548: @ 0x085A8548
	.incbin "baserom.gba", 0x5a8548, 0x10
	.globl gUnknown_85A8558
gUnknown_85A8558: @ 0x085A8558
	.incbin "baserom.gba", 0x5a8558, 0xc
	.globl gUnknown_85A8564
gUnknown_85A8564: @ 0x085A8564
	.incbin "baserom.gba", 0x5a8564, 0x8
	.globl gUnknown_85A856C
gUnknown_85A856C: @ 0x085A856C
	.incbin "baserom.gba", 0x5a856c, 0x8
	.globl gUnknown_85A8574
gUnknown_85A8574: @ 0x085A8574
	.incbin "baserom.gba", 0x5a8574, 0x1c
	.globl gUnknown_85A8590
gUnknown_85A8590: @ 0x085A8590
	.incbin "baserom.gba", 0x5a8590, 0x1c
	.globl gUnknown_85A85AC
gUnknown_85A85AC: @ 0x085A85AC
	.incbin "baserom.gba", 0x5a85ac, 0x18
	.globl gUnknown_85A85C4
gUnknown_85A85C4: @ 0x085A85C4
	.incbin "baserom.gba", 0x5a85c4, 0x18
	.globl gUnknown_85A85DC
gUnknown_85A85DC: @ 0x085A85DC
	.incbin "baserom.gba", 0x5a85dc, 0x18
	.globl gUnknown_85A85F4
gUnknown_85A85F4: @ 0x085A85F4
	.incbin "baserom.gba", 0x5a85f4, 0x18
	.globl gUnknown_85A860C
gUnknown_85A860C: @ 0x085A860C
	.incbin "baserom.gba", 0x5a860c, 0x20
	.globl gUnknown_85A862C
gUnknown_85A862C: @ 0x085A862C
	.incbin "baserom.gba", 0x5a862c, 0xc
	.globl gUnknown_85A8638
gUnknown_85A8638: @ 0x085A8638
	.incbin "baserom.gba", 0x5a8638, 0x4
	.globl gUnknown_85A863C
gUnknown_85A863C: @ 0x085A863C
	.incbin "baserom.gba", 0x5a863c, 0xa
	.globl gUnknown_85A8646
gUnknown_85A8646: @ 0x085A8646
	.incbin "baserom.gba", 0x5a8646, 0x6
	.globl gUnknown_85A864C
gUnknown_85A864C: @ 0x085A864C
	.incbin "baserom.gba", 0x5a864c, 0x1c
	.globl gUnknown_85A8668
gUnknown_85A8668: @ 0x085A8668
	.incbin "baserom.gba", 0x5a8668, 0x8
	.globl gUnknown_85A8670
gUnknown_85A8670: @ 0x085A8670
	.incbin "baserom.gba", 0x5a8670, 0xc
	.globl gUnknown_85A867C
gUnknown_85A867C: @ 0x085A867C
	.incbin "baserom.gba", 0x5a867c, 0x28
	.globl gUnknown_85A86A4
gUnknown_85A86A4: @ 0x085A86A4
	.incbin "baserom.gba", 0x5a86a4, 0x6
	.globl gUnknown_85A86AA
gUnknown_85A86AA: @ 0x085A86AA
	.incbin "baserom.gba", 0x5a86aa, 0x14
	.globl gUnknown_85A86BE
gUnknown_85A86BE: @ 0x085A86BE
	.incbin "baserom.gba", 0x5a86be, 0x16
	.globl gUnknown_85A86D4
gUnknown_85A86D4: @ 0x085A86D4
	.incbin "baserom.gba", 0x5a86d4, 0x1c
	.globl gUnknown_85A86F0
gUnknown_85A86F0: @ 0x085A86F0
	.incbin "baserom.gba", 0x5a86f0, 0x4
	.globl gUnknown_85A86F4
gUnknown_85A86F4: @ 0x085A86F4
	.incbin "baserom.gba", 0x5a86f4, 0x4
	.globl gUnknown_85A86F8
gUnknown_85A86F8: @ 0x085A86F8
	.incbin "baserom.gba", 0x5a86f8, 0xc
	.globl gUnknown_85A8704
gUnknown_85A8704: @ 0x085A8704
	.incbin "baserom.gba", 0x5a8704, 0x10
	.globl gUnknown_85A8714
gUnknown_85A8714: @ 0x085A8714
	.incbin "baserom.gba", 0x5a8714, 0x2
	.globl gUnknown_85A8716
gUnknown_85A8716: @ 0x085A8716
	.incbin "baserom.gba", 0x5a8716, 0x6
	.globl gUnknown_85A871C
gUnknown_85A871C: @ 0x085A871C
	.incbin "baserom.gba", 0x5a871c, 0xc
	.globl gUnknown_85A8728
gUnknown_85A8728: @ 0x085A8728
	.incbin "baserom.gba", 0x5a8728, 0x8
	.globl gUnknown_85A8730
gUnknown_85A8730: @ 0x085A8730
	.incbin "baserom.gba", 0x5a8730, 0x4
	.globl gUnknown_85A8734
gUnknown_85A8734: @ 0x085A8734
	.incbin "baserom.gba", 0x5a8734, 0xb4
	.globl gUnknown_85A87E8
gUnknown_85A87E8: @ 0x085A87E8
	.incbin "baserom.gba", 0x5a87e8, 0x8
	.globl gUnknown_85A87F0
gUnknown_85A87F0: @ 0x085A87F0
	.incbin "baserom.gba", 0x5a87f0, 0x20
	.globl gUnknown_85A8810
gUnknown_85A8810: @ 0x085A8810
	.incbin "baserom.gba", 0x5a8810, 0x2c
	.globl gUnknown_85A883C
gUnknown_85A883C: @ 0x085A883C
	.incbin "baserom.gba", 0x5a883c, 0x14
	.globl gUnknown_85A8850
gUnknown_85A8850: @ 0x085A8850
	.incbin "baserom.gba", 0x5a8850, 0x10
	.globl gUnknown_85A8860
gUnknown_85A8860: @ 0x085A8860
	.incbin "baserom.gba", 0x5a8860, 0xc
	.globl gUnknown_85A886C
gUnknown_85A886C: @ 0x085A886C
	.incbin "baserom.gba", 0x5a886c, 0x14
	.globl gUnknown_85A8880
gUnknown_85A8880: @ 0x085A8880
	.incbin "baserom.gba", 0x5a8880, 0x46
	.globl gUnknown_85A88C6
gUnknown_85A88C6: @ 0x085A88C6
	.incbin "baserom.gba", 0x5a88c6, 0xe
	.globl gUnknown_85A88D4
gUnknown_85A88D4: @ 0x085A88D4
	.incbin "baserom.gba", 0x5a88d4, 0x44
	.globl gUnknown_85A8918
gUnknown_85A8918: @ 0x085A8918
	.incbin "baserom.gba", 0x5a8918, 0x6c
	.globl gUnknown_85A8984
gUnknown_85A8984: @ 0x085A8984
	.incbin "baserom.gba", 0x5a8984, 0x108
	.globl gUnknown_85A8A8C
gUnknown_85A8A8C: @ 0x085A8A8C
	.incbin "baserom.gba", 0x5a8a8c, 0x14
	.globl gUnknown_85A8AA0
gUnknown_85A8AA0: @ 0x085A8AA0
	.incbin "baserom.gba", 0x5a8aa0, 0x30
	.globl gUnknown_85A8AD0
gUnknown_85A8AD0: @ 0x085A8AD0
	.incbin "baserom.gba", 0x5a8ad0, 0x4b0
	.globl gUnknown_85A8F80
gUnknown_85A8F80: @ 0x085A8F80
	.incbin "baserom.gba", 0x5a8f80, 0x500
	.globl gUnknown_85A9480
gUnknown_85A9480: @ 0x085A9480
	.incbin "baserom.gba", 0x5a9480, 0x18
	.globl gUnknown_85A9498
gUnknown_85A9498: @ 0x085A9498
	.incbin "baserom.gba", 0x5a9498, 0x10
	.globl gUnknown_85A94A8
gUnknown_85A94A8: @ 0x085A94A8
	.incbin "baserom.gba", 0x5a94a8, 0x10
	.globl gUnknown_85A94B8
gUnknown_85A94B8: @ 0x085A94B8
	.incbin "baserom.gba", 0x5a94b8, 0x14
	.globl gUnknown_85A94CC
gUnknown_85A94CC: @ 0x085A94CC
	.incbin "baserom.gba", 0x5a94cc, 0x14
	.globl gUnknown_85A94E0
gUnknown_85A94E0: @ 0x085A94E0
	.incbin "baserom.gba", 0x5a94e0, 0x23
	.globl gUnknown_85A9503
gUnknown_85A9503: @ 0x085A9503
	.incbin "baserom.gba", 0x5a9503, 0x41
	.globl gUnknown_85A9544
gUnknown_85A9544: @ 0x085A9544
	.incbin "baserom.gba", 0x5a9544, 0x12b

	@ src/battle_message.c:197 battle_message_line_197
	.globl gText_Rom_5A966F
gText_Rom_5A966F: @ 0x085A966F
	.string "{B_BUFF1}は あたらしく\n{B_BUFF2}を　おぼえたい………!\p$"
	.if (. - gText_Rom_5A966F) > 0x19
	.error "gText_Rom_5A966F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A966F) < 0x19
	.space 0x19 - (. - gText_Rom_5A966F)
	.endif

	@ src/battle_message.c:198 battle_message_line_198
	.globl gText_Rom_5A9688
gText_Rom_5A9688: @ 0x085A9688
	.string "しかし {B_BUFF1}は わざを 4つ\nおぼえるので せいいっぱいだ!\p$"
	.if (. - gText_Rom_5A9688) > 0x20
	.error "gText_Rom_5A9688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9688) < 0x20
	.space 0x20 - (. - gText_Rom_5A9688)
	.endif

	@ src/battle_message.c:199 battle_message_line_199
	.globl gText_Rom_5A96A8
gText_Rom_5A96A8: @ 0x085A96A8
	.string "{B_BUFF2}の かわりに\nほかの わざを わすれさせますか?$"
	.if (. - gText_Rom_5A96A8) > 0x1b
	.error "gText_Rom_5A96A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96A8) < 0x1b
	.space 0x1b - (. - gText_Rom_5A96A8)
	.endif

	@ src/battle_message.c:200 battle_message_line_200
	.globl gText_Rom_5A96C3
gText_Rom_5A96C3: @ 0x085A96C3
	.string "{B_BUFF1}は {B_BUFF2}の\nつかいかたを きれいに わすれた!\p$"
	.if (. - gText_Rom_5A96C3) > 0x1b
	.error "gText_Rom_5A96C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96C3) < 0x1b
	.space 0x1b - (. - gText_Rom_5A96C3)
	.endif
	.incbin "baserom.gba", 0x5a96de, 0x15

	@ src/strings.c:618 gText_ChallengeQuestionMark
	.globl gText_Rom_5A96F3
gText_Rom_5A96F3: @ 0x085A96F3
	.string "あきらめますか?$"
	.if (. - gText_Rom_5A96F3) > 0x9
	.error "gText_Rom_5A96F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96F3) < 0x9
	.space 0x9 - (. - gText_Rom_5A96F3)
	.endif

	@ src/battle_message.c:202 battle_message_line_202
	.globl gText_Rom_5A96FC
gText_Rom_5A96FC: @ 0x085A96FC
	.string "{B_BUFF1}は {B_BUFF2}を\nおぼえずに おわった!\p$"
	.if (. - gText_Rom_5A96FC) > 0x15
	.error "gText_Rom_5A96FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96FC) < 0x15
	.space 0x15 - (. - gText_Rom_5A96FC)
	.endif

	@ src/battle_message.c:491 battle_message_line_491
	.globl gText_Rom_5A9711
gText_Rom_5A9711: @ 0x085A9711
	.string "つぎの ポケモンを つかいますか?$"
	.if (. - gText_Rom_5A9711) > 0x12
	.error "gText_Rom_5A9711 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9711) < 0x12
	.space 0x12 - (. - gText_Rom_5A9711)
	.endif
	.incbin "baserom.gba", 0x5a9723, 0x60

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5A9783
gText_Rom_5A9783: @ 0x085A9783
	.string "かった！$"
	.if (. - gText_Rom_5A9783) > 0x5
	.error "gText_Rom_5A9783 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9783) < 0x5
	.space 0x5 - (. - gText_Rom_5A9783)
	.endif
	.incbin "baserom.gba", 0x5a9788, 0x2a

	@ src/battle_message.c:208 battle_message_line_208
	.globl gText_Rom_5A97B2
gText_Rom_5A97B2: @ 0x085A97B2
	.string "{B_PLAYER_NAME}は しょうきんとして\n{B_BUFF1}円 てにいれた！\p$"
	.if (. - gText_Rom_5A97B2) > 0x19
	.error "gText_Rom_5A97B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A97B2) < 0x19
	.space 0x19 - (. - gText_Rom_5A97B2)
	.endif

	@ src/battle_message.c:209 battle_message_line_209
	.globl gText_Rom_5A97CB
gText_Rom_5A97CB: @ 0x085A97CB
	.string "{B_PLAYER_NAME}の てもとには\nたたかえる ポケモンが いない!\p$"
	.if (. - gText_Rom_5A97CB) > 0x1c
	.error "gText_Rom_5A97CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A97CB) < 0x1c
	.space 0x1c - (. - gText_Rom_5A97CB)
	.endif
	.incbin "baserom.gba", 0x5a97e7, 0x1f

	@ src/battle_message.c:432 battle_message_line_432
	.globl gText_Rom_5A9806
gText_Rom_5A9806: @ 0x085A9806
	.string "にげられない！\p$"
	.if (. - gText_Rom_5A9806) > 0x9
	.error "gText_Rom_5A9806 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9806) < 0x9
	.space 0x9 - (. - gText_Rom_5A9806)
	.endif

	@ src/battle_message.c:432 battle_message_line_432
	.globl gText_Rom_5A980F
gText_Rom_5A980F: @ 0x085A980F
	.string "にげられない！\p$"
	.if (. - gText_Rom_5A980F) > 0x9
	.error "gText_Rom_5A980F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A980F) < 0x9
	.space 0x9 - (. - gText_Rom_5A980F)
	.endif
	.incbin "baserom.gba", 0x5a9818, 0xc

	@ src/battle_message.c:214 battle_message_line_214
	.globl gText_Rom_5A9824
gText_Rom_5A9824: @ 0x085A9824
	.string "{B_BUFF1}かい あたった！$"
	.if (. - gText_Rom_5A9824) > 0xb
	.error "gText_Rom_5A9824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9824) < 0xb
	.space 0xb - (. - gText_Rom_5A9824)
	.endif

	@ src/battle_message.c:215 battle_message_line_215
	.globl gText_Rom_5A982F
gText_Rom_5A982F: @ 0x085A982F
	.string "{B_EFF_NAME_WITH_PREFIX}は\nねむってしまった！$"
	.if (. - gText_Rom_5A982F) > 0xe
	.error "gText_Rom_5A982F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A982F) < 0xe
	.space 0xe - (. - gText_Rom_5A982F)
	.endif
	.incbin "baserom.gba", 0x5a983d, 0x21

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A985E
gText_Rom_5A985E: @ 0x085A985E
	.string "ている$"
	.if (. - gText_Rom_5A985E) > 0x4
	.error "gText_Rom_5A985E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A985E) < 0x4
	.space 0x4 - (. - gText_Rom_5A985E)
	.endif
	.incbin "baserom.gba", 0x5a9862, 0xb

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A986D
gText_Rom_5A986D: @ 0x085A986D
	.string "ている$"
	.if (. - gText_Rom_5A986D) > 0x4
	.error "gText_Rom_5A986D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A986D) < 0x4
	.space 0x4 - (. - gText_Rom_5A986D)
	.endif
	.incbin "baserom.gba", 0x5a9871, 0xc

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5A987D
gText_Rom_5A987D: @ 0x085A987D
	.string "かった！$"
	.if (. - gText_Rom_5A987D) > 0x5
	.error "gText_Rom_5A987D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A987D) < 0x5
	.space 0x5 - (. - gText_Rom_5A987D)
	.endif
	.incbin "baserom.gba", 0x5a9882, 0x43

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A98C5
gText_Rom_5A98C5: @ 0x085A98C5
	.string "ている$"
	.if (. - gText_Rom_5A98C5) > 0x4
	.error "gText_Rom_5A98C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A98C5) < 0x4
	.space 0x4 - (. - gText_Rom_5A98C5)
	.endif
	.incbin "baserom.gba", 0x5a98c9, 0xe

	@ src/battle_message.c:224 battle_message_line_224
	.globl gText_Rom_5A98D7
gText_Rom_5A98D7: @ 0x085A98D7
	.string "{B_DEF_NAME_WITH_PREFIX}から\nたいりょくを すいとった!$"
	.if (. - gText_Rom_5A98D7) > 0x13
	.error "gText_Rom_5A98D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A98D7) < 0x13
	.space 0x13 - (. - gText_Rom_5A98D7)
	.endif
	.incbin "baserom.gba", 0x5a98ea, 0x22

	@ src/battle_message.c:227 battle_message_line_227
	.globl gText_Rom_5A990C
gText_Rom_5A990C: @ 0x085A990C
	.string "{B_ATK_NAME_WITH_PREFIX}は\nやけどの ダメージを うけている！$"
	.if (. - gText_Rom_5A990C) > 0x16
	.error "gText_Rom_5A990C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A990C) < 0x16
	.space 0x16 - (. - gText_Rom_5A990C)
	.endif
	.incbin "baserom.gba", 0x5a9922, 0xf

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A9931
gText_Rom_5A9931: @ 0x085A9931
	.string "ている$"
	.if (. - gText_Rom_5A9931) > 0x4
	.error "gText_Rom_5A9931 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9931) < 0x4
	.space 0x4 - (. - gText_Rom_5A9931)
	.endif

	@ src/battle_message.c:228 battle_message_line_228
	.globl gText_Rom_5A9935
gText_Rom_5A9935: @ 0x085A9935
	.string "{B_EFF_NAME_WITH_PREFIX}は\nこおりづけになった!$"
	.if (. - gText_Rom_5A9935) > 0xf
	.error "gText_Rom_5A9935 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9935) < 0xf
	.space 0xf - (. - gText_Rom_5A9935)
	.endif
	.incbin "baserom.gba", 0x5a9944, 0x17

	@ src/battle_message.c:230 battle_message_line_230
	.globl gText_Rom_5A995B
gText_Rom_5A995B: @ 0x085A995B
	.string "{B_ATK_NAME_WITH_PREFIX}は\nこおって しまって うごかない!$"
	.if (. - gText_Rom_5A995B) > 0x15
	.error "gText_Rom_5A995B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A995B) < 0x15
	.space 0x15 - (. - gText_Rom_5A995B)
	.endif
	.incbin "baserom.gba", 0x5a9970, 0x2e

	@ src/battle_message.c:233 battle_message_line_233
	.globl gText_Rom_5A999E
gText_Rom_5A999E: @ 0x085A999E
	.string "{B_EFF_NAME_WITH_PREFIX}は まひして\nわざが でにくくなった!$"
	.if (. - gText_Rom_5A999E) > 0x16
	.error "gText_Rom_5A999E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A999E) < 0x16
	.space 0x16 - (. - gText_Rom_5A999E)
	.endif
	.incbin "baserom.gba", 0x5a99b4, 0x1e

	@ src/battle_message.c:235 battle_message_line_235
	.globl gText_Rom_5A99D2
gText_Rom_5A99D2: @ 0x085A99D2
	.string "{B_ATK_NAME_WITH_PREFIX}は\nからだが しびれて うごけない$"
	.if (. - gText_Rom_5A99D2) > 0x14
	.error "gText_Rom_5A99D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A99D2) < 0x14
	.space 0x14 - (. - gText_Rom_5A99D2)
	.endif
	.incbin "baserom.gba", 0x5a99e6, 0xb

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A99F1
gText_Rom_5A99F1: @ 0x085A99F1
	.string "ている$"
	.if (. - gText_Rom_5A99F1) > 0x4
	.error "gText_Rom_5A99F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A99F1) < 0x4
	.space 0x4 - (. - gText_Rom_5A99F1)
	.endif

	@ src/battle_message.c:237 battle_message_line_237
	.globl gText_Rom_5A99F5
gText_Rom_5A99F5: @ 0x085A99F5
	.string "{B_DEF_NAME_WITH_PREFIX}の\nまひが なおった!$"
	.if (. - gText_Rom_5A99F5) > 0xe
	.error "gText_Rom_5A99F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A99F5) < 0xe
	.space 0xe - (. - gText_Rom_5A99F5)
	.endif
	.incbin "baserom.gba", 0x5a9a03, 0x55

	@ src/battle_message.c:240 battle_message_line_240
	.globl gText_Rom_5A9A58
gText_Rom_5A9A58: @ 0x085A9A58
	.string "{B_ATK_NAME_WITH_PREFIX}は\nこんらんしている!$"
	.if (. - gText_Rom_5A9A58) > 0xe
	.error "gText_Rom_5A9A58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9A58) < 0xe
	.space 0xe - (. - gText_Rom_5A9A58)
	.endif

	@ src/battle_message.c:241 battle_message_line_241
	.globl gText_Rom_5A9A66
gText_Rom_5A9A66: @ 0x085A9A66
	.string "{B_ATK_NAME_WITH_PREFIX}の\nこんらんが とけた!$"
	.if (. - gText_Rom_5A9A66) > 0xf
	.error "gText_Rom_5A9A66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9A66) < 0xf
	.space 0xf - (. - gText_Rom_5A9A66)
	.endif

	@ src/battle_message.c:242 battle_message_line_242
	.globl gText_Rom_5A9A75
gText_Rom_5A9A75: @ 0x085A9A75
	.string "{B_EFF_NAME_WITH_PREFIX}は\nこんらんした!$"
	.if (. - gText_Rom_5A9A75) > 0xc
	.error "gText_Rom_5A9A75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9A75) < 0xc
	.space 0xc - (. - gText_Rom_5A9A75)
	.endif

	@ src/battle_message.c:243 battle_message_line_243
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9A81
gText_Rom_5A9A81: @ 0x085A9A81
	.string "{B_DEF_NAME_WITH_PREFIX}は\nすでに こんらん している$"
	.if (. - gText_Rom_5A9A81) != 0x12
	.error "gText_Rom_5A9A81 must retain its original byte length"
	.endif
	.globl gText_Rom_5A9A8F
	.set gText_Rom_5A9A8F, gText_Rom_5A9A81 + 0xe
	.incbin "baserom.gba", 0x5a9a93, 0x1e

	@ src/battle_message.c:246 battle_message_line_246
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9AB1
gText_Rom_5A9AB1: @ 0x085A9AB1
	.string "{B_ATK_NAME_WITH_PREFIX}は メロメロで\nわざが だせなかった!$"
	.if (. - gText_Rom_5A9AB1) != 0x16
	.error "gText_Rom_5A9AB1 must retain its original byte length"
	.endif
	.globl gText_Rom_5A9AC2
	.set gText_Rom_5A9AC2, gText_Rom_5A9AB1 + 0x11
	.incbin "baserom.gba", 0x5a9ac7, 0xd

	@ src/battle_message.c:247 battle_message_line_247
	.globl gText_Rom_5A9AD4
gText_Rom_5A9AD4: @ 0x085A9AD4
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}タイプに なった！$"
	.if (. - gText_Rom_5A9AD4) > 0x10
	.error "gText_Rom_5A9AD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9AD4) < 0x10
	.space 0x10 - (. - gText_Rom_5A9AD4)
	.endif

	@ src/battle_message.c:248 battle_message_line_248
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9AE4
gText_Rom_5A9AE4: @ 0x085A9AE4
	.string "{B_ATK_NAME_WITH_PREFIX}は ひるんで\nうごけなかった!$"
	.if (. - gText_Rom_5A9AE4) != 0x12
	.error "gText_Rom_5A9AE4 must retain its original byte length"
	.endif
	.globl gText_Rom_5A9AF1
	.set gText_Rom_5A9AF1, gText_Rom_5A9AE4 + 0xd

	@ src/battle_message.c:249 battle_message_line_249
	.globl gText_Rom_5A9AF6
gText_Rom_5A9AF6: @ 0x085A9AF6
	.string "{B_DEF_NAME_WITH_PREFIX}は たいりょくを\nかいふくした!$"
	.if (. - gText_Rom_5A9AF6) > 0x13
	.error "gText_Rom_5A9AF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9AF6) < 0x13
	.space 0x13 - (. - gText_Rom_5A9AF6)
	.endif

	@ src/battle_message.c:250 battle_message_line_250
	.globl gText_Rom_5A9B09
gText_Rom_5A9B09: @ 0x085A9B09
	.string "しかし {B_DEF_NAME_WITH_PREFIX}の\nたいりょくは まんたんだ!$"
	.if (. - gText_Rom_5A9B09) > 0x16
	.error "gText_Rom_5A9B09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9B09) < 0x16
	.space 0x16 - (. - gText_Rom_5A9B09)
	.endif
	.incbin "baserom.gba", 0x5a9b1f, 0xb3

	@ src/battle_message.c:258 battle_message_line_258
	.globl gText_Rom_5A9BD2
gText_Rom_5A9BD2: @ 0x085A9BD2
	.string "{B_ATK_NAME_WITH_PREFIX}は\nけんこうになって ねむりはじめた!$"
	.if (. - gText_Rom_5A9BD2) > 0x16
	.error "gText_Rom_5A9BD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9BD2) < 0x16
	.space 0x16 - (. - gText_Rom_5A9BD2)
	.endif

	@ src/battle_message.c:259 battle_message_line_259
	.globl gText_Rom_5A9BE8
gText_Rom_5A9BE8: @ 0x085A9BE8
	.string "{B_ATK_NAME_WITH_PREFIX}の まわりで\nくうきが うずを まく!$"
	.if (. - gText_Rom_5A9BE8) > 0x16
	.error "gText_Rom_5A9BE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9BE8) < 0x16
	.space 0x16 - (. - gText_Rom_5A9BE8)
	.endif

	@ src/battle_message.c:260 battle_message_line_260
	.globl gText_Rom_5A9BFE
gText_Rom_5A9BFE: @ 0x085A9BFE
	.string "{B_ATK_NAME_WITH_PREFIX}は\nひかりを きゅうしゅうした!$"
	.if (. - gText_Rom_5A9BFE) > 0x13
	.error "gText_Rom_5A9BFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9BFE) < 0x13
	.space 0x13 - (. - gText_Rom_5A9BFE)
	.endif

	@ src/battle_message.c:261 battle_message_line_261
	.globl gText_Rom_5A9C11
gText_Rom_5A9C11: @ 0x085A9C11
	.string "{B_ATK_NAME_WITH_PREFIX}は\nくびを ひっこめた!$"
	.if (. - gText_Rom_5A9C11) > 0xf
	.error "gText_Rom_5A9C11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9C11) < 0xf
	.space 0xf - (. - gText_Rom_5A9C11)
	.endif
	.incbin "baserom.gba", 0x5a9c20, 0x13

	@ src/battle_message.c:262 battle_message_line_262
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9C33
gText_Rom_5A9C33: @ 0x085A9C33
	.string "{B_ATK_NAME_WITH_PREFIX}は\nそらたかく とびあがった!$"
	.if (. - gText_Rom_5A9C33) != 0x12
	.error "gText_Rom_5A9C33 must retain its original byte length"
	.endif
	.globl gText_Rom_5A9C3F
	.set gText_Rom_5A9C3F, gText_Rom_5A9C33 + 0xc
	.incbin "baserom.gba", 0x5a9c45, 0x17

	@ src/battle_message.c:472 battle_message_line_472
	.globl gText_Rom_5A9C5C
gText_Rom_5A9C5C: @ 0x085A9C5C
	.string "{B_ATK_NAME_WITH_PREFIX}は\nすいちゅうに みをひそめた!$"
	.if (. - gText_Rom_5A9C5C) > 0x13
	.error "gText_Rom_5A9C5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9C5C) < 0x13
	.space 0x13 - (. - gText_Rom_5A9C5C)
	.endif

	@ src/battle_message.c:473 battle_message_line_473
	.globl gText_Rom_5A9C6F
gText_Rom_5A9C6F: @ 0x085A9C6F
	.string "{B_ATK_NAME_WITH_PREFIX}は\nとびはねた!$"
	.if (. - gText_Rom_5A9C6F) > 0xb
	.error "gText_Rom_5A9C6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9C6F) < 0xb
	.space 0xb - (. - gText_Rom_5A9C6F)
	.endif
	.incbin "baserom.gba", 0x5a9c7a, 0x5b

	@ src/battle_message.c:268 battle_message_line_268
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9CD5
gText_Rom_5A9CD5: @ 0x085A9CD5
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_BUFF1}の\nダメージを うけている$"
	.if (. - gText_Rom_5A9CD5) != 0x14
	.error "gText_Rom_5A9CD5 must retain its original byte length"
	.endif
	.globl gText_Rom_5A9CE5
	.set gText_Rom_5A9CE5, gText_Rom_5A9CD5 + 0x10

	@ src/battle_message.c:269 battle_message_line_269 (+1 aliases)
	.globl gText_Rom_5A9CE9
gText_Rom_5A9CE9: @ 0x085A9CE9
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}から かいほうされた！$"
	.if (. - gText_Rom_5A9CE9) > 0x12
	.error "gText_Rom_5A9CE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9CE9) < 0x12
	.space 0x12 - (. - gText_Rom_5A9CE9)
	.endif

	@ src/battle_message.c:270 battle_message_line_270
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9CFB
gText_Rom_5A9CFB: @ 0x085A9CFB
	.string "いきおい あまって\n{B_ATK_NAME_WITH_PREFIX}は じめんに ぶつかった!$"
	.if (. - gText_Rom_5A9CFB) != 0x1a
	.error "gText_Rom_5A9CFB must retain its original byte length"
	.endif
	.globl gText_Rom_5A9D10
	.set gText_Rom_5A9D10, gText_Rom_5A9CFB + 0x15
	.globl gUnknown_85A9D15
gUnknown_85A9D15: @ 0x085A9D15
	.incbin "baserom.gba", 0x5a9d15, 0x11

	@ src/battle_message.c:272 battle_message_line_272
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9D26
gText_Rom_5A9D26: @ 0x085A9D26
	.string "{B_SCR_NAME_WITH_PREFIX}は しろいきりに\nまもられている$"
	.if (. - gText_Rom_5A9D26) != 0x13
	.error "gText_Rom_5A9D26 must retain its original byte length"
	.endif
	.globl gText_Rom_5A9D35
	.set gText_Rom_5A9D35, gText_Rom_5A9D26 + 0xf
	.globl gUnknown_85A9D39
gUnknown_85A9D39: @ 0x085A9D39
	.incbin "baserom.gba", 0x5a9d39, 0xd

	@ src/battle_message.c:274 battle_message_line_274
	.globl gText_Rom_5A9D46
gText_Rom_5A9D46: @ 0x085A9D46
	.string "{B_ATK_NAME_WITH_PREFIX}は こうげきの\nはんどうを うけた!$"
	.if (. - gText_Rom_5A9D46) > 0x15
	.error "gText_Rom_5A9D46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D46) < 0x15
	.space 0x15 - (. - gText_Rom_5A9D46)
	.endif

	@ src/battle_message.c:275 battle_message_line_275
	.globl gText_Rom_5A9D5B
gText_Rom_5A9D5B: @ 0x085A9D5B
	.string "{B_ATK_NAME_WITH_PREFIX}は\nまもりの たいせいに はいった！$"
	.if (. - gText_Rom_5A9D5B) > 0x15
	.error "gText_Rom_5A9D5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D5B) < 0x15
	.space 0x15 - (. - gText_Rom_5A9D5B)
	.endif

	@ src/battle_message.c:276 battle_message_line_276
	.globl gText_Rom_5A9D70
gText_Rom_5A9D70: @ 0x085A9D70
	.string "すなあらしが {B_ATK_NAME_WITH_PREFIX}を\nおそう!$"
	.if (. - gText_Rom_5A9D70) > 0x10
	.error "gText_Rom_5A9D70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D70) < 0x10
	.space 0x10 - (. - gText_Rom_5A9D70)
	.endif

	@ src/battle_message.c:277 battle_message_line_277
	.globl gText_Rom_5A9D80
gText_Rom_5A9D80: @ 0x085A9D80
	.string "あられが {B_ATK_NAME_WITH_PREFIX}を\nおそう!$"
	.if (. - gText_Rom_5A9D80) > 0xe
	.error "gText_Rom_5A9D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D80) < 0xe
	.space 0xe - (. - gText_Rom_5A9D80)
	.endif
	.incbin "baserom.gba", 0x5a9d8e, 0x11

	@ src/battle_message.c:278 battle_message_line_278
	.globl gText_Rom_5A9D9F
gText_Rom_5A9D9F: @ 0x085A9D9F
	.string "{B_DEF_NAME_WITH_PREFIX}に\nたねを うえつけた！$"
	.if (. - gText_Rom_5A9D9F) > 0xf
	.error "gText_Rom_5A9D9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D9F) < 0xf
	.space 0xf - (. - gText_Rom_5A9D9F)
	.endif

	@ src/battle_message.c:279 battle_message_line_279
	.globl gText_Rom_5A9DAE
gText_Rom_5A9DAE: @ 0x085A9DAE
	.string "{B_DEF_NAME_WITH_PREFIX}は\nこうげきを かわした!$"
	.if (. - gText_Rom_5A9DAE) > 0x10
	.error "gText_Rom_5A9DAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9DAE) < 0x10
	.space 0x10 - (. - gText_Rom_5A9DAE)
	.endif

	@ src/battle_message.c:281 battle_message_line_281
	.globl gText_Rom_5A9DBE
gText_Rom_5A9DBE: @ 0x085A9DBE
	.string "やどりぎが {B_ATK_NAME_WITH_PREFIX}の\nたいりょくを うばう!$"
	.if (. - gText_Rom_5A9DBE) > 0x16
	.error "gText_Rom_5A9DBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9DBE) < 0x16
	.space 0x16 - (. - gText_Rom_5A9DBE)
	.endif
	.incbin "baserom.gba", 0x5a9dd4, 0xc

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A9DE0
gText_Rom_5A9DE0: @ 0x085A9DE0
	.string "ている$"
	.if (. - gText_Rom_5A9DE0) > 0x4
	.error "gText_Rom_5A9DE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9DE0) < 0x4
	.space 0x4 - (. - gText_Rom_5A9DE0)
	.endif

	@ src/battle_message.c:283 battle_message_line_283
	.globl gText_Rom_5A9DE4
gText_Rom_5A9DE4: @ 0x085A9DE4
	.string "{B_ATK_NAME_WITH_PREFIX}は めを さました！$"
	.if (. - gText_Rom_5A9DE4) > 0xd
	.error "gText_Rom_5A9DE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9DE4) < 0xd
	.space 0xd - (. - gText_Rom_5A9DE4)
	.endif
	.incbin "baserom.gba", 0x5a9df1, 0x13

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5A9E04
gText_Rom_5A9E04: @ 0x085A9E04
	.string "かった！$"
	.if (. - gText_Rom_5A9E04) > 0x5
	.error "gText_Rom_5A9E04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E04) < 0x5
	.space 0x5 - (. - gText_Rom_5A9E04)
	.endif
	.incbin "baserom.gba", 0x5a9e09, 0x1f

	@ src/battle_message.c:286 battle_message_line_286
	.globl gText_Rom_5A9E28
gText_Rom_5A9E28: @ 0x085A9E28
	.string "{B_ATK_NAME_WITH_PREFIX}は さわいでいる!$"
	.if (. - gText_Rom_5A9E28) > 0xc
	.error "gText_Rom_5A9E28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E28) < 0xc
	.space 0xc - (. - gText_Rom_5A9E28)
	.endif

	@ src/battle_message.c:287 battle_message_line_287
	.globl gText_Rom_5A9E34
gText_Rom_5A9E34: @ 0x085A9E34
	.string "{B_ATK_NAME_WITH_PREFIX}は\nおとなしくなった$"
	.if (. - gText_Rom_5A9E34) > 0xd
	.error "gText_Rom_5A9E34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E34) < 0xd
	.space 0xd - (. - gText_Rom_5A9E34)
	.endif
	.incbin "baserom.gba", 0x5a9e41, 0x15

	@ src/battle_message.c:288 battle_message_line_288
	.globl gText_Rom_5A9E56
gText_Rom_5A9E56: @ 0x085A9E56
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_BUFF1}つたくわえた!$"
	.if (. - gText_Rom_5A9E56) > 0xe
	.error "gText_Rom_5A9E56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E56) < 0xe
	.space 0xe - (. - gText_Rom_5A9E56)
	.endif
	.incbin "baserom.gba", 0x5a9e64, 0x5b

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A9EBF
gText_Rom_5A9EBF: @ 0x085A9EBF
	.string "ている$"
	.if (. - gText_Rom_5A9EBF) > 0x4
	.error "gText_Rom_5A9EBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EBF) < 0x4
	.space 0x4 - (. - gText_Rom_5A9EBF)
	.endif
	.incbin "baserom.gba", 0x5a9ec3, 0x26

	@ src/battle_message.c:295 battle_message_line_295
	.globl gText_Rom_5A9EE9
gText_Rom_5A9EE9: @ 0x085A9EE9
	.string "{B_BUFF1}円\nひろった!\p$"
	.if (. - gText_Rom_5A9EE9) > 0xb
	.error "gText_Rom_5A9EE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EE9) < 0xb
	.space 0xb - (. - gText_Rom_5A9EE9)
	.endif

	@ src/battle_message.c:296 battle_message_line_296
	.globl gText_Rom_5A9EF4
gText_Rom_5A9EF4: @ 0x085A9EF4
	.string "{B_DEF_NAME_WITH_PREFIX}には\nぜんぜんきいてない!$"
	.if (. - gText_Rom_5A9EF4) > 0x10
	.error "gText_Rom_5A9EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EF4) < 0x10
	.space 0x10 - (. - gText_Rom_5A9EF4)
	.endif

	@ src/battle_message.c:297 battle_message_line_297
	.globl gText_Rom_5A9F04
gText_Rom_5A9F04: @ 0x085A9F04
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}に へんしんした!$"
	.if (. - gText_Rom_5A9F04) > 0x10
	.error "gText_Rom_5A9F04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F04) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F04)
	.endif

	@ src/battle_message.c:298 battle_message_line_298
	.globl gText_Rom_5A9F14
gText_Rom_5A9F14: @ 0x085A9F14
	.string "{B_ATK_NAME_WITH_PREFIX}の\nぶんしんが あらわれた$"
	.if (. - gText_Rom_5A9F14) > 0x10
	.error "gText_Rom_5A9F14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F14) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F14)
	.endif

	@ src/battle_message.c:299 battle_message_line_299
	.globl gText_Rom_5A9F24
gText_Rom_5A9F24: @ 0x085A9F24
	.string "しかし {B_ATK_NAME_WITH_PREFIX}の\nみがわりは すでに でていた!$"
	.if (. - gText_Rom_5A9F24) > 0x18
	.error "gText_Rom_5A9F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F24) < 0x18
	.space 0x18 - (. - gText_Rom_5A9F24)
	.endif
	.incbin "baserom.gba", 0x5a9f3c, 0x30

	@ src/battle_message.c:302 battle_message_line_302
	.globl gText_Rom_5A9F6C
gText_Rom_5A9F6C: @ 0x085A9F6C
	.string "こうげきの はんどうで\n{B_ATK_NAME_WITH_PREFIX}は うごけない!$"
	.if (. - gText_Rom_5A9F6C) > 0x17
	.error "gText_Rom_5A9F6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F6C) < 0x17
	.space 0x17 - (. - gText_Rom_5A9F6C)
	.endif

	@ src/battle_message.c:303 battle_message_line_303
	.globl gText_Rom_5A9F83
gText_Rom_5A9F83: @ 0x085A9F83
	.string "{B_DEF_NAME_WITH_PREFIX}の いかりの\nボルテージが あがっていく!$"
	.if (. - gText_Rom_5A9F83) > 0x18
	.error "gText_Rom_5A9F83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F83) < 0x18
	.space 0x18 - (. - gText_Rom_5A9F83)
	.endif

	@ src/battle_message.c:304 battle_message_line_304
	.globl gText_Rom_5A9F9B
gText_Rom_5A9F9B: @ 0x085A9F9B
	.string "{B_DEF_NAME_WITH_PREFIX}の\n{B_BUFF1}を ふうじこめた!$"
	.if (. - gText_Rom_5A9F9B) > 0x10
	.error "gText_Rom_5A9F9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F9B) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F9B)
	.endif
	.incbin "baserom.gba", 0x5a9fab, 0x10

	@ src/battle_message.c:307 battle_message_line_307
	.globl gText_Rom_5A9FBB
gText_Rom_5A9FBB: @ 0x085A9FBB
	.string "{B_DEF_NAME_WITH_PREFIX}は\nアンコールを うけた!$"
	.if (. - gText_Rom_5A9FBB) > 0x10
	.error "gText_Rom_5A9FBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9FBB) < 0x10
	.space 0x10 - (. - gText_Rom_5A9FBB)
	.endif
	.incbin "baserom.gba", 0x5a9fcb, 0x28

	@ src/battle_message.c:311 battle_message_line_311
	.globl gText_Rom_5A9FF3
gText_Rom_5A9FF3: @ 0x085A9FF3
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}を スケッチした!$"
	.if (. - gText_Rom_5A9FF3) > 0x10
	.error "gText_Rom_5A9FF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9FF3) < 0x10
	.space 0x10 - (. - gText_Rom_5A9FF3)
	.endif

	@ src/battle_message.c:312 battle_message_line_312
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA003
gText_Rom_5AA003: @ 0x085AA003
	.string "{B_ATK_NAME_WITH_PREFIX}は あいてを\nみちづれに しようとしている$"
	.if (. - gText_Rom_5AA003) != 0x18
	.error "gText_Rom_5AA003 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA017
	.set gText_Rom_5AA017, gText_Rom_5AA003 + 0x14
	.incbin "baserom.gba", 0x5aa01b, 0x12

	@ src/battle_message.c:314 battle_message_line_314
	.globl gText_Rom_5AA02D
gText_Rom_5AA02D: @ 0x085AA02D
	.string "{B_DEF_NAME_WITH_PREFIX}の\n{B_BUFF1}を {B_BUFF2}けずった!$"
	.if (. - gText_Rom_5AA02D) > 0x10
	.error "gText_Rom_5AA02D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA02D) < 0x10
	.space 0x10 - (. - gText_Rom_5AA02D)
	.endif
	.incbin "baserom.gba", 0x5aa03d, 0x15

	@ src/battle_message.c:316 battle_message_line_316
	.globl gText_Rom_5AA052
gText_Rom_5AA052: @ 0x085AA052
	.string "{B_DEF_NAME_WITH_PREFIX}は\nもう にげられない!$"
	.if (. - gText_Rom_5AA052) > 0xf
	.error "gText_Rom_5AA052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA052) < 0xf
	.space 0xf - (. - gText_Rom_5AA052)
	.endif

	@ src/battle_message.c:317 battle_message_line_317
	.globl gText_Rom_5AA061
gText_Rom_5AA061: @ 0x085AA061
	.string "{B_DEF_NAME_WITH_PREFIX}は\nあくむを みはじめた!$"
	.if (. - gText_Rom_5AA061) > 0x10
	.error "gText_Rom_5AA061 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA061) < 0x10
	.space 0x10 - (. - gText_Rom_5AA061)
	.endif

	@ src/battle_message.c:318 battle_message_line_318
	.globl gText_Rom_5AA071
gText_Rom_5AA071: @ 0x085AA071
	.string "{B_ATK_NAME_WITH_PREFIX}は\nあくむに うなされている!$"
	.if (. - gText_Rom_5AA071) > 0x12
	.error "gText_Rom_5AA071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA071) < 0x12
	.space 0x12 - (. - gText_Rom_5AA071)
	.endif
	.incbin "baserom.gba", 0x5aa083, 0x23

	@ src/battle_message.c:320 battle_message_line_320
	.globl gText_Rom_5AA0A6
gText_Rom_5AA0A6: @ 0x085AA0A6
	.string "{B_ATK_NAME_WITH_PREFIX}は\nのろわれている!$"
	.if (. - gText_Rom_5AA0A6) > 0xd
	.error "gText_Rom_5AA0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0A6) < 0xd
	.space 0xd - (. - gText_Rom_5AA0A6)
	.endif
	.incbin "baserom.gba", 0x5aa0b3, 0x16

	@ src/battle_message.c:322 battle_message_line_322
	.globl gText_Rom_5AA0C9
gText_Rom_5AA0C9: @ 0x085AA0C9
	.string "{B_SCR_NAME_WITH_PREFIX}は まきびしの\nダメージを うけた!$"
	.if (. - gText_Rom_5AA0C9) > 0x15
	.error "gText_Rom_5AA0C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0C9) < 0x15
	.space 0x15 - (. - gText_Rom_5AA0C9)
	.endif
	.incbin "baserom.gba", 0x5aa0de, 0x4

	@ src/battle_message.c:323 battle_message_line_323
	.globl gText_Rom_5AA0E2
gText_Rom_5AA0E2: @ 0x085AA0E2
	.string "{B_DEF_NAME_WITH_PREFIX}の\nしょうたいを みやぶった!$"
	.if (. - gText_Rom_5AA0E2) > 0x12
	.error "gText_Rom_5AA0E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0E2) < 0x12
	.space 0x12 - (. - gText_Rom_5AA0E2)
	.endif

	@ src/battle_message.c:324 battle_message_line_324
	.globl gText_Rom_5AA0F4
gText_Rom_5AA0F4: @ 0x085AA0F4
	.string "{B_ATK_NAME_WITH_PREFIX}の ほろびの\nカウントが {B_BUFF1}になった!$"
	.if (. - gText_Rom_5AA0F4) > 0x17
	.error "gText_Rom_5AA0F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0F4) < 0x17
	.space 0x17 - (. - gText_Rom_5AA0F4)
	.endif

	@ src/battle_message.c:325 battle_message_line_325
	.globl gText_Rom_5AA10B
gText_Rom_5AA10B: @ 0x085AA10B
	.string "{B_ATK_NAME_WITH_PREFIX}は こらえる\nたいせいに はいった!$"
	.if (. - gText_Rom_5AA10B) > 0x15
	.error "gText_Rom_5AA10B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA10B) < 0x15
	.space 0x15 - (. - gText_Rom_5AA10B)
	.endif

	@ src/battle_message.c:326 battle_message_line_326
	.globl gText_Rom_5AA120
gText_Rom_5AA120: @ 0x085AA120
	.string "{B_DEF_NAME_WITH_PREFIX}は こうげきを\nこらえた!$"
	.if (. - gText_Rom_5AA120) > 0x10
	.error "gText_Rom_5AA120 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA120) < 0x10
	.space 0x10 - (. - gText_Rom_5AA120)
	.endif

	@ src/battle_message.c:327 battle_message_line_327
	.globl gText_Rom_5AA130
gText_Rom_5AA130: @ 0x085AA130
	.string "マグニチュード{B_BUFF1}！！$"
	.if (. - gText_Rom_5AA130) > 0xc
	.error "gText_Rom_5AA130 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA130) < 0xc
	.space 0xc - (. - gText_Rom_5AA130)
	.endif

	@ src/battle_message.c:328 battle_message_line_328
	.globl gText_Rom_5AA13C
gText_Rom_5AA13C: @ 0x085AA13C
	.string "{B_ATK_NAME_WITH_PREFIX}は たいりょくを けずって\nパワーぜんかいに なった!$"
	.if (. - gText_Rom_5AA13C) > 0x1e
	.error "gText_Rom_5AA13C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA13C) < 0x1e
	.space 0x1e - (. - gText_Rom_5AA13C)
	.endif
	.incbin "baserom.gba", 0x5aa15a, 0x2d

	@ src/battle_message.c:331 battle_message_line_331
	.globl gText_Rom_5AA187
gText_Rom_5AA187: @ 0x085AA187
	.string "{B_ATK_NAME_WITH_PREFIX}は\nやどりぎのタネを ふきとばした!$"
	.if (. - gText_Rom_5AA187) > 0x15
	.error "gText_Rom_5AA187 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA187) < 0x15
	.space 0x15 - (. - gText_Rom_5AA187)
	.endif

	@ src/battle_message.c:332 battle_message_line_332
	.globl gText_Rom_5AA19C
gText_Rom_5AA19C: @ 0x085AA19C
	.string "{B_ATK_NAME_WITH_PREFIX}は まきびしを\nふきとばした!$"
	.if (. - gText_Rom_5AA19C) > 0x12
	.error "gText_Rom_5AA19C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA19C) < 0x12
	.space 0x12 - (. - gText_Rom_5AA19C)
	.endif

	@ src/battle_message.c:333 battle_message_line_333
	.globl gText_Rom_5AA1AE
gText_Rom_5AA1AE: @ 0x085AA1AE
	.string "{B_ATK_NAME_WITH_PREFIX}は せんとうから\nりだつした!$"
	.if (. - gText_Rom_5AA1AE) > 0x12
	.error "gText_Rom_5AA1AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1AE) < 0x12
	.space 0x12 - (. - gText_Rom_5AA1AE)
	.endif

	@ src/battle_message.c:334 battle_message_line_334
	.globl gText_Rom_5AA1C0
gText_Rom_5AA1C0: @ 0x085AA1C0
	.string "{B_ATK_NAME_WITH_PREFIX}は みらいに\nこうげきを よちした!$"
	.if (. - gText_Rom_5AA1C0) > 0x15
	.error "gText_Rom_5AA1C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1C0) < 0x15
	.space 0x15 - (. - gText_Rom_5AA1C0)
	.endif

	@ src/battle_message.c:335 battle_message_line_335 (+1 aliases)
	.globl gText_Rom_5AA1D5
gText_Rom_5AA1D5: @ 0x085AA1D5
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_BUFF1}の\nこうげきを うけた!$"
	.if (. - gText_Rom_5AA1D5) > 0x13
	.error "gText_Rom_5AA1D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1D5) < 0x13
	.space 0x13 - (. - gText_Rom_5AA1D5)
	.endif

	@ src/battle_message.c:489 battle_message_line_489
	.globl gText_Rom_5AA1E8
gText_Rom_5AA1E8: @ 0x085AA1E8
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_CURRENT_MOVE}を\nみらいに たくした!$"
	.if (. - gText_Rom_5AA1E8) > 0x13
	.error "gText_Rom_5AA1E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1E8) < 0x13
	.space 0x13 - (. - gText_Rom_5AA1E8)
	.endif

	@ src/battle_message.c:336 battle_message_line_336
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA1FB
gText_Rom_5AA1FB: @ 0x085AA1FB
	.string "{B_BUFF1}の こうげき!$"
	.if (. - gText_Rom_5AA1FB) != 0xa
	.error "gText_Rom_5AA1FB must retain its original byte length"
	.endif
	.globl gText_Rom_5AA1FE
	.set gText_Rom_5AA1FE, gText_Rom_5AA1FB + 0x3
	.incbin "baserom.gba", 0x5aa205, 0x14

	@ src/battle_message.c:338 battle_message_line_338
	.globl gText_Rom_5AA219
gText_Rom_5AA219: @ 0x085AA219
	.string "{B_ATK_NAME_WITH_PREFIX}は\nじゅうでんを はじめた!$"
	.if (. - gText_Rom_5AA219) > 0x11
	.error "gText_Rom_5AA219 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA219) < 0x11
	.space 0x11 - (. - gText_Rom_5AA219)
	.endif

	@ src/battle_message.c:339 battle_message_line_339
	.globl gText_Rom_5AA22A
gText_Rom_5AA22A: @ 0x085AA22A
	.string "しぜんのちからは\n{B_CURRENT_MOVE}に なった!$"
	.if (. - gText_Rom_5AA22A) > 0x12
	.error "gText_Rom_5AA22A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA22A) < 0x12
	.space 0x12 - (. - gText_Rom_5AA22A)
	.endif

	@ src/battle_message.c:340 battle_message_line_340
	.globl gText_Rom_5AA23C
gText_Rom_5AA23C: @ 0x085AA23C
	.string "{B_ATK_NAME_WITH_PREFIX}の じょうたいいじょうが\nなおった!$"
	.if (. - gText_Rom_5AA23C) > 0x15
	.error "gText_Rom_5AA23C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA23C) < 0x15
	.space 0x15 - (. - gText_Rom_5AA23C)
	.endif

	@ src/battle_message.c:342 battle_message_line_342
	.globl gText_Rom_5AA251
gText_Rom_5AA251: @ 0x085AA251
	.string "{B_DEF_NAME_WITH_PREFIX}は\nいちゃもんを つけられた!$"
	.if (. - gText_Rom_5AA251) > 0x12
	.error "gText_Rom_5AA251 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA251) < 0x12
	.space 0x12 - (. - gText_Rom_5AA251)
	.endif
	.incbin "baserom.gba", 0x5aa263, 0x17

	@ src/battle_message.c:345 battle_message_line_345
	.globl gText_Rom_5AA27A
gText_Rom_5AA27A: @ 0x085AA27A
	.string "{B_DEF_NAME_WITH_PREFIX}は \nちょうはつに のってしまった!$"
	.if (. - gText_Rom_5AA27A) > 0x15
	.error "gText_Rom_5AA27A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA27A) < 0x15
	.space 0x15 - (. - gText_Rom_5AA27A)
	.endif
	.incbin "baserom.gba", 0x5aa28f, 0x1c

	@ src/battle_message.c:348 battle_message_line_348
	.globl gText_Rom_5AA2AB
gText_Rom_5AA2AB: @ 0x085AA2AB
	.string "{B_ATK_NAME_WITH_PREFIX}は おたがいの\nどうぐを いれかえた!$"
	.if (. - gText_Rom_5AA2AB) > 0x16
	.error "gText_Rom_5AA2AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA2AB) < 0x16
	.space 0x16 - (. - gText_Rom_5AA2AB)
	.endif
	.incbin "baserom.gba", 0x5aa2c1, 0x5c

	@ src/battle_message.c:145 sText_ExclamationMark3
	.globl gText_Rom_5AA31D
gText_Rom_5AA31D: @ 0x085AA31D
	.string "を した!$"
	.if (. - gText_Rom_5AA31D) > 0x6
	.error "gText_Rom_5AA31D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA31D) < 0x6
	.space 0x6 - (. - gText_Rom_5AA31D)
	.endif

	@ src/battle_message.c:350 battle_message_line_350
	.globl gText_Rom_5AA323
gText_Rom_5AA323: @ 0x085AA323
	.string "{B_BUFF1}の\nねがいごとが かなった!$"
	.if (. - gText_Rom_5AA323) > 0x11
	.error "gText_Rom_5AA323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA323) < 0x11
	.space 0x11 - (. - gText_Rom_5AA323)
	.endif

	@ src/battle_message.c:351 battle_message_line_351
	.globl gText_Rom_5AA334
gText_Rom_5AA334: @ 0x085AA334
	.string "{B_ATK_NAME_WITH_PREFIX}は ねを はった!$"
	.if (. - gText_Rom_5AA334) > 0xc
	.error "gText_Rom_5AA334 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA334) < 0xc
	.space 0xc - (. - gText_Rom_5AA334)
	.endif

	@ src/battle_message.c:352 battle_message_line_352
	.globl gText_Rom_5AA340
gText_Rom_5AA340: @ 0x085AA340
	.string "{B_ATK_NAME_WITH_PREFIX}は ねから\nようぶんを すいとった!$"
	.if (. - gText_Rom_5AA340) > 0x15
	.error "gText_Rom_5AA340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA340) < 0x15
	.space 0x15 - (. - gText_Rom_5AA340)
	.endif

	@ src/battle_message.c:353 battle_message_line_353
	.globl gText_Rom_5AA355
gText_Rom_5AA355: @ 0x085AA355
	.string "{B_DEF_NAME_WITH_PREFIX}は ねを はって\nうごかない!$"
	.if (. - gText_Rom_5AA355) > 0x12
	.error "gText_Rom_5AA355 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA355) < 0x12
	.space 0x12 - (. - gText_Rom_5AA355)
	.endif

	@ src/battle_message.c:354 battle_message_line_354
	.globl gText_Rom_5AA367
gText_Rom_5AA367: @ 0x085AA367
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_DEF_NAME_WITH_PREFIX}の\nねむけを さそった!$"
	.if (. - gText_Rom_5AA367) > 0x13
	.error "gText_Rom_5AA367 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA367) < 0x13
	.space 0x13 - (. - gText_Rom_5AA367)
	.endif
	.incbin "baserom.gba", 0x5aa37a, 0x15

	@ src/battle_message.c:356 battle_message_line_356
	.globl gText_Rom_5AA38F
gText_Rom_5AA38F: @ 0x085AA38F
	.string "{B_ATK_NAME_WITH_PREFIX}は おたがいの\nとくせいを いれかえた!$"
	.if (. - gText_Rom_5AA38F) > 0x17
	.error "gText_Rom_5AA38F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA38F) < 0x17
	.space 0x17 - (. - gText_Rom_5AA38F)
	.endif

	@ src/battle_message.c:357 battle_message_line_357
	.globl gText_Rom_5AA3A6
gText_Rom_5AA3A6: @ 0x085AA3A6
	.string "{B_ATK_NAME_WITH_PREFIX}は あいての\nわざを ふういんした!$"
	.if (. - gText_Rom_5AA3A6) > 0x15
	.error "gText_Rom_5AA3A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3A6) < 0x15
	.space 0x15 - (. - gText_Rom_5AA3A6)
	.endif

	@ src/battle_message.c:359 battle_message_line_359
	.globl gText_Rom_5AA3BB
gText_Rom_5AA3BB: @ 0x085AA3BB
	.string "{B_ATK_NAME_WITH_PREFIX}は あいてに\nおんねんを かけようと している!$"
	.if (. - gText_Rom_5AA3BB) > 0x1b
	.error "gText_Rom_5AA3BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3BB) < 0x1b
	.space 0x1b - (. - gText_Rom_5AA3BB)
	.endif

	@ src/battle_message.c:360 battle_message_line_360
	.globl gText_Rom_5AA3D6
gText_Rom_5AA3D6: @ 0x085AA3D6
	.string "{B_ATK_NAME_WITH_PREFIX}の {B_BUFF1}は\nおんねんで わざポイントが 0に なった!$"
	.if (. - gText_Rom_5AA3D6) > 0x1e
	.error "gText_Rom_5AA3D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3D6) < 0x1e
	.space 0x1e - (. - gText_Rom_5AA3D6)
	.endif

	@ src/battle_message.c:361 battle_message_line_361
	.globl gText_Rom_5AA3F4
gText_Rom_5AA3F4: @ 0x085AA3F4
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_CURRENT_MOVE}に つつまれた!$"
	.if (. - gText_Rom_5AA3F4) > 0xf
	.error "gText_Rom_5AA3F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3F4) < 0xf
	.space 0xf - (. - gText_Rom_5AA3F4)
	.endif
	.incbin "baserom.gba", 0x5aa403, 0x45

	@ src/battle_message.c:470 battle_message_line_470
	.globl gText_Rom_5AA448
gText_Rom_5AA448: @ 0x085AA448
	.string "でんきの いりょくが よわまった!$"
	.if (. - gText_Rom_5AA448) > 0x12
	.error "gText_Rom_5AA448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA448) < 0x12
	.space 0x12 - (. - gText_Rom_5AA448)
	.endif

	@ src/battle_message.c:471 battle_message_line_471
	.globl gText_Rom_5AA45A
gText_Rom_5AA45A: @ 0x085AA45A
	.string "ほのおの いりょくが よわまった!$"
	.if (. - gText_Rom_5AA45A) > 0x12
	.error "gText_Rom_5AA45A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA45A) < 0x12
	.space 0x12 - (. - gText_Rom_5AA45A)
	.endif
	.incbin "baserom.gba", 0x5aa46c, 0x10

	@ src/battle_message.c:477 battle_message_line_477
	.globl gText_Rom_5AA47C
gText_Rom_5AA47C: @ 0x085AA47C
	.string "ここちよい かおりが ひろがった!$"
	.if (. - gText_Rom_5AA47C) > 0x12
	.error "gText_Rom_5AA47C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA47C) < 0x12
	.space 0x12 - (. - gText_Rom_5AA47C)
	.endif
	.incbin "baserom.gba", 0x5aa48e, 0x27

	@ src/battle_message.c:481 battle_message_line_481
	.globl gText_Rom_5AA4B5
gText_Rom_5AA4B5: @ 0x085AA4B5
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}を つかって\nはりきり だした!$"
	.if (. - gText_Rom_5AA4B5) > 0x17
	.error "gText_Rom_5AA4B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA4B5) < 0x17
	.space 0x17 - (. - gText_Rom_5AA4B5)
	.endif
	.incbin "baserom.gba", 0x5aa4cc, 0x4

	@ src/battle_message.c:490 battle_message_line_490
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA4D0
gText_Rom_5AA4D0: @ 0x085AA4D0
	.string "しゅうちゅうりょくが\nとぎれて わざが だせなかった!$"
	.if (. - gText_Rom_5AA4D0) != 0x1c
	.error "gText_Rom_5AA4D0 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA4E7
	.set gText_Rom_5AA4E7, gText_Rom_5AA4D0 + 0x17

	@ src/battle_message.c:494 battle_message_line_494
	.globl gText_Rom_5AA4EC
gText_Rom_5AA4EC: @ 0x085AA4EC
	.string "{B_DEF_NAME_WITH_PREFIX}は せんとうに\nひきずりだされた!\p$"
	.if (. - gText_Rom_5AA4EC) > 0x15
	.error "gText_Rom_5AA4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA4EC) < 0x15
	.space 0x15 - (. - gText_Rom_5AA4EC)
	.endif

	@ src/battle_message.c:503 battle_message_line_503
	.globl gText_Rom_5AA501
gText_Rom_5AA501: @ 0x085AA501
	.string "かべが こわれた!$"
	.if (. - gText_Rom_5AA501) > 0xa
	.error "gText_Rom_5AA501 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA501) < 0xa
	.space 0xa - (. - gText_Rom_5AA501)
	.endif

	@ src/battle_message.c:509 battle_message_line_509
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA50B
gText_Rom_5AA50B: @ 0x085AA50B
	.string "しかし こうかが なかった!$"
	.if (. - gText_Rom_5AA50B) != 0xf
	.error "gText_Rom_5AA50B must retain its original byte length"
	.endif
	.globl gText_Rom_5AA515
	.set gText_Rom_5AA515, gText_Rom_5AA50B + 0xa
	.incbin "baserom.gba", 0x5aa51a, 0x82

	@ src/battle_message.c:365 battle_message_line_365
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA59C
gText_Rom_5AA59C: @ 0x085AA59C
	.string "{B_SCR_NAME_WITH_PREFIX}の {B_SCR_ABILITY}で\nあめが ふりはじめた!$"
	.if (. - gText_Rom_5AA59C) != 0x14
	.error "gText_Rom_5AA59C must retain its original byte length"
	.endif
	.globl gText_Rom_5AA5A4
	.set gText_Rom_5AA5A4, gText_Rom_5AA59C + 0x8
	.incbin "baserom.gba", 0x5aa5b0, 0xe

	@ src/battle_message.c:76 gText_StatRose
	.globl gText_Rom_5AA5BE
gText_Rom_5AA5BE: @ 0x085AA5BE
	.string "あがった！$"
	.if (. - gText_Rom_5AA5BE) > 0x6
	.error "gText_Rom_5AA5BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA5BE) < 0x6
	.space 0x6 - (. - gText_Rom_5AA5BE)
	.endif

	@ src/battle_message.c:366 battle_message_line_366
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA5C4
gText_Rom_5AA5C4: @ 0x085AA5C4
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_DEF_ABILITY}で\nきかなかった!$"
	.if (. - gText_Rom_5AA5C4) != 0x10
	.error "gText_Rom_5AA5C4 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA5CF
	.set gText_Rom_5AA5CF, gText_Rom_5AA5C4 + 0xb
	.incbin "baserom.gba", 0x5aa5d4, 0x38

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AA60C
gText_Rom_5AA60C: @ 0x085AA60C
	.string "かった！$"
	.if (. - gText_Rom_5AA60C) > 0x5
	.error "gText_Rom_5AA60C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA60C) < 0x5
	.space 0x5 - (. - gText_Rom_5AA60C)
	.endif
	.incbin "baserom.gba", 0x5aa611, 0x6d

	@ src/battle_message.c:76 gText_StatRose
	.globl gText_Rom_5AA67E
gText_Rom_5AA67E: @ 0x085AA67E
	.string "あがった！$"
	.if (. - gText_Rom_5AA67E) > 0x6
	.error "gText_Rom_5AA67E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA67E) < 0x6
	.space 0x6 - (. - gText_Rom_5AA67E)
	.endif
	.incbin "baserom.gba", 0x5aa684, 0x26

	@ src/battle_message.c:77 gText_StatFell
	.globl gText_Rom_5AA6AA
gText_Rom_5AA6AA: @ 0x085AA6AA
	.string "さがった！$"
	.if (. - gText_Rom_5AA6AA) > 0x6
	.error "gText_Rom_5AA6AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6AA) < 0x6
	.space 0x6 - (. - gText_Rom_5AA6AA)
	.endif

	@ src/battle_message.c:374 battle_message_line_374
	.globl gText_Rom_5AA6B0
gText_Rom_5AA6B0: @ 0x085AA6B0
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_SCR_ABILITY}で\nのうりょくが さがらない!$"
	.if (. - gText_Rom_5AA6B0) > 0x16
	.error "gText_Rom_5AA6B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6B0) < 0x16
	.space 0x16 - (. - gText_Rom_5AA6B0)
	.endif
	.incbin "baserom.gba", 0x5aa6c6, 0x13

	@ src/battle_message.c:376 battle_message_line_376
	.globl gText_Rom_5AA6D9
gText_Rom_5AA6D9: @ 0x085AA6D9
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_BUFF1}の\n{B_BUFF2}を トレースした!$"
	.if (. - gText_Rom_5AA6D9) > 0x14
	.error "gText_Rom_5AA6D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6D9) < 0x14
	.space 0x14 - (. - gText_Rom_5AA6D9)
	.endif
	.incbin "baserom.gba", 0x5aa6ed, 0x40

	@ src/battle_z_move.c:102 sText_RecoverHP
	.globl gText_Rom_5AA72D
gText_Rom_5AA72D: @ 0x085AA72D
	.string "かいふく$"
	.if (. - gText_Rom_5AA72D) > 0x5
	.error "gText_Rom_5AA72D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA72D) < 0x5
	.space 0x5 - (. - gText_Rom_5AA72D)
	.endif
	.incbin "baserom.gba", 0x5aa732, 0x14

	@ src/battle_message.c:486 battle_message_line_486
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA746
gText_Rom_5AA746: @ 0x085AA746
	.string "{B_SCR_NAME_WITH_PREFIX}の {B_SCR_ABILITY}で\nひざしが つよくなった!$"
	.if (. - gText_Rom_5AA746) != 0x15
	.error "gText_Rom_5AA746 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA74E
	.set gText_Rom_5AA74E, gText_Rom_5AA746 + 0x8
	.incbin "baserom.gba", 0x5aa75b, 0x3c

	@ src/battle_message.c:504 battle_message_line_504
	.globl gText_Rom_5AA797
gText_Rom_5AA797: @ 0x085AA797
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_SCR_ABILITY}で\n{B_BUFF1}じょうたいが なおった!$"
	.if (. - gText_Rom_5AA797) > 0x17
	.error "gText_Rom_5AA797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA797) < 0x17
	.space 0x17 - (. - gText_Rom_5AA797)
	.endif
	.incbin "baserom.gba", 0x5aa7ae, 0xe

	@ src/battle_message.c:469 battle_message_line_469
	.globl gText_Rom_5AA7BC
gText_Rom_5AA7BC: @ 0x085AA7BC
	.string "{B_SCR_NAME_WITH_PREFIX}の すがたが\nへんかした!$"
	.if (. - gText_Rom_5AA7BC) > 0x10
	.error "gText_Rom_5AA7BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA7BC) < 0x10
	.space 0x10 - (. - gText_Rom_5AA7BC)
	.endif
	.incbin "baserom.gba", 0x5aa7cc, 0x13
	.globl gUnknown_85AA7DF
gUnknown_85AA7DF: @ 0x085AA7DF

	@ asm/pokemon.s:14238 SetMonPreventsSwitchingString
	.globl gText_Rom_5AA7DF
gText_Rom_5AA7DF: @ 0x085AA7DF
	.string "{0xFD}{0x00}の　{0xFD}{0x17}で\n{0xFD}{0x01}を　もどすことが　できない！\p$"
	.if (. - gText_Rom_5AA7DF) > 0x1a
	.error "gText_Rom_5AA7DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA7DF) < 0x1a
	.space 0x1a - (. - gText_Rom_5AA7DF)
	.endif
	.incbin "baserom.gba", 0x5aa7f9, 0x13

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AA80C
gText_Rom_5AA80C: @ 0x085AA80C
	.string "かった！$"
	.if (. - gText_Rom_5AA80C) > 0x5
	.error "gText_Rom_5AA80C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA80C) < 0x5
	.space 0x5 - (. - gText_Rom_5AA80C)
	.endif
	.incbin "baserom.gba", 0x5aa811, 0x10

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AA821
gText_Rom_5AA821: @ 0x085AA821
	.string "かった！$"
	.if (. - gText_Rom_5AA821) > 0x5
	.error "gText_Rom_5AA821 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA821) < 0x5
	.space 0x5 - (. - gText_Rom_5AA821)
	.endif

	@ src/battle_message.c:499 battle_message_line_499
	.globl gText_Rom_5AA826
gText_Rom_5AA826: @ 0x085AA826
	.string "{B_EFF_NAME_WITH_PREFIX}は {B_EFF_ABILITY}で\nひるまない!$"
	.if (. - gText_Rom_5AA826) > 0xf
	.error "gText_Rom_5AA826 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA826) < 0xf
	.space 0xf - (. - gText_Rom_5AA826)
	.endif
	.incbin "baserom.gba", 0x5aa835, 0x37

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AA86C
gText_Rom_5AA86C: @ 0x085AA86C
	.string "かった！$"
	.if (. - gText_Rom_5AA86C) > 0x5
	.error "gText_Rom_5AA86C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA86C) < 0x5
	.space 0x5 - (. - gText_Rom_5AA86C)
	.endif
	.incbin "baserom.gba", 0x5aa871, 0x6
	.globl gUnknown_85AA877
gUnknown_85AA877: @ 0x085AA877

	@ src/battle_message.c:76 gText_StatRose
	.globl gText_Rom_5AA877
gText_Rom_5AA877: @ 0x085AA877
	.string "あがった！$"
	.if (. - gText_Rom_5AA877) > 0x6
	.error "gText_Rom_5AA877 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA877) < 0x6
	.space 0x6 - (. - gText_Rom_5AA877)
	.endif
	.incbin "baserom.gba", 0x5aa87d, 0x6

	@ src/battle_message.c:77 gText_StatFell
	.globl gText_Rom_5AA883
gText_Rom_5AA883: @ 0x085AA883
	.string "さがった！$"
	.if (. - gText_Rom_5AA883) > 0x6
	.error "gText_Rom_5AA883 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA883) < 0x6
	.space 0x6 - (. - gText_Rom_5AA883)
	.endif
	.incbin "baserom.gba", 0x5aa889, 0xb
	.globl gUnknown_85AA894
gUnknown_85AA894: @ 0x085AA894
	.incbin "baserom.gba", 0x5aa894, 0x5a

	@ src/battle_message.c:381 battle_message_line_381
	.globl gText_Rom_5AA8EE
gText_Rom_5AA8EE: @ 0x085AA8EE
	.string "きゅうしょに あたった！$"
	.if (. - gText_Rom_5AA8EE) > 0xd
	.error "gText_Rom_5AA8EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA8EE) < 0xd
	.space 0xd - (. - gText_Rom_5AA8EE)
	.endif

	@ src/battle_message.c:382 battle_message_line_382
	.globl gText_Rom_5AA8FB
gText_Rom_5AA8FB: @ 0x085AA8FB
	.string "いちげき ひっさつ！$"
	.if (. - gText_Rom_5AA8FB) > 0xb
	.error "gText_Rom_5AA8FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA8FB) < 0xb
	.space 0xb - (. - gText_Rom_5AA8FB)
	.endif
	.incbin "baserom.gba", 0x5aa906, 0x3

	@ src/strings.c:1126 gText_MoveRelearnerAndPoof
	.globl gText_Rom_5AA909
gText_Rom_5AA909: @ 0x085AA909
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p$"
	.if (. - gText_Rom_5AA909) > 0x22
	.error "gText_Rom_5AA909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA909) < 0x22
	.space 0x22 - (. - gText_Rom_5AA909)
	.endif

	@ src/battle_message.c:384 battle_message_line_384
	.globl gText_Rom_5AA92B
gText_Rom_5AA92B: @ 0x085AA92B
	.string "そして……!\p$"
	.if (. - gText_Rom_5AA92B) > 0x8
	.error "gText_Rom_5AA92B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA92B) < 0x8
	.space 0x8 - (. - gText_Rom_5AA92B)
	.endif

	@ src/battle_message.c:474 battle_message_line_474
	.globl gText_Rom_5AA933
gText_Rom_5AA933: @ 0x085AA933
	.string "それは たいせつな わざです\nわすれさせることは できません!\p$"
	.if (. - gText_Rom_5AA933) > 0x21
	.error "gText_Rom_5AA933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA933) < 0x21
	.space 0x21 - (. - gText_Rom_5AA933)
	.endif

	@ src/battle_message.c:385 battle_message_line_385
	.globl gText_Rom_5AA954
gText_Rom_5AA954: @ 0x085AA954
	.string "こうかは いまひとつの ようだ$"
	.if (. - gText_Rom_5AA954) > 0x10
	.error "gText_Rom_5AA954 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA954) < 0x10
	.space 0x10 - (. - gText_Rom_5AA954)
	.endif

	@ src/battle_message.c:386 battle_message_line_386
	.globl gText_Rom_5AA964
gText_Rom_5AA964: @ 0x085AA964
	.string "こうかは ばつぐんだ！$"
	.if (. - gText_Rom_5AA964) > 0xc
	.error "gText_Rom_5AA964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA964) < 0xc
	.space 0xc - (. - gText_Rom_5AA964)
	.endif
	.globl gUnknown_85AA970
gUnknown_85AA970: @ 0x085AA970

	@ src/battle_message.c:79 sText_GotAwaySafely
	.globl gText_Rom_5AA970
gText_Rom_5AA970: @ 0x085AA970
	.string "{PLAY_SE SE_FLEE}うまく にげきれた！\p$"
	.if (. - gText_Rom_5AA970) > 0x10
	.error "gText_Rom_5AA970 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA970) < 0x10
	.space 0x10 - (. - gText_Rom_5AA970)
	.endif
	.incbin "baserom.gba", 0x5aa980, 0x32

	@ src/battle_message.c:388 battle_message_line_388
	.globl gText_Rom_5AA9B2
gText_Rom_5AA9B2: @ 0x085AA9B2
	.string "{PLAY_SE SE_FLEE}やせいの {B_BUFF1}は にげだした！$"
	.if (. - gText_Rom_5AA9B2) > 0x14
	.error "gText_Rom_5AA9B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA9B2) < 0x14
	.space 0x14 - (. - gText_Rom_5AA9B2)
	.endif
	.globl gUnknown_85AA9C6
gUnknown_85AA9C6: @ 0x085AA9C6

	@ src/battle_message.c:80 sText_PlayerDefeatedLinkTrainer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9C6
gText_Rom_5AA9C6: @ 0x085AA9C6
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに かった！$"
	.if (. - gText_Rom_5AA9C6) != 0x10
	.error "gText_Rom_5AA9C6 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA9D1
	.set gText_Rom_5AA9D1, gText_Rom_5AA9C6 + 0xb
	.globl gUnknown_85AA9D6
gUnknown_85AA9D6: @ 0x085AA9D6

	@ src/battle_message.c:81 sText_TwoLinkTrainersDefeated
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9D6
gText_Rom_5AA9D6: @ 0x085AA9D6
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに かった！$"
	.if (. - gText_Rom_5AA9D6) != 0x14
	.error "gText_Rom_5AA9D6 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA9E5
	.set gText_Rom_5AA9E5, gText_Rom_5AA9D6 + 0xf
	.globl gUnknown_85AA9EA
gUnknown_85AA9EA: @ 0x085AA9EA

	@ src/battle_message.c:82 sText_PlayerLostAgainstLinkTrainer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9EA
gText_Rom_5AA9EA: @ 0x085AA9EA
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに まけた！$"
	.if (. - gText_Rom_5AA9EA) != 0x10
	.error "gText_Rom_5AA9EA must retain its original byte length"
	.endif
	.globl gText_Rom_5AA9F5
	.set gText_Rom_5AA9F5, gText_Rom_5AA9EA + 0xb
	.globl gUnknown_85AA9FA
gUnknown_85AA9FA: @ 0x085AA9FA

	@ src/battle_message.c:83 sText_PlayerLostToTwo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9FA
gText_Rom_5AA9FA: @ 0x085AA9FA
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに まけた！$"
	.if (. - gText_Rom_5AA9FA) != 0x14
	.error "gText_Rom_5AA9FA must retain its original byte length"
	.endif
	.globl gText_Rom_5AAA09
	.set gText_Rom_5AAA09, gText_Rom_5AA9FA + 0xf
	.globl gUnknown_85AAA0E
gUnknown_85AAA0E: @ 0x085AAA0E

	@ src/battle_message.c:84 sText_PlayerBattledToDrawLinkTrainer
	.globl gText_Rom_5AAA0E
gText_Rom_5AAA0E: @ 0x085AAA0E
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに ひきわけた！$"
	.if (. - gText_Rom_5AAA0E) > 0x12
	.error "gText_Rom_5AAA0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA0E) < 0x12
	.space 0x12 - (. - gText_Rom_5AAA0E)
	.endif
	.globl gUnknown_85AAA20
gUnknown_85AAA20: @ 0x085AAA20

	@ src/battle_message.c:85 sText_PlayerBattledToDrawVsTwo
	.globl gText_Rom_5AAA20
gText_Rom_5AAA20: @ 0x085AAA20
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに ひきわけた！$"
	.if (. - gText_Rom_5AAA20) > 0x16
	.error "gText_Rom_5AAA20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA20) < 0x16
	.space 0x16 - (. - gText_Rom_5AAA20)
	.endif
	.globl gUnknown_85AAA36
gUnknown_85AAA36: @ 0x085AAA36

	@ src/battle_message.c:86 sText_WildFled
	.globl gText_Rom_5AAA36
gText_Rom_5AAA36: @ 0x085AAA36
	.string "{PLAY_SE SE_FLEE}{B_LINK_OPPONENT1_NAME}は にげだした！$"
	.if (. - gText_Rom_5AAA36) > 0xf
	.error "gText_Rom_5AAA36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA36) < 0xf
	.space 0xf - (. - gText_Rom_5AAA36)
	.endif
	.globl gUnknown_85AAA45
gUnknown_85AAA45: @ 0x085AAA45
	.incbin "baserom.gba", 0x5aaa45, 0x13

	@ src/battle_message.c:389 battle_message_line_389
	.globl gText_Rom_5AAA58
gText_Rom_5AAA58: @ 0x085AAA58
	.string "ダメだ! しょうぶの さいちゅうに\nあいてに せなかは みせられない！\p$"
	.if (. - gText_Rom_5AAA58) > 0x25
	.error "gText_Rom_5AAA58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA58) < 0x25
	.space 0x25 - (. - gText_Rom_5AAA58)
	.endif

	@ src/battle_message.c:390 battle_message_line_390
	.globl gText_Rom_5AAA7D
gText_Rom_5AAA7D: @ 0x085AAA7D
	.string "にげることが できない！\p$"
	.if (. - gText_Rom_5AAA7D) > 0xe
	.error "gText_Rom_5AAA7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA7D) < 0xe
	.space 0xe - (. - gText_Rom_5AAA7D)
	.endif

	@ src/battle_message.c:391 battle_message_line_391
	.globl gText_Rom_5AAA8B
gText_Rom_5AAA8B: @ 0x085AAA8B
	.string "オダマキ『み みすてないでくれー!』\p$"
	.if (. - gText_Rom_5AAA8B) > 0x14
	.error "gText_Rom_5AAA8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA8B) < 0x14
	.space 0x14 - (. - gText_Rom_5AAA8B)
	.endif
	.incbin "baserom.gba", 0x5aaa9f, 0xd

