	@ Priority A: battle status-effect structs and title-screen assets.
	@ Priority A: battle status-effect structs and title-screen assets.
	@ Priority A external targets identified from battle_anim_status_effects consumers.
	@ Local aliases emit no bytes and avoid depending on C static symbol visibility.
.set gPriorityABattleAnimFrozenIceCubeOam, gOamData_AffineOff_ObjBlend_64x64 @ gOamData_AffineOff_ObjBlend_64x64
	.set gPriorityABattleAnimFlashingCircleImpactOam, gOamData_AffineOff_ObjNormal_8x8 @ gOamData_AffineOff_ObjNormal_8x8
	.set gPriorityABattleAnimDummySpriteAnimTable, 0x082BF304 @ gDummySpriteAnimTable
	.set gPriorityABattleAnimDummySpriteAffineAnimTable, 0x082BF310 @ gDummySpriteAffineAnimTable
	.set gPriorityABattleAnimSpriteCallbackDummy, 0x08007141 @ SpriteCallbackDummy (Thumb)
	.set gPriorityABattleAnimFlashingCircleImpactCallback, 0x080A970D @ AnimFlashingCircleImpact (Thumb)
	.globl gBattleAnimFrozenIceCubeSubspriteTable
gBattleAnimFrozenIceCubeSubspriteTable: @ 0x0851769C
	rodata_subsprite_table 4, sFrozenIceCubeSubsprites
	.globl gBattleAnimFrozenIceCubeSpriteTemplate
gBattleAnimFrozenIceCubeSpriteTemplate: @ 0x085176A4
	rodata_sprite_template 0x271A, 0x271A, gPriorityABattleAnimFrozenIceCubeOam, gPriorityABattleAnimDummySpriteAnimTable, 0, gPriorityABattleAnimDummySpriteAffineAnimTable, gPriorityABattleAnimSpriteCallbackDummy
	.globl gBattleAnimFlashingCircleImpactSpriteTemplate
gBattleAnimFlashingCircleImpactSpriteTemplate: @ 0x085176BC
	rodata_sprite_template 0x2798, 0x2798, gPriorityABattleAnimFlashingCircleImpactOam, gPriorityABattleAnimDummySpriteAnimTable, 0, gPriorityABattleAnimDummySpriteAffineAnimTable, gPriorityABattleAnimFlashingCircleImpactCallback
	.globl gTitleScreenPressStart_Pal
gTitleScreenPressStart_Pal: @ 0x085176D4
	.incbin "build/graphics/priority_a/title_screen/press_start_palette.gbapal"
	.if (. - gTitleScreenPressStart_Pal) != 0x20
	.error "gTitleScreenPressStart_Pal exact asset size mismatch"
	.endif
	.globl gTitleScreenPressStart_Gfx
gTitleScreenPressStart_Gfx: @ 0x085176F4
	.incbin "build/graphics/priority_a/title_screen/press_start.4bpp.lz"
	.if (. - gTitleScreenPressStart_Gfx) != 0x3AC
	.error "gTitleScreenPressStart_Gfx exact asset size mismatch"
	.endif
	.globl gTitleScreenPokemonLogo_Tilemap
gTitleScreenPokemonLogo_Tilemap: @ 0x08517AA0
	.incbin "build/graphics/priority_a/title_screen/pokemon_logo.bin.lz"
	.if (. - gTitleScreenPokemonLogo_Tilemap) != 0xB8
	.error "gTitleScreenPokemonLogo_Tilemap exact asset size mismatch"
	.endif
	.globl gTitleScreenBgPalettes
gTitleScreenBgPalettes: @ 0x08517B58
	.incbin "build/graphics/priority_a/title_screen/bg_palettes.gbapal"
	.if (. - gTitleScreenBgPalettes) != 0xC0
	.error "gTitleScreenBgPalettes exact asset size mismatch"
	.endif
	.globl gTitleScreenPokemonLogo_Gfx
gTitleScreenPokemonLogo_Gfx: @ 0x08517C18
	.incbin "build/graphics/priority_a/title_screen/pokemon_logo.8bpp.lz"
	.if (. - gTitleScreenPokemonLogo_Gfx) != 0x1774
	.error "gTitleScreenPokemonLogo_Gfx exact asset size mismatch"
	.endif
	.globl gTitleScreenEmeraldVersion_Gfx
gTitleScreenEmeraldVersion_Gfx: @ 0x0851938C
	.incbin "build/graphics/priority_a/title_screen/emerald_version.8bpp.lz"
	.if (. - gTitleScreenEmeraldVersion_Gfx) != 0x728
	.error "gTitleScreenEmeraldVersion_Gfx exact asset size mismatch"
	.endif
	.globl gTitleScreenRayquaza_Gfx
gTitleScreenRayquaza_Gfx: @ 0x08519AB4
	.incbin "build/graphics/priority_a/title_screen/rayquaza.4bpp.lz"
	.if (. - gTitleScreenRayquaza_Gfx) != 0x7E4
	.error "gTitleScreenRayquaza_Gfx exact asset size mismatch"
	.endif
	.globl gTitleScreenRayquaza_Tilemap
gTitleScreenRayquaza_Tilemap: @ 0x0851A298
	.incbin "build/graphics/priority_a/title_screen/rayquaza.bin.lz"
	.if (. - gTitleScreenRayquaza_Tilemap) != 0x300
	.error "gTitleScreenRayquaza_Tilemap exact asset size mismatch"
	.endif
	.globl gTitleScreenLogoShine_Gfx
gTitleScreenLogoShine_Gfx: @ 0x0851A598
	.incbin "build/graphics/priority_a/title_screen/logo_shine.4bpp.lz"
	.if (. - gTitleScreenLogoShine_Gfx) != 0x150
	.error "gTitleScreenLogoShine_Gfx exact asset size mismatch"
	.endif
	.globl gTitleScreenClouds_Gfx
gTitleScreenClouds_Gfx: @ 0x0851A6E8
	.incbin "build/graphics/priority_a/title_screen/clouds.4bpp.lz"
	.if (. - gTitleScreenClouds_Gfx) != 0x2E4
	.error "gTitleScreenClouds_Gfx exact asset size mismatch"
	.endif
	.globl gTitleScreenClouds_Tilemap
gTitleScreenClouds_Tilemap: @ 0x0851A9CC
	.incbin "build/graphics/priority_a/title_screen/clouds.bin.lz"
	.if (. - gTitleScreenClouds_Tilemap) != 0x240
	.error "gTitleScreenClouds_Tilemap exact asset size mismatch"
	.endif
	.globl gTitleScreenAlphaBlend
gTitleScreenAlphaBlend: @ 0x0851AC0C
	@ 64 BLDALPHA values: (16,0)..(0,16), then held at (0,16)
	.2byte 0x0010, 0x0110, 0x0210, 0x0310, 0x0410, 0x0510, 0x0610, 0x0710
	.2byte 0x0810, 0x0910, 0x0A10, 0x0B10, 0x0C10, 0x0D10, 0x0E10, 0x0F10
	.2byte 0x100F, 0x100E, 0x100D, 0x100C, 0x100B, 0x100A, 0x1009, 0x1008
	.2byte 0x1007, 0x1006, 0x1005, 0x1004, 0x1003, 0x1002, 0x1001, 0x1000
	.fill 32, 2, 0x1000
sVersionBannerLeftOamData: @ 0x0851AC8C
	.2byte 0x60A0, 0xC000, 0x0000, 0x0000
sVersionBannerRightOamData: @ 0x0851AC94
	.2byte 0x20A0, 0x8000, 0x0000, 0x0000
sVersionBannerLeftAnimSequence: @ 0x0851AC9C
	.2byte 0x0000, 0x001E, 0xFFFF, 0x0000
sVersionBannerRightAnimSequence: @ 0x0851ACA4
	.2byte 0x0040, 0x001E, 0xFFFF, 0x0000
sVersionBannerLeftAnimTable: @ 0x0851ACAC
	.4byte sVersionBannerLeftAnimSequence
sVersionBannerRightAnimTable: @ 0x0851ACB0
	.4byte sVersionBannerRightAnimSequence
	.globl sVersionBannerLeftSpriteTemplate
sVersionBannerLeftSpriteTemplate:
	rodata_sprite_template 0x03E8, 0x03E8, sVersionBannerLeftOamData, sVersionBannerLeftAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCB_VersionBannerLeft
	.globl sVersionBannerRightSpriteTemplate
sVersionBannerRightSpriteTemplate:
	rodata_sprite_template 0x03E8, 0x03E8, sVersionBannerRightOamData, sVersionBannerRightAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCB_VersionBannerRight
	.globl sSpriteSheet_EmeraldVersion
sSpriteSheet_EmeraldVersion:
	.4byte 0x0851938C
	.2byte 0x1000, 0x03E8
	.fill 8, 1, 0
sOamData_CopyrightBanner: @ 0x0851ACF4
	.2byte 0x40A0, 0x4000, 0x0000, 0x0000
sAnim_PressStart_0: @ 0x0851ACFC
	.2byte 0x0001, 0x0004, 0xFFFF, 0x0000
sAnim_PressStart_1: @ 0x0851AD04
	.2byte 0x0005, 0x0004, 0xFFFF, 0x0000
sAnim_PressStart_2: @ 0x0851AD0C
	.2byte 0x0009, 0x0004, 0xFFFF, 0x0000
sAnim_PressStart_3: @ 0x0851AD14
	.2byte 0x000D, 0x0004, 0xFFFF, 0x0000
sAnim_PressStart_4: @ 0x0851AD1C
	.2byte 0x0011, 0x0004, 0xFFFF, 0x0000
sAnim_Copyright_0: @ 0x0851AD24
	.2byte 0x0015, 0x0004, 0xFFFF, 0x0000
sAnim_Copyright_1: @ 0x0851AD2C
	.2byte 0x0019, 0x0004, 0xFFFF, 0x0000
sAnim_Copyright_2: @ 0x0851AD34
	.2byte 0x001D, 0x0004, 0xFFFF, 0x0000
sAnim_Copyright_3: @ 0x0851AD3C
	.2byte 0x0021, 0x0004, 0xFFFF, 0x0000
sAnim_Copyright_4: @ 0x0851AD44
	.2byte 0x0025, 0x0004, 0xFFFF, 0x0000
sStartCopyrightBannerAnimTable: @ 0x0851AD4C
	.4byte sAnim_PressStart_0, sAnim_PressStart_1, sAnim_PressStart_2, sAnim_PressStart_3, sAnim_PressStart_4
	.4byte sAnim_Copyright_0, sAnim_Copyright_1, sAnim_Copyright_2, sAnim_Copyright_3, sAnim_Copyright_4
	.globl sStartCopyrightBannerSpriteTemplate
sStartCopyrightBannerSpriteTemplate:
	rodata_sprite_template 0x03E9, 0x03E9, sOamData_CopyrightBanner, sStartCopyrightBannerAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCB_PressStartCopyrightBanner
	.globl sSpriteSheet_PressStart
sSpriteSheet_PressStart:
	.4byte 0x085176F4
	.2byte 0x0520, 0x03E9
	.fill 8, 1, 0
	.globl sSpritePalette_PressStart
sSpritePalette_PressStart:
	.4byte 0x085176D4
	.2byte 0x03E9, 0
	.fill 8, 1, 0
sPokemonLogoShineOamData: @ 0x0851ADAC
	.2byte 0x00A0, 0xC000, 0x0000, 0x0000
sPokemonLogoShineAnimSequence: @ 0x0851ADB4
	.2byte 0x0000, 0x0004, 0xFFFF, 0x0000
sPokemonLogoShineAnimTable: @ 0x0851ADBC
	.4byte sPokemonLogoShineAnimSequence
	.globl sPokemonLogoShineSpriteTemplate
sPokemonLogoShineSpriteTemplate:
	rodata_sprite_template 0x03EA, 0x03E9, sPokemonLogoShineOamData, sPokemonLogoShineAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCB_PokemonLogoShine
	.globl sPokemonLogoShineSpriteSheet
sPokemonLogoShineSpriteSheet:
	.4byte 0x0851A598
	.2byte 0x0800, 0x03EA
	.fill 8, 1, 0
