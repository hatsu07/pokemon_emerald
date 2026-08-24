	@ pret/pokeemerald-jp direct xref for 0x085C7A2C: lottery_corner.s: PickLotteryCornerTicket
	.globl gLotteryCornerData_085C7A2C
gLotteryCornerData_085C7A2C: @ 0x085C7A2C
	@ analyzed canonical ROM range 0x085C7A2C-0x085C7A33
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0045, 0x00B6, 0x0019, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x085C7A34: lottery_corner.s: CB2_ShowDiploma
	.globl gLotteryCornerData_085C7A34
gLotteryCornerData_085C7A34: @ 0x085C7A34
	@ analyzed canonical ROM range 0x085C7A34-0x085C7A73
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x40 bytes=64
	.byte 0xA3, 0x28, 0xFF, 0x6F, 0xFF, 0x5F, 0xBC, 0x2F, 0x7A, 0x03, 0xBD, 0x6F, 0x9B, 0x73, 0x7F, 0x63
	.byte 0x7B, 0x5F, 0xDE, 0x5B, 0x9D, 0x5B, 0x5A, 0x4F, 0x9C, 0x47, 0xFF, 0x3F, 0xBD, 0x37, 0x3F, 0x57
	.byte 0xA3, 0x28, 0xFF, 0x6F, 0xBE, 0x73, 0x99, 0x47, 0x75, 0x1B, 0xBD, 0x6F, 0x9B, 0x73, 0x7F, 0x63
	.byte 0x7B, 0x5F, 0xDE, 0x5B, 0x9D, 0x5B, 0x5A, 0x4F, 0x9C, 0x47, 0xFF, 0x3F, 0xBD, 0x37, 0x3F, 0x57
	@ pret/pokeemerald-jp direct xref for 0x085C7A74: lottery_corner.s: CB2_ShowDiploma
	.globl gLotteryCornerData_085C7A74
gLotteryCornerData_085C7A74:
	.globl sDiplomaTilemap
	@ exact GBA LZ77 for Pokedex Diploma from editable graphics/diploma/tilemap.u16: compressed=0x73C, decompressed=0x1000
sDiplomaTilemap:
	@ canonical ROM range 0x085C7A74-0x085C81AF
	.incbin "build/graphics/diploma/tilemap.bin.lz"
	.if (. - sDiplomaTilemap) != 0x73C
	.error "sDiplomaTilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085C81B0: lottery_corner.s: CB2_ShowDiploma
	.globl gLotteryCornerData_085C81B0
gLotteryCornerData_085C81B0:
	.globl sDiplomaTiles
	@ exact GBA LZ77 for Pokedex Diploma from editable graphics/diploma/tiles.png: compressed=0x9F8, decompressed=0x1A00
sDiplomaTiles:
	@ canonical ROM range 0x085C81B0-0x085C8BA7
	.incbin "build/graphics/diploma/tiles.4bpp.lz"
	.if (. - sDiplomaTiles) != 0x9F8
	.error "sDiplomaTiles compressed size mismatch"
	.endif
	.globl gJPText_Player
