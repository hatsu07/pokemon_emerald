	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_5CD1E2
gText_Rom_5CD1E2: @ 0x085CD1E2
	.string "でした$"
	.if (. - gText_Rom_5CD1E2) > 0x4
	.error "gText_Rom_5CD1E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD1E2) < 0x4
	.space 0x4 - (. - gText_Rom_5CD1E2)
	.endif

	.globl gText_MysteryEventSaveSucceeded
gText_MysteryEventSaveSucceeded: @ 0x085CD1E6
	.string "セーブできました$"
	.if (. - gText_MysteryEventSaveSucceeded) != 0x9
	.error "gText_MysteryEventSaveSucceeded must retain its original byte length"
	.endif

	@ The final "でした$" suffix is emitted at 0x085CD1F7 below.
	.globl gText_MysteryEventLoadFailed
gText_MysteryEventLoadFailed: @ 0x085CD1EF
	.string "ロードできません"
	.if (. - gText_MysteryEventLoadFailed) != 0x8
	.error "gText_MysteryEventLoadFailed prefix must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_5CD1F7
gText_Rom_5CD1F7: @ 0x085CD1F7
	.string "でした$"
	.if (. - gText_Rom_5CD1F7) > 0x4
	.error "gText_Rom_5CD1F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD1F7) < 0x4
	.space 0x4 - (. - gText_Rom_5CD1F7)
	.endif

	.globl gText_MysteryEventLoadSucceeded
gText_MysteryEventLoadSucceeded: @ 0x085CD1FB
	.string "ロードできました$"
	.if (. - gText_MysteryEventLoadSucceeded) != 0x9
	.error "gText_MysteryEventLoadSucceeded must retain its original byte length"
	.endif

	.globl gMysteryEventBgTemplates
gMysteryEventBgTemplates: @ 0x085CD204
	bg_template 0, 2, 31, 0, 0, 0, 0
	.if (. - gMysteryEventBgTemplates) != 0x4
	.error "gMysteryEventBgTemplates must contain one 4-byte entry"
	.endif

	.globl gMysteryEventWindowTemplates
gMysteryEventWindowTemplates: @ 0x085CD208
	window_template 0, 4, 15, 22, 4, 14, 0x14
	window_template 0, 7, 6, 16, 4, 14, 0x6C
	null_window_template
	.if (. - gMysteryEventWindowTemplates) != 0x18
	.error "gMysteryEventWindowTemplates must contain two entries and a terminator"
	.endif

	.globl gSaveFailedClockOamData
gSaveFailedClockOamData: @ 0x085CD220
	rodata_sprite_oam_data DISPLAY_HEIGHT, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0
	.if (. - gSaveFailedClockOamData) != 0x8
	.error "gSaveFailedClockOamData must contain one OAM entry"
	.endif

	.globl gSaveFailedBgTemplates
gSaveFailedBgTemplates: @ 0x085CD228
	bg_template 0, 2, 31, 0, 0, 0, 0
	bg_template 2, 0, 14, 0, 0, 2, 0
	bg_template 3, 0, 15, 0, 0, 3, 0
	.if (. - gSaveFailedBgTemplates) != 0xC
	.error "gSaveFailedBgTemplates must contain three entries"
	.endif

	.globl gSaveFailedWindowTemplates
gSaveFailedWindowTemplates: @ 0x085CD234
	null_window_template
	.if (. - gSaveFailedWindowTemplates) != 0x8
	.error "gSaveFailedWindowTemplates must contain one terminator"
	.endif

	.globl gSaveFailedMainWindowTemplate
gSaveFailedMainWindowTemplate: @ 0x085CD23C
	window_template 0, 1, 13, 28, 6, 15, 0x1
	.if (. - gSaveFailedMainWindowTemplate) != 0x8
	.error "gSaveFailedMainWindowTemplate must contain one entry"
	.endif

	.globl gSaveFailedClockWindowTemplate
gSaveFailedClockWindowTemplate: @ 0x085CD244
	window_template 0, 14, 9, 2, 2, 15, 0xA9
	.if (. - gSaveFailedClockWindowTemplate) != 0x8
	.error "gSaveFailedClockWindowTemplate must contain one entry"
	.endif

	.globl gSaveFailedClockFrameData
gSaveFailedClockFrameData: @ 0x085CD24C
	.byte 1, 0, 0 @ frame 0
	.byte 5, 0, 0 @ frame 1
	.byte 9, 0, 0 @ frame 2
	.byte 5, 0, 1 @ frame 3
	.byte 1, 0, 1 @ frame 4
	.byte 5, 1, 1 @ frame 5
	.byte 9, 1, 0 @ frame 6
	.byte 5, 1, 0 @ frame 7
	.if (. - gSaveFailedClockFrameData) != 0x18
	.error "gSaveFailedClockFrameData must contain eight 3-byte entries"
	.endif

	.globl gSaveFailedClockPalette
gSaveFailedClockPalette: @ 0x085CD264
	.2byte 0x2E2C, 0x0000, 0x1CE7, 0x3DEF, 0x5EF7, 0x7FFF, 0x151F, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.if (. - gSaveFailedClockPalette) != 0x20
	.error "gSaveFailedClockPalette must contain 16 colors"
	.endif

	.globl gSaveFailedClockGraphics
gSaveFailedClockGraphics: @ 0x085CD284
	.incbin "build/graphics/save_failed_screen/clock.4bpp.lz"
	.if (. - gSaveFailedClockGraphics) != 0x90
	.error "gSaveFailedClockGraphics must retain its original compressed size"
	.endif

	.globl gRegicePuzzleRequiredPositions
gRegicePuzzleRequiredPositions: @ 0x085CD314
	.byte  4, 21 @  0
	.byte  5, 21 @  1
	.byte  6, 21 @  2
	.byte  7, 21 @  3
	.byte  8, 21 @  4
	.byte  9, 21 @  5
	.byte 10, 21 @  6
	.byte 11, 21 @  7
	.byte 12, 21 @  8
	.byte 12, 22 @  9
	.byte 12, 23 @ 10
	.byte 13, 23 @ 11
	.byte 13, 24 @ 12
	.byte 13, 25 @ 13
	.byte 13, 26 @ 14
	.byte 13, 27 @ 15
	.byte 12, 27 @ 16
	.byte 12, 28 @ 17
	.byte  4, 29 @ 18
	.byte  5, 29 @ 19
	.byte  6, 29 @ 20
	.byte  7, 29 @ 21
	.byte  8, 29 @ 22
	.byte  9, 29 @ 23
	.byte 10, 29 @ 24
	.byte 11, 29 @ 25
	.byte 12, 29 @ 26
	.byte  4, 28 @ 27
	.byte  4, 27 @ 28
	.byte  3, 27 @ 29
	.byte  3, 26 @ 30
	.byte  3, 25 @ 31
	.byte  3, 24 @ 32
	.byte  3, 23 @ 33
	.byte  4, 23 @ 34
	.byte  4, 22 @ 35
	.if (. - gRegicePuzzleRequiredPositions) != 36 * 2
	.error "gRegicePuzzleRequiredPositions must contain 36 coordinate pairs"
	.endif

	.globl gUnknown_85CD35C
gUnknown_85CD35C: @ 0x085CD35C
	.incbin "baserom.gba", 0x5cd35c, 0x32
	.globl gUnknown_85CD38E
gUnknown_85CD38E: @ 0x085CD38E
	.incbin "baserom.gba", 0x5cd38e, 0x12
	.globl gUnknown_85CD3A0
gUnknown_85CD3A0: @ 0x085CD3A0
	.incbin "baserom.gba", 0x5cd3a0, 0x5fc
	.globl gUnknown_85CD99C
gUnknown_85CD99C: @ 0x085CD99C
	.incbin "baserom.gba", 0x5cd99c, 0x54
	.globl gUnknown_85CD9F0
gUnknown_85CD9F0: @ 0x085CD9F0
	.incbin "baserom.gba", 0x5cd9f0, 0x8
	.globl gUnknown_85CD9F8
gUnknown_85CD9F8: @ 0x085CD9F8
	.incbin "baserom.gba", 0x5cd9f8, 0x10
	.globl gUnknown_85CDA08
gUnknown_85CDA08: @ 0x085CDA08
	.incbin "baserom.gba", 0x5cda08, 0x48
	.globl gUnknown_85CDA50
gUnknown_85CDA50: @ 0x085CDA50
	.incbin "baserom.gba", 0x5cda50, 0xb4
	.globl gUnknown_85CDB04
gUnknown_85CDB04: @ 0x085CDB04
	.incbin "baserom.gba", 0x5cdb04, 0x4
	.globl gUnknown_85CDB08
gUnknown_85CDB08: @ 0x085CDB08
	.incbin "baserom.gba", 0x5cdb08, 0x4
	.globl gUnknown_85CDB0C
gUnknown_85CDB0C: @ 0x085CDB0C
	.incbin "baserom.gba", 0x5cdb0c, 0x34
	.globl gUnknown_85CDB40
gUnknown_85CDB40: @ 0x085CDB40
	.incbin "baserom.gba", 0x5cdb40, 0x8
	.globl gUnknown_85CDB48
gUnknown_85CDB48: @ 0x085CDB48
	.incbin "baserom.gba", 0x5cdb48, 0x18
	.globl gUnknown_85CDB60
gUnknown_85CDB60: @ 0x085CDB60

	@ asm/clear_save_data_screen.s:35 Task_DoClearSaveDataScreenYesNo
	.globl gText_Rom_5CDB60
gText_Rom_5CDB60: @ 0x085CDB60
	.string "すべての　セーブデータエリアを\nクリア　しますか？$"
	.if (. - gText_Rom_5CDB60) > 0x1a
	.error "gText_Rom_5CDB60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CDB60) < 0x1a
	.space 0x1a - (. - gText_Rom_5CDB60)
	.endif
	.globl gUnknown_85CDB7A
gUnknown_85CDB7A: @ 0x085CDB7A

	@ asm/clear_save_data_screen.s:97 Task_ClearSaveDataScreenYesNoChoice
	.globl gText_Rom_5CDB7A
gText_Rom_5CDB7A: @ 0x085CDB7A
	.string "クリア　しています\nおまち　ください$"
	.if (. - gText_Rom_5CDB7A) > 0x13
	.error "gText_Rom_5CDB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CDB7A) < 0x13
	.space 0x13 - (. - gText_Rom_5CDB7A)
	.endif
	.incbin "baserom.gba", 0x5cdb8d, 0x3
	.globl gUnknown_85CDB90
gUnknown_85CDB90: @ 0x085CDB90
	.incbin "baserom.gba", 0x5cdb90, 0x8
	.globl gUnknown_85CDB98
gUnknown_85CDB98: @ 0x085CDB98
	.incbin "baserom.gba", 0x5cdb98, 0x10
	.globl gUnknown_85CDBA8
gUnknown_85CDBA8: @ 0x085CDBA8
	.incbin "baserom.gba", 0x5cdba8, 0x8
	.globl gUnknown_85CDBB0
gUnknown_85CDBB0: @ 0x085CDBB0
	.incbin "baserom.gba", 0x5cdbb0, 0x20
	.globl gUnknown_85CDBD0
gUnknown_85CDBD0: @ 0x085CDBD0
	.incbin "baserom.gba", 0x5cdbd0, 0x20
	.globl gUnknown_85CDBF0
gUnknown_85CDBF0: @ 0x085CDBF0
	.incbin "baserom.gba", 0x5cdbf0, 0x20
	.globl gUnknown_85CDC10
gUnknown_85CDC10: @ 0x085CDC10
	.incbin "baserom.gba", 0x5cdc10, 0x480
	.globl gUnknown_85CE090
gUnknown_85CE090: @ 0x085CE090
	.incbin "baserom.gba", 0x5ce090, 0x13c
	.globl gUnknown_85CE1CC
gUnknown_85CE1CC: @ 0x085CE1CC
	.incbin "baserom.gba", 0x5ce1cc, 0x60
	.globl gUnknown_85CE22C
gUnknown_85CE22C: @ 0x085CE22C
	.incbin "baserom.gba", 0x5ce22c, 0x60
	.globl gUnknown_85CE28C
gUnknown_85CE28C: @ 0x085CE28C
	.incbin "baserom.gba", 0x5ce28c, 0x5dc
	.globl gUnknown_85CE868
gUnknown_85CE868: @ 0x085CE868
	.incbin "baserom.gba", 0x5ce868, 0x2d0
	.globl gUnknown_85CEB38
gUnknown_85CEB38: @ 0x085CEB38
	.incbin "baserom.gba", 0x5ceb38, 0x20
	.globl gUnknown_85CEB58
gUnknown_85CEB58: @ 0x085CEB58
	.incbin "baserom.gba", 0x5ceb58, 0x20
	.globl gUnknown_85CEB78
gUnknown_85CEB78: @ 0x085CEB78
	.incbin "baserom.gba", 0x5ceb78, 0x13c
	.globl gUnknown_85CECB4
gUnknown_85CECB4: @ 0x085CECB4
	.incbin "baserom.gba", 0x5cecb4, 0x20
	.globl gUnknown_85CECD4
gUnknown_85CECD4: @ 0x085CECD4
	.incbin "baserom.gba", 0x5cecd4, 0x20
	.globl gUnknown_85CECF4
gUnknown_85CECF4: @ 0x085CECF4
	.incbin "baserom.gba", 0x5cecf4, 0x688
	.globl gUnknown_85CF37C
gUnknown_85CF37C: @ 0x085CF37C
	.incbin "baserom.gba", 0x5cf37c, 0x304
	.globl gUnknown_85CF680
gUnknown_85CF680: @ 0x085CF680
	.incbin "baserom.gba", 0x5cf680, 0x16c
	.globl gUnknown_85CF7EC
gUnknown_85CF7EC: @ 0x085CF7EC
	.incbin "baserom.gba", 0x5cf7ec, 0x40
	.globl gUnknown_85CF82C
gUnknown_85CF82C: @ 0x085CF82C
	.incbin "baserom.gba", 0x5cf82c, 0x1ec
	.globl gUnknown_85CFA18
gUnknown_85CFA18: @ 0x085CFA18
	.incbin "baserom.gba", 0x5cfa18, 0x20
	.globl gUnknown_85CFA38
gUnknown_85CFA38: @ 0x085CFA38
	.incbin "baserom.gba", 0x5cfa38, 0x2ae4
	.globl gUnknown_85D251C
gUnknown_85D251C: @ 0x085D251C
	.incbin "baserom.gba", 0x5d251c, 0x18
	.globl gUnknown_85D2534
gUnknown_85D2534: @ 0x085D2534
	.incbin "baserom.gba", 0x5d2534, 0x30
	.globl gUnknown_85D2564
gUnknown_85D2564: @ 0x085D2564
	.incbin "baserom.gba", 0x5d2564, 0x10
	.globl gUnknown_85D2574
gUnknown_85D2574: @ 0x085D2574
	.incbin "baserom.gba", 0x5d2574, 0x48
	.globl gUnknown_85D25BC
gUnknown_85D25BC: @ 0x085D25BC
	.incbin "baserom.gba", 0x5d25bc, 0x28
	.globl gUnknown_85D25E4
gUnknown_85D25E4: @ 0x085D25E4
	.incbin "baserom.gba", 0x5d25e4, 0xc
	.globl gUnknown_85D25F0
gUnknown_85D25F0: @ 0x085D25F0
	.incbin "baserom.gba", 0x5d25f0, 0x60
	.globl gUnknown_85D2650
gUnknown_85D2650: @ 0x085D2650
	.incbin "baserom.gba", 0x5d2650, 0x18
	.globl gUnknown_85D2668
gUnknown_85D2668: @ 0x085D2668
	.incbin "baserom.gba", 0x5d2668, 0x4
	.globl gUnknown_85D266C
gUnknown_85D266C: @ 0x085D266C
	.incbin "baserom.gba", 0x5d266c, 0x50
	.globl gUnknown_85D26BC
gUnknown_85D26BC: @ 0x085D26BC
	.incbin "baserom.gba", 0x5d26bc, 0x18
	.globl gUnknown_85D26D4
gUnknown_85D26D4: @ 0x085D26D4
	.incbin "baserom.gba", 0x5d26d4, 0x38
	.globl gUnknown_85D270C
gUnknown_85D270C: @ 0x085D270C
	.incbin "baserom.gba", 0x5d270c, 0x18
	.globl gUnknown_85D2724
gUnknown_85D2724: @ 0x085D2724
	.incbin "baserom.gba", 0x5d2724, 0x38
	.globl gUnknown_85D275C
gUnknown_85D275C: @ 0x085D275C
	.incbin "baserom.gba", 0x5d275c, 0x18
	.globl gUnknown_85D2774
gUnknown_85D2774: @ 0x085D2774
	.incbin "baserom.gba", 0x5d2774, 0x18
	.globl gUnknown_85D278C
gUnknown_85D278C: @ 0x085D278C
	.incbin "baserom.gba", 0x5d278c, 0x10
	.globl gUnknown_85D279C
gUnknown_85D279C: @ 0x085D279C
	.incbin "baserom.gba", 0x5d279c, 0x10
	.globl gUnknown_85D27AC
gUnknown_85D27AC: @ 0x085D27AC
	.incbin "baserom.gba", 0x5d27ac, 0x20
	.globl gUnknown_85D27CC
gUnknown_85D27CC: @ 0x085D27CC
	.incbin "baserom.gba", 0x5d27cc, 0x10
	.globl gUnknown_85D27DC
gUnknown_85D27DC: @ 0x085D27DC
	.incbin "baserom.gba", 0x5d27dc, 0x28
	.globl gUnknown_85D2804
gUnknown_85D2804: @ 0x085D2804
	.incbin "baserom.gba", 0x5d2804, 0x10
	.globl gUnknown_85D2814
gUnknown_85D2814: @ 0x085D2814
	.incbin "baserom.gba", 0x5d2814, 0x10
	.globl gUnknown_85D2824
gUnknown_85D2824: @ 0x085D2824
	.incbin "baserom.gba", 0x5d2824, 0x30
	.globl gUnknown_85D2854
gUnknown_85D2854: @ 0x085D2854
	.incbin "baserom.gba", 0x5d2854, 0x28
	.globl gUnknown_85D287C
gUnknown_85D287C: @ 0x085D287C
	.incbin "baserom.gba", 0x5d287c, 0x10
	.globl gUnknown_85D288C
gUnknown_85D288C: @ 0x085D288C
	.incbin "baserom.gba", 0x5d288c, 0x50
	.globl gUnknown_85D28DC
gUnknown_85D28DC: @ 0x085D28DC
	.incbin "baserom.gba", 0x5d28dc, 0x10
	.globl gUnknown_85D28EC
gUnknown_85D28EC: @ 0x085D28EC
	.incbin "baserom.gba", 0x5d28ec, 0x24
	.globl gUnknown_85D2910
gUnknown_85D2910: @ 0x085D2910
	.incbin "baserom.gba", 0x5d2910, 0x18
	.globl gUnknown_85D2928
gUnknown_85D2928: @ 0x085D2928
	.incbin "baserom.gba", 0x5d2928, 0x198
	.globl gUnknown_85D2AC0
gUnknown_85D2AC0: @ 0x085D2AC0
	.incbin "baserom.gba", 0x5d2ac0, 0x8c
	.globl gUnknown_85D2B4C
gUnknown_85D2B4C: @ 0x085D2B4C
	.incbin "baserom.gba", 0x5d2b4c, 0x3c0
	.globl gUnknown_85D2F0C
gUnknown_85D2F0C: @ 0x085D2F0C
	.incbin "baserom.gba", 0x5d2f0c, 0x388
	.globl gUnknown_85D3294
gUnknown_85D3294: @ 0x085D3294
	.incbin "baserom.gba", 0x5d3294, 0x70
	.globl gUnknown_85D3304
gUnknown_85D3304: @ 0x085D3304
	.incbin "baserom.gba", 0x5d3304, 0x24
	.globl gUnknown_85D3328
gUnknown_85D3328: @ 0x085D3328
	.incbin "baserom.gba", 0x5d3328, 0x19c
	.globl gUnknown_85D34C4
gUnknown_85D34C4: @ 0x085D34C4
	.incbin "baserom.gba", 0x5d34c4, 0x1c
	.globl gUnknown_85D34E0
gUnknown_85D34E0: @ 0x085D34E0
	.incbin "baserom.gba", 0x5d34e0, 0x8
	.globl gUnknown_85D34E8
gUnknown_85D34E8: @ 0x085D34E8
	.incbin "baserom.gba", 0x5d34e8, 0x25c
	.globl gUnknown_85D3744
gUnknown_85D3744: @ 0x085D3744
	.incbin "baserom.gba", 0x5d3744, 0x4b
	.globl gUnknown_85D378F
gUnknown_85D378F: @ 0x085D378F
	.incbin "baserom.gba", 0x5d378f, 0x39
	.globl gUnknown_85D37C8
gUnknown_85D37C8: @ 0x085D37C8
	.incbin "baserom.gba", 0x5d37c8, 0x8
	.globl gUnknown_85D37D0
gUnknown_85D37D0: @ 0x085D37D0
	.incbin "baserom.gba", 0x5d37d0, 0x1e
	.globl gUnknown_85D37EE
gUnknown_85D37EE: @ 0x085D37EE
	.incbin "baserom.gba", 0x5d37ee, 0x30
	.globl gUnknown_85D381E
gUnknown_85D381E: @ 0x085D381E
	.incbin "baserom.gba", 0x5d381e, 0xbe
	.globl gUnknown_85D38DC
gUnknown_85D38DC: @ 0x085D38DC
	.incbin "baserom.gba", 0x5d38dc, 0xc
	.globl gUnknown_85D38E8
gUnknown_85D38E8: @ 0x085D38E8
	.incbin "baserom.gba", 0x5d38e8, 0x8
	.globl gUnknown_85D38F0
gUnknown_85D38F0: @ 0x085D38F0
	.incbin "baserom.gba", 0x5d38f0, 0xe4
	.globl gUnknown_85D39D4
gUnknown_85D39D4: @ 0x085D39D4
	.incbin "baserom.gba", 0x5d39d4, 0xe4
	.globl gUnknown_85D3AB8
gUnknown_85D3AB8: @ 0x085D3AB8
	.incbin "baserom.gba", 0x5d3ab8, 0xc
	.globl gUnknown_85D3AC4
gUnknown_85D3AC4: @ 0x085D3AC4
	.incbin "baserom.gba", 0x5d3ac4, 0x8
	.globl gUnknown_85D3ACC
gUnknown_85D3ACC: @ 0x085D3ACC
	.incbin "baserom.gba", 0x5d3acc, 0x8
	.globl gUnknown_85D3AD4
gUnknown_85D3AD4: @ 0x085D3AD4
	.incbin "baserom.gba", 0x5d3ad4, 0xa
	.globl gUnknown_85D3ADE
gUnknown_85D3ADE: @ 0x085D3ADE
	.incbin "baserom.gba", 0x5d3ade, 0x49

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5D3B27
gText_Rom_5D3B27: @ 0x085D3B27
	.string "ほうし$"
	.if (. - gText_Rom_5D3B27) > 0x4
	.error "gText_Rom_5D3B27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3B27) < 0x4
	.space 0x4 - (. - gText_Rom_5D3B27)
	.endif
	.incbin "baserom.gba", 0x5d3b2b, 0xd9
	.globl gUnknown_85D3C04
gUnknown_85D3C04: @ 0x085D3C04
	.incbin "baserom.gba", 0x5d3c04, 0x40
	.globl gUnknown_85D3C44
gUnknown_85D3C44: @ 0x085D3C44
	.incbin "baserom.gba", 0x5d3c44, 0x20
	.globl gUnknown_85D3C64
gUnknown_85D3C64: @ 0x085D3C64
	.incbin "baserom.gba", 0x5d3c64, 0x2a

	@ src/data/easy_chat/easy_chat_group_adjectives.h:124 easy_chat_group_adjectives_line_124
	.globl gText_Rom_5D3C8E
gText_Rom_5D3C8E: @ 0x085D3C8E
	.string "バキバキ$"
	.if (. - gText_Rom_5D3C8E) > 0x5
	.error "gText_Rom_5D3C8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3C8E) < 0x5
	.space 0x5 - (. - gText_Rom_5D3C8E)
	.endif
	.incbin "baserom.gba", 0x5d3c93, 0x11
	.globl gUnknown_85D3CA4
gUnknown_85D3CA4: @ 0x085D3CA4
	.incbin "baserom.gba", 0x5d3ca4, 0xc8
	.globl gUnknown_85D3D6C
gUnknown_85D3D6C: @ 0x085D3D6C
	.incbin "baserom.gba", 0x5d3d6c, 0x18
	.globl gUnknown_85D3D84
gUnknown_85D3D84: @ 0x085D3D84
	.incbin "baserom.gba", 0x5d3d84, 0xc
	.globl gUnknown_85D3D90
gUnknown_85D3D90: @ 0x085D3D90

	@ asm/lilycove_lady.s:947 sub_0818DDA4
	.globl gText_Rom_5D3D90
gText_Rom_5D3D90: @ 0x085D3D90
	.string "おねえ$"
	.if (. - gText_Rom_5D3D90) > 0x4
	.error "gText_Rom_5D3D90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D90) < 0x4
	.space 0x4 - (. - gText_Rom_5D3D90)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_Rom_5D3D94
gText_Rom_5D3D94: @ 0x085D3D94
	.string "ハンサム$"
	.if (. - gText_Rom_5D3D94) > 0x5
	.error "gText_Rom_5D3D94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D94) < 0x5
	.space 0x5 - (. - gText_Rom_5D3D94)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_Rom_5D3D99
gText_Rom_5D3D99: @ 0x085D3D99
	.string "ジョバンニ$"
	.if (. - gText_Rom_5D3D99) > 0x6
	.error "gText_Rom_5D3D99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D99) < 0x6
	.space 0x6 - (. - gText_Rom_5D3D99)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_Rom_5D3D9F
gText_Rom_5D3D9F: @ 0x085D3D9F
	.string "もあもあ$"
	.if (. - gText_Rom_5D3D9F) > 0x5
	.error "gText_Rom_5D3D9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D9F) < 0x5
	.space 0x5 - (. - gText_Rom_5D3D9F)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_Rom_5D3DA4
gText_Rom_5D3DA4: @ 0x085D3DA4
	.string "てつ$"
	.if (. - gText_Rom_5D3DA4) > 0x3
	.error "gText_Rom_5D3DA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DA4) < 0x3
	.space 0x3 - (. - gText_Rom_5D3DA4)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_Rom_5D3DA7
gText_Rom_5D3DA7: @ 0x085D3DA7
	.string "きんにくん$"
	.if (. - gText_Rom_5D3DA7) > 0x6
	.error "gText_Rom_5D3DA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DA7) < 0x6
	.space 0x6 - (. - gText_Rom_5D3DA7)
	.endif
	.incbin "baserom.gba", 0x5d3dad, 0x3
	.globl gUnknown_85D3DB0
gUnknown_85D3DB0: @ 0x085D3DB0
	.incbin "baserom.gba", 0x5d3db0, 0x14

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_Rom_5D3DC4
gText_Rom_5D3DC4: @ 0x085D3DC4
	.string "かっこよ$"
	.if (. - gText_Rom_5D3DC4) > 0x5
	.error "gText_Rom_5D3DC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DC4) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DC4)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_Rom_5D3DC9
gText_Rom_5D3DC9: @ 0x085D3DC9
	.string "うつくし$"
	.if (. - gText_Rom_5D3DC9) > 0x5
	.error "gText_Rom_5D3DC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DC9) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DC9)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_Rom_5D3DCE
gText_Rom_5D3DCE: @ 0x085D3DCE
	.string "かわい$"
	.if (. - gText_Rom_5D3DCE) > 0x4
	.error "gText_Rom_5D3DCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DCE) < 0x4
	.space 0x4 - (. - gText_Rom_5D3DCE)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_Rom_5D3DD2
gText_Rom_5D3DD2: @ 0x085D3DD2
	.string "かしこ$"
	.if (. - gText_Rom_5D3DD2) > 0x4
	.error "gText_Rom_5D3DD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DD2) < 0x4
	.space 0x4 - (. - gText_Rom_5D3DD2)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_Rom_5D3DD6
gText_Rom_5D3DD6: @ 0x085D3DD6
	.string "たくまし$"
	.if (. - gText_Rom_5D3DD6) > 0x5
	.error "gText_Rom_5D3DD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DD6) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DD6)
	.endif
	.incbin "baserom.gba", 0x5d3ddb, 0x1
	.globl gUnknown_85D3DDC
gUnknown_85D3DDC: @ 0x085D3DDC
	.incbin "baserom.gba", 0x5d3ddc, 0x14
	.globl gUnknown_85D3DF0
gUnknown_85D3DF0: @ 0x085D3DF0
	.incbin "baserom.gba", 0x5d3df0, 0xc
	.globl gUnknown_85D3DFC
gUnknown_85D3DFC: @ 0x085D3DFC
	.incbin "baserom.gba", 0x5d3dfc, 0x1630
	.globl gUnknown_85D542C
gUnknown_85D542C: @ 0x085D542C
	.incbin "baserom.gba", 0x5d542c, 0x269
	.globl gUnknown_85D5695
gUnknown_85D5695: @ 0x085D5695
	.incbin "baserom.gba", 0x5d5695, 0x283
	.globl gUnknown_85D5918
gUnknown_85D5918: @ 0x085D5918
	.incbin "baserom.gba", 0x5d5918, 0x10
	.globl gUnknown_85D5928
gUnknown_85D5928: @ 0x085D5928
	.incbin "baserom.gba", 0x5d5928, 0x10
	.globl gUnknown_85D5938
gUnknown_85D5938: @ 0x085D5938
	.incbin "baserom.gba", 0x5d5938, 0x20
	.globl gUnknown_85D5958
gUnknown_85D5958: @ 0x085D5958
	.incbin "baserom.gba", 0x5d5958, 0x98
	.globl gUnknown_85D59F0
gUnknown_85D59F0: @ 0x085D59F0
	.incbin "baserom.gba", 0x5d59f0, 0xc
	.globl gUnknown_85D59FC
gUnknown_85D59FC: @ 0x085D59FC
	.incbin "baserom.gba", 0x5d59fc, 0x58
	.globl gUnknown_85D5A54
gUnknown_85D5A54: @ 0x085D5A54
	.incbin "baserom.gba", 0x5d5a54, 0x30
	.globl gUnknown_85D5A84
gUnknown_85D5A84: @ 0x085D5A84
	.incbin "baserom.gba", 0x5d5a84, 0x48
	.globl gUnknown_85D5ACC
gUnknown_85D5ACC: @ 0x085D5ACC
	.incbin "baserom.gba", 0x5d5acc, 0x18
	.globl gUnknown_85D5AE4
gUnknown_85D5AE4: @ 0x085D5AE4
	.incbin "baserom.gba", 0x5d5ae4, 0x18
	.globl gUnknown_85D5AFC
gUnknown_85D5AFC: @ 0x085D5AFC
	.incbin "baserom.gba", 0x5d5afc, 0x10
	.globl gUnknown_85D5B0C
gUnknown_85D5B0C: @ 0x085D5B0C
	.incbin "baserom.gba", 0x5d5b0c, 0x5c
	.globl gUnknown_85D5B68
gUnknown_85D5B68: @ 0x085D5B68
	.incbin "baserom.gba", 0x5d5b68, 0x10
	.globl gUnknown_85D5B78
gUnknown_85D5B78: @ 0x085D5B78
	.incbin "baserom.gba", 0x5d5b78, 0x10
	.globl gUnknown_85D5B88
gUnknown_85D5B88: @ 0x085D5B88
	.incbin "baserom.gba", 0x5d5b88, 0x40
	.globl gUnknown_85D5BC8
gUnknown_85D5BC8: @ 0x085D5BC8
	.incbin "baserom.gba", 0x5d5bc8, 0x10
	.globl gUnknown_85D5BD8
gUnknown_85D5BD8: @ 0x085D5BD8
	.incbin "baserom.gba", 0x5d5bd8, 0x40
	.globl gUnknown_85D5C18
gUnknown_85D5C18: @ 0x085D5C18
	.incbin "baserom.gba", 0x5d5c18, 0x4
	.globl gUnknown_85D5C1C
gUnknown_85D5C1C: @ 0x085D5C1C
	.incbin "baserom.gba", 0x5d5c1c, 0x20
	.globl gUnknown_85D5C3C
gUnknown_85D5C3C: @ 0x085D5C3C
	.incbin "baserom.gba", 0x5d5c3c, 0x10
	.globl gUnknown_85D5C4C
gUnknown_85D5C4C: @ 0x085D5C4C
	.incbin "baserom.gba", 0x5d5c4c, 0x44
	.globl gUnknown_85D5C90
gUnknown_85D5C90: @ 0x085D5C90
	.incbin "baserom.gba", 0x5d5c90, 0x80
	.globl gUnknown_85D5D10
gUnknown_85D5D10: @ 0x085D5D10
	.incbin "baserom.gba", 0x5d5d10, 0xac
	.globl gUnknown_85D5DBC
gUnknown_85D5DBC: @ 0x085D5DBC
	.incbin "baserom.gba", 0x5d5dbc, 0x3
	.globl gUnknown_85D5DBF
gUnknown_85D5DBF: @ 0x085D5DBF
	.incbin "baserom.gba", 0x5d5dbf, 0x3
	.globl gUnknown_85D5DC2
gUnknown_85D5DC2: @ 0x085D5DC2
	.incbin "baserom.gba", 0x5d5dc2, 0x3
	.globl gUnknown_85D5DC5
gUnknown_85D5DC5: @ 0x085D5DC5
	.incbin "baserom.gba", 0x5d5dc5, 0x7
	.globl gUnknown_85D5DCC
gUnknown_85D5DCC: @ 0x085D5DCC
	.incbin "baserom.gba", 0x5d5dcc, 0x3c
	.globl gUnknown_85D5E08
gUnknown_85D5E08: @ 0x085D5E08
	.incbin "baserom.gba", 0x5d5e08, 0x1c
	.globl gUnknown_85D5E24
gUnknown_85D5E24: @ 0x085D5E24
	.incbin "baserom.gba", 0x5d5e24, 0x3
	.globl gUnknown_85D5E27
gUnknown_85D5E27: @ 0x085D5E27
	.incbin "baserom.gba", 0x5d5e27, 0x3
	.globl gUnknown_85D5E2A
gUnknown_85D5E2A: @ 0x085D5E2A
	.incbin "baserom.gba", 0x5d5e2a, 0x3
	.globl gUnknown_85D5E2D
gUnknown_85D5E2D: @ 0x085D5E2D
	.incbin "baserom.gba", 0x5d5e2d, 0x3
	.globl gUnknown_85D5E30
gUnknown_85D5E30: @ 0x085D5E30
	.incbin "baserom.gba", 0x5d5e30, 0x10
	.globl gUnknown_85D5E40
gUnknown_85D5E40: @ 0x085D5E40
	.incbin "baserom.gba", 0x5d5e40, 0x2
	.globl gUnknown_85D5E42
gUnknown_85D5E42: @ 0x085D5E42
	.incbin "baserom.gba", 0x5d5e42, 0x2b
	.globl gUnknown_85D5E6D
gUnknown_85D5E6D: @ 0x085D5E6D
	.incbin "baserom.gba", 0x5d5e6d, 0x1
	.globl gUnknown_85D5E6E
gUnknown_85D5E6E: @ 0x085D5E6E
	.incbin "baserom.gba", 0x5d5e6e, 0x1f
	.globl gUnknown_85D5E8D
gUnknown_85D5E8D: @ 0x085D5E8D
	.incbin "baserom.gba", 0x5d5e8d, 0x8ff
	.globl gUnknown_85D678C
gUnknown_85D678C: @ 0x085D678C
	.incbin "baserom.gba", 0x5d678c, 0x100
	.globl gUnknown_85D688C
gUnknown_85D688C: @ 0x085D688C
	.incbin "baserom.gba", 0x5d688c, 0x40
	.globl gUnknown_85D68CC
gUnknown_85D68CC: @ 0x085D68CC
	.incbin "baserom.gba", 0x5d68cc, 0x28
	.globl gUnknown_85D68F4
gUnknown_85D68F4: @ 0x085D68F4
	.incbin "baserom.gba", 0x5d68f4, 0xc
	.globl gUnknown_85D6900
gUnknown_85D6900: @ 0x085D6900
	.incbin "baserom.gba", 0x5d6900, 0x14
	.globl gUnknown_85D6914
gUnknown_85D6914: @ 0x085D6914
	.incbin "baserom.gba", 0x5d6914, 0x10
	.globl gUnknown_85D6924
gUnknown_85D6924: @ 0x085D6924
	.incbin "baserom.gba", 0x5d6924, 0x10
	.globl gUnknown_85D6934
gUnknown_85D6934: @ 0x085D6934
	.incbin "baserom.gba", 0x5d6934, 0xb68
	.globl gUnknown_85D749C
gUnknown_85D749C: @ 0x085D749C
	.incbin "baserom.gba", 0x5d749c, 0xc
	.globl gUnknown_85D74A8
gUnknown_85D74A8: @ 0x085D74A8
	.incbin "baserom.gba", 0x5d74a8, 0x8
	.globl gUnknown_85D74B0
gUnknown_85D74B0: @ 0x085D74B0
	.incbin "baserom.gba", 0x5d74b0, 0x18
	.globl gUnknown_85D74C8
gUnknown_85D74C8: @ 0x085D74C8
	.incbin "baserom.gba", 0x5d74c8, 0x20
	.globl gUnknown_85D74E8
gUnknown_85D74E8: @ 0x085D74E8
	.incbin "baserom.gba", 0x5d74e8, 0x100
	.globl gUnknown_85D75E8
gUnknown_85D75E8: @ 0x085D75E8
	.incbin "baserom.gba", 0x5d75e8, 0x20
	.globl gUnknown_85D7608
gUnknown_85D7608: @ 0x085D7608
	.incbin "baserom.gba", 0x5d7608, 0x3e4
	.globl gUnknown_85D79EC
gUnknown_85D79EC: @ 0x085D79EC
	.incbin "baserom.gba", 0x5d79ec, 0x2

	@ src/match_call.c:1204 sText_PokenavCallEllipsis
	.globl gText_Rom_5D79EE
gText_Rom_5D79EE: @ 0x085D79EE
	.string "…………\p$"
	.if (. - gText_Rom_5D79EE) > 0x6
	.error "gText_Rom_5D79EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D79EE) < 0x6
	.space 0x6 - (. - gText_Rom_5D79EE)
	.endif
	.globl gUnknown_85D79F4
gUnknown_85D79F4: @ 0x085D79F4
	.incbin "baserom.gba", 0x5d79f4, 0x20
	.globl gUnknown_85D7A14
gUnknown_85D7A14: @ 0x085D7A14
	.incbin "baserom.gba", 0x5d7a14, 0x8
	.globl gUnknown_85D7A1C
gUnknown_85D7A1C: @ 0x085D7A1C
	.incbin "baserom.gba", 0x5d7a1c, 0xc
	.globl gUnknown_85D7A28
gUnknown_85D7A28: @ 0x085D7A28
	.incbin "baserom.gba", 0x5d7a28, 0x2c
	.globl gUnknown_85D7A54
gUnknown_85D7A54: @ 0x085D7A54
	.incbin "baserom.gba", 0x5d7a54, 0x30
	.globl gUnknown_85D7A84
gUnknown_85D7A84: @ 0x085D7A84
	.incbin "baserom.gba", 0x5d7a84, 0x1c
	.globl gUnknown_85D7AA0
gUnknown_85D7AA0: @ 0x085D7AA0
	.incbin "baserom.gba", 0x5d7aa0, 0x10
	.globl gUnknown_85D7AB0
gUnknown_85D7AB0: @ 0x085D7AB0
	.incbin "baserom.gba", 0x5d7ab0, 0x54
	.globl gUnknown_85D7B04
gUnknown_85D7B04: @ 0x085D7B04
	.incbin "baserom.gba", 0x5d7b04, 0x20
	.globl gUnknown_85D7B24
gUnknown_85D7B24: @ 0x085D7B24
	.incbin "baserom.gba", 0x5d7b24, 0x4
	.globl gUnknown_85D7B28
gUnknown_85D7B28: @ 0x085D7B28
	.incbin "baserom.gba", 0x5d7b28, 0x10
	.globl gUnknown_85D7B38
gUnknown_85D7B38: @ 0x085D7B38
	.incbin "baserom.gba", 0x5d7b38, 0x8
	.globl gUnknown_85D7B40
gUnknown_85D7B40: @ 0x085D7B40

	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5D7B40
gText_Rom_5D7B40: @ 0x085D7B40
	.string "はい\nいいえ$"
	.if (. - gText_Rom_5D7B40) != 0x7
	.error "gText_Rom_5D7B40 must retain its original byte length"
	.endif
	.globl gText_Rom_5D7B43
	.set gText_Rom_5D7B43, gText_Rom_5D7B40 + 0x3
	.incbin "baserom.gba", 0x5d7b47, 0x1
	.globl gUnknown_85D7B48
gUnknown_85D7B48: @ 0x085D7B48
	.incbin "baserom.gba", 0x5d7b48, 0x20
	.globl gUnknown_85D7B68
gUnknown_85D7B68: @ 0x085D7B68
	.incbin "baserom.gba", 0x5d7b68, 0x4
	.globl gUnknown_85D7B6C
gUnknown_85D7B6C: @ 0x085D7B6C
	.incbin "baserom.gba", 0x5d7b6c, 0x4
	.globl gUnknown_85D7B70
gUnknown_85D7B70: @ 0x085D7B70
	.incbin "baserom.gba", 0x5d7b70, 0x68
	.globl gUnknown_85D7BD8
gUnknown_85D7BD8: @ 0x085D7BD8
	.incbin "baserom.gba", 0x5d7bd8, 0x20
	.globl gUnknown_85D7BF8
gUnknown_85D7BF8: @ 0x085D7BF8
	.incbin "baserom.gba", 0x5d7bf8, 0x20
	.globl gUnknown_85D7C18
gUnknown_85D7C18: @ 0x085D7C18
	.incbin "baserom.gba", 0x5d7c18, 0x20
	.globl gUnknown_85D7C38
gUnknown_85D7C38: @ 0x085D7C38
	.incbin "baserom.gba", 0x5d7c38, 0x508

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_5D8140
gText_Rom_5D8140: @ 0x085D8140
	.string "ラララ$"
	.if (. - gText_Rom_5D8140) > 0x4
	.error "gText_Rom_5D8140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D8140) < 0x4
	.space 0x4 - (. - gText_Rom_5D8140)
	.endif
	.incbin "baserom.gba", 0x5d8144, 0x8

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_5D814C
gText_Rom_5D814C: @ 0x085D814C
	.string "ラララ$"
	.if (. - gText_Rom_5D814C) > 0x4
	.error "gText_Rom_5D814C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D814C) < 0x4
	.space 0x4 - (. - gText_Rom_5D814C)
	.endif
	.incbin "baserom.gba", 0x5d8150, 0x1ae8
	.globl gUnknown_85D9C38
gUnknown_85D9C38: @ 0x085D9C38
	.incbin "baserom.gba", 0x5d9c38, 0x1100
	.globl gUnknown_85DAD38
gUnknown_85DAD38: @ 0x085DAD38
	.incbin "baserom.gba", 0x5dad38, 0x440
	.globl gUnknown_85DB178
gUnknown_85DB178: @ 0x085DB178
	.incbin "baserom.gba", 0x5db178, 0x800
	.globl gUnknown_85DB978
gUnknown_85DB978: @ 0x085DB978
	.incbin "baserom.gba", 0x5db978, 0x100
	.globl gUnknown_85DBA78
gUnknown_85DBA78: @ 0x085DBA78
	.incbin "baserom.gba", 0x5dba78, 0x60
	.globl gUnknown_85DBAD8
gUnknown_85DBAD8: @ 0x085DBAD8
	.incbin "baserom.gba", 0x5dbad8, 0x40
	.globl gUnknown_85DBB18
gUnknown_85DBB18: @ 0x085DBB18
	.incbin "baserom.gba", 0x5dbb18, 0x20
	.globl gUnknown_85DBB38
gUnknown_85DBB38: @ 0x085DBB38
	.incbin "baserom.gba", 0x5dbb38, 0x28
	.globl gUnknown_85DBB60
gUnknown_85DBB60: @ 0x085DBB60
	.incbin "baserom.gba", 0x5dbb60, 0x10
	.globl gUnknown_85DBB70
gUnknown_85DBB70: @ 0x085DBB70
	.incbin "baserom.gba", 0x5dbb70, 0x28
	.globl gUnknown_85DBB98
gUnknown_85DBB98: @ 0x085DBB98

	@ src/strings.c:992 gText_RentalPkmn2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DBB98
gText_Rom_5DBB98: @ 0x085DBB98
	.string "ポケモンレンタル$"
	.if (. - gText_Rom_5DBB98) != 0x9
	.error "gText_Rom_5DBB98 must retain its original byte length"
	.endif
	.globl gText_Rom_5DBB9C
	.set gText_Rom_5DBB9C, gText_Rom_5DBB98 + 0x4
	.globl gUnknown_85DBBA1
gUnknown_85DBBA1: @ 0x085DBBA1

	@ src/strings.c:993 gText_SelectFirstPkmn
	.globl gText_Rom_5DBBA1
gText_Rom_5DBBA1: @ 0x085DBBA1
	.string "1ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBA1) > 0x14
	.error "gText_Rom_5DBBA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBA1) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBA1)
	.endif
	.globl gUnknown_85DBBB5
gUnknown_85DBBB5: @ 0x085DBBB5

	@ src/strings.c:994 gText_SelectSecondPkmn
	.globl gText_Rom_5DBBB5
gText_Rom_5DBBB5: @ 0x085DBBB5
	.string "2ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBB5) > 0x14
	.error "gText_Rom_5DBBB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBB5) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBB5)
	.endif
	.globl gUnknown_85DBBC9
gUnknown_85DBBC9: @ 0x085DBBC9

	@ src/strings.c:995 gText_SelectThirdPkmn
	.globl gText_Rom_5DBBC9
gText_Rom_5DBBC9: @ 0x085DBBC9
	.string "3ばんめのポケモンを えらんでください$"
	.if (. - gText_Rom_5DBBC9) > 0x14
	.error "gText_Rom_5DBBC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBC9) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBC9)
	.endif
	.globl gUnknown_85DBBDD
gUnknown_85DBBDD: @ 0x085DBBDD

	@ src/strings.c:996 gText_Rent
	.globl gText_Rom_5DBBDD
gText_Rom_5DBBDD: @ 0x085DBBDD
	.string "レンタルする$"
	.if (. - gText_Rom_5DBBDD) > 0x7
	.error "gText_Rom_5DBBDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBDD) < 0x7
	.space 0x7 - (. - gText_Rom_5DBBDD)
	.endif
	.globl gUnknown_85DBBE4
gUnknown_85DBBE4: @ 0x085DBBE4
