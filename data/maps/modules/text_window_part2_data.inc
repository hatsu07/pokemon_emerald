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
