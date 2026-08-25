	@ pret/pokeemerald-jp direct xref for 0x085F163E: pokenav_unk_2.s: sub_081C9FC4
	.globl gPokenavUnk2Data_085F163E
gPokenavUnk2Data_085F163E: @ 0x085F163E
	@ analyzed canonical ROM range 0x085F163E-0x085F1649
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xC bytes=12
	.byte 0xFF, 0x7F, 0xFB, 0x7B, 0x18, 0x67, 0x5E, 0x02, 0x1E, 0x1B, 0xBF, 0x33
	@ pret/pokeemerald-jp direct xref for 0x085F164A: pokenav_unk_2.s: sub_081C9FFC, sub_081CA010
	.globl gPokenavUnk2Data_085F164A
gPokenavUnk2Data_085F164A: @ 0x085F164A
	@ analyzed canonical ROM range 0x085F164A-0x085F165B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x12 bytes=18
	.byte 0x9D, 0x7F, 0x1A, 0x7F, 0x7F, 0x6B, 0xFF, 0x5A, 0x57, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00
	@ semantic exact asset for 0x085F165C: sPokenavBgDotsTiles
	.globl sPokenavBgDotsTiles
sPokenavBgDotsTiles:
	.incbin "build/graphics/pokenav/bg_dots.4bpp.lz"
	.if (. - sPokenavBgDotsTiles) != 0x14
	.error "sPokenavBgDotsTiles compressed size mismatch"
	.endif
	@ semantic exact asset for 0x085F1670: sPokenavBgDotsTilemap
	.globl sPokenavBgDotsTilemap
sPokenavBgDotsTilemap:
	.incbin "build/graphics/pokenav/bg_dots.bin.lz"
	.if (. - sPokenavBgDotsTilemap) != 0xA0
	.error "sPokenavBgDotsTilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F1710: pokenav_unk_2.s: sub_081C91BC
	.globl gPokenavUnk2Data_085F1710
gPokenavUnk2Data_085F1710: @ 0x085F1710
	@ analyzed canonical ROM range 0x085F1710-0x085F172F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0x00, 0x00, 0x6A, 0x31, 0x07, 0x25, 0xAA, 0x35, 0xEC, 0x41, 0x5A, 0x57, 0xDF, 0x6B, 0x38, 0x67
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ semantic exact asset for 0x085F1730: gPokenavMessageBox_Gfx
	.globl gPokenavMessageBox_Gfx
gPokenavMessageBox_Gfx:
	.incbin "build/graphics/pokenav/message.4bpp.lz"
	.if (. - gPokenavMessageBox_Gfx) != 0x50
	.error "gPokenavMessageBox_Gfx compressed size mismatch"
	.endif
	@ semantic exact asset for 0x085F1780: gPokenavMessageBox_Tilemap
	.globl gPokenavMessageBox_Tilemap
gPokenavMessageBox_Tilemap:
	.incbin "build/graphics/pokenav/message.bin.lz"
	.if (. - gPokenavMessageBox_Tilemap) != 0xB8
	.error "gPokenavMessageBox_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F1838: pokenav_unk_2.s: sub_081C91BC
	.globl gPokenavUnk2Data_085F1838
gPokenavUnk2Data_085F1838: @ 0x085F1838
	@ analyzed canonical ROM range 0x085F1838-0x085F1857
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0xFF, 0x7F, 0x95, 0x15, 0x55, 0x4A, 0xB6, 0x56, 0x1F, 0x3B, 0xFE, 0x31, 0x94, 0x66, 0x8C, 0x79
	.byte 0xFF, 0x7F, 0xC1, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x6B, 0xB5, 0x5E
	@ semantic exact asset for 0x085F1858: sPokenavDeviceBgTiles
	.globl sPokenavDeviceBgTiles
sPokenavDeviceBgTiles:
	.incbin "build/graphics/pokenav/device_outline.4bpp.lz"
	.if (. - sPokenavDeviceBgTiles) != 0x288
	.error "sPokenavDeviceBgTiles compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F1AE0: pokenav_unk_2.s: sub_081C91BC
.globl sPokenavDeviceBgTilemap
sPokenavDeviceBgTilemap: @ 0x085F1AE0
	@ confirmed GBA LZ77 stream: compressed=0x10D, decompressed=0x500
	@ analyzed canonical ROM range 0x085F1AE0-0x085F26FB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/pokenav/device_outline_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C
	.byte 0x02, 0x00, 0x00, 0x04, 0x37, 0xF2, 0x33, 0x29, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C
	.byte 0x02, 0x00, 0x00, 0x4D, 0x6D, 0xD8, 0x7E, 0x0A, 0x51, 0x0C, 0x7B, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C
	.byte 0x02, 0x00, 0x00, 0xBE, 0x35, 0xBF, 0x52, 0x39, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C
	.byte 0x02, 0x00, 0x00, 0xB6, 0x3E, 0x5B, 0x53, 0xF0, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C
	.byte 0x02, 0x00, 0x00, 0x1F, 0x11, 0x5F, 0x2E, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F1C90
gLz77Asset_085F1C90: @ 0x085F1C90
	.incbin "build/graphics/pokenav/options/options_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x95, 0x15, 0x55, 0x4A, 0xB6, 0x56, 0x1F, 0x3B, 0xFE, 0x31, 0x94, 0x66
	.byte 0x8C, 0x79, 0xFF, 0x7F, 0xC1, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x6B
	.byte 0xB5, 0x5E
	.globl gLz77Asset_085F268C
gLz77Asset_085F268C: @ 0x085F268C
	.incbin "build/graphics/pokenav/blue_light_rom_exact.4bpp.lz"
	@ pret/pokeemerald-jp direct xref for 0x085F26FC: pokenav_unk_2.s: sub_081C91BC
	.globl gPokenavUnk2Data_085F26FC
gPokenavUnk2Data_085F26FC: @ 0x085F26FC
	@ analyzed canonical ROM range 0x085F26FC-0x085F2707
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x10F5, 0x0000, 0x217A, 0x0000, 0x31FF, 0x0000
	.4byte NULL
	.4byte sub_081C9418
	.4byte sub_081C9454
	.4byte sub_081C94F0
	.4byte sub_081C9584
	.4byte sub_081C9604
	.4byte sub_081C9674
	.4byte sub_081C96A4
	.4byte sub_081C96D4
	@ pret/pokeemerald-jp direct xref for 0x085F272C: pokenav_unk_2.s: sub_081C9770
	.globl gPokenavUnk2Data_085F272C
gPokenavUnk2Data_085F272C: @ 0x085F272C
	@ analyzed canonical ROM range 0x085F272C-0x085F273B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ struct CompressedSpriteSheet[2]; sub_081C9770 loads both entries.
	@ ANALYSIS: SEMANTIC_COMPRESSED_SPRITE_SHEET_TABLE addr=0x085F272C size=0x10 count=2
	compressed_sprite_sheet gLz77Asset_085F1C90, 0x3400, 0x0003
	compressed_sprite_sheet gLz77Asset_085F268C, 0x100, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x085F273C: pokenav_unk_2.s: sub_081C9770
	.globl gPokenavUnk2Data_085F273C
gPokenavUnk2Data_085F273C: @ 0x085F273C
	@ analyzed canonical ROM range 0x085F273C-0x085F27A7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x6C entries=54
	.2byte 0x1BF0, 0x085F, 0x0004, 0x0000, 0x1C10, 0x085F, 0x0005, 0x0000
	.2byte 0x1C30, 0x085F, 0x0006, 0x0000, 0x1C50, 0x085F, 0x0007, 0x0000
	.2byte 0x1C70, 0x085F, 0x0008, 0x0000, 0x266C, 0x085F, 0x0003, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0001
	.2byte 0x0040, 0x0004, 0x0060, 0x0002, 0x0080, 0x0003, 0x00A0, 0x0001
	.2byte 0x00C0, 0x0001, 0x00E0, 0x0004, 0x0100, 0x0001, 0x0120, 0x0002
	.2byte 0x0140, 0x0000, 0x0160, 0x0000, 0x0180, 0x0003
	@ pret/pokeemerald-jp direct xref for 0x085F27A8: pokenav_unk_2.s: sub_081CA1E8
	.globl gPokenavUnk2Data_085F27A8
gPokenavUnk2Data_085F27A8: @ 0x085F27A8
	@ analyzed canonical ROM range 0x085F27A8-0x085F27AB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x2A, 0x00, 0x14, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F27AC: pokenav_unk_2.s: sub_081C9874
	.globl gPokenavUnk2Data_085F27AC
gPokenavUnk2Data_085F27AC: @ 0x085F27AC
	@ analyzed canonical ROM range 0x085F27AC-0x085F2833
	@ pointer/nullable table
	@ ANALYSIS: U32_TABLE size=0x88 entries=34
	.4byte gPokenavUnk2Data_085F273C + 0x38 @ +0x0
	.4byte gPokenavUnk2Data_085F273C + 0x3C @ +0x4
	.4byte gPokenavUnk2Data_085F273C + 0x48 @ +0x8
	.4byte 0 @ +0xC
	.4byte 0 @ +0x10
	.4byte 0 @ +0x14
	.4byte 0x0014002A @ +0x18
	.4byte gPokenavUnk2Data_085F273C + 0x38 @ +0x1C
	.4byte gPokenavUnk2Data_085F273C + 0x3C @ +0x20
	.4byte gPokenavUnk2Data_085F273C + 0x40 @ +0x24
	.4byte gPokenavUnk2Data_085F273C + 0x48 @ +0x28
	.4byte 0 @ +0x2C
	.4byte 0 @ +0x30
	.4byte 0x0014002A @ +0x34
	.4byte gPokenavUnk2Data_085F273C + 0x38 @ +0x38
	.4byte gPokenavUnk2Data_085F273C + 0x3C @ +0x3C
	.4byte gPokenavUnk2Data_085F273C + 0x40 @ +0x40
	.4byte gPokenavUnk2Data_085F273C + 0x44 @ +0x44
	.4byte gPokenavUnk2Data_085F273C + 0x48 @ +0x48
	.4byte 0 @ +0x4C
	.4byte 0x00140038 @ +0x50
	.4byte gPokenavUnk2Data_085F273C + 0x4C @ +0x54
	.4byte gPokenavUnk2Data_085F273C + 0x50 @ +0x58
	.4byte gPokenavUnk2Data_085F273C + 0x68 @ +0x5C
	.4byte 0 @ +0x60
	.4byte 0 @ +0x64
	.4byte 0 @ +0x68
	.4byte 0x00100028 @ +0x6C
	.4byte gPokenavUnk2Data_085F273C + 0x54 @ +0x70
	.4byte gPokenavUnk2Data_085F273C + 0x58 @ +0x74
	.4byte gPokenavUnk2Data_085F273C + 0x5C @ +0x78
	.4byte gPokenavUnk2Data_085F273C + 0x60 @ +0x7C
	.4byte gPokenavUnk2Data_085F273C + 0x64 @ +0x80
	.4byte gPokenavUnk2Data_085F273C + 0x68 @ +0x84
	@ pret/pokeemerald-jp direct xref for 0x085F2834: pokenav_unk_2.s: sub_081C9E8C
	.globl gPokenavUnk2Data_085F2834
gPokenavUnk2Data_085F2834: @ 0x085F2834
	@ analyzed canonical ROM range 0x085F2834-0x085F283B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0401, 0x1611, 0x0102, 0x0008
	.4byte gText_Rom_5CB589
	.4byte gText_Rom_5CB59B
	.4byte gText_Rom_5CB5AC
	.4byte gText_Rom_5CB5BE
	.4byte gText_Rom_5CB5D0
	.4byte gText_Rom_5CB606
	.4byte gText_Rom_5CB61A
	.4byte gText_Rom_5CB62F
	.4byte gText_Rom_5CB641
	.4byte gText_Rom_5CB653
	.4byte gText_Rom_5CB665
	.4byte gText_Rom_5CB676
	.4byte gText_Rom_5CB687
	.4byte gText_Rom_5CB699
	@ pret/pokeemerald-jp direct xref for 0x085F2874: pokenav_unk_2.s: sub_081C9EC0
	.globl gPokenavUnk2Data_085F2874
gPokenavUnk2Data_085F2874: @ 0x085F2874
	@ analyzed canonical ROM range 0x085F2874-0x085F2876
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x06, 0x08, 0x07
	@ pret/pokeemerald-jp direct xref for 0x085F2877: pokenav_unk_2.s: sub_081C9F1C
	.globl gPokenavUnk2Data_085F2877
gPokenavUnk2Data_085F2877: @ 0x085F2877
	@ analyzed canonical ROM range 0x085F2877-0x085F28B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3D bytes=61
	.byte 0x06, 0x08, 0x07, 0x00, 0x00, 0x00, 0x40, 0x00, 0x80, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x12, 0x00, 0x00, 0xFF, 0x7F, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x28, 0x5F, 0x08, 0x94, 0x28, 0x5F, 0x08
	@ pret/pokeemerald-jp direct xref for 0x085F28B4: pokenav_unk_2.s: sub_081C97D8
	.globl gPokenavUnk2Data_085F28B4
gPokenavUnk2Data_085F28B4: @ 0x085F28B4
	@ analyzed canonical ROM range 0x085F28B4-0x085F28D3
	@ pointer/nullable table
	@ ANALYSIS: U32_TABLE size=0x8 entries=2
	.4byte 0x00040003 @ +0x0
	.4byte gPokenavUnk2Data_085F2877 + 0x5 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: U32_TABLE size=0x8 entries=2
	.4byte 0 @ +0xC
	.4byte gPokenavUnk2Data_085F2877 + 0x35 @ +0x10
	.4byte SpriteCallbackDummy @ +0x14
	@ ANALYSIS: U32_TABLE size=0x8 entries=2
	.4byte 0x80004000 @ +0x18
	.4byte 0x00000800 @ +0x1C
	@ pret/pokeemerald-jp direct xref for 0x085F28D4: pokenav_unk_2.s: sub_081C9DEC
	.globl gPokenavUnk2Data_085F28D4
gPokenavUnk2Data_085F28D4: @ 0x085F28D4
	@ analyzed canonical ROM range 0x085F28D4-0x085F28EB
sSpriteTemplate_085F28D4: @ 0x085F28D4
	rodata_sprite_template 0x0001, 0x0003, 0x085F28CC, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x085F28EC: pokenav_unk_2.s: sub_081CA0D8
	.globl gPokenavUnk2Data_085F28EC
gPokenavUnk2Data_085F28EC: @ 0x085F28EC
	@ analyzed canonical ROM range 0x085F28EC-0x085F28F7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x0040, 0x0400, 0x0001, 0xA260, 0x0001, 0x0000
