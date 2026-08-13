	@ pret/pokeemerald-jp direct xref for 0x08D8A918: intro.s: Task_IntroLoadKyogreScene
	.globl gIntroData_08D8A918
gIntroData_08D8A918:
	.globl sLz77Block_08D8A918
	@ confirmed GBA LZ77 stream: compressed=0x11E, decompressed=0x800
sLz77Block_08D8A918:
	@ analyzed canonical ROM range 0x08D8A918-0x08D8AA37
	.incbin "build/graphics/analyzed/gunknown_8d8a918_08d8a918.4bpp.lz"
	.if (. - sLz77Block_08D8A918) != 0x120
	.error "sLz77Block_08D8A918 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8AA38: intro.s: Task_IntroLoadClouds1
	.globl gIntroData_08D8AA38
gIntroData_08D8AA38:
	.globl sLz77Block_08D8AA38
	@ confirmed GBA LZ77 stream: compressed=0x729, decompressed=0x2000
sLz77Block_08D8AA38:
	@ analyzed canonical ROM range 0x08D8AA38-0x08D8B163
	.incbin "build/graphics/analyzed/gunknown_8d8aa38_08d8aa38.4bpp.lz"
	.if (. - sLz77Block_08D8AA38) != 0x72C
	.error "sLz77Block_08D8AA38 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8B164: intro.s: Task_IntroLoadClouds2
	.globl gIntroData_08D8B164
gIntroData_08D8B164:
	.globl sLz77Block_08D8B164
	@ confirmed GBA LZ77 stream: compressed=0x2BE, decompressed=0x1000
sLz77Block_08D8B164:
	@ analyzed canonical ROM range 0x08D8B164-0x08D8B423
	.incbin "build/graphics/analyzed/gunknown_8d8b164_08d8b164.4bpp.lz"
	.if (. - sLz77Block_08D8B164) != 0x2C0
	.error "sLz77Block_08D8B164 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8B424: intro.s: Task_IntroLoadClouds2
	.globl gIntroData_08D8B424
gIntroData_08D8B424:
	.globl sLz77Block_08D8B424
	@ confirmed GBA LZ77 stream: compressed=0x2A6, decompressed=0x1000
sLz77Block_08D8B424:
	@ analyzed canonical ROM range 0x08D8B424-0x08D8B6CB
	.incbin "build/graphics/analyzed/gunknown_8d8b424_08d8b424.4bpp.lz"
	.if (. - sLz77Block_08D8B424) != 0x2A8
	.error "sLz77Block_08D8B424 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8B6CC: intro.s: Task_IntroLoadClouds1
	.globl gIntroData_08D8B6CC
gIntroData_08D8B6CC: @ 0x08D8B6CC
	@ confirmed GBA LZ77 stream: compressed=0x124, decompressed=0x800
sLz77Block_08D8B6CC:
	@ analyzed canonical ROM range 0x08D8B6CC-0x08D8BA57
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D8B6CC.bin.lz"
	.globl gLz77Asset_08D8B7F0
gLz77Asset_08D8B7F0: @ 0x08D8B7F0
	.incbin "build/assets/lz77_raw/08D8B7F0.bin.lz"
	.byte 0x00, 0x00, 0xE9, 0x56, 0xFF, 0x4B, 0x5F, 0x03, 0xF9, 0x1A, 0xFF, 0x7F, 0x2A, 0x25, 0xAE, 0x29
	.byte 0x32, 0x32, 0xD6, 0x3A, 0x5A, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D8BA58: intro.s: Task_IntroLoadRayquazaLightningScene
	.globl gIntroData_08D8BA58
gIntroData_08D8BA58:
	.globl sLz77Block_08D8BA58
	@ confirmed GBA LZ77 stream: compressed=0x6F6, decompressed=0x2000
sLz77Block_08D8BA58:
	@ analyzed canonical ROM range 0x08D8BA58-0x08D8C14F
	.incbin "build/graphics/analyzed/gunknown_8d8ba58_08d8ba58.4bpp.lz"
	.if (. - sLz77Block_08D8BA58) != 0x6F8
	.error "sLz77Block_08D8BA58 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8C150: intro.s: Task_IntroLoadRayquazaLightningScene
	.globl gIntroData_08D8C150
gIntroData_08D8C150: @ 0x08D8C150
	@ confirmed GBA LZ77 stream: compressed=0x208, decompressed=0x800
sLz77Block_08D8C150:
	@ analyzed canonical ROM range 0x08D8C150-0x08D8C81B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D8C150.bin.lz"
	.globl gLz77Asset_08D8C358
gLz77Asset_08D8C358: @ 0x08D8C358
	.incbin "build/assets/lz77_raw/08D8C358.bin.lz"
	.globl gLz77Asset_08D8C5A8
gLz77Asset_08D8C5A8: @ 0x08D8C5A8
	.incbin "build/assets/lz77_raw/08D8C5A8.bin.lz"
	.byte 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D8C81C: intro.s: Task_IntroLoadRayquazaLightningScene
	.globl gIntroData_08D8C81C
gIntroData_08D8C81C:
	.globl sLz77Block_08D8C81C
	@ confirmed GBA LZ77 stream: compressed=0x48F, decompressed=0x2000
sLz77Block_08D8C81C:
	@ analyzed canonical ROM range 0x08D8C81C-0x08D8CCAB
	.incbin "build/graphics/analyzed/gunknown_8d8c81c_08d8c81c.4bpp.lz"
	.if (. - sLz77Block_08D8C81C) != 0x490
	.error "sLz77Block_08D8C81C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8CCAC: intro.s: Task_IntroLoadRayquazaLightningScene
	.globl gIntroData_08D8CCAC
gIntroData_08D8CCAC: @ 0x08D8CCAC
	@ confirmed GBA LZ77 stream: compressed=0x27A, decompressed=0x800
sLz77Block_08D8CCAC:
	@ analyzed canonical ROM range 0x08D8CCAC-0x08D8D3F3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 5 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D8CCAC.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D8CF28
gLz77Asset_08D8CF28: @ 0x08D8CF28
	.incbin "build/assets/lz77_raw/08D8CF28.bin.lz"
	.byte 0x00, 0x00, 0x4D, 0x32, 0xA0, 0x28, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xB1, 0x7E, 0x4D, 0x6E, 0xEA, 0x5D, 0x86, 0x4D, 0x23, 0x3D, 0xC0, 0x30
	.byte 0x16, 0x00
	.globl gLz77Asset_08D8D114
gLz77Asset_08D8D114: @ 0x08D8D114
	.incbin "build/assets/lz77_raw/08D8D114.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D8D1EC
gLz77Asset_08D8D1EC: @ 0x08D8D1EC
	.incbin "build/assets/lz77_raw/08D8D1EC.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D8D288
gLz77Asset_08D8D288: @ 0x08D8D288
	.incbin "build/assets/lz77_raw/08D8D288.bin.lz"
	.byte 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D8D3F4: rock.s: AnimTask_LoadSandstormBackground
	.globl gRockData_08D8D3F4
gRockData_08D8D3F4:
	.globl sLz77Block_08D8D3F4
	@ confirmed GBA LZ77 stream: compressed=0x17C, decompressed=0x800
sLz77Block_08D8D3F4:
	@ analyzed canonical ROM range 0x08D8D3F4-0x08D8D56F
	.incbin "build/graphics/analyzed/gunknown_8d8d3f4_08d8d3f4.4bpp.lz"
	.if (. - sLz77Block_08D8D3F4) != 0x17C
	.error "sLz77Block_08D8D3F4 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8D570: rock.s: AnimTask_LoadSandstormBackground
	.globl gRockData_08D8D570
gRockData_08D8D570:
	.globl sLz77Block_08D8D570
	@ confirmed GBA LZ77 stream: compressed=0x52C, decompressed=0x800
sLz77Block_08D8D570:
	@ analyzed canonical ROM range 0x08D8D570-0x08D8DA9B
	.incbin "build/graphics/analyzed/gunknown_8d8d570_08d8d570.4bpp.lz"
	.if (. - sLz77Block_08D8D570) != 0x52C
	.error "sLz77Block_08D8D570 compressed size mismatch"
	.endif
