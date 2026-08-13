	@ pret/pokeemerald-jp direct xref for 0x085F41A8: pokenav_unk_4.s: sub_081CB780
	.globl gPokenavUnk4Data_085F41A8
gPokenavUnk4Data_085F41A8: @ 0x085F41A8
	@ analyzed canonical ROM range 0x085F41A8-0x085F41AF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0101, 0x1C0C, 0x0104, 0x000A
	@ pret/pokeemerald-jp direct xref for 0x085F41B0: pokenav_unk_4.s: sub_081CB968
	.globl gPokenavUnk4Data_085F41B0
gPokenavUnk4Data_085F41B0: @ 0x085F41B0
	@ analyzed canonical ROM range 0x085F41B0-0x085F41B7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x8
	.byte 0x58, 0x40, 0x5F, 0x08, 0x40, 0x00, 0x07, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F41B8: pokenav_unk_4.s: sub_081CB968
	.globl gPokenavUnk4Data_085F41B8
gPokenavUnk4Data_085F41B8: @ 0x085F41B8
	@ analyzed canonical ROM range 0x085F41B8-0x085F41CF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x18
	.2byte 0x4038, 0x085F, 0x000C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x8000, 0x0000, 0x0400, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085F41D0: pokenav_unk_4.s: sub_081CBA44
	.globl gPokenavUnk4Data_085F41D0
gPokenavUnk4Data_085F41D0: @ 0x085F41D0
	@ analyzed canonical ROM range 0x085F41D0-0x085F41EF
	@ pointer/nullable table
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0x000C0007 @ +0x0
	.4byte 0x085F41C8 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: RAW_BLOCK size=0x4
	.4byte 0 @ +0xC
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte sub_081CBAA0 @ +0x14
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0xC0000000 @ +0x18
	.4byte 0x00000400 @ +0x1C
	@ pret/pokeemerald-jp direct xref for 0x085F41F0: pokenav_unk_4.s: sub_081CBAC4
	.globl gPokenavUnk4Data_085F41F0
gPokenavUnk4Data_085F41F0: @ 0x085F41F0
	@ analyzed canonical ROM range 0x085F41F0-0x085F4207
sSpriteTemplate_085F41F0: @ 0x085F41F0
	rodata_sprite_template 0x0008, 0x000D, 0x085F41E8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x085F4208: pokenav_unk_4.s: sub_081CC170
	.globl gPokenavUnk4Data_085F4208
gPokenavUnk4Data_085F4208: @ 0x085F4208
	@ analyzed canonical ROM range 0x085F4208-0x085F4227
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x20
	.2byte 0x0000, 0x7FFF, 0x0000, 0x6B5A, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085F4228: pokenav_unk_4.s: sub_081CC170
	.globl gPokenavUnk4Data_085F4228
gPokenavUnk4Data_085F4228:
	.globl gPokenavUnk4Data_085F4228
	@ analyzed canonical ROM range 0x085F4228-0x085F4247
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x20
	.byte 0x00, 0x00, 0x00, 0x00, 0x1F, 0x02, 0x1F, 0x21, 0x70, 0x7A, 0x42, 0x7C, 0x32, 0x4A, 0xFF, 0x7F
	.byte 0x00, 0x03, 0x16, 0x36, 0x1B, 0x70, 0xF3, 0x7F, 0x9C, 0x73, 0x8E, 0x14, 0x08, 0x26, 0x19, 0x2A
	@ pret/pokeemerald-jp direct xref for 0x085F4248: pokenav_unk_4.s: sub_081CC170
	.globl gPokenavUnk4Data_085F4248
gPokenavUnk4Data_085F4248: @ 0x085F4248
	@ confirmed GBA LZ77 stream: compressed=0x1F3, decompressed=0x800
sLz77Block_085F4248:
	@ analyzed canonical ROM range 0x085F4248-0x085F4CFB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 24 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/085F4248.bin.lz"
	.byte 0x00
	.globl gLz77Asset_085F443C
gLz77Asset_085F443C: @ 0x085F443C
	.incbin "build/assets/lz77_raw/085F443C.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_085F4480
gLz77Asset_085F4480: @ 0x085F4480
	.incbin "build/assets/lz77_raw/085F4480.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_085F44C8
gLz77Asset_085F44C8: @ 0x085F44C8
	.incbin "build/assets/lz77_raw/085F44C8.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F4518
gLz77Asset_085F4518: @ 0x085F4518
	.incbin "build/assets/lz77_raw/085F4518.bin.lz"
	.globl gLz77Asset_085F4578
gLz77Asset_085F4578: @ 0x085F4578
	.incbin "build/assets/lz77_raw/085F4578.bin.lz"
	.byte 0x00
	.globl gLz77Asset_085F45C4
gLz77Asset_085F45C4: @ 0x085F45C4
	.incbin "build/assets/lz77_raw/085F45C4.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F4618
gLz77Asset_085F4618: @ 0x085F4618
	.incbin "build/assets/lz77_raw/085F4618.bin.lz"
	.byte 0x00
	.globl gLz77Asset_085F466C
gLz77Asset_085F466C: @ 0x085F466C
	.incbin "build/assets/lz77_raw/085F466C.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_085F46AC
gLz77Asset_085F46AC: @ 0x085F46AC
	.incbin "build/assets/lz77_raw/085F46AC.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F4704
gLz77Asset_085F4704: @ 0x085F4704
	.incbin "build/assets/lz77_raw/085F4704.bin.lz"
	.byte 0x00
	.globl gLz77Asset_085F4758
gLz77Asset_085F4758: @ 0x085F4758
	.incbin "build/assets/lz77_raw/085F4758.bin.lz"
	.globl gLz77Asset_085F4788
gLz77Asset_085F4788: @ 0x085F4788
	.incbin "build/assets/lz77_raw/085F4788.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F47D4
gLz77Asset_085F47D4: @ 0x085F47D4
	.incbin "build/assets/lz77_raw/085F47D4.bin.lz"
	.globl gLz77Asset_085F482C
gLz77Asset_085F482C: @ 0x085F482C
	.incbin "build/assets/lz77_raw/085F482C.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F485C
gLz77Asset_085F485C: @ 0x085F485C
	.incbin "build/assets/lz77_raw/085F485C.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F4894
gLz77Asset_085F4894: @ 0x085F4894
	.incbin "build/assets/lz77_raw/085F4894.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_085F48D4
gLz77Asset_085F48D4: @ 0x085F48D4
	.incbin "build/assets/lz77_raw/085F48D4.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F491C
gLz77Asset_085F491C: @ 0x085F491C
	.incbin "build/assets/lz77_raw/085F491C.bin.lz"
	.byte 0x00
	.globl gLz77Asset_085F4960
gLz77Asset_085F4960: @ 0x085F4960
	.incbin "build/assets/lz77_raw/085F4960.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F4998
gLz77Asset_085F4998: @ 0x085F4998
	.incbin "build/assets/lz77_raw/085F4998.bin.lz"
	.globl gLz77Asset_085F49E0
gLz77Asset_085F49E0: @ 0x085F49E0
	.incbin "build/assets/lz77_raw/085F49E0.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_085F4A3C
gLz77Asset_085F4A3C: @ 0x085F4A3C
	.incbin "build/assets/lz77_raw/085F4A3C.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_085F4A98
gLz77Asset_085F4A98: @ 0x085F4A98
	.incbin "build/assets/lz77_raw/085F4A98.bin.lz"
	.byte 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F4CFC: pokenav_unk_4.s: sub_081CBE48
	.globl gPokenavUnk4Data_085F4CFC
gPokenavUnk4Data_085F4CFC: @ 0x085F4CFC
	@ analyzed canonical ROM range 0x085F4CFC-0x085F4D07
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0xC
	.2byte 0x11F5, 0x0000, 0x206A, 0x0000, 0x3402, 0x0000
	.globl gPokemonPointerTable_Rom_5F4D08
gPokemonPointerTable_Rom_5F4D08: @ 0x085F4D08
	.4byte NULL
	.4byte sub_081CBF9C
	.4byte sub_081CBFCC
	.4byte sub_081CC02C
	.4byte sub_081CC0B0
	@ pret/pokeemerald-jp direct xref for 0x085F4D1C: pokenav_unk_4.s: sub_081CC114
	.globl gPokenavUnk4Data_085F4D1C
gPokenavUnk4Data_085F4D1C: @ 0x085F4D1C
	@ analyzed canonical ROM range 0x085F4D1C-0x085F4D23
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x8
	.byte 0x98, 0x4A, 0x5F, 0x08, 0x00, 0x08, 0x06, 0x00
	.globl gPokemonPointerTable_Rom_5F4D24
gPokemonPointerTable_Rom_5F4D24: @ 0x085F4D24
	@ Resolved pointer table; original ROM range 0x5F4D24..0x5F4D33.
	.4byte gPokenavUnk4Data_085F4228
	.4byte TYPE_WATER
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0
	.4byte 0
	@ pret/pokeemerald-jp direct xref for 0x085F4D34: pokenav_unk_4.s: sub_081CC170
	.globl gPokenavUnk4Data_085F4D34
gPokenavUnk4Data_085F4D34: @ 0x085F4D34
	@ analyzed canonical ROM range 0x085F4D34-0x085F4D3B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x1101, 0x0C04, 0x010D, 0x004C
	@ pret/pokeemerald-jp direct xref for 0x085F4D3C: pokenav_unk_4.s: sub_081CC474, sub_081CC4B0
	.globl gPokenavUnk4Data_085F4D3C
gPokenavUnk4Data_085F4D3C: @ 0x085F4D3C
	@ analyzed canonical ROM range 0x085F4D3C-0x085F4DF3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xB8
	.byte 0x00, 0x00, 0x00, 0x00, 0x2C, 0x48, 0x5F, 0x08, 0x01, 0x00, 0x00, 0x00, 0x58, 0x47, 0x5F, 0x08
	.byte 0x02, 0x00, 0x00, 0x00, 0x5C, 0x48, 0x5F, 0x08, 0x03, 0x00, 0x00, 0x00, 0x3C, 0x44, 0x5F, 0x08
	.byte 0x04, 0x00, 0x00, 0x00, 0x80, 0x44, 0x5F, 0x08, 0x05, 0x00, 0x00, 0x00, 0x60, 0x49, 0x5F, 0x08
	.byte 0x06, 0x00, 0x00, 0x00, 0x6C, 0x46, 0x5F, 0x08, 0x07, 0x00, 0x00, 0x00, 0x3C, 0x4A, 0x5F, 0x08
	.byte 0x08, 0x00, 0x00, 0x00, 0x18, 0x45, 0x5F, 0x08, 0x08, 0x00, 0x01, 0x00, 0x78, 0x45, 0x5F, 0x08
	.byte 0x09, 0x00, 0x00, 0x00, 0x04, 0x47, 0x5F, 0x08, 0x09, 0x00, 0x01, 0x00, 0xAC, 0x46, 0x5F, 0x08
	.byte 0x0A, 0x00, 0x00, 0x00, 0xC4, 0x45, 0x5F, 0x08, 0x0A, 0x00, 0x01, 0x00, 0x18, 0x46, 0x5F, 0x08
	.byte 0x0B, 0x00, 0x00, 0x00, 0xC8, 0x44, 0x5F, 0x08, 0x0C, 0x00, 0x00, 0x00, 0xD4, 0x47, 0x5F, 0x08
	.byte 0x0C, 0x00, 0x01, 0x00, 0x88, 0x47, 0x5F, 0x08, 0x0D, 0x00, 0x00, 0x00, 0xE0, 0x49, 0x5F, 0x08
	.byte 0x0D, 0x00, 0x01, 0x00, 0x98, 0x49, 0x5F, 0x08, 0x0E, 0x00, 0x00, 0x00, 0x94, 0x48, 0x5F, 0x08
	.byte 0x0F, 0x00, 0x00, 0x00, 0xD4, 0x48, 0x5F, 0x08, 0x0F, 0x00, 0x01, 0x00, 0x1C, 0x49, 0x5F, 0x08
	.byte 0x00, 0x40, 0x00, 0x40, 0x00, 0x04, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F4DF4: pokenav_unk_4.s: sub_081CC598
	.globl gPokenavUnk4Data_085F4DF4
gPokenavUnk4Data_085F4DF4: @ 0x085F4DF4
	@ analyzed canonical ROM range 0x085F4DF4-0x085F4E0B
sSpriteTemplate_085F4DF4: @ 0x085F4DF4
	rodata_sprite_template 0x0006, 0x000B, 0x085F4DEC, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081CC634
	@ pret/pokeemerald-jp direct xref for 0x085F4E0C: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F4E0C
gPokenavUnk4Data_085F4E0C: @ 0x085F4E0C
	@ analyzed canonical ROM range 0x085F4E0C-0x085F4E2B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x20
	.byte 0x0C, 0x33, 0x8C, 0x39, 0xD7, 0x62, 0x77, 0x7B, 0xFE, 0x7F, 0x10, 0x4A, 0x7F, 0x32, 0x5F, 0x5B
	.byte 0xDF, 0x1F, 0xFF, 0x5B, 0x8E, 0x3B, 0xFA, 0x5F, 0xBF, 0x6A, 0x7F, 0x7F, 0x70, 0x7E, 0xBB, 0x7F
	@ pret/pokeemerald-jp direct xref for 0x085F4E2C: pokenav_unk_4.s: sub_081CD5F4; use_pokeblock.s: sub_08167734
	.globl gPokemonU16Table_Rom_5F4E2C
gPokemonU16Table_Rom_5F4E2C: @ 0x085F4E2C
	@ analyzed canonical ROM range 0x085F4E2C-0x085F4E4B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x20
	.2byte 0x03E0, 0x03E0, 0x03E0, 0x03E0, 0x03E0, 0x03E0, 0x03E0, 0x03E0
	.2byte 0x03E0, 0x03E0, 0x03E0, 0x03E0, 0x03E0, 0x03E0, 0x03E0, 0x03E0
	@ pret/pokeemerald-jp direct xref for 0x085F4E4C: pokenav_unk_4.s: sub_081CD5F4; use_pokeblock.s: sub_08167734
	.globl gPokemonU8Table_Rom_5F4E4C
gPokemonU8Table_Rom_5F4E4C: @ 0x085F4E4C
	@ analyzed canonical ROM range 0x085F4E4C-0x085F4E6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x20
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x8C, 0x31, 0x5A, 0x67, 0x28, 0x7F, 0x20, 0x5E, 0x7F, 0x4A, 0x77, 0x29
	.byte 0x8C, 0x39, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F4E6C: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F4E6C
gPokenavUnk4Data_085F4E6C:
	.globl sLz77Block_085F4E6C
	@ confirmed GBA LZ77 stream: compressed=0x794, decompressed=0xF20
sLz77Block_085F4E6C:
	@ analyzed canonical ROM range 0x085F4E6C-0x085F55FF
	.incbin "build/graphics/analyzed/gunknown_85f4e6c_085f4e6c.4bpp.lz"
	.if (. - sLz77Block_085F4E6C) != 0x794
	.error "sLz77Block_085F4E6C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F5600: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F5600
gPokenavUnk4Data_085F5600:
	.globl sLz77Block_085F5600
	@ confirmed GBA LZ77 stream: compressed=0x1E9, decompressed=0x800
sLz77Block_085F5600:
	@ analyzed canonical ROM range 0x085F5600-0x085F57EB
	.incbin "build/graphics/analyzed/gunknown_85f5600_085f5600.4bpp.lz"
	.if (. - sLz77Block_085F5600) != 0x1EC
	.error "sLz77Block_085F5600 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F57EC: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F57EC
gPokenavUnk4Data_085F57EC:
	.globl sLz77Block_085F57EC
	@ confirmed GBA LZ77 stream: compressed=0x11, decompressed=0x40
sLz77Block_085F57EC:
	@ analyzed canonical ROM range 0x085F57EC-0x085F57FF
	.incbin "build/graphics/analyzed/gunknown_85f57ec_085f57ec.4bpp.lz"
	.if (. - sLz77Block_085F57EC) != 0x14
	.error "sLz77Block_085F57EC compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F5800: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F5800
gPokenavUnk4Data_085F5800:
	.globl sLz77Block_085F5800
	@ confirmed GBA LZ77 stream: compressed=0xF9, decompressed=0x800
sLz77Block_085F5800:
	@ analyzed canonical ROM range 0x085F5800-0x085F58FB
	.incbin "build/graphics/analyzed/gunknown_85f5800_085f5800.4bpp.lz"
	.if (. - sLz77Block_085F5800) != 0xFC
	.error "sLz77Block_085F5800 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F58FC: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F58FC
gPokenavUnk4Data_085F58FC: @ 0x085F58FC
	@ analyzed canonical ROM range 0x085F58FC-0x085F5943
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x48
	.2byte 0x1071, 0x1072, 0x1072, 0x1072, 0x1072, 0x1072, 0x1072, 0x1072
	.2byte 0x1073, 0x1074, 0x1005, 0x1005, 0x1005, 0x1005, 0x1005, 0x1005
	.2byte 0x1005, 0x1075, 0x1074, 0x1005, 0x1005, 0x1005, 0x1005, 0x1005
	.2byte 0x1005, 0x1005, 0x1075, 0x1076, 0x1077, 0x1077, 0x1077, 0x1077
	.2byte 0x1077, 0x1077, 0x1077, 0x1078
	@ pret/pokeemerald-jp direct xref for 0x085F5944: pokenav_unk_4.s: sub_081CE118
	.globl gPokenavUnk4Data_085F5944
gPokenavUnk4Data_085F5944: @ 0x085F5944
	@ analyzed canonical ROM range 0x085F5944-0x085F5963
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x20
	.byte 0x77, 0x7B, 0x14, 0x73, 0x35, 0x73, 0xFF, 0x7F, 0xBC, 0x7B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F5964: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F5964
gPokenavUnk4Data_085F5964: @ 0x085F5964
	@ analyzed canonical ROM range 0x085F5964-0x085F596F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0xC
	.2byte 0x11F5, 0x0000, 0x21DE, 0x0000, 0x31EB, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085F5970: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F5970
gPokenavUnk4Data_085F5970: @ 0x085F5970
	@ analyzed canonical ROM range 0x085F5970-0x085F5977
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0D01, 0x0C01, 0x0F04, 0x0002
	@ pret/pokeemerald-jp direct xref for 0x085F5978: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F5978
gPokenavUnk4Data_085F5978: @ 0x085F5978
	@ analyzed canonical ROM range 0x085F5978-0x085F597F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0101, 0x0706, 0x0F02, 0x0032
	@ pret/pokeemerald-jp direct xref for 0x085F5980: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F5980
gPokenavUnk4Data_085F5980: @ 0x085F5980
	@ analyzed canonical ROM range 0x085F5980-0x085F5987
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0101, 0x051C, 0x0F02, 0x0040
	@ pret/pokeemerald-jp direct xref for 0x085F5988: pokenav_unk_4.s: sub_081CD5F4
	.globl gPokenavUnk4Data_085F5988
gPokenavUnk4Data_085F5988: @ 0x085F5988
	@ analyzed canonical ROM range 0x085F5988-0x085F598F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0D01, 0x031C, 0x0F02, 0x0040
	.globl gPokemonPointerTable_Rom_5F5990
gPokemonPointerTable_Rom_5F5990: @ 0x085F5990
	.4byte NULL
	.4byte sub_081CDADC
	.4byte sub_081CDA30
	.4byte sub_081CDC38
	.4byte sub_081CDD44
	.4byte sub_081CDE1C
	.4byte sub_081CDE60
	.globl gPokemonU32Table_Rom_5F59AC
gPokemonU32Table_Rom_5F59AC: @ 0x085F59AC
	@ Resolved pointer table; original ROM range 0x5F59AC..0x5F59BF.
	.4byte MAP_NUM_ROUTE107
	.4byte PSR_ABT_MODE
	.4byte MAP_NUM_ROUTE109
	.4byte MAP_NUM_ROUTE118
	.4byte MAP_NUM_ROUTE132
	.globl gPokemonPointerTable_Rom_5F59C0
gPokemonPointerTable_Rom_5F59C0: @ 0x085F59C0
	.4byte sub_081CE868
	.4byte sub_081CE8F8
	.4byte sub_081CE90C
	.4byte sub_081CE9AC
	@ pret/pokeemerald-jp direct xref for 0x085F59D0: pokenav_unk_4.s: sub_081CEB4C
	.globl gPokenavUnk4Data_085F59D0
gPokenavUnk4Data_085F59D0: @ 0x085F59D0
	@ analyzed canonical ROM range 0x085F59D0-0x085F59EF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x20
	.byte 0x00, 0x03, 0xAC, 0x72, 0xFF, 0x7F, 0xCD, 0x3D, 0x00, 0x00, 0xEB, 0x51, 0x06, 0x25, 0x78, 0x7F
	.byte 0x72, 0x66, 0x93, 0x66, 0x18, 0x63, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F59F0: pokenav_unk_4.s: sub_081CEB4C
	.globl gPokenavUnk4Data_085F59F0
gPokenavUnk4Data_085F59F0:
	.globl sLz77Block_085F59F0
	@ confirmed GBA LZ77 stream: compressed=0xC6, decompressed=0x200
sLz77Block_085F59F0:
	@ analyzed canonical ROM range 0x085F59F0-0x085F5AB7
	.incbin "build/graphics/analyzed/gunknown_85f59f0_085f59f0.4bpp.lz"
	.if (. - sLz77Block_085F59F0) != 0xC8
	.error "sLz77Block_085F59F0 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F5AB8: pokenav_unk_4.s: sub_081CEB4C
	.globl gPokenavUnk4Data_085F5AB8
gPokenavUnk4Data_085F5AB8:
	.globl sLz77Block_085F5AB8
	@ confirmed GBA LZ77 stream: compressed=0xC2, decompressed=0x500
sLz77Block_085F5AB8:
	@ analyzed canonical ROM range 0x085F5AB8-0x085F5B7B
	.incbin "build/graphics/analyzed/gunknown_85f5ab8_085f5ab8.4bpp.lz"
	.if (. - sLz77Block_085F5AB8) != 0xC4
	.error "sLz77Block_085F5AB8 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F5B7C: pokenav_unk_4.s: sub_081CEB4C
	.globl gPokenavUnk4Data_085F5B7C
gPokenavUnk4Data_085F5B7C: @ 0x085F5B7C
	@ analyzed canonical ROM range 0x085F5B7C-0x085F5B9B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x20
	.byte 0x00, 0x03, 0xAC, 0x72, 0xFF, 0x7F, 0xCD, 0x3D, 0x00, 0x00, 0x65, 0x7F, 0x60, 0x55, 0x9F, 0x66
	.byte 0x72, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F5B9C: pokenav_unk_4.s: sub_081CEB4C
	.globl gPokenavUnk4Data_085F5B9C
gPokenavUnk4Data_085F5B9C: @ 0x085F5B9C
	@ analyzed canonical ROM range 0x085F5B9C-0x085F5B9F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0x65, 0x20, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F5BA0: pokenav_unk_4.s: sub_081CEF4C
	.globl gPokenavUnk4Data_085F5BA0
gPokenavUnk4Data_085F5BA0: @ 0x085F5BA0
	@ analyzed canonical ROM range 0x085F5BA0-0x085F5BA3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0x7A, 0x30, 0x00, 0x00
	.globl gPokemonPointerTable_Rom_5F5BA4
gPokemonPointerTable_Rom_5F5BA4: @ 0x085F5BA4
	.4byte NULL
	.4byte sub_081CECAC
	.4byte sub_081CED14
	.4byte sub_081CED7C
	.4byte sub_081CEDE4
	.4byte sub_081CEE4C
	.4byte sub_081CEE8C
	@ pret/pokeemerald-jp direct xref for 0x085F5BC0: pokenav_unk_4.s: sub_081CEEBC
	.globl gPokenavUnk4Data_085F5BC0
gPokenavUnk4Data_085F5BC0: @ 0x085F5BC0
	@ analyzed canonical ROM range 0x085F5BC0-0x085F5BC7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0101, 0x0706, 0x0102, 0x0014
	.globl gPokemonPointerTable_Rom_5F5BC8
gPokemonPointerTable_Rom_5F5BC8: @ 0x085F5BC8
	.4byte sub_081CF260
	.4byte sub_081CF300
	.4byte sub_081CF314
	@ pret/pokeemerald-jp direct xref for 0x085F5BD4: pokenav_unk_4.s: sub_081CF58C
	.globl gPokenavUnk4Data_085F5BD4
gPokenavUnk4Data_085F5BD4: @ 0x085F5BD4
	@ analyzed canonical ROM range 0x085F5BD4-0x085F5BF3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x20
	.2byte 0x0300, 0x367F, 0x7FFF, 0x3DCD, 0x0000, 0x21B7, 0x2506, 0x4F7F
	.2byte 0x2A16, 0x3637, 0x6318, 0x7FFF, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085F5BF4: pokenav_unk_4.s: sub_081CF58C
	.globl gPokenavUnk4Data_085F5BF4
gPokenavUnk4Data_085F5BF4:
	.globl sLz77Block_085F5BF4
	@ confirmed GBA LZ77 stream: compressed=0xC6, decompressed=0x200
sLz77Block_085F5BF4:
	@ analyzed canonical ROM range 0x085F5BF4-0x085F5CBB
	.incbin "build/graphics/analyzed/gunknown_85f5bf4_085f5bf4.4bpp.lz"
	.if (. - sLz77Block_085F5BF4) != 0xC8
	.error "sLz77Block_085F5BF4 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F5CBC: pokenav_unk_4.s: sub_081CF58C
	.globl gPokenavUnk4Data_085F5CBC
gPokenavUnk4Data_085F5CBC:
	.globl sLz77Block_085F5CBC
	@ confirmed GBA LZ77 stream: compressed=0xC2, decompressed=0x500
sLz77Block_085F5CBC:
	@ analyzed canonical ROM range 0x085F5CBC-0x085F5D7F
	.incbin "build/graphics/analyzed/gunknown_85f5cbc_085f5cbc.4bpp.lz"
	.if (. - sLz77Block_085F5CBC) != 0xC4
	.error "sLz77Block_085F5CBC compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F5D80: pokenav_unk_4.s: sub_081CF58C
	.globl gPokenavUnk4Data_085F5D80
gPokenavUnk4Data_085F5D80: @ 0x085F5D80
	@ analyzed canonical ROM range 0x085F5D80-0x085F5D9F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x20
	.2byte 0x0300, 0x367F, 0x7FFF, 0x3DCD, 0x0000, 0x7F65, 0x5560, 0x669F
	.2byte 0x1072, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085F5DA0: pokenav_unk_4.s: sub_081CF58C
	.globl gPokenavUnk4Data_085F5DA0
gPokenavUnk4Data_085F5DA0: @ 0x085F5DA0
	@ analyzed canonical ROM range 0x085F5DA0-0x085F5DA3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0x65, 0x20, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F5DA4: pokenav_unk_4.s: sub_081CF9A4
	.globl gPokenavUnk4Data_085F5DA4
gPokenavUnk4Data_085F5DA4: @ 0x085F5DA4
	@ analyzed canonical ROM range 0x085F5DA4-0x085F5DA7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0x7A, 0x30, 0x00, 0x00
	.globl gPokemonPointerTable_Rom_5F5DA8
gPokemonPointerTable_Rom_5F5DA8: @ 0x085F5DA8
	.4byte NULL
	.4byte sub_081CF6D0
	.4byte sub_081CF738
	.4byte sub_081CF7A0
	.4byte sub_081CF808
	.4byte sub_081CF870
	.4byte sub_081CF8B0
	@ pret/pokeemerald-jp direct xref for 0x085F5DC4: pokenav_unk_4.s: sub_081CF8E0
	.globl gPokenavUnk4Data_085F5DC4
gPokenavUnk4Data_085F5DC4: @ 0x085F5DC4
	@ analyzed canonical ROM range 0x085F5DC4-0x085F5DCB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0101, 0x0706, 0x0102, 0x0014
	@ pret/pokeemerald-jp direct xref for 0x085F5DCC: pokenav_unk_4.s: sub_081CF8E0
	.globl gPokenavUnk4Data_085F5DCC
gPokenavUnk4Data_085F5DCC: @ 0x085F5DCC
	@ analyzed canonical ROM range 0x085F5DCC-0x085F5DD2
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x7
	.byte 0x00, 0x00, 0x00, 0xBA, 0xF7, 0x00, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085F5DD3: pokenav_unk_4.s: sub_081CF9F8
	.globl gPokenavUnk4Data_085F5DD3
gPokenavUnk4Data_085F5DD3: @ 0x085F5DD3
	@ analyzed canonical ROM range 0x085F5DD3-0x085F5DEA
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x18
	.byte 0xF7, 0x00, 0x00, 0xFC, 0x04, 0x05, 0x01, 0x06, 0xB5, 0xFC, 0x04, 0x02, 0x01, 0x03, 0xBA, 0xF9
	.byte 0x05, 0xF7, 0x01, 0x00, 0xF7, 0x02, 0x0A, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085F5DEB: pokenav_unk_4.s: sub_081CF9F8
	.globl gPokenavUnk4Data_085F5DEB
gPokenavUnk4Data_085F5DEB: @ 0x085F5DEB
	@ analyzed canonical ROM range 0x085F5DEB-0x085F5E02
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x18
	.byte 0xF7, 0x00, 0x00, 0xFC, 0x04, 0x07, 0x01, 0x08, 0xB6, 0xFC, 0x04, 0x02, 0x01, 0x03, 0xBA, 0xF9
	.byte 0x05, 0xF7, 0x01, 0x00, 0xF7, 0x02, 0x0A, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085F5E03: pokenav_unk_4.s: sub_081CF9F8
	.globl gPokenavUnk4Data_085F5E03
gPokenavUnk4Data_085F5E03: @ 0x085F5E03
	@ analyzed canonical ROM range 0x085F5E03-0x085F5E13
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x11
	.byte 0xF7, 0x00, 0x00, 0x00, 0xBA, 0xF9, 0x05, 0xF7, 0x01, 0x00, 0xF7, 0x02, 0x0A, 0xFF, 0x00, 0x00
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F5E14: pokenav_unk_10.s: sub_081CFEC4
	.globl gPokenavUnk10Data_085F5E14
gPokenavUnk10Data_085F5E14: @ 0x085F5E14
	@ analyzed canonical ROM range 0x085F5E14-0x085F5E57
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x44
	.2byte 0x0101, 0x0000, 0x0403, 0x0001, 0x0403, 0x0005, 0x0403, 0x0009
	.2byte 0x0403, 0x000D, 0x0403, 0x0011, 0x0101, 0x0015, 0x0101, 0x0016
	.2byte 0x0101, 0x0017, 0x0101, 0x0018, 0x0101, 0x0119, 0x0101, 0x011A
	.2byte 0x0101, 0x011B, 0x0101, 0x011C, 0x0101, 0x011D, 0x0101, 0x011E
	.2byte 0x0101, 0x011F
