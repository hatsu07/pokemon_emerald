	@ pret/pokeemerald-jp direct xref for 0x08D7A7C4: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7A7C4
gBattleBgData_08D7A7C4:
	.globl sLz77Block_08D7A7C4
	@ confirmed GBA LZ77 stream: compressed=0x2AF, decompressed=0x1000
sLz77Block_08D7A7C4:
	@ analyzed canonical ROM range 0x08D7A7C4-0x08D7BBB7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 7 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7A7C4.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D7AA74
gLz77Asset_08D7AA74: @ 0x08D7AA74
	.incbin "build/assets/lz77_raw/08D7AA74.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7B01C
gLz77Asset_08D7B01C: @ 0x08D7B01C
	.incbin "build/assets/lz77_raw/08D7B01C.bin.lz"
	.globl gLz77Asset_08D7B05C
gLz77Asset_08D7B05C: @ 0x08D7B05C
	.incbin "build/assets/lz77_raw/08D7B05C.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D7B30C
gLz77Asset_08D7B30C: @ 0x08D7B30C
	.incbin "build/assets/lz77_raw/08D7B30C.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7B8CC
gLz77Asset_08D7B8CC: @ 0x08D7B8CC
	.incbin "build/assets/lz77_raw/08D7B8CC.bin.lz"
	.globl gLz77Asset_08D7B908
gLz77Asset_08D7B908: @ 0x08D7B908
	.incbin "build/assets/lz77_raw/08D7B908.bin.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D7BBB8: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7BBB8
gBattleBgData_08D7BBB8:
	.globl sLz77Block_08D7BBB8
	@ confirmed GBA LZ77 stream: compressed=0x5F7, decompressed=0x2000
sLz77Block_08D7BBB8:
	@ analyzed canonical ROM range 0x08D7BBB8-0x08D7C1F7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7BBB8.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D7C1B0
gLz77Asset_08D7C1B0: @ 0x08D7C1B0
	.incbin "build/assets/lz77_raw/08D7C1B0.bin.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D7C1F8: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7C1F8
gBattleBgData_08D7C1F8:
	.globl sLz77Block_08D7C1F8
	@ confirmed GBA LZ77 stream: compressed=0x2AF, decompressed=0x1000
sLz77Block_08D7C1F8:
	@ analyzed canonical ROM range 0x08D7C1F8-0x08D7C4E3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7C1F8.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D7C4A8
gLz77Asset_08D7C4A8: @ 0x08D7C4A8
	.incbin "build/assets/lz77_raw/08D7C4A8.bin.lz"
	@ pret/pokeemerald-jp direct xref for 0x08D7C4E4: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement; pokeblock_feed.s: LoadMonAndSceneGfx
	.globl sLz77Block_08D7C4E4
	@ confirmed GBA LZ77 stream: compressed=0x5AA, decompressed=0x2000
sLz77Block_08D7C4E4:
	@ analyzed canonical ROM range 0x08D7C4E4-0x08D7CA8F
	.incbin "build/graphics/analyzed/gunknown_8d7c4e4_08d7c4e4.4bpp.lz"
	.if (. - sLz77Block_08D7C4E4) != 0x5AC
	.error "sLz77Block_08D7C4E4 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7CA90: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement; pokeblock_feed.s: LoadMonAndSceneGfx
	.globl sLz77Block_08D7CA90
	@ confirmed GBA LZ77 stream: compressed=0x3C, decompressed=0x60
sLz77Block_08D7CA90:
	@ analyzed canonical ROM range 0x08D7CA90-0x08D7CACB
	.incbin "build/graphics/analyzed/gunknown_8d7ca90_08d7ca90.4bpp.lz"
	.if (. - sLz77Block_08D7CA90) != 0x3C
	.error "sLz77Block_08D7CA90 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7CACC: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7CACC
gBattleBgData_08D7CACC:
	.globl sLz77Block_08D7CACC
	@ confirmed GBA LZ77 stream: compressed=0x2AE, decompressed=0x1000
sLz77Block_08D7CACC:
	@ analyzed canonical ROM range 0x08D7CACC-0x08D7CD7B
	.incbin "build/graphics/analyzed/gunknown_8d7cacc_08d7cacc.4bpp.lz"
	.if (. - sLz77Block_08D7CACC) != 0x2B0
	.error "sLz77Block_08D7CACC compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7CD7C: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7CD7C
gBattleBgData_08D7CD7C:
	.globl sLz77Block_08D7CD7C
	@ confirmed GBA LZ77 stream: compressed=0x606, decompressed=0x2000
sLz77Block_08D7CD7C:
	@ analyzed canonical ROM range 0x08D7CD7C-0x08D7D383
	.incbin "build/graphics/analyzed/gunknown_8d7cd7c_08d7cd7c.4bpp.lz"
	.if (. - sLz77Block_08D7CD7C) != 0x608
	.error "sLz77Block_08D7CD7C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7D384: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7D384
gBattleBgData_08D7D384:
	.globl sLz77Block_08D7D384
	@ confirmed GBA LZ77 stream: compressed=0x2AE, decompressed=0x1000
sLz77Block_08D7D384:
	@ analyzed canonical ROM range 0x08D7D384-0x08D7D633
	.incbin "build/graphics/analyzed/gunknown_8d7d384_08d7d384.4bpp.lz"
	.if (. - sLz77Block_08D7D384) != 0x2B0
	.error "sLz77Block_08D7D384 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7D634: battle_bg.s: DrawMainBattleBackground
	.globl gBattleBgData_08D7D634
gBattleBgData_08D7D634:
	.globl sLz77Block_08D7D634
	@ confirmed GBA LZ77 stream: compressed=0x671, decompressed=0x2000
sLz77Block_08D7D634:
	@ analyzed canonical ROM range 0x08D7D634-0x08D7DCA7
	.incbin "build/graphics/analyzed/gunknown_8d7d634_08d7d634.4bpp.lz"
	.if (. - sLz77Block_08D7D634) != 0x674
	.error "sLz77Block_08D7D634 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7DCA8: battle_bg.s: DrawMainBattleBackground
	.globl gBattleBgData_08D7DCA8
gBattleBgData_08D7DCA8: @ 0x08D7DCA8
	@ confirmed GBA LZ77 stream: compressed=0x2AE, decompressed=0x1000
sLz77Block_08D7DCA8:
	@ analyzed canonical ROM range 0x08D7DCA8-0x08D7DF97
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7DCA8.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D7DF58
gLz77Asset_08D7DF58: @ 0x08D7DF58
	.incbin "build/assets/lz77_raw/08D7DF58.bin.lz"
	.byte 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D7DF98: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7DF98
gBattleBgData_08D7DF98:
	.globl sLz77Block_08D7DF98
	@ confirmed GBA LZ77 stream: compressed=0x3C, decompressed=0x60
sLz77Block_08D7DF98:
	@ analyzed canonical ROM range 0x08D7DF98-0x08D7DFD3
	.incbin "build/graphics/analyzed/gunknown_8d7df98_08d7df98.4bpp.lz"
	.if (. - sLz77Block_08D7DF98) != 0x3C
	.error "sLz77Block_08D7DF98 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7DFD4: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7DFD4
gBattleBgData_08D7DFD4:
	.globl sLz77Block_08D7DFD4
	@ confirmed GBA LZ77 stream: compressed=0x57, decompressed=0x60
sLz77Block_08D7DFD4:
	@ analyzed canonical ROM range 0x08D7DFD4-0x08D7E02B
	.incbin "build/graphics/analyzed/gunknown_8d7dfd4_08d7dfd4.4bpp.lz"
	.if (. - sLz77Block_08D7DFD4) != 0x58
	.error "sLz77Block_08D7DFD4 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E02C: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7E02C
gBattleBgData_08D7E02C:
	.globl sLz77Block_08D7E02C
	@ confirmed GBA LZ77 stream: compressed=0x3C, decompressed=0x60
sLz77Block_08D7E02C:
	@ analyzed canonical ROM range 0x08D7E02C-0x08D7E067
	.incbin "build/graphics/analyzed/gunknown_8d7e02c_08d7e02c.4bpp.lz"
	.if (. - sLz77Block_08D7E02C) != 0x3C
	.error "sLz77Block_08D7E02C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E068: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7E068
gBattleBgData_08D7E068:
	.globl sLz77Block_08D7E068
	@ confirmed GBA LZ77 stream: compressed=0x3C, decompressed=0x60
sLz77Block_08D7E068:
	@ analyzed canonical ROM range 0x08D7E068-0x08D7E0A3
	.incbin "build/graphics/analyzed/gunknown_8d7e068_08d7e068.4bpp.lz"
	.if (. - sLz77Block_08D7E068) != 0x3C
	.error "sLz77Block_08D7E068 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E0A4: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7E0A4
gBattleBgData_08D7E0A4:
	.globl sLz77Block_08D7E0A4
	@ confirmed GBA LZ77 stream: compressed=0x5E, decompressed=0x60
sLz77Block_08D7E0A4:
	@ analyzed canonical ROM range 0x08D7E0A4-0x08D7E103
	.incbin "build/graphics/analyzed/gunknown_8d7e0a4_08d7e0a4.4bpp.lz"
	.if (. - sLz77Block_08D7E0A4) != 0x60
	.error "sLz77Block_08D7E0A4 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E104: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7E104
gBattleBgData_08D7E104:
	.globl sLz77Block_08D7E104
	@ confirmed GBA LZ77 stream: compressed=0x6A, decompressed=0x60
sLz77Block_08D7E104:
	@ analyzed canonical ROM range 0x08D7E104-0x08D7E16F
	.incbin "build/graphics/analyzed/gunknown_8d7e104_08d7e104.4bpp.lz"
	.if (. - sLz77Block_08D7E104) != 0x6C
	.error "sLz77Block_08D7E104 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E170: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7E170
gBattleBgData_08D7E170:
	.globl sLz77Block_08D7E170
	@ confirmed GBA LZ77 stream: compressed=0x4E, decompressed=0x60
sLz77Block_08D7E170:
	@ analyzed canonical ROM range 0x08D7E170-0x08D7E1BF
	.incbin "build/graphics/analyzed/gunknown_8d7e170_08d7e170.4bpp.lz"
	.if (. - sLz77Block_08D7E170) != 0x50
	.error "sLz77Block_08D7E170 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E1C0: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7E1C0
gBattleBgData_08D7E1C0:
	.globl sLz77Block_08D7E1C0
	@ confirmed GBA LZ77 stream: compressed=0x48, decompressed=0x60
sLz77Block_08D7E1C0:
	@ analyzed canonical ROM range 0x08D7E1C0-0x08D7E207
	.incbin "build/graphics/analyzed/gunknown_8d7e1c0_08d7e1c0.4bpp.lz"
	.if (. - sLz77Block_08D7E1C0) != 0x48
	.error "sLz77Block_08D7E1C0 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E208: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7E208
gBattleBgData_08D7E208:
	.globl sLz77Block_08D7E208
	@ confirmed GBA LZ77 stream: compressed=0x41, decompressed=0x60
sLz77Block_08D7E208:
	@ analyzed canonical ROM range 0x08D7E208-0x08D7E24B
	.incbin "build/graphics/analyzed/gunknown_8d7e208_08d7e208.4bpp.lz"
	.if (. - sLz77Block_08D7E208) != 0x44
	.error "sLz77Block_08D7E208 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E24C: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7E24C
gBattleBgData_08D7E24C:
	.globl sLz77Block_08D7E24C
	@ confirmed GBA LZ77 stream: compressed=0x4E, decompressed=0x60
sLz77Block_08D7E24C:
	@ analyzed canonical ROM range 0x08D7E24C-0x08D7E29B
	.incbin "build/graphics/analyzed/gunknown_8d7e24c_08d7e24c.4bpp.lz"
	.if (. - sLz77Block_08D7E24C) != 0x50
	.error "sLz77Block_08D7E24C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E29C: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7E29C
gBattleBgData_08D7E29C:
	.globl sLz77Block_08D7E29C
	@ confirmed GBA LZ77 stream: compressed=0x3C, decompressed=0x60
sLz77Block_08D7E29C:
	@ analyzed canonical ROM range 0x08D7E29C-0x08D7E2D7
	.incbin "build/graphics/analyzed/gunknown_8d7e29c_08d7e29c.4bpp.lz"
	.if (. - sLz77Block_08D7E29C) != 0x3C
	.error "sLz77Block_08D7E29C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E2D8: battle_bg.s: DrawMainBattleBackground
	.globl gBattleBgData_08D7E2D8
gBattleBgData_08D7E2D8: @ 0x08D7E2D8
	@ confirmed GBA LZ77 stream: compressed=0x49, decompressed=0x60
sLz77Block_08D7E2D8:
	@ analyzed canonical ROM range 0x08D7E2D8-0x08D7FA9B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 7 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7E2D8.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7E324
gLz77Asset_08D7E324: @ 0x08D7E324
	.incbin "build/assets/lz77_raw/08D7E324.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7E8AC
gLz77Asset_08D7E8AC: @ 0x08D7E8AC
	.incbin "build/assets/lz77_raw/08D7E8AC.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7EA68
gLz77Asset_08D7EA68: @ 0x08D7EA68
	.incbin "build/assets/lz77_raw/08D7EA68.bin.lz"
	.globl gLz77Asset_08D7F178
gLz77Asset_08D7F178: @ 0x08D7F178
	.incbin "build/assets/lz77_raw/08D7F178.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D7F3B0
gLz77Asset_08D7F3B0: @ 0x08D7F3B0
	.incbin "build/assets/lz77_raw/08D7F3B0.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7F8F4
gLz77Asset_08D7F8F4: @ 0x08D7F8F4
	.incbin "build/assets/lz77_raw/08D7F8F4.bin.lz"
	.byte 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D7FA9C: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D7FA9C
gBattleBgData_08D7FA9C:
	.globl sLz77Block_08D7FA9C
	@ confirmed GBA LZ77 stream: compressed=0x4CC, decompressed=0x2000
sLz77Block_08D7FA9C:
	@ analyzed canonical ROM range 0x08D7FA9C-0x08D7FF67
	.incbin "build/graphics/analyzed/gunknown_8d7fa9c_08d7fa9c.4bpp.lz"
	.if (. - sLz77Block_08D7FA9C) != 0x4CC
	.error "sLz77Block_08D7FA9C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7FF68: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D7FF68
gBattleBgData_08D7FF68:
	.globl sLz77Block_08D7FF68
	@ confirmed GBA LZ77 stream: compressed=0x18D, decompressed=0x800
sLz77Block_08D7FF68:
	@ analyzed canonical ROM range 0x08D7FF68-0x08D816B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 7 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7FF68.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D800F8
gLz77Asset_08D800F8: @ 0x08D800F8
	.incbin "build/assets/lz77_raw/08D800F8.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D80704
gLz77Asset_08D80704: @ 0x08D80704
	.incbin "build/assets/lz77_raw/08D80704.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D808A8
gLz77Asset_08D808A8: @ 0x08D808A8
	.incbin "build/assets/lz77_raw/08D808A8.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D80DF4
gLz77Asset_08D80DF4: @ 0x08D80DF4
	.incbin "build/assets/lz77_raw/08D80DF4.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D80F40
gLz77Asset_08D80F40: @ 0x08D80F40
	.incbin "build/assets/lz77_raw/08D80F40.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D81520
gLz77Asset_08D81520: @ 0x08D81520
	.incbin "build/assets/lz77_raw/08D81520.bin.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D816B4: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D816B4
gBattleBgData_08D816B4:
	.globl sLz77Block_08D816B4
	@ confirmed GBA LZ77 stream: compressed=0x81B, decompressed=0x2000
sLz77Block_08D816B4:
	@ analyzed canonical ROM range 0x08D816B4-0x08D81ECF
	.incbin "build/graphics/analyzed/gunknown_8d816b4_08d816b4.4bpp.lz"
	.if (. - sLz77Block_08D816B4) != 0x81C
	.error "sLz77Block_08D816B4 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D81ED0: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D81ED0
gBattleBgData_08D81ED0:
	.globl sLz77Block_08D81ED0
	@ confirmed GBA LZ77 stream: compressed=0x2A7, decompressed=0x800
sLz77Block_08D81ED0:
	@ analyzed canonical ROM range 0x08D81ED0-0x08D82177
	.incbin "build/graphics/analyzed/gunknown_8d81ed0_08d81ed0.4bpp.lz"
	.if (. - sLz77Block_08D81ED0) != 0x2A8
	.error "sLz77Block_08D81ED0 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D82178: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D82178
gBattleBgData_08D82178:
	.globl sLz77Block_08D82178
	@ confirmed GBA LZ77 stream: compressed=0x40D, decompressed=0x2000
sLz77Block_08D82178:
	@ analyzed canonical ROM range 0x08D82178-0x08D82587
	.incbin "build/graphics/analyzed/gunknown_8d82178_08d82178.4bpp.lz"
	.if (. - sLz77Block_08D82178) != 0x410
	.error "sLz77Block_08D82178 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D82588: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D82588
gBattleBgData_08D82588:
	.globl sLz77Block_08D82588
	@ confirmed GBA LZ77 stream: compressed=0x123, decompressed=0x800
sLz77Block_08D82588:
	@ analyzed canonical ROM range 0x08D82588-0x08D826AB
	.incbin "build/graphics/analyzed/gunknown_8d82588_08d82588.4bpp.lz"
	.if (. - sLz77Block_08D82588) != 0x124
	.error "sLz77Block_08D82588 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D826AC: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D826AC
gBattleBgData_08D826AC:
	.globl sLz77Block_08D826AC
	@ confirmed GBA LZ77 stream: compressed=0x666, decompressed=0x2000
sLz77Block_08D826AC:
	@ analyzed canonical ROM range 0x08D826AC-0x08D82D13
	.incbin "build/graphics/analyzed/gunknown_8d826ac_08d826ac.4bpp.lz"
	.if (. - sLz77Block_08D826AC) != 0x668
	.error "sLz77Block_08D826AC compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D82D14: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D82D14
gBattleBgData_08D82D14:
	.globl sLz77Block_08D82D14
	@ confirmed GBA LZ77 stream: compressed=0x29E, decompressed=0x800
sLz77Block_08D82D14:
	@ analyzed canonical ROM range 0x08D82D14-0x08D82FB3
	.incbin "build/graphics/analyzed/gunknown_8d82d14_08d82d14.4bpp.lz"
	.if (. - sLz77Block_08D82D14) != 0x2A0
	.error "sLz77Block_08D82D14 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D82FB4: battle_dome.s: Task_ShowTourneyTree
	.globl gBattleDomeData_08D82FB4
gBattleDomeData_08D82FB4:
	.globl sLz77Block_08D82FB4
	@ confirmed GBA LZ77 stream: compressed=0x5EB, decompressed=0x2000
sLz77Block_08D82FB4:
	@ analyzed canonical ROM range 0x08D82FB4-0x08D8359F
	.incbin "build/graphics/analyzed/gunknown_8d82fb4_08d82fb4.4bpp.lz"
	.if (. - sLz77Block_08D82FB4) != 0x5EC
	.error "sLz77Block_08D82FB4 compressed size mismatch"
	.endif
