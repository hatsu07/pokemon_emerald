@ Pokémon Emerald JP intro scene assets.
@ Exact ROM range owned here: 0x085C1044-0x085C5AEB.
@ 0x085C1042-0x085C1043 and 0x085C5AEC onward are intentionally outside.

	.globl gIntroDrops_Pal
gIntroDrops_Pal: @ 0x085C1044
	.incbin "build/graphics/intro/scene_1/drops.gbapal"
	.if (. - gIntroDrops_Pal) != 0x20
	.error "gIntroDrops_Pal size mismatch"
	.endif

	.globl gIntroLogo_Pal
gIntroLogo_Pal: @ 0x085C1064
	.incbin "build/graphics/intro/scene_1/logo.gbapal"
	.if (. - gIntroLogo_Pal) != 0x20
	.error "gIntroLogo_Pal size mismatch"
	.endif

	.globl gIntroDropsLogo_Gfx
gIntroDropsLogo_Gfx: @ 0x085C1084
	.incbin "build/graphics/intro/scene_1/drops_logo.4bpp.lz"
	.if (. - gIntroDropsLogo_Gfx) != 0x5F4
	.error "gIntroDropsLogo_Gfx size mismatch"
	.endif

	.globl gIntro1Bg_Pal
gIntro1Bg_Pal: @ 0x085C1678
	.incbin "build/graphics/intro/scene_1/bg.gbapal"
	.if (. - gIntro1Bg_Pal) != 0x200
	.error "gIntro1Bg_Pal size mismatch"
	.endif

	.globl gIntro1Bg0_Tilemap
gIntro1Bg0_Tilemap: @ 0x085C1878
	.incbin "build/graphics/intro/scene_1/bg0.bin.lz"
	.if (. - gIntro1Bg0_Tilemap) != 0x3B4
	.error "gIntro1Bg0_Tilemap size mismatch"
	.endif

	.globl gIntro1Bg1_Tilemap
gIntro1Bg1_Tilemap: @ 0x085C1C2C
	.incbin "build/graphics/intro/scene_1/bg1.bin.lz"
	.if (. - gIntro1Bg1_Tilemap) != 0x334
	.error "gIntro1Bg1_Tilemap size mismatch"
	.endif

	.globl gIntro1Bg2_Tilemap
gIntro1Bg2_Tilemap: @ 0x085C1F60
	.incbin "build/graphics/intro/scene_1/bg2.bin.lz"
	.if (. - gIntro1Bg2_Tilemap) != 0x2F0
	.error "gIntro1Bg2_Tilemap size mismatch"
	.endif

	.globl gIntro1Bg3_Tilemap
gIntro1Bg3_Tilemap: @ 0x085C2250
	.incbin "build/graphics/intro/scene_1/bg3.bin.lz"
	.if (. - gIntro1Bg3_Tilemap) != 0x218
	.error "gIntro1Bg3_Tilemap size mismatch"
	.endif

	.globl gIntro1Bg_Gfx
gIntro1Bg_Gfx: @ 0x085C2468
	.incbin "build/graphics/intro/scene_1/bg.4bpp.lz"
	.if (. - gIntro1Bg_Gfx) != 0x2170
	.error "gIntro1Bg_Gfx size mismatch"
	.endif

	.globl gIntroPokeball_Pal
gIntroPokeball_Pal: @ 0x085C45D8
	.incbin "build/graphics/intro/scene_3/pokeball.gbapal"
	.if (. - gIntroPokeball_Pal) != 0x200
	.error "gIntroPokeball_Pal size mismatch"
	.endif

	.globl gIntroPokeball_Tilemap
gIntroPokeball_Tilemap: @ 0x085C47D8
	.incbin "build/graphics/intro/scene_3/pokeball.bin.lz"
	.if (. - gIntroPokeball_Tilemap) != 0x130
	.error "gIntroPokeball_Tilemap size mismatch"
	.endif

	.globl gIntroPokeball_Gfx
gIntroPokeball_Gfx: @ 0x085C4908
	.incbin "build/graphics/intro/scene_3/pokeball.8bpp.lz"
	.if (. - gIntroPokeball_Gfx) != 0xB54
	.error "gIntroPokeball_Gfx size mismatch"
	.endif

	.globl gIntroStreaks_Pal
gIntroStreaks_Pal: @ 0x085C545C
	.incbin "build/graphics/intro/scene_3/streaks.gbapal"
	.if (. - gIntroStreaks_Pal) != 0x20
	.error "gIntroStreaks_Pal size mismatch"
	.endif

	.globl gIntroStreaks_Gfx
gIntroStreaks_Gfx: @ 0x085C547C
	.incbin "build/graphics/intro/scene_3/streaks.4bpp.lz"
	.if (. - gIntroStreaks_Gfx) != 0x6C
	.error "gIntroStreaks_Gfx size mismatch"
	.endif

	.globl gIntroStreaks_Tilemap
gIntroStreaks_Tilemap: @ 0x085C54E8
	.incbin "build/graphics/intro/scene_3/streaks.bin.lz"
	.if (. - gIntroStreaks_Tilemap) != 0x13C
	.error "gIntroStreaks_Tilemap size mismatch"
	.endif

	.globl gIntroRayquazaOrb_Pal
gIntroRayquazaOrb_Pal: @ 0x085C5624
	.incbin "build/graphics/intro/scene_3/rayquaza_orb.gbapal"
	.if (. - gIntroRayquazaOrb_Pal) != 0x20
	.error "gIntroRayquazaOrb_Pal size mismatch"
	.endif

	.globl gIntroMisc_Pal
gIntroMisc_Pal: @ 0x085C5644
	.incbin "build/graphics/intro/scene_3/misc.gbapal"
	.if (. - gIntroMisc_Pal) != 0x20
	.error "gIntroMisc_Pal size mismatch"
	.endif

	.globl gIntroMisc_Gfx
gIntroMisc_Gfx: @ 0x085C5664
	.incbin "build/graphics/intro/scene_3/misc.4bpp.lz"
	.if (. - gIntroMisc_Gfx) != 0x37C
	.error "gIntroMisc_Gfx size mismatch"
	.endif

	.globl gIntroFlygonSilhouette_Pal
gIntroFlygonSilhouette_Pal: @ 0x085C59E0
	.incbin "build/graphics/intro/scene_1/flygon_silhouette.gbapal"
	.if (. - gIntroFlygonSilhouette_Pal) != 0x20
	.error "gIntroFlygonSilhouette_Pal size mismatch"
	.endif

	.globl gIntroLati_Gfx
gIntroLati_Gfx: @ 0x085C5A00
	.incbin "build/graphics/intro/scene_1/lati.4bpp.lz"
	.if (. - gIntroLati_Gfx) != 0xEC
	.error "gIntroLati_Gfx size mismatch"
	.endif

	.if (. - gIntroDrops_Pal) != 0x4AA8
	.error "Intro scene asset block size mismatch"
	.endif
