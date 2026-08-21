	.globl gIntroCreditsFlygonPalette
gIntroCreditsFlygonPalette: @ 0x08D85F14
	.incbin "build/graphics/intro_credits/intro_flygon_palette.gbapal"
	@ analyzed canonical ROM range 0x08D85F34-0x08D8700F
	@ confirmed GBA LZ77 stream: compressed=0x1DD, decompressed=0x400
	.globl gIntroVolbeat_Gfx
gIntroVolbeat_Gfx: @ 0x08D85F34
	@ exact GBA LZ77 from editable graphics/intro/scene_static/volbeat.png
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/intro/scene_static/volbeat_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gIntroTorchic_Gfx
gIntroTorchic_Gfx: @ 0x08D86114
	@ exact GBA LZ77 from editable graphics/intro/scene_static/torchic.png
	.incbin "build/graphics/intro/scene_static/torchic_rom_exact.4bpp.lz"
	.globl gIntroManectric_Gfx
gIntroManectric_Gfx: @ 0x08D86534
	@ exact GBA LZ77 from editable graphics/intro/scene_static/manectric.png
	.incbin "build/graphics/intro/scene_static/manectric_rom_exact.4bpp.lz"
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
	.globl gIntroGroudon_Gfx
	@ exact GBA LZ77 from editable graphics/intro/scene_3/groudon.png: compressed=0x8AC, decompressed=0x4000
gIntroGroudon_Gfx:
	@ canonical ROM range 0x08D88478-0x08D88D23
	.incbin "build/graphics/intro/scene_3/groudon.8bpp.lz"
	.if (. - gIntroGroudon_Gfx) != 0x8AC
	.error "gIntroGroudon_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D88D24: intro.s: Task_IntroLoadGroudonScene
	.globl gIntroData_08D88D24
gIntroData_08D88D24:
	.globl gIntroGroudon_Tilemap
	@ exact GBA LZ77 from editable graphics/intro/scene_3/groudon.tilemap.u16: compressed=0x4E4, decompressed=0x2000
gIntroGroudon_Tilemap:
	@ canonical ROM range 0x08D88D24-0x08D89207
	.incbin "build/graphics/intro/scene_3/groudon.bin.lz"
	.if (. - gIntroGroudon_Tilemap) != 0x4E4
	.error "gIntroGroudon_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D89208: intro.s: Task_IntroLoadKyogreScene
	.globl gIntroData_08D89208
gIntroData_08D89208:
	.globl gIntroKyogre_Gfx
	@ exact GBA LZ77 from editable graphics/intro/scene_3/kyogre.png: compressed=0x898, decompressed=0x4000
gIntroKyogre_Gfx:
	@ canonical ROM range 0x08D89208-0x08D89A9F
	.incbin "build/graphics/intro/scene_3/kyogre.8bpp.lz"
	.if (. - gIntroKyogre_Gfx) != 0x898
	.error "gIntroKyogre_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D89AA0: intro.s: Task_IntroLoadKyogreScene
	.globl gIntroData_08D89AA0
gIntroData_08D89AA0:
	.globl gIntroKyogre_Tilemap
	@ exact GBA LZ77 from editable graphics/intro/scene_3/kyogre.tilemap.u16: compressed=0x4C0, decompressed=0x2000
gIntroKyogre_Tilemap:
	@ canonical ROM range 0x08D89AA0-0x08D89F5F
	.incbin "build/graphics/intro/scene_3/kyogre.bin.lz"
	.if (. - gIntroKyogre_Tilemap) != 0x4C0
	.error "gIntroKyogre_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D89F60: intro.s: Task_IntroLoadGroudonScene
	.globl gIntroData_08D89F60
gIntroData_08D89F60:
	.globl gIntroLegendBg_Gfx
	@ exact GBA LZ77 from editable graphics/intro/scene_3/legend_bg.png: compressed=0x89C, decompressed=0x4000
gIntroLegendBg_Gfx:
	@ canonical ROM range 0x08D89F60-0x08D8A7FB
	.incbin "build/graphics/intro/scene_3/legend_bg.4bpp.lz"
	.if (. - gIntroLegendBg_Gfx) != 0x89C
	.error "gIntroLegendBg_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8A7FC: intro.s: Task_IntroLoadGroudonScene
	.globl gIntroData_08D8A7FC
gIntroData_08D8A7FC:
	.globl gIntroGroudonBg_Tilemap
	@ exact GBA LZ77 from editable graphics/intro/scene_3/groudon_bg.tilemap.u16: compressed=0x11C, decompressed=0x800
gIntroGroudonBg_Tilemap:
	@ canonical ROM range 0x08D8A7FC-0x08D8A917
	.incbin "build/graphics/intro/scene_3/groudon_bg.bin.lz"
	.if (. - gIntroGroudonBg_Tilemap) != 0x11C
	.error "gIntroGroudonBg_Tilemap compressed size mismatch"
	.endif
