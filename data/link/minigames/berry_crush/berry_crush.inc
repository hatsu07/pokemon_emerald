	@ pret/pokeemerald-jp direct xref for 0x082C5E74: berry_crush.s: sub_08023108
	.globl sBerryCrushBitTable
sBerryCrushBitTable: @ 0x082C5E74
	@ canonical pret/pokeemerald sBitTable: one bit per input flag
	.byte 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80
	@ pret/pokeemerald-jp direct xref for 0x082C5E7C: berry_crush.s: sub_08023108
	.globl sBerryCrushSyncPressBonus
sBerryCrushSyncPressBonus: @ 0x082C5E7C
	@ canonical pret/pokeemerald sSyncPressBonus; 5 data bytes plus alignment
	.byte 0, 1, 2, 3, 5
	.balign 4, 0
	@ pret/pokeemerald-jp direct xref for 0x082C5E84: berry_crush.s: sub_08022F24, sub_080237C4
	.globl sBerryCrushIntroOutroVibrationData
sBerryCrushIntroOutroVibrationData: @ 0x082C5E84
	@ canonical pret/pokeemerald sIntroOutroVibrationData[5][7] plus alignment
	.byte 0x04, 0x01, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x04, 0x02, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x04, 0x02
	.byte 0x00, 0xFE, 0x00, 0x00, 0x00, 0x06, 0x03, 0x01, 0xFF, 0xFD, 0xFF, 0x00, 0x06, 0x04, 0x01, 0xFE
	.byte 0xFC, 0xFE, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x082C5EA8: berry_crush.s: sub_080232E0
	.globl sBerryCrushVibrationData
sBerryCrushVibrationData: @ 0x082C5EA8
	@ canonical pret/pokeemerald sVibrationData[MAX_RFU_PLAYERS][4]
	.byte 3, 2, 1, 0
	.byte 3, 3, 1, 0
	.byte 3, 3, 2, 0
	.byte 3, 4, 2, 0
	.byte 3, 5, 3, 0
	.globl sBerryCrushMessages
sBerryCrushMessages: @ 0x082C5EBC
	@ canonical pret/pokeemerald sMessages[9]
	.4byte gText_Rom_5CC8A0
	.4byte gText_Rom_5CC8C4
	.4byte gText_Rom_5CC8E4
	.4byte gText_Rom_5CC918
	.4byte gText_Rom_5CC944
	.4byte gText_Rom_5CC95C
	.4byte gText_Rom_5CC97C
	.4byte gText_Rom_5CC99C
	.4byte gText_Rom_5CC9BC
	@ pret/pokeemerald-jp direct xref for 0x082C5EE0: berry_crush.s: sub_08020D74
	.globl gBerryCrushData_082C5EE0
gBerryCrushData_082C5EE0: @ 0x082C5EE0
	@ analyzed canonical ROM range 0x082C5EE0-0x082C5EE3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0xF8, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x082C5EE4: berry_crush.s: sub_08021DDC
	.globl gBerryCrushData_082C5EE4
gBerryCrushData_082C5EE4: @ 0x082C5EE4
	@ analyzed canonical ROM range 0x082C5EE4-0x082C5EEF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x14D1, 0x0000, 0x20C2, 0x0000, 0x30B3, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x082C5EF0: berry_crush.s: sub_080216F8, sub_08021758, sub_08021ABC, sub_08021FC0
	.globl gBerryCrushData_082C5EF0
gBerryCrushData_082C5EF0: @ 0x082C5EF0
	@ analyzed canonical ROM range 0x082C5EF0-0x082C5EF2
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x01, 0x02, 0x03
	@ pret/pokeemerald-jp direct xref for 0x082C5EF3: berry_crush.s: sub_08022360
	.globl gBerryCrushData_082C5EF3
gBerryCrushData_082C5EF3: @ 0x082C5EF3
	@ analyzed canonical ROM range 0x082C5EF3-0x082C5EF5
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x00, 0x01, 0x02
	@ pret/pokeemerald-jp direct xref for 0x082C5EF6: berry_crush.s: sub_08022360
	.globl gBerryCrushData_082C5EF6
gBerryCrushData_082C5EF6: @ 0x082C5EF6
	@ analyzed canonical ROM range 0x082C5EF6-0x082C5EF8
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x00, 0x03, 0x04
	@ pret/pokeemerald-jp direct xref for 0x082C5EF9: berry_crush.s: sub_08021FC0
	.globl gBerryCrushData_082C5EF9
gBerryCrushData_082C5EF9: @ 0x082C5EF9
	@ analyzed canonical ROM range 0x082C5EF9-0x082C5EFE
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0x01, 0x08, 0x09, 0x01, 0x06, 0x07
	@ pret/pokeemerald-jp direct xref for 0x082C5EFF: berry_crush.s: sub_08021ABC
	.globl gBerryCrushData_082C5EFF
gBerryCrushData_082C5EFF: @ 0x082C5EFF
	@ analyzed canonical ROM range 0x082C5EFF-0x082C5F03
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x01, 0x04, 0x05, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x082C5F04: berry_crush.s: sub_08021FC0
	.globl gBerryCrushData_082C5F04
gBerryCrushData_082C5F04: @ 0x082C5F04
	@ analyzed canonical ROM range 0x082C5F04-0x082C5F0B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0300, 0x1804, 0x0F0D, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x082C5F0C: berry_crush.s: sub_080222E8
	.globl gBerryCrushData_082C5F0C
gBerryCrushData_082C5F0C: @ 0x082C5F0C
	@ analyzed canonical ROM range 0x082C5F0C-0x082C5F5B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x50 entries=40
	.2byte 0x0000, 0x0900, 0x0802, 0x03ED, 0x0000, 0x0903, 0x0802, 0x03DB
	.2byte 0x0000, 0x0906, 0x0802, 0x03C9, 0x1500, 0x0903, 0x0802, 0x03B7
	.2byte 0x1500, 0x0906, 0x0802, 0x03A5, 0x00FF, 0x0000, 0x0000, 0x0000
	.2byte 0x0500, 0x1402, 0x0F10, 0x0001, 0x0500, 0x1402, 0x0F10, 0x0001
	.2byte 0x0400, 0x1602, 0x0F10, 0x0001, 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x082C5F5C: berry_crush.s: sub_08021DDC
	.globl gBerryCrushData_082C5F5C
gBerryCrushData_082C5F5C: @ 0x082C5F5C
	@ analyzed canonical ROM range 0x082C5F5C-0x082C5F63
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0806, 0x0B09, 0x0E0C, 0x100F
	@ pret/pokeemerald-jp direct xref for 0x082C5F64: berry_crush.s: sub_08021674, sub_08021758, sub_08021ABC, sub_08021FC0
	.globl sBerryCrushPressingSpeedConversionTable
sBerryCrushPressingSpeedConversionTable: @ 0x082C5F64
	@ canonical pret/pokeemerald sPressingSpeedConversionTable[8]
	.4byte 50000000, 25000000, 12500000, 6250000
	.4byte 3125000, 1562500, 781250, 390625
	@ pret/pokeemerald-jp direct xref for 0x082C5F84: berry_crush.s: sub_08020D74
	.globl gBerryCrushData_082C5F84
gBerryCrushData_082C5F84: @ 0x082C5F84
	@ analyzed canonical ROM range 0x082C5F84-0x082C6103
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x180 bytes=384
	.byte 0xAC, 0x5A, 0x5F, 0x4F, 0x1F, 0x47, 0x9F, 0x36, 0x1D, 0x2A, 0xFB, 0x25, 0x9A, 0x19, 0x58, 0x15
	.byte 0x53, 0x5F, 0xCF, 0x4E, 0x7B, 0x7E, 0xF5, 0x6D, 0x1F, 0x7C, 0x1F, 0x7C, 0x9C, 0x7F, 0x28, 0x2D
	.byte 0x53, 0x56, 0x5F, 0x4F, 0x1F, 0x47, 0x9F, 0x36, 0x1D, 0x2A, 0xFB, 0x25, 0x9A, 0x19, 0x58, 0x15
	.byte 0xBF, 0x03, 0xFC, 0x02, 0xD6, 0x5A, 0x31, 0x46, 0x1F, 0x7C, 0x1F, 0x7C, 0x9C, 0x7F, 0x28, 0x2D
	.byte 0x53, 0x56, 0x5F, 0x4F, 0x1F, 0x47, 0x9F, 0x36, 0x1D, 0x2A, 0xFB, 0x25, 0x9A, 0x19, 0x58, 0x15
	.byte 0x58, 0x7B, 0xFF, 0x7F, 0xBD, 0x7B, 0x39, 0x6B, 0x1F, 0x7C, 0x1F, 0x7C, 0x9C, 0x7F, 0x28, 0x2D
	.byte 0xDF, 0x7E, 0xB4, 0x56, 0xAC, 0x39, 0x0F, 0x46, 0x51, 0x4E, 0x72, 0x53, 0xF3, 0x6E, 0x58, 0x7B
	.byte 0x96, 0x3A, 0xF9, 0x4A, 0x3A, 0x57, 0x7C, 0x5F, 0xBE, 0x67, 0xF1, 0x25, 0x09, 0x5E, 0x28, 0x2D
	.byte 0x00, 0x00, 0x72, 0x53, 0x94, 0x57, 0xB6, 0x5F, 0xD8, 0x67, 0xFA, 0x6F, 0xFD, 0x77, 0xFF, 0x7F
	.byte 0xC8, 0x76, 0xFF, 0x7F, 0x00, 0x1F, 0xFF, 0x7F, 0x5E, 0x03, 0x1F, 0x7C, 0xBE, 0x67, 0xF1, 0x25
	.byte 0x9F, 0x36, 0xB4, 0x56, 0xAC, 0x39, 0x0F, 0x46, 0x51, 0x4E, 0x6E, 0x5E, 0xF3, 0x6E, 0x58, 0x7B
	.byte 0x96, 0x3A, 0xF9, 0x4A, 0x3A, 0x57, 0x7C, 0x5F, 0xBE, 0x67, 0xF1, 0x25, 0x09, 0x5E, 0x28, 0x2D
	.byte 0x00, 0x00, 0x72, 0x53, 0x94, 0x57, 0xB6, 0x5F, 0xD8, 0x67, 0xFA, 0x6F, 0xFD, 0x77, 0xFF, 0x7F
	.byte 0x17, 0x7D, 0xFF, 0x7F, 0xEF, 0x3D, 0x1F, 0x7C, 0xBE, 0x67, 0xF1, 0x25, 0xF6, 0x5E, 0xFF, 0x7F
	.byte 0x00, 0x7C, 0xB4, 0x56, 0xAC, 0x39, 0x0F, 0x46, 0x51, 0x4E, 0x6E, 0x5E, 0xF3, 0x6E, 0x72, 0x53
	.byte 0x96, 0x3A, 0xF9, 0x4A, 0x3A, 0x57, 0x7C, 0x5F, 0xBE, 0x67, 0xF1, 0x25, 0x09, 0x5E, 0x28, 0x2D
	.byte 0xAC, 0x5A, 0xA5, 0x1C, 0x5A, 0x6F, 0x39, 0x67, 0xBD, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0x5E, 0x12, 0x2A, 0x96, 0x3A, 0xF9, 0x4A, 0x3A, 0x57, 0x7C, 0x5F, 0xBE, 0x67, 0xFF, 0x77
	.byte 0xAC, 0x39, 0xEE, 0x41, 0x00, 0x00, 0x60, 0x09, 0x1F, 0x00, 0x46, 0x65, 0x95, 0x42, 0x28, 0x2D
	.byte 0xFF, 0x5E, 0xBF, 0x57, 0xFF, 0x03, 0x9F, 0x27, 0x3F, 0x02, 0xF8, 0x7F, 0x51, 0x7F, 0x1F, 0x7C
	.byte 0x1F, 0x7C, 0x1F, 0x7C, 0x1F, 0x7C, 0x1F, 0x7C, 0xF8, 0x67, 0x5F, 0x43, 0xFF, 0x4F, 0xFF, 0x7F
	.byte 0x00, 0x00, 0x72, 0x53, 0x94, 0x57, 0xB6, 0x5F, 0xD8, 0x67, 0xFA, 0x6F, 0xFD, 0x77, 0xB9, 0x7D
	.byte 0x55, 0x6D, 0x52, 0x4A, 0xEF, 0x3D, 0x1F, 0x7C, 0x1F, 0x7C, 0x1F, 0x7C, 0xF6, 0x5E, 0xFF, 0x7F
	@ pret/pokeemerald-jp direct xref for 0x082C6104: berry_crush.s: sub_08020D74
	.globl gBerryCrushData_082C6104
gBerryCrushData_082C6104: @ 0x082C6104
	@ confirmed GBA LZ77 stream: compressed=0xB0E, decompressed=0x2000
sLz77Block_082C6104:
	@ analyzed canonical ROM range 0x082C6104-0x082C74D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 5 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/082C6104.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_082C6C14
gLz77Asset_082C6C14: @ 0x082C6C14
	.incbin "build/graphics/berry_crush/crusher_base_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_082C6F40
gLz77Asset_082C6F40: @ 0x082C6F40
	.incbin "build/graphics/berry_crush/impact_rom_exact.4bpp.lz"
	.globl gLz77Asset_082C72BC
gLz77Asset_082C72BC: @ 0x082C72BC
	.incbin "build/graphics/berry_crush/sparkle_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_082C7408
gLz77Asset_082C7408: @ 0x082C7408
	.incbin "build/graphics/berry_crush/timer_digits_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	@ semantic exact asset for 0x082C74D4: sCrusherTop_Tilemap
	.globl sCrusherTop_Tilemap
sCrusherTop_Tilemap:
	.incbin "build/graphics/berry_crush/crusher_top.bin.lz"
	.if (. - sCrusherTop_Tilemap) != 0x130
	.error "sCrusherTop_Tilemap compressed size mismatch"
	.endif
	@ semantic exact asset for 0x082C7604: sContainerCap_Tilemap
	.globl sContainerCap_Tilemap
sContainerCap_Tilemap:
	.incbin "build/graphics/berry_crush/container_cap.bin.lz"
	.if (. - sContainerCap_Tilemap) != 0x198
	.error "sContainerCap_Tilemap compressed size mismatch"
	.endif
	@ semantic exact asset for 0x082C779C: sBg_Tilemap
	.globl sBg_Tilemap
sBg_Tilemap:
	.incbin "build/graphics/berry_crush/bg.bin.lz"
	.if (. - sBg_Tilemap) != 0x228
	.error "sBg_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x082C79C4: berry_crush.s: sub_08022434
	.globl gBerryCrushData_082C79C4
gBerryCrushData_082C79C4: @ 0x082C79C4
	@ confirmed GBA LZ77 stream: compressed=0x42, decompressed=0xC8
sLz77Block_082C79C4:
	@ analyzed canonical ROM range 0x082C79C4-0x082C7A07
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/082C79C4.bin.lz"
	.byte 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x082C7A08: berry_crush.s: sub_080222E8
	.globl sBerryCrushPlayerIdToPosId
sBerryCrushPlayerIdToPosId: @ 0x082C7A08
	@ canonical pret/pokeemerald sPlayerIdToPosId[4][5]
	.byte 1, 3, 0, 0, 0
	.byte 0, 1, 3, 0, 0
	.byte 1, 3, 2, 4, 0
	.byte 0, 1, 3, 2, 4
	@ pret/pokeemerald-jp direct xref for 0x082C7A1C: berry_crush.s: sub_080222E8
	.globl sBerryCrushPlayerCoords
sBerryCrushPlayerCoords: @ 0x082C7A1C
	@ canonical pret/pokeemerald sPlayerCoords[5]
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x00
	.byte 0xE4, 0xFF, 0xFC, 0xFF, 0xE8, 0xFF, 0x10, 0x00, 0x02, 0x00, 0x06, 0x00, 0xF0, 0xFF, 0x14, 0x00
	.byte 0xF8, 0xFF, 0x10, 0x00, 0x03, 0x14, 0x03, 0x00, 0x1C, 0x00, 0xFC, 0xFF, 0x20, 0x00, 0xF8, 0xFF
	.byte 0x04, 0x14, 0x06, 0x00, 0x10, 0x00, 0x14, 0x00, 0x10, 0x00, 0xF8, 0xFF
	.globl sBerryCrushImpactCoords
sBerryCrushImpactCoords: @ 0x082C7A58
	@ canonical pret/pokeemerald sImpactCoords base
	.space 0x1, 0x00
	@ pret/pokeemerald-jp direct xref for 0x082C7A59: berry_crush.s: sub_08021410
	.globl sBerryCrushImpactCoordsYField
sBerryCrushImpactCoordsYField: @ 0x082C7A59
	@ interior field base: canonical sImpactCoords[0][1], then interleaved x/y pairs
	.byte 0x00, 0xFF, 0x00, 0x01, 0x01
	.globl sBerryCrushSparkleCoords
sBerryCrushSparkleCoords: @ 0x082C7A5E
	@ canonical pret/pokeemerald sSparkleCoords base
	.space 0x1, 0x00
	@ pret/pokeemerald-jp direct xref for 0x082C7A5F: berry_crush.s: sub_08021410
	.globl sBerryCrushSparkleCoordsYField
sBerryCrushSparkleCoordsYField: @ 0x082C7A5F
	@ interior field base: canonical sSparkleCoords[0][1], then interleaved x/y pairs
	.byte 0x00, 0xF0, 0xFC, 0x10, 0xFC, 0xF8, 0xFE, 0x08, 0xFE, 0xE8, 0xF8, 0x18, 0xF8, 0xE0, 0xF4, 0x20
	.byte 0xF4, 0xD8, 0xF0, 0x28, 0xF0
	@ pret/pokeemerald-jp direct xref for 0x082C7A74: berry_crush.s: sub_080211D4, sub_080213D8
	.globl sBerryCrushPlayerBerrySpriteTags
sBerryCrushPlayerBerrySpriteTags: @ 0x082C7A74
	@ canonical pret/pokeemerald sPlayerBerrySpriteTags[5] plus alignment
	.2byte 5, 6, 7, 8, 9
	.balign 4, 0
	@ pret/pokeemerald-jp direct xref for 0x082C7A80: berry_crush.s: sub_08022494
	@ Berry Crush compressed sprite sheets
	.globl sBerryCrushSpriteSheets
sBerryCrushSpriteSheets: @ 0x082C7A80
	@ analyzed canonical ROM range 0x082C7A80-0x082C7AA7
	compressed_sprite_sheet gLz77Asset_082C6C14, 0x800, 1
	compressed_sprite_sheet gLz77Asset_082C6F40, 0xE00, 2
	compressed_sprite_sheet gLz77Asset_082C72BC, 0x700, 3
	compressed_sprite_sheet gLz77Asset_082C7408, 0x2C0, 4
	null_compressed_sprite_sheet
	@ pret/pokeemerald-jp direct xref for 0x082C7AA8: berry_crush.s: sub_08022494
	.globl gBerryCrushData_082C7AA8
gBerryCrushData_082C7AA8: @ 0x082C7AA8
	@ analyzed canonical ROM range 0x082C7AA8-0x082C7B97
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xF0 entries=120
	.2byte 0x60A4, 0x082C, 0x0001, 0x0000, 0x60C4, 0x082C, 0x0002, 0x0000
	.2byte 0x60E4, 0x082C, 0x0004, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0004, 0x0010, 0x0004
	.2byte 0x0020, 0x0004, 0xFFFF, 0x0000, 0x0030, 0x0002, 0x0040, 0x0002
	.2byte 0x0050, 0x0002, 0x0060, 0x0002, 0xFFFF, 0x0000, 0x0000, 0x0002
	.2byte 0x0004, 0x0002, 0x0008, 0x0002, 0x000C, 0x0002, 0x0010, 0x0002
	.2byte 0x0014, 0x0002, 0xFFFE, 0x0000, 0x0018, 0x0004, 0x001C, 0x0004
	.2byte 0x0020, 0x0004, 0x0024, 0x0004, 0x0028, 0x0004, 0x002C, 0x0004
	.2byte 0x0030, 0x0004, 0x0034, 0x0004, 0xFFFE, 0x0000, 0x0014, 0x0000
	.2byte 0xFFFF, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0100, 0x0100
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0102, 0x0000, 0x7FFE, 0x0001
	.2byte 0x0000, 0x0000, 0x0100, 0x0100, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x01FE, 0x0000, 0x7FFE, 0x0001, 0x0000, 0x0000, 0x7AC8, 0x082C
	.2byte 0x7AD0, 0x082C, 0x7AE0, 0x082C, 0x7AF4, 0x082C, 0x7B10, 0x082C
	.2byte 0x7B34, 0x082C, 0x7B3C, 0x082C, 0x7B44, 0x082C, 0x7B5C, 0x082C
	@ pret/pokeemerald-jp direct xref for 0x082C7B98: berry_crush.s: sub_08022494
	.globl gBerryCrushData_082C7B98
gBerryCrushData_082C7B98: @ 0x082C7B98
	@ analyzed canonical ROM range 0x082C7B98-0x082C7BAF
sSpriteTemplate_082C7B98: @ 0x082C7B98
	rodata_sprite_template 0x0001, 0x0001, gOamData_AffineOff_ObjNormal_64x64, 0x082C7B74, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x082C7BB0: berry_crush.s: sub_08022494
	.globl gBerryCrushData_082C7BB0
gBerryCrushData_082C7BB0: @ 0x082C7BB0
	@ analyzed canonical ROM range 0x082C7BB0-0x082C7BC7
sSpriteTemplate_082C7BB0: @ 0x082C7BB0
	rodata_sprite_template 0x0002, 0x0002, gOamData_AffineOff_ObjNormal_32x32, 0x082C7B78, 0, gDummySpriteAffineAnimTable, sub_08022784
	@ pret/pokeemerald-jp direct xref for 0x082C7BC8: berry_crush.s: sub_08022494
	.globl gBerryCrushData_082C7BC8
gBerryCrushData_082C7BC8: @ 0x082C7BC8
	@ analyzed canonical ROM range 0x082C7BC8-0x082C7BDF
sSpriteTemplate_082C7BC8: @ 0x082C7BC8
	rodata_sprite_template 0x0003, 0x0002, gOamData_AffineOff_ObjNormal_16x16, 0x082C7B80, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x082C7BE0: berry_crush.s: sub_08022494
	.globl gBerryCrushData_082C7BE0
gBerryCrushData_082C7BE0: @ 0x082C7BE0
	@ analyzed canonical ROM range 0x082C7BE0-0x082C7BF7
sSpriteTemplate_082C7BE0: @ 0x082C7BE0
	rodata_sprite_template 0x0004, 0x0004, gOamData_AffineOff_ObjNormal_8x16, 0x082C7B88, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x082C7BF8: berry_crush.s: sub_080211D4
	.globl gBerryCrushData_082C7BF8
gBerryCrushData_082C7BF8: @ 0x082C7BF8
	@ analyzed canonical ROM range 0x082C7BF8-0x082C7C0F
sSpriteTemplate_082C7BF8: @ 0x082C7BF8
	rodata_sprite_template 0x0005, 0x0005, gOamData_AffineDouble_ObjNormal_32x32, 0x082C7B8C, 0, 0x082C7B90, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x082C7C10: berry_crush.s: sub_08022494
	.globl sBerryCrushDigitObjTemplates
sBerryCrushDigitObjTemplates: @ 0x082C7C10
	@ canonical pret/pokeemerald sDigitObjTemplates[3]
	.byte 0x09, 0x02, 0x08, 0x00, 0x9C, 0x00, 0x00, 0x00, 0x98, 0x7A, 0x2C, 0x08, 0xB8, 0x7A, 0x2C, 0x08
	.byte 0x08, 0x02, 0x08, 0x00, 0xB4, 0x00, 0x00, 0x00, 0x98, 0x7A, 0x2C, 0x08, 0xB8, 0x7A, 0x2C, 0x08
	.byte 0x08, 0x02, 0x08, 0x00, 0xCC, 0x00, 0x00, 0x00, 0x98, 0x7A, 0x2C, 0x08, 0xB8, 0x7A, 0x2C, 0x08
	@ pret/pokeemerald-jp direct xref for 0x082C7C40: berry_crush.s: sub_08021758, sub_08021DDC
	.globl sBerryCrushResultsTexts
sBerryCrushResultsTexts: @ 0x082C7C40
	@ canonical pret/pokeemerald sResultsTexts[6]
	.4byte 0x085CC9DC
	.4byte 0x085CC9E0
	.4byte 0x085CC9E8
	.4byte 0x085CCA4C
	.4byte gText_Rom_5CCA58
	.4byte gText_Rom_5CCA64
	.globl sBerryCrushCommands
sBerryCrushCommands: @ 0x082C7C58
	@ canonical pret/pokeemerald sBerryCrushCommands[26]
	.4byte NULL
	.4byte sub_080229BC
	.4byte sub_08022A14
	.4byte sub_08022A78
	.4byte sub_08022B80
	.4byte sub_08022BA0
	.4byte sub_08022BC0
	.4byte sub_08022C10
	.4byte sub_08022C68
	.4byte sub_08022C80
	.4byte sub_08022DDC
	.4byte sub_08022F24
	.4byte sub_08023058
	.4byte sub_08023684
	.4byte sub_0802372C
	.4byte sub_080237C4
	.4byte sub_08023954
	.4byte sub_08023A40
	.4byte sub_08023E10
	.4byte sub_08023EFC
	.4byte sub_08023FF0
	.4byte sub_080240A8
	.4byte sub_08024184
	.4byte sub_0802420C
	.4byte sub_080242D0
	.4byte sub_08024330
	@ pret/pokeemerald-jp direct xref for 0x082C7CC0: berry_crush.s: sub_08023444
	.globl sBerryCrushSparkleThresholds
sBerryCrushSparkleThresholds: @ 0x082C7CC0
	@ canonical pret/pokeemerald sSparkleThresholds[4][4]
	.byte 2, 4, 6, 7
	.byte 3, 5, 8, 11
	.byte 3, 7, 11, 15
	.byte 4, 8, 12, 17
	@ pret/pokeemerald-jp direct xref for 0x082C7CD0: berry_crush.s: sub_08023444
	.globl sBerryCrushBigSparkleThresholds
sBerryCrushBigSparkleThresholds: @ 0x082C7CD0
	@ canonical pret/pokeemerald sBigSparkleThresholds[4]
	.byte 0x05, 0x07, 0x09, 0x0C
	@ pret/pokeemerald-jp direct xref for 0x082C7CD4: berry_crush.s: sub_08022C80, sub_08023A40, sub_080240A8
	.globl sBerryCrushReceivedPlayerBitmasks
sBerryCrushReceivedPlayerBitmasks: @ 0x082C7CD4
	@ canonical pret/pokeemerald sReceivedPlayerBitmasks[4]
	.byte 0x03, 0x07, 0x0F, 0x1F
