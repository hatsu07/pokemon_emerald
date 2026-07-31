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

