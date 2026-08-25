	@ pret/pokeemerald-jp direct xref for 0x085AC474: cable_car.s: CableCarMainCallback_Setup
	.globl gCableCarData_085AC474
gCableCarData_085AC474: @ 0x085AC474
	@ analyzed canonical ROM range 0x085AC474-0x085AC483
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x11C0, 0x0000, 0x21D1, 0x0000, 0x31E2, 0x0000, 0x01F3, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085AC484: cable_car.s: CableCarMainCallback_Setup
.globl sGround_Tilemap
sGround_Tilemap: @ 0x085AC484
	@ confirmed GBA LZ77 stream: compressed=0x158, decompressed=0x168
	@ analyzed canonical ROM range 0x085AC484-0x085AC5DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/cable_car/ground_rom_exact.tilemap.lz"
	@ pret/pokeemerald-jp direct xref for 0x085AC5DC: cable_car.s: CableCarMainCallback_Setup
	.globl sTrees_Tilemap
sTrees_Tilemap: @ 0x085AC5DC
	@ Semantic exact-LZ asset; source: graphics/cable_car/trees.tilemap.u16.
	.incbin "build/graphics/final_remaining/cable_car_trees.bin.lz"
	.if (. - sTrees_Tilemap) != 0x184
	.error "sTrees_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AC760: cable_car.s: CableCarMainCallback_Setup
.globl sBgMountains_Tilemap
sBgMountains_Tilemap: @ 0x085AC760
	@ confirmed GBA LZ77 stream: compressed=0x1C2, decompressed=0x4B0
	@ analyzed canonical ROM range 0x085AC760-0x085AC923
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/cable_car/bg_mountains_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085AC924: cable_car.s: CableCarMainCallback_Setup
	.globl gCableCarData_085AC924
gCableCarData_085AC924: @ 0x085AC924
	@ analyzed canonical ROM range 0x085AC924-0x085AC937
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x14 entries=10
	.2byte 0x3000, 0x3001, 0x3002, 0x3003, 0x3004, 0x3005, 0x3006, 0x3007
	.2byte 0x3008, 0x3009
	@ pret/pokeemerald-jp direct xref for 0x085AC938: cable_car.s: CableCarMainCallback_Setup
	.globl gCableCarData_085AC938
gCableCarData_085AC938: @ 0x085AC938
	@ confirmed GBA LZ77 stream: compressed=0x24, decompressed=0x78
sLz77Block_085AC938:
	@ analyzed canonical ROM range 0x085AC938-0x085AC95B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x24 entries=18
	.2byte 0x7810, 0x0000, 0x0A00, 0x0B30, 0x0C30, 0x0D30, 0x0130, 0x300E
	.2byte 0x300F, 0x301E, 0xF01F, 0xFC03, 0x0300, 0x1BF0, 0x1BF0, 0x03F0
	.2byte 0x1BF0, 0x0390
	@ pret/pokeemerald-jp direct xref for 0x085AC95C: cable_car.s: CableCarMainCallback_Setup
	@ Cable Car compressed sprite sheets
	.globl sCableCarSpriteSheets
sCableCarSpriteSheets: @ 0x085AC95C
	@ analyzed canonical ROM range 0x085AC95C-0x085AC97B
	compressed_sprite_sheet gLz77Asset_08DBC238, 0x800, 1
	compressed_sprite_sheet gLz77Asset_08DBC538, 0x40, 2
	compressed_sprite_sheet gLz77Asset_08DBC568, 0x80, 3
	null_compressed_sprite_sheet
	@ pret/pokeemerald-jp direct xref for 0x085AC97C: cable_car.s: CableCarMainCallback_Setup
	.globl gCableCarData_085AC97C
gCableCarData_085AC97C: @ 0x085AC97C
	@ analyzed canonical ROM range 0x085AC97C-0x085AC9A3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x28 entries=20
	.2byte 0xA840, 0x08DB, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0300, 0xC000, 0x0800, 0x0000, 0x4300, 0x0000, 0x0800, 0x0000
	.2byte 0x0300, 0x4000, 0x0800, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085AC9A4: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9A4
gCableCarData_085AC9A4: @ 0x085AC9A4
	@ analyzed canonical ROM range 0x085AC9A4-0x085AC9D3
	@ pointer/nullable table
	.4byte 0x00010001 @ +0x0
	.4byte gCableCarData_085AC97C + 0x10 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte sub_08150844 @ +0x14
	.4byte 0x00010002 @ +0x18
	.4byte gCableCarData_085AC97C + 0x18 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte sub_08150844 @ +0x2C
	@ pret/pokeemerald-jp direct xref for 0x085AC9D4: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9D4
gCableCarData_085AC9D4: @ 0x085AC9D4
	@ analyzed canonical ROM range 0x085AC9D4-0x085AC9EB
sSpriteTemplate_085AC9D4: @ 0x085AC9D4
	rodata_sprite_template 0x0003, 0x0001, 0x085AC99C, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, nullsub_58
	@ pret/pokeemerald-jp direct xref for 0x085AC9EC: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9EC
gCableCarData_085AC9EC: @ 0x085AC9EC
	@ analyzed canonical ROM range 0x085AC9EC-0x085AC9ED
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0x64, 0x69
	@ pret/pokeemerald-jp direct xref for 0x085AC9EE: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9EE
gCableCarData_085AC9EE: @ 0x085AC9EE
	@ analyzed canonical ROM range 0x085AC9EE-0x085AC9F1
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x37, 0x1F, 0x20, 0x62
	@ pret/pokeemerald-jp direct xref for 0x085AC9F2: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9F2
gCableCarData_085AC9F2: @ 0x085AC9F2
	@ analyzed canonical ROM range 0x085AC9F2-0x085AC9F9
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0000, 0x0050, 0x00F0, 0x0092
	@ pret/pokeemerald-jp direct xref for 0x085AC9FA: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9FA
gCableCarData_085AC9FA: @ 0x085AC9FA
	@ analyzed canonical ROM range 0x085AC9FA-0x085AC9FF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0x00, 0x3C, 0x78, 0xAA, 0x00, 0x00
	.4byte sub_08150A44
	.4byte sub_08150AD0
