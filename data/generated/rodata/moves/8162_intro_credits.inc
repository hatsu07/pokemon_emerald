	.globl gIntroCreditsFlygonPalette
gIntroCreditsFlygonPalette: @ 0x08D85F14
	.incbin "build/graphics/intro_credits/intro_flygon_palette.gbapal"
	@ analyzed canonical ROM range 0x08D85F34-0x08D8700F
	@ confirmed GBA LZ77 stream: compressed=0x1DD, decompressed=0x400
sLz77Block_08D85F34:
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D85F34.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D86114
gLz77Asset_08D86114: @ 0x08D86114
	.incbin "build/assets/lz77_raw/08D86114.bin.lz"
	.globl gLz77Asset_08D86534
gLz77Asset_08D86534: @ 0x08D86534
	.incbin "build/assets/lz77_raw/08D86534.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gIntroCreditsFlygonGfx
gIntroCreditsFlygonGfx: @ 0x08D87010
	.incbin "build/graphics/intro_credits/intro_flygon.4bpp.lz"
	.globl gIntroCreditsBrendanGfx
gIntroCreditsBrendanGfx: @ 0x08D8754C
	.incbin "build/graphics/intro_credits/intro_brendan.4bpp.lz"
	.globl gIntroCreditsMayGfx
gIntroCreditsMayGfx: @ 0x08D87C88
	.incbin "build/graphics/intro_credits/intro_may.4bpp.lz"
	.if (. - gIntroData_08D85E60) != 0x2618
	.error "Intro credits rider and Flygon graphics must retain their original size"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D88478: intro.s: Task_IntroLoadGroudonScene
	.globl gIntroData_08D88478
gIntroData_08D88478:
	.globl sLz77Block_08D88478
	@ confirmed GBA LZ77 stream: compressed=0x8AC, decompressed=0x4000
sLz77Block_08D88478:
	@ analyzed canonical ROM range 0x08D88478-0x08D88D23
	.incbin "build/graphics/analyzed/gunknown_8d88478_08d88478.4bpp.lz"
	.if (. - sLz77Block_08D88478) != 0x8AC
	.error "sLz77Block_08D88478 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D88D24: intro.s: Task_IntroLoadGroudonScene
	.globl gIntroData_08D88D24
gIntroData_08D88D24:
	.globl sLz77Block_08D88D24
	@ confirmed GBA LZ77 stream: compressed=0x4E2, decompressed=0x2000
sLz77Block_08D88D24:
	@ analyzed canonical ROM range 0x08D88D24-0x08D89207
	.incbin "build/graphics/analyzed/gunknown_8d88d24_08d88d24.4bpp.lz"
	.if (. - sLz77Block_08D88D24) != 0x4E4
	.error "sLz77Block_08D88D24 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D89208: intro.s: Task_IntroLoadKyogreScene
	.globl gIntroData_08D89208
gIntroData_08D89208:
	.globl sLz77Block_08D89208
	@ confirmed GBA LZ77 stream: compressed=0x896, decompressed=0x4000
sLz77Block_08D89208:
	@ analyzed canonical ROM range 0x08D89208-0x08D89A9F
	.incbin "build/graphics/analyzed/gunknown_8d89208_08d89208.4bpp.lz"
	.if (. - sLz77Block_08D89208) != 0x898
	.error "sLz77Block_08D89208 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D89AA0: intro.s: Task_IntroLoadKyogreScene
	.globl gIntroData_08D89AA0
gIntroData_08D89AA0:
	.globl sLz77Block_08D89AA0
	@ confirmed GBA LZ77 stream: compressed=0x4BE, decompressed=0x2000
sLz77Block_08D89AA0:
	@ analyzed canonical ROM range 0x08D89AA0-0x08D89F5F
	.incbin "build/graphics/analyzed/gunknown_8d89aa0_08d89aa0.4bpp.lz"
	.if (. - sLz77Block_08D89AA0) != 0x4C0
	.error "sLz77Block_08D89AA0 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D89F60: intro.s: Task_IntroLoadGroudonScene
	.globl gIntroData_08D89F60
gIntroData_08D89F60:
	.globl sLz77Block_08D89F60
	@ confirmed GBA LZ77 stream: compressed=0x899, decompressed=0x4000
sLz77Block_08D89F60:
	@ analyzed canonical ROM range 0x08D89F60-0x08D8A7FB
	.incbin "build/graphics/analyzed/gunknown_8d89f60_08d89f60.4bpp.lz"
	.if (. - sLz77Block_08D89F60) != 0x89C
	.error "sLz77Block_08D89F60 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8A7FC: intro.s: Task_IntroLoadGroudonScene
	.globl gIntroData_08D8A7FC
gIntroData_08D8A7FC:
	.globl sLz77Block_08D8A7FC
	@ confirmed GBA LZ77 stream: compressed=0x11C, decompressed=0x800
sLz77Block_08D8A7FC:
	@ analyzed canonical ROM range 0x08D8A7FC-0x08D8A917
	.incbin "build/graphics/analyzed/gunknown_8d8a7fc_08d8a7fc.4bpp.lz"
	.if (. - sLz77Block_08D8A7FC) != 0x11C
	.error "sLz77Block_08D8A7FC compressed size mismatch"
	.endif
