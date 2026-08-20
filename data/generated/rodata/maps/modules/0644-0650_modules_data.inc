	@ Continuation of gTextWindowFrameTiles_2 from the previous include (0x084E6F20-0x084E703F).
	@ Remaining 0x101 bytes of split text-window frame 2.
	.incbin "build/graphics/ui/text_window/frame_02.4bpp", 0x1F, 0x101
	@ Text window frame graphics entry 3; 9 4bpp tiles.
gTextWindowFrameTiles_3: @ 0x084E7040
	@ Editable 24x24 indexed PNG; text-window frame 3.
	.incbin "build/graphics/ui/text_window/frame_03.4bpp"
	@ Text window frame graphics entry 4; 9 4bpp tiles.
gTextWindowFrameTiles_4: @ 0x084E7160
	@ Editable 24x24 indexed PNG; text-window frame 4.
	.incbin "build/graphics/ui/text_window/frame_04.4bpp"
	@ Text window frame graphics entry 5; 9 4bpp tiles.
gTextWindowFrameTiles_5: @ 0x084E7280
	@ Editable 24x24 indexed PNG; text-window frame 5.
	.incbin "build/graphics/ui/text_window/frame_05.4bpp"
	@ Text window frame graphics entry 6; 9 4bpp tiles.
gTextWindowFrameTiles_6: @ 0x084E73A0
	@ Editable 24x24 indexed PNG; text-window frame 6.
	.incbin "build/graphics/ui/text_window/frame_06.4bpp"
	@ Text window frame graphics entry 7; 9 4bpp tiles.
gTextWindowFrameTiles_7: @ 0x084E74C0
	@ Editable 24x24 indexed PNG; text-window frame 7.
	.incbin "build/graphics/ui/text_window/frame_07.4bpp"
	@ Text window frame graphics entry 8; 9 4bpp tiles.
gTextWindowFrameTiles_8: @ 0x084E75E0
	@ Editable 24x24 indexed PNG; text-window frame 8.
	.incbin "build/graphics/ui/text_window/frame_08.4bpp"
	@ Text window frame graphics entry 9; 9 4bpp tiles.
gTextWindowFrameTiles_9: @ 0x084E7700
	@ Editable 24x24 indexed PNG; text-window frame 9.
	.incbin "build/graphics/ui/text_window/frame_09.4bpp"
	@ Text window frame graphics entry 10; 9 4bpp tiles.
gTextWindowFrameTiles_10: @ 0x084E7820
	@ Editable 24x24 indexed PNG; text-window frame 10.
	.incbin "build/graphics/ui/text_window/frame_10.4bpp"
	@ Text window frame graphics entry 11; 9 4bpp tiles.
gTextWindowFrameTiles_11: @ 0x084E7940
	@ Editable 24x24 indexed PNG; text-window frame 11.
	.incbin "build/graphics/ui/text_window/frame_11.4bpp"
	@ Text window frame graphics entry 12; 9 4bpp tiles.
gTextWindowFrameTiles_12: @ 0x084E7A60
	@ Editable 24x24 indexed PNG; text-window frame 12.
	.incbin "build/graphics/ui/text_window/frame_12.4bpp"
	@ Text window frame graphics entry 13; 9 4bpp tiles.
gTextWindowFrameTiles_13: @ 0x084E7B80
	@ Editable 24x24 indexed PNG; text-window frame 13.
	.incbin "build/graphics/ui/text_window/frame_13.4bpp"
	@ Text window frame graphics entry 14; 9 4bpp tiles.
gTextWindowFrameTiles_14: @ 0x084E7CA0
	@ Editable 24x24 indexed PNG; text-window frame 14.
	.incbin "build/graphics/ui/text_window/frame_14.4bpp"
	@ Text window frame graphics entry 15; 9 4bpp tiles.
gTextWindowFrameTiles_15: @ 0x084E7DC0
	@ Editable 24x24 indexed PNG; text-window frame 15.
	.incbin "build/graphics/ui/text_window/frame_15.4bpp"
	@ Text window frame graphics entry 16; 9 4bpp tiles.
gTextWindowFrameTiles_16: @ 0x084E7EE0
	@ Editable 24x24 indexed PNG; text-window frame 16.
	.incbin "build/graphics/ui/text_window/frame_16.4bpp"
	@ Text window frame graphics entry 17; 9 4bpp tiles.
gTextWindowFrameTiles_17: @ 0x084E8000
	@ Editable 24x24 indexed PNG; text-window frame 17.
	.incbin "build/graphics/ui/text_window/frame_17.4bpp"
	@ Text window frame graphics entry 18; 9 4bpp tiles.
gTextWindowFrameTiles_18: @ 0x084E8120
	@ Editable 24x24 indexed PNG; text-window frame 18.
	.incbin "build/graphics/ui/text_window/frame_18.4bpp"
	@ Text window frame graphics entry 19; 9 4bpp tiles.
gTextWindowFrameTiles_19: @ 0x084E8240
	@ Editable 24x24 indexed PNG; text-window frame 19.
	.incbin "build/graphics/ui/text_window/frame_19.4bpp"
	@ pret/pokeemerald-jp direct xref for 0x084E8360: save_failed_screen.s: CB2_SaveFailedScreen
	.globl gSaveFailedScreenData_084E8360
gSaveFailedScreenData_084E8360: @ 0x084E8360
	@ Text window frame palettes: 20 entries, each 16 RGB5 colors (0x20 bytes).
gTextWindowFramePalette_0: @ 0x084E8360
	rodata_rgb5 12, 24, 12 @ [00] raw=0x330C
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5  9,  9, 13 @ [02] raw=0x3529
	rodata_rgb5 14, 13, 16 @ [03] raw=0x41AE
	rodata_rgb5 12, 12, 18 @ [04] raw=0x498C
	rodata_rgb5 14, 14, 21 @ [05] raw=0x55CE
	rodata_rgb5 17, 17, 25 @ [06] raw=0x6631
	rodata_rgb5 21, 23, 21 @ [07] raw=0x56F5
	rodata_rgb5 27, 26, 27 @ [08] raw=0x6F5B
	rodata_rgb5  0,  0,  0 @ [09] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [10] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [11] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [12] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [13] raw=0x0000
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_1: @ 0x084E8380
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5  0,  0,  0 @ [02] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [03] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [04] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [05] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [06] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [07] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [08] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [09] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [10] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [11] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [12] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [13] raw=0x0000
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_2: @ 0x084E83A0
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  0,  0,  0 @ [01] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [02] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [03] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [04] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [05] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [06] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [07] raw=0x0000
	rodata_rgb5 12, 19, 30 @ [08] raw=0x7A6C
	rodata_rgb5 31, 15, 14 @ [09] raw=0x39FF
	rodata_rgb5 27,  9,  8 @ [10] raw=0x213B
	rodata_rgb5 13,  6,  5 @ [11] raw=0x14CD
	rodata_rgb5 22, 23, 22 @ [12] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [13] raw=0x6F5B
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_3: @ 0x084E83C0
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  0,  0,  0 @ [01] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [02] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [03] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [04] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [05] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [06] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [07] raw=0x0000
	rodata_rgb5  7,  9,  9 @ [08] raw=0x2527
	rodata_rgb5 13, 15, 15 @ [09] raw=0x3DED
	rodata_rgb5 19, 21, 21 @ [10] raw=0x56B3
	rodata_rgb5 25, 27, 27 @ [11] raw=0x6F79
	rodata_rgb5 22, 23, 22 @ [12] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [13] raw=0x6F5B
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_4: @ 0x084E83E0
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5 27, 26, 27 @ [01] raw=0x6F5B
	rodata_rgb5  0, 27, 31 @ [02] raw=0x7F60
	rodata_rgb5 15,  7,  0 @ [03] raw=0x00EF
	rodata_rgb5 28, 15,  0 @ [04] raw=0x01FC
	rodata_rgb5 31, 31,  5 @ [05] raw=0x17FF
	rodata_rgb5  0, 13,  0 @ [06] raw=0x01A0
	rodata_rgb5  0, 21,  0 @ [07] raw=0x02A0
	rodata_rgb5 14, 31,  5 @ [08] raw=0x17EE
	rodata_rgb5 17,  0,  0 @ [09] raw=0x0011
	rodata_rgb5 25,  6,  0 @ [10] raw=0x00D9
	rodata_rgb5 31, 23,  0 @ [11] raw=0x02FF
	rodata_rgb5  0,  0, 22 @ [12] raw=0x5800
	rodata_rgb5  0, 13, 26 @ [13] raw=0x69A0
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_5: @ 0x084E8400
	rodata_rgb5 21, 22, 29 @ [00] raw=0x76D5
	rodata_rgb5 10, 14, 14 @ [01] raw=0x39CA
	rodata_rgb5 18, 23, 19 @ [02] raw=0x4EF2
	rodata_rgb5  0,  5,  0 @ [03] raw=0x00A0
	rodata_rgb5 11, 14, 13 @ [04] raw=0x35CB
	rodata_rgb5 14, 18, 16 @ [05] raw=0x424E
	rodata_rgb5 12,  9,  5 @ [06] raw=0x152C
	rodata_rgb5 23, 25, 24 @ [07] raw=0x6337
	rodata_rgb5 14, 11,  7 @ [08] raw=0x1D6E
	rodata_rgb5  8,  9,  8 @ [09] raw=0x2128
	rodata_rgb5  0,  0,  0 @ [10] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [11] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [12] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [13] raw=0x0000
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_6: @ 0x084E8420
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5 17,  6,  6 @ [01] raw=0x18D1
	rodata_rgb5 21,  7,  7 @ [02] raw=0x1CF5
	rodata_rgb5 25,  8,  8 @ [03] raw=0x2119
	rodata_rgb5 28,  9,  9 @ [04] raw=0x253C
	rodata_rgb5 31, 10, 10 @ [05] raw=0x295F
	rodata_rgb5 23, 13, 13 @ [06] raw=0x35B7
	rodata_rgb5 31, 16, 16 @ [07] raw=0x421F
	rodata_rgb5 20, 19, 19 @ [08] raw=0x4E74
	rodata_rgb5 26, 24, 24 @ [09] raw=0x631A
	rodata_rgb5 29, 28, 28 @ [10] raw=0x739D
	rodata_rgb5 27, 26, 26 @ [11] raw=0x6B5B
	rodata_rgb5  0,  0,  0 @ [12] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [13] raw=0x0000
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_7: @ 0x084E8440
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5  0,  0,  0 @ [02] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [03] raw=0x0000
	rodata_rgb5 10, 23,  0 @ [04] raw=0x02EA
	rodata_rgb5 17, 30,  5 @ [05] raw=0x17D1
	rodata_rgb5 19, 14,  5 @ [06] raw=0x15D3
	rodata_rgb5 16, 12,  3 @ [07] raw=0x0D90
	rodata_rgb5 21, 17,  8 @ [08] raw=0x2235
	rodata_rgb5 30, 12, 16 @ [09] raw=0x419E
	rodata_rgb5 31, 19, 22 @ [10] raw=0x5A7F
	rodata_rgb5 31, 30,  0 @ [11] raw=0x03DF
	rodata_rgb5 22, 23, 22 @ [12] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [13] raw=0x6F5B
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_8: @ 0x084E8460
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5  0,  0,  0 @ [02] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [03] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [04] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [05] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [06] raw=0x0000
	rodata_rgb5 28, 30, 31 @ [07] raw=0x7FDC
	rodata_rgb5 11, 16, 23 @ [08] raw=0x5E0B
	rodata_rgb5 14, 19, 26 @ [09] raw=0x6A6E
	rodata_rgb5 19, 24, 31 @ [10] raw=0x7F13
	rodata_rgb5 24, 29, 31 @ [11] raw=0x7FB8
	rodata_rgb5 22, 23, 22 @ [12] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [13] raw=0x6F5B
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_9: @ 0x084E8480
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5 31, 22, 16 @ [02] raw=0x42DF
	rodata_rgb5 31,  6,  0 @ [03] raw=0x00DF
	rodata_rgb5 31, 16, 10 @ [04] raw=0x2A1F
	rodata_rgb5 25, 14,  0 @ [05] raw=0x01D9
	rodata_rgb5 20, 15,  6 @ [06] raw=0x19F4
	rodata_rgb5 16, 12,  3 @ [07] raw=0x0D90
	rodata_rgb5 21, 17,  8 @ [08] raw=0x2235
	rodata_rgb5 31, 20,  1 @ [09] raw=0x069F
	rodata_rgb5 23, 22, 15 @ [10] raw=0x3ED7
	rodata_rgb5 27, 26, 19 @ [11] raw=0x4F5B
	rodata_rgb5 22, 23, 22 @ [12] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [13] raw=0x6F5B
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_10: @ 0x084E84A0
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5 13, 14, 14 @ [02] raw=0x39CD
	rodata_rgb5  4,  7, 25 @ [03] raw=0x64E4
	rodata_rgb5 10, 16, 28 @ [04] raw=0x720A
	rodata_rgb5 16, 19, 27 @ [05] raw=0x6E70
	rodata_rgb5 20, 22, 28 @ [06] raw=0x72D4
	rodata_rgb5 23, 25, 29 @ [07] raw=0x7737
	rodata_rgb5 27, 28, 30 @ [08] raw=0x7B9B
	rodata_rgb5  0,  0,  0 @ [09] raw=0x0000
	rodata_rgb5 22, 13, 23 @ [10] raw=0x5DB6
	rodata_rgb5 26, 18, 29 @ [11] raw=0x765A
	rodata_rgb5 27, 22, 29 @ [12] raw=0x76DB
	rodata_rgb5 29, 26, 30 @ [13] raw=0x7B5D
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_11: @ 0x084E84C0
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5  9,  9, 13 @ [02] raw=0x3529
	rodata_rgb5 18, 11, 20 @ [03] raw=0x5172
	rodata_rgb5 14, 16,  8 @ [04] raw=0x220E
	rodata_rgb5 19, 23,  4 @ [05] raw=0x12F3
	rodata_rgb5 25, 30,  0 @ [06] raw=0x03D9
	rodata_rgb5 29, 26,  9 @ [07] raw=0x275D
	rodata_rgb5 31, 28, 18 @ [08] raw=0x4B9F
	rodata_rgb5 31, 18,  7 @ [09] raw=0x1E5F
	rodata_rgb5 12, 14, 15 @ [10] raw=0x3DCC
	rodata_rgb5 15, 19, 17 @ [11] raw=0x466F
	rodata_rgb5 19, 25, 19 @ [12] raw=0x4F33
	rodata_rgb5 25,  6,  7 @ [13] raw=0x1CD9
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_12: @ 0x084E84E0
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5 22, 23, 22 @ [02] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [03] raw=0x6F5B
	rodata_rgb5 31,  0, 31 @ [04] raw=0x7C1F
	rodata_rgb5 31,  0, 31 @ [05] raw=0x7C1F
	rodata_rgb5 15, 14, 11 @ [06] raw=0x2DCF
	rodata_rgb5 25, 21, 14 @ [07] raw=0x3AB9
	rodata_rgb5 29, 25, 17 @ [08] raw=0x473D
	rodata_rgb5  4,  9, 21 @ [09] raw=0x5524
	rodata_rgb5 11, 25, 26 @ [10] raw=0x6B2B
	rodata_rgb5  9, 14, 24 @ [11] raw=0x61C9
	rodata_rgb5 31,  0, 31 @ [12] raw=0x7C1F
	rodata_rgb5 31,  0, 31 @ [13] raw=0x7C1F
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_13: @ 0x084E8500
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5 13,  9,  2 @ [01] raw=0x092D
	rodata_rgb5 22, 23, 22 @ [02] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [03] raw=0x6F5B
	rodata_rgb5  0,  0,  0 @ [04] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [05] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [06] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [07] raw=0x0000
	rodata_rgb5 19, 15,  7 @ [08] raw=0x1DF3
	rodata_rgb5 25, 21, 13 @ [09] raw=0x36B9
	rodata_rgb5 28, 22, 14 @ [10] raw=0x3ADC
	rodata_rgb5 28, 23, 14 @ [11] raw=0x3AFC
	rodata_rgb5 29, 25, 16 @ [12] raw=0x433D
	rodata_rgb5 31, 28, 20 @ [13] raw=0x539F
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_14: @ 0x084E8520
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5 21, 15, 19 @ [02] raw=0x4DF5
	rodata_rgb5 13, 11, 14 @ [03] raw=0x396D
	rodata_rgb5 10, 12, 19 @ [04] raw=0x4D8A
	rodata_rgb5 23, 19, 26 @ [05] raw=0x6A77
	rodata_rgb5 25, 22, 27 @ [06] raw=0x6ED9
	rodata_rgb5 27, 25, 28 @ [07] raw=0x733B
	rodata_rgb5 29, 28, 29 @ [08] raw=0x779D
	rodata_rgb5  0,  0,  0 @ [09] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [10] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [11] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [12] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [13] raw=0x0000
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_15: @ 0x084E8540
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  0,  0,  0 @ [01] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [02] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [03] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [04] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [05] raw=0x0000
	rodata_rgb5  6,  7, 24 @ [06] raw=0x60E6
	rodata_rgb5  4,  5, 14 @ [07] raw=0x38A4
	rodata_rgb5 30, 30,  6 @ [08] raw=0x1BDE
	rodata_rgb5 15, 15,  6 @ [09] raw=0x19EF
	rodata_rgb5 31,  9,  8 @ [10] raw=0x213F
	rodata_rgb5 19,  5,  4 @ [11] raw=0x10B3
	rodata_rgb5 22, 23, 22 @ [12] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [13] raw=0x6F5B
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_16: @ 0x084E8560
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5 13, 14, 14 @ [02] raw=0x39CD
	rodata_rgb5 22, 22, 22 @ [03] raw=0x5AD6
	rodata_rgb5 10, 12, 19 @ [04] raw=0x4D8A
	rodata_rgb5 24, 22, 21 @ [05] raw=0x56D8
	rodata_rgb5 25, 24, 23 @ [06] raw=0x5F19
	rodata_rgb5 27, 26, 26 @ [07] raw=0x6B5B
	rodata_rgb5 29, 28, 28 @ [08] raw=0x739D
	rodata_rgb5  0,  0,  0 @ [09] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [10] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [11] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [12] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [13] raw=0x0000
	rodata_rgb5 31, 31, 30 @ [14] raw=0x7BFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_17: @ 0x084E8580
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5  0,  0,  0 @ [02] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [03] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [04] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [05] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [06] raw=0x0000
	rodata_rgb5 31, 31, 20 @ [07] raw=0x53FF
	rodata_rgb5 23, 18,  1 @ [08] raw=0x0657
	rodata_rgb5 31, 23,  0 @ [09] raw=0x02FF
	rodata_rgb5 31, 28,  0 @ [10] raw=0x039F
	rodata_rgb5 31, 31, 18 @ [11] raw=0x4BFF
	rodata_rgb5 22, 23, 22 @ [12] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [13] raw=0x6F5B
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_18: @ 0x084E85A0
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  5,  6,  6 @ [01] raw=0x18C5
	rodata_rgb5 22, 23, 22 @ [02] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [03] raw=0x6F5B
	rodata_rgb5 12, 16,  7 @ [04] raw=0x1E0C
	rodata_rgb5 31, 15, 10 @ [05] raw=0x29FF
	rodata_rgb5 27, 12,  6 @ [06] raw=0x199B
	rodata_rgb5 20,  6,  2 @ [07] raw=0x08D4
	rodata_rgb5 29, 31, 20 @ [08] raw=0x53FD
	rodata_rgb5 29, 26, 16 @ [09] raw=0x435D
	rodata_rgb5 31,  0, 31 @ [10] raw=0x7C1F
	rodata_rgb5 24, 31, 15 @ [11] raw=0x3FF8
	rodata_rgb5 20, 26, 10 @ [12] raw=0x2B54
	rodata_rgb5 16, 23,  8 @ [13] raw=0x22F0
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
gTextWindowFramePalette_19: @ 0x084E85C0
	rodata_rgb5 18, 18, 12 @ [00] raw=0x3252
	rodata_rgb5  0,  0,  0 @ [01] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [02] raw=0x0000
	rodata_rgb5  0,  0,  0 @ [03] raw=0x0000
	rodata_rgb5 31, 26, 31 @ [04] raw=0x7F5F
	rodata_rgb5 31, 22, 27 @ [05] raw=0x6EDF
	rodata_rgb5 16, 10,  3 @ [06] raw=0x0D50
	rodata_rgb5 31, 16, 16 @ [07] raw=0x421F
	rodata_rgb5 29,  8,  8 @ [08] raw=0x211D
	rodata_rgb5 19, 26, 19 @ [09] raw=0x4F53
	rodata_rgb5 13, 20, 13 @ [10] raw=0x368D
	rodata_rgb5  6, 13,  6 @ [11] raw=0x19A6
	rodata_rgb5 22, 23, 22 @ [12] raw=0x5AF6
	rodata_rgb5 27, 26, 27 @ [13] raw=0x6F5B
	rodata_rgb5 31, 31, 31 @ [14] raw=0x7FFF
	rodata_rgb5  9,  8, 10 @ [15] raw=0x2909
	@ pret/pokeemerald-jp direct xref for 0x084E85E0: text_window.s: LoadMessageBoxGfx
	.globl gTextWindowData_084E85E0
gTextWindowData_084E85E0: @ 0x084E85E0
gMessageBoxFrameTiles: @ 0x084E85E0
	@ Message box frame graphics loaded by LoadMessageBoxGfx; 14 4bpp tiles (0x1C0 bytes).
	@ Editable 56x16 indexed PNG; canonical 7x2 tile message-box sheet.
	.incbin "build/graphics/ui/text_window/message_box.4bpp"
	.if (. - gMessageBoxFrameTiles) != 0x1C0
	.error "gMessageBoxFrameTiles must be 0x1C0 bytes"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x084E87A0: text_window.s: stdpal_get
	.globl gTextWindowData_084E87A0
gTextWindowData_084E87A0: @ 0x084E87A0
	@ Standard text palettes returned by stdpal_get; 5 entries.
gStandardTextPalette_0: @ 0x084E87A0
	rodata_rgb5 14, 25, 20 @ [00] raw=0x532E
	rodata_rgb5 31, 31, 31 @ [01] raw=0x7FFF
	rodata_rgb5 12, 12, 12 @ [02] raw=0x318C
	rodata_rgb5 26, 26, 25 @ [03] raw=0x675A
	rodata_rgb5 28,  1,  1 @ [04] raw=0x043C
	rodata_rgb5 31, 23, 14 @ [05] raw=0x3AFF
	rodata_rgb5  4, 19,  1 @ [06] raw=0x0664
	rodata_rgb5 18, 30, 18 @ [07] raw=0x4BD2
	rodata_rgb5  6, 10, 25 @ [08] raw=0x6546
	rodata_rgb5 20, 24, 30 @ [09] raw=0x7B14
	rodata_rgb5 31, 31, 31 @ [10] raw=0x7FFF
	rodata_rgb5 28, 29, 28 @ [11] raw=0x73BC
	rodata_rgb5 31, 31, 31 @ [12] raw=0x7FFF
	rodata_rgb5  0, 31, 19 @ [13] raw=0x4FE0
	rodata_rgb5  0, 25, 23 @ [14] raw=0x5F20
	rodata_rgb5  9, 14, 20 @ [15] raw=0x51C9
gStandardTextPalette_1: @ 0x084E87C0
	rodata_rgb5 14, 25, 20 @ [00] raw=0x532E
	rodata_rgb5 31, 31, 31 @ [01] raw=0x7FFF
	rodata_rgb5 12, 12, 12 @ [02] raw=0x318C
	rodata_rgb5 26, 26, 25 @ [03] raw=0x675A
	rodata_rgb5 28,  1,  1 @ [04] raw=0x043C
	rodata_rgb5 31, 23, 14 @ [05] raw=0x3AFF
	rodata_rgb5  4, 19,  1 @ [06] raw=0x0664
	rodata_rgb5 18, 30, 18 @ [07] raw=0x4BD2
	rodata_rgb5  6, 10, 25 @ [08] raw=0x6546
	rodata_rgb5 20, 24, 30 @ [09] raw=0x7B14
	rodata_rgb5 31, 31, 31 @ [10] raw=0x7FFF
	rodata_rgb5 25, 25, 27 @ [11] raw=0x6F39
	rodata_rgb5 25, 25, 27 @ [12] raw=0x6F39
	rodata_rgb5 28, 30, 31 @ [13] raw=0x7FDC
	rodata_rgb5 25, 25, 27 @ [14] raw=0x6F39
	rodata_rgb5 13, 14, 15 @ [15] raw=0x3DCD
gStandardTextPalette_2: @ 0x084E87E0
	rodata_rgb5 14, 25, 20 @ [00] raw=0x532E
	rodata_rgb5 31, 31, 31 @ [01] raw=0x7FFF
	rodata_rgb5 12, 12, 12 @ [02] raw=0x318C
	rodata_rgb5 26, 26, 25 @ [03] raw=0x675A
	rodata_rgb5 28,  1,  1 @ [04] raw=0x043C
	rodata_rgb5 31, 23, 14 @ [05] raw=0x3AFF
	rodata_rgb5  4, 19,  1 @ [06] raw=0x0664
	rodata_rgb5 18, 30, 18 @ [07] raw=0x4BD2
	rodata_rgb5  6, 10, 25 @ [08] raw=0x6546
	rodata_rgb5 20, 24, 30 @ [09] raw=0x7B14
	rodata_rgb5 31, 31, 31 @ [10] raw=0x7FFF
	rodata_rgb5  9, 25, 29 @ [11] raw=0x7729
	rodata_rgb5  6, 20, 29 @ [12] raw=0x7686
	rodata_rgb5  0, 11, 16 @ [13] raw=0x4160
	rodata_rgb5  3, 12, 24 @ [14] raw=0x6183
	rodata_rgb5  2, 14, 28 @ [15] raw=0x71C2
gStandardTextPalette_3: @ 0x084E8800
	rodata_rgb5 14, 25, 20 @ [00] raw=0x532E
	rodata_rgb5 31, 31, 31 @ [01] raw=0x7FFF
	rodata_rgb5 12, 12, 12 @ [02] raw=0x318C
	rodata_rgb5 26, 26, 25 @ [03] raw=0x675A
	rodata_rgb5 28,  1,  1 @ [04] raw=0x043C
	rodata_rgb5 31, 23, 14 @ [05] raw=0x3AFF
	rodata_rgb5  4, 19,  1 @ [06] raw=0x0664
	rodata_rgb5 18, 30, 18 @ [07] raw=0x4BD2
	rodata_rgb5  6, 10, 25 @ [08] raw=0x6546
	rodata_rgb5 20, 24, 30 @ [09] raw=0x7B14
	rodata_rgb5 31,  0, 31 @ [10] raw=0x7C1F
	rodata_rgb5 25, 26, 26 @ [11] raw=0x6B59
	rodata_rgb5 19, 25, 27 @ [12] raw=0x6F33
	rodata_rgb5 12, 14, 15 @ [13] raw=0x3DCC
	rodata_rgb5  8, 21, 28 @ [14] raw=0x72A8
	rodata_rgb5 16, 20, 22 @ [15] raw=0x5A90
gStandardTextPalette_4: @ 0x084E8820
	rodata_rgb5 14, 25, 20 @ [00] raw=0x532E
	rodata_rgb5 31, 31, 31 @ [01] raw=0x7FFF
	rodata_rgb5 12, 12, 12 @ [02] raw=0x318C
	rodata_rgb5 26, 26, 25 @ [03] raw=0x675A
	rodata_rgb5 28,  1,  1 @ [04] raw=0x043C
	rodata_rgb5 31, 23, 14 @ [05] raw=0x3AFF
	rodata_rgb5  4, 19,  1 @ [06] raw=0x0664
	rodata_rgb5 18, 30, 18 @ [07] raw=0x4BD2
	rodata_rgb5  6, 10, 25 @ [08] raw=0x6546
	rodata_rgb5 20, 24, 30 @ [09] raw=0x7B14
	rodata_rgb5  7, 12, 14 @ [10] raw=0x3987
	rodata_rgb5 16, 16, 16 @ [11] raw=0x4210
	rodata_rgb5 20, 20, 20 @ [12] raw=0x5294
	rodata_rgb5 24, 24, 25 @ [13] raw=0x6718
	rodata_rgb5 28, 28, 29 @ [14] raw=0x779C
	rodata_rgb5  8, 11, 13 @ [15] raw=0x3568
	@ pret/pokeemerald-jp direct xref for 0x084E8840: text_window.s: GetOverworldTextboxPalettePtr
	.globl gTextWindowData_084E8840
gTextWindowData_084E8840: @ 0x084E8840
	@ Palette returned by GetOverworldTextboxPalettePtr.
gOverworldTextboxPalette: @ 0x084E8840
	rodata_rgb5 14, 25, 20 @ [00] raw=0x532E
	rodata_rgb5 31, 31, 31 @ [01] raw=0x7FFF
	rodata_rgb5 12, 12, 12 @ [02] raw=0x318C
	rodata_rgb5 26, 26, 25 @ [03] raw=0x675A
	rodata_rgb5 28,  1,  1 @ [04] raw=0x043C
	rodata_rgb5 31, 23, 14 @ [05] raw=0x3AFF
	rodata_rgb5  4, 19,  1 @ [06] raw=0x0664
	rodata_rgb5 18, 30, 18 @ [07] raw=0x4BD2
	rodata_rgb5  6, 10, 25 @ [08] raw=0x6546
	rodata_rgb5 20, 24, 30 @ [09] raw=0x7B14
	rodata_rgb5 31, 31, 31 @ [10] raw=0x7FFF
	rodata_rgb5 28, 29, 28 @ [11] raw=0x73BC
	rodata_rgb5 31, 31, 31 @ [12] raw=0x7FFF
	rodata_rgb5  0, 31, 19 @ [13] raw=0x4FE0
	rodata_rgb5  0, 25, 23 @ [14] raw=0x5F20
	rodata_rgb5  9, 14, 20 @ [15] raw=0x51C9
	@ pret/pokeemerald-jp direct xref for 0x084E8860: text_window.s: GetWindowFrameTilesPal, LoadWindowGfx, sub_080985F4
	.globl gTextWindowData_084E8860
gTextWindowData_084E8860: @ 0x084E8860
	@ 20-entry table of {tiles, palette} pairs indexed by window frame type.
	.4byte gTextWindowFrameTiles_0
	.4byte gTextWindowFramePalette_0
	.4byte gTextWindowFrameTiles_1
	.4byte gTextWindowFramePalette_1
	.4byte gTextWindowFrameTiles_2
	.4byte gTextWindowFramePalette_2
	.4byte gTextWindowFrameTiles_3
	.4byte gTextWindowFramePalette_3
	.4byte gTextWindowFrameTiles_4
	.4byte gTextWindowFramePalette_4
	.4byte gTextWindowFrameTiles_5
	.4byte gTextWindowFramePalette_5
	.4byte gTextWindowFrameTiles_6
	.4byte gTextWindowFramePalette_6
	.4byte gTextWindowFrameTiles_7
	.4byte gTextWindowFramePalette_7
	.4byte gTextWindowFrameTiles_8
	.4byte gTextWindowFramePalette_8
	.4byte gTextWindowFrameTiles_9
	.4byte gTextWindowFramePalette_9
	.4byte gTextWindowFrameTiles_10
	.4byte gTextWindowFramePalette_10
	.4byte gTextWindowFrameTiles_11
	.4byte gTextWindowFramePalette_11
	.4byte gTextWindowFrameTiles_12
	.4byte gTextWindowFramePalette_12
	.4byte gTextWindowFrameTiles_13
	.4byte gTextWindowFramePalette_13
	.4byte gTextWindowFrameTiles_14
	.4byte gTextWindowFramePalette_14
	.4byte gTextWindowFrameTiles_15
	.4byte gTextWindowFramePalette_15
	.4byte gTextWindowFrameTiles_16
	.4byte gTextWindowFramePalette_16
	.4byte gTextWindowFrameTiles_17
	.4byte gTextWindowFramePalette_17
	.4byte gTextWindowFrameTiles_18
	.4byte gTextWindowFramePalette_18
	.4byte gTextWindowFrameTiles_19
	.4byte gTextWindowFramePalette_19
	.globl gMapRecord_Rom_4E8900
gMapRecord_Rom_4E8900: @ 0x084E8900
	.space 0x4, 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E8904: scrcmd.s: ScrCmd_call_if, ScrCmd_callstd_if, ScrCmd_goto_if, ScrCmd_gotostd_if, ScrCmd_vcall_if (+1 more)
	.globl gScrcmdData_084E8904
gScrcmdData_084E8904: @ 0x084E8904
gScriptConditionResultTable: @ 0x084E8904
	@ Indexed by condition * 3 + ScriptContext.comparisonResult.
	.byte 1, 0, 0 @ condition 0
	.byte 0, 1, 0 @ condition 1
	.byte 0, 0, 1 @ condition 2
	.byte 1, 1, 0 @ condition 3
	.byte 0, 1, 1 @ condition 4
	.byte 1, 0, 1 @ condition 5
	.byte 0, 0 @ padding
	@ pret/pokeemerald-jp direct xref for 0x084E8918: scrcmd.s: ScrCmd_bufferboxname, ScrCmd_bufferdecorationname, ScrCmd_bufferitemname, ScrCmd_bufferleadmonspeciesname, ScrCmd_buffermovename (+8 more)
	.globl gScrcmdData_084E8918
gScrcmdData_084E8918: @ 0x084E8918
gScriptStringVarPointers: @ 0x084E8918
	.4byte 0x02021C40 @ gStringVar1
	.4byte 0x02021C54 @ gStringVar2
	.4byte 0x02021C68 @ gStringVar3
	.globl gMapU32Table_Rom_4E8924
gMapU32Table_Rom_4E8924: @ 0x084E8924
	@ Resolved pointer table; original ROM range 0x4E8924..0x4E898B.
	.4byte TYPE_FIGHT
	.4byte CoordEventWeather_Clouds
	.4byte TYPE_FLYING
	.4byte CoordEventWeather_Sunny
	.4byte TYPE_POISON
	.4byte CoordEventWeather_Dark
	.4byte GROWTH_FAST
	.4byte CoordEventWeather_Sandstorm
	.4byte TYPE_ROCK
	.4byte CoordEventWeather_Thunderstorm
	.4byte TYPE_BUG
	.4byte CoordEventWeather_LightRain
	.4byte TYPE_GHOST
	.4byte CoordEventWeather_Snow
	.4byte TYPE_STEEL
	.4byte CoordEventWeather_Ash
	.4byte ABILITY_STATIC
	.4byte CoordEventWeather_Fog
	.4byte TYPE_FIRE
	.4byte CoordEventWeather_DiagonalFog
	.4byte TYPE_WATER
	.4byte CoordEventWeather_Drought
	.4byte MAP_NUM_ROUTE105
	.4byte CoordEventWeather_Route119Cycle
	.4byte MAP_NUM_ROUTE106
	.4byte CoordEventWeather_Route123Cycle
	.globl gMapU32Table_Rom_4E898C
gMapU32Table_Rom_4E898C: @ 0x084E898C
	.4byte DummyPerStepCallback
	.4byte AshGrassPerStepCallback
	.4byte FortreeBridgePerStepCallback
	.4byte PacifidlogBridgePerStepCallback
	.4byte SootopolisGymIcePerStepCallback
	.4byte EndTruckSequence
	.4byte SecretBasePerStepCallback
	.4byte CrackedFloorPerStepCallback
	@ pret/pokeemerald-jp direct xref for 0x084E89AC: field_tasks.s: UpdateHalfSubmergedBridgeMetatiles
	.globl gFieldTasksData_084E89AC
gFieldTasksData_084E89AC: @ 0x084E89AC
gHalfSubmergedBridgeMetatileOffsets: @ 0x084E89AC
	@ Four records selected by Pacifidlog bridge metatile behavior.
	.byte 0, 0
	.2byte 0x0259
	.byte 0, 1
	.2byte 0x0261
	.byte 0, -1
	.2byte 0x0259
	.byte 0, 0
	.2byte 0x0261
	.byte 0, 0
	.2byte 0x0252
	.byte 1, 0
	.2byte 0x0253
	.byte -1, 0
	.2byte 0x0252
	.byte 0, 0
	.2byte 0x0253
	@ pret/pokeemerald-jp direct xref for 0x084E89CC: field_tasks.s: UpdateFullySubmergedBridgeMetatiles
	.globl gFieldTasksData_084E89CC
gFieldTasksData_084E89CC: @ 0x084E89CC
gFullySubmergedBridgeMetatileOffsets: @ 0x084E89CC
	.byte 0, 0
	.2byte 0x025A
	.byte 0, 1
	.2byte 0x0262
	.byte 0, -1
	.2byte 0x025A
	.byte 0, 0
	.2byte 0x0262
	.byte 0, 0
	.2byte 0x0254
	.byte 1, 0
	.2byte 0x0255
	.byte -1, 0
	.2byte 0x0254
	.byte 0, 0
	.2byte 0x0255
	@ pret/pokeemerald-jp direct xref for 0x084E89EC: field_tasks.s: UpdateFloatingBridgeMetatiles
	.globl gFieldTasksData_084E89EC
gFieldTasksData_084E89EC: @ 0x084E89EC
gFloatingBridgeMetatileOffsets: @ 0x084E89EC
	.byte 0, 0
	.2byte 0x0258
	.byte 0, 1
	.2byte 0x0260
	.byte 0, -1
	.2byte 0x0258
	.byte 0, 0
	.2byte 0x0260
	.byte 0, 0
	.2byte 0x0250
	.byte 1, 0
	.2byte 0x0251
	.byte -1, 0
	.2byte 0x0250
	.byte 0, 0
	.2byte 0x0251
	@ pret/pokeemerald-jp direct xref for 0x084E8A0C: field_tasks.s: CoordInIcePuzzleRegion, IsIcePuzzleCoordVisited, MarkIcePuzzleCoordVisited
	.globl gFieldTasksData_084E8A0C
gFieldTasksData_084E8A0C: @ 0x084E8A0C
gSootopolisGymIcePuzzleVarsByYCoord: @ 0x084E8A0C
	@ Indexed directly by map y coordinate.
	.2byte 0, 0, 0, 0, 0, 0
	.2byte 0x4001, 0x4002, 0x4003, 0x4004
	.2byte 0, 0
	.2byte 0x4005, 0x4006, 0x4007
	.2byte 0, 0
	.2byte 0x4008, 0x4009, 0x400A
	.2byte 0, 0, 0, 0, 0, 0
	@ pret/pokeemerald-jp direct xref for 0x084E8A40: field_tasks.s: SetMuddySlopeMetatile
	.globl gFieldTasksData_084E8A40
gFieldTasksData_084E8A40: @ 0x084E8A40
gMuddySlopeMetatileIdsByTimerBucket: @ 0x084E8A40
	.2byte 0x00E8, 0x00EB, 0x00EA, 0x00E9
	@ pret/pokeemerald-jp direct xref for 0x084E8A48: reset_rtc_screen.s: sub_0809E920
	.globl gResetRtcScreenData_084E8A48
gResetRtcScreenData_084E8A48: @ 0x084E8A48
gResetRtcBgTemplate: @ 0x084E8A48
	bg_template 0, 0, 31, 0, 0, 0, 0
	@ pret/pokeemerald-jp direct xref for 0x084E8A4C: reset_rtc_screen.s: sub_0809E920
	.globl gResetRtcScreenData_084E8A4C
gResetRtcScreenData_084E8A4C: @ 0x084E8A4C
gResetRtcWindowTemplates: @ 0x084E8A4C
	window_template 0, 1, 1, 19, 9, 15, 0x155
	window_template 0, 4, 15, 22, 4, 15, 0xFD
	null_window_template
	@ pret/pokeemerald-jp direct xref for 0x084E8A64: reset_rtc_screen.s: Task_ResetRtc_0
	.globl gResetRtcScreenData_084E8A64
gResetRtcScreenData_084E8A64: @ 0x084E8A64
gResetRtcChooseTimeWindowTemplate: @ 0x084E8A64
	window_template 0, 4, 9, 21, 2, 15, 0xD3

	@ asm/reset_rtc_screen.s:427 PrintTime
	.globl gText_Rom_4E8A6C
gText_Rom_4E8A6C: @ 0x084E8A6C
gText_ResetRtcDaySuffix: @ 0x084E8A6C
gResetRtcCursorStateInfoBase: @ 0x084E8A6C
	.string "にち{EOS}"
	.if (. - gText_Rom_4E8A6C) > 0x3
	.error "gText_Rom_4E8A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8A6C) < 0x3
	.space 0x3 - (. - gText_Rom_4E8A6C)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x084E8A6F: reset_rtc_screen.s: PrintTime
	.globl gResetRtcScreenData_084E8A6F
gResetRtcScreenData_084E8A6F: @ 0x084E8A6F
gText_ResetRtcTimeColon: @ 0x084E8A6F
	.string ":{EOS}"

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_4E8A71
gText_Rom_4E8A71: @ 0x084E8A71
	.string "けってい{EOS}"
	.if (. - gText_Rom_4E8A71) > 0x5
	.error "gText_Rom_4E8A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8A71) < 0x5
	.space 0x5 - (. - gText_Rom_4E8A71)
	.endif
	@ asm/reset_rtc_screen.s:677 indexes gResetRtcCursorStateInfoBase by cursor state * 12.
gResetRtcCursorStateInfoPadding: @ 0x084E8A76
	.2byte 0

gResetRtcCursorStateInfos: @ 0x084E8A78
	@ State 1: day count.
	.2byte 3 @ Task data halfword offset from data[0]
	.2byte 1, 9999 @ min, max
	.byte 0, 2 @ left, right cursor states
	.4byte 0
	@ State 2: hour.
	.2byte 4 @ Task data halfword offset from data[0]
	.2byte 0, 23 @ min, max
	.byte 1, 3 @ left, right cursor states
	.4byte 0
	@ State 3: minute.
	.2byte 5 @ Task data halfword offset from data[0]
	.2byte 0, 59 @ min, max
	.byte 2, 4 @ left, right cursor states
	.4byte 0
	@ State 4: second.
	.2byte 6 @ Task data halfword offset from data[0]
	.2byte 0, 59 @ min, max
	.byte 3, 5 @ left, right cursor states
	.4byte 0
	@ State 5: confirm selection.
	.2byte 7 @ selection-only state
	.2byte 0, 0
	.byte 4, 0 @ left, right cursor states
	.4byte 6 @ exit state used by cursor callbacks

gResetRtcCursorOam: @ 0x084E8AB4
	rodata_sprite_oam_data 0, 0, 0, 0, 0, (OAM_SQUARE >> 14), 0, 0, (OAM_SIZE_0 >> 30), 0, 0, 0, 0

gResetRtcCursorTiles_0: @ 0x084E8ABC
	@ Editable 8x8 indexed PNG; reset-RTC cursor frame 0.
	.incbin "build/graphics/ui/reset_rtc/cursor_0.4bpp"
gResetRtcCursorTiles_1: @ 0x084E8ADC
	@ Editable 8x8 indexed PNG; reset-RTC cursor frame 1.
	.incbin "build/graphics/ui/reset_rtc/cursor_1.4bpp"

gResetRtcCursorPalette: @ 0x084E8AFC
	@ Only the first colors are distinct; LoadSpritePalette copies through the following compact sprite tables.
	.2byte 0x0000, 0x001F, 0x2529, 0x0000

gResetRtcCursorFrameImages: @ 0x084E8B04
	sprite_frame_image gResetRtcCursorTiles_0, 0x20
	sprite_frame_image gResetRtcCursorTiles_1, 0x20
