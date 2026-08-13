
	.globl gMonIcon_OldUnownB
gMonIcon_OldUnownB: @ 0x08D77574 [252]
	.globl gMonIcon_OldUnownC
gMonIcon_OldUnownC: @ 0x08D77574 [253]
	.globl gMonIcon_OldUnownD
gMonIcon_OldUnownD: @ 0x08D77574 [254]
	.globl gMonIcon_OldUnownE
gMonIcon_OldUnownE: @ 0x08D77574 [255]
	.globl gMonIcon_OldUnownF
gMonIcon_OldUnownF: @ 0x08D77574 [256]
	.globl gMonIcon_OldUnownG
gMonIcon_OldUnownG: @ 0x08D77574 [257]
	.globl gMonIcon_OldUnownH
gMonIcon_OldUnownH: @ 0x08D77574 [258]
	.globl gMonIcon_OldUnownI
gMonIcon_OldUnownI: @ 0x08D77574 [259]
	.globl gMonIcon_OldUnownJ
gMonIcon_OldUnownJ: @ 0x08D77574 [260]
	.globl gMonIcon_OldUnownK
gMonIcon_OldUnownK: @ 0x08D77574 [261]
	.globl gMonIcon_OldUnownL
gMonIcon_OldUnownL: @ 0x08D77574 [262]
	.globl gMonIcon_OldUnownM
gMonIcon_OldUnownM: @ 0x08D77574 [263]
	.globl gMonIcon_OldUnownN
gMonIcon_OldUnownN: @ 0x08D77574 [264]
	.globl gMonIcon_OldUnownO
gMonIcon_OldUnownO: @ 0x08D77574 [265]
	.globl gMonIcon_OldUnownP
gMonIcon_OldUnownP: @ 0x08D77574 [266]
	.globl gMonIcon_OldUnownQ
gMonIcon_OldUnownQ: @ 0x08D77574 [267]
	.globl gMonIcon_OldUnownR
gMonIcon_OldUnownR: @ 0x08D77574 [268]
	.globl gMonIcon_OldUnownS
gMonIcon_OldUnownS: @ 0x08D77574 [269]
	.globl gMonIcon_OldUnownT
gMonIcon_OldUnownT: @ 0x08D77574 [270]
	.globl gMonIcon_OldUnownU
gMonIcon_OldUnownU: @ 0x08D77574 [271]
	.globl gMonIcon_OldUnownV
gMonIcon_OldUnownV: @ 0x08D77574 [272]
	.globl gMonIcon_OldUnownW
gMonIcon_OldUnownW: @ 0x08D77574 [273]
	.globl gMonIcon_OldUnownX
gMonIcon_OldUnownX: @ 0x08D77574 [274]
	.globl gMonIcon_OldUnownY
gMonIcon_OldUnownY: @ 0x08D77574 [275]
	.globl gMonIcon_OldUnownZ
gMonIcon_OldUnownZ: @ 0x08D77574 [276]
	.incbin "build/graphics/pokemon/old_unown_b/icon.4bpp"
	@ analyzed canonical ROM range 0x08D77974-0x08D77993
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_OldUnownB
gMonFootprint_OldUnownB:
	.globl gMonFootprint_OldUnownC
gMonFootprint_OldUnownC:
	.globl gMonFootprint_OldUnownD
gMonFootprint_OldUnownD:
	.globl gMonFootprint_OldUnownE
gMonFootprint_OldUnownE:
	.globl gMonFootprint_OldUnownF
gMonFootprint_OldUnownF:
	.globl gMonFootprint_OldUnownG
gMonFootprint_OldUnownG:
	.globl gMonFootprint_OldUnownH
gMonFootprint_OldUnownH:
	.globl gMonFootprint_OldUnownI
gMonFootprint_OldUnownI:
	.globl gMonFootprint_OldUnownJ
gMonFootprint_OldUnownJ:
	.globl gMonFootprint_OldUnownK
gMonFootprint_OldUnownK:
	.globl gMonFootprint_OldUnownL
gMonFootprint_OldUnownL:
	.globl gMonFootprint_OldUnownM
gMonFootprint_OldUnownM:
	.globl gMonFootprint_OldUnownN
gMonFootprint_OldUnownN:
	.globl gMonFootprint_OldUnownO
gMonFootprint_OldUnownO:
	.globl gMonFootprint_OldUnownP
gMonFootprint_OldUnownP:
	.globl gMonFootprint_OldUnownQ
gMonFootprint_OldUnownQ:
	.globl gMonFootprint_OldUnownR
gMonFootprint_OldUnownR:
	.globl gMonFootprint_OldUnownS
gMonFootprint_OldUnownS:
	.globl gMonFootprint_OldUnownT
gMonFootprint_OldUnownT:
	.globl gMonFootprint_OldUnownU
gMonFootprint_OldUnownU:
	.globl gMonFootprint_OldUnownV
gMonFootprint_OldUnownV:
	.globl gMonFootprint_OldUnownW
gMonFootprint_OldUnownW:
	.globl gMonFootprint_OldUnownX
gMonFootprint_OldUnownX:
	.globl gMonFootprint_OldUnownY
gMonFootprint_OldUnownY:
	.globl gMonFootprint_OldUnownZ
gMonFootprint_OldUnownZ:
	.incbin "build/graphics/pokemon/old_unown_b/footprint.1bpp"
	.globl gBattleBgData_08D77994
gBattleBgData_08D77994:
	.globl sLz77Block_08D77994
	@ confirmed GBA LZ77 stream: compressed=0xE5, decompressed=0x200
sLz77Block_08D77994:
	@ analyzed canonical ROM range 0x08D77994-0x08D77A7B
	.incbin "build/graphics/analyzed/gunknown_8d77994_08d77994.4bpp.lz"
	.if (. - sLz77Block_08D77994) != 0xE8
	.error "sLz77Block_08D77994 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D77A7C: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D77A7C
gBattleBgData_08D77A7C:
	.globl sLz77Block_08D77A7C
	@ confirmed GBA LZ77 stream: compressed=0x10A, decompressed=0x800
sLz77Block_08D77A7C:
	@ analyzed canonical ROM range 0x08D77A7C-0x08D77B87
	.incbin "build/graphics/analyzed/gunknown_8d77a7c_08d77a7c.4bpp.lz"
	.if (. - sLz77Block_08D77A7C) != 0x10C
	.error "sLz77Block_08D77A7C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D77B88: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D77B88
gBattleBgData_08D77B88:
	.globl sLz77Block_08D77B88
	@ confirmed GBA LZ77 stream: compressed=0x28, decompressed=0x20
sLz77Block_08D77B88:
	@ analyzed canonical ROM range 0x08D77B88-0x08D77BAF
	.incbin "build/graphics/analyzed/gunknown_8d77b88_08d77b88.4bpp.lz"
	.if (. - sLz77Block_08D77B88) != 0x28
	.error "sLz77Block_08D77B88 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D77BB0: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D77BB0
gBattleBgData_08D77BB0:
	.globl sLz77Block_08D77BB0
	@ confirmed GBA LZ77 stream: compressed=0x25B, decompressed=0x1000
sLz77Block_08D77BB0:
	@ analyzed canonical ROM range 0x08D77BB0-0x08D7A1AB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 13 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D77BB0.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D77E0C
gLz77Asset_08D77E0C: @ 0x08D77E0C
	.incbin "build/assets/lz77_raw/08D77E0C.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D783BC
gLz77Asset_08D783BC: @ 0x08D783BC
	.incbin "build/assets/lz77_raw/08D783BC.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D783F4
gLz77Asset_08D783F4: @ 0x08D783F4
	.incbin "build/assets/lz77_raw/08D783F4.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D786A4
gLz77Asset_08D786A4: @ 0x08D786A4
	.incbin "build/assets/lz77_raw/08D786A4.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D78D1C
gLz77Asset_08D78D1C: @ 0x08D78D1C
	.incbin "build/assets/lz77_raw/08D78D1C.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D78D5C
gLz77Asset_08D78D5C: @ 0x08D78D5C
	.incbin "build/assets/lz77_raw/08D78D5C.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D7900C
gLz77Asset_08D7900C: @ 0x08D7900C
	.incbin "build/assets/lz77_raw/08D7900C.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D79604
gLz77Asset_08D79604: @ 0x08D79604
	.incbin "build/assets/lz77_raw/08D79604.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D7964C
gLz77Asset_08D7964C: @ 0x08D7964C
	.incbin "build/assets/lz77_raw/08D7964C.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D798FC
gLz77Asset_08D798FC: @ 0x08D798FC
	.incbin "build/assets/lz77_raw/08D798FC.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D79EB4
gLz77Asset_08D79EB4: @ 0x08D79EB4
	.incbin "build/assets/lz77_raw/08D79EB4.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D79EFC
gLz77Asset_08D79EFC: @ 0x08D79EFC
	.incbin "build/assets/lz77_raw/08D79EFC.bin.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D7A1AC: battle_bg.s: DrawMainBattleBackground
	.globl gBattleBgData_08D7A1AC
gBattleBgData_08D7A1AC:
	.globl sLz77Block_08D7A1AC
	@ confirmed GBA LZ77 stream: compressed=0x5D2, decompressed=0x2000
sLz77Block_08D7A1AC:
	@ analyzed canonical ROM range 0x08D7A1AC-0x08D7A7C3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7A1AC.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D7A780
gLz77Asset_08D7A780: @ 0x08D7A780
	.incbin "build/assets/lz77_raw/08D7A780.bin.lz"
	.byte 0x00, 0x00
