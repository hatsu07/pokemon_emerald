	@ pret/pokeemerald-jp direct xref for 0x08D8DA9C: rock.s: AnimTask_LoadSandstormBackground
	.globl gBattleAnimSpritePal_FlyingDirt
gBattleAnimSpritePal_FlyingDirt: @ 0x08D8DA9C
	@ confirmed GBA LZ77 stream: compressed=0x26, decompressed=0x20
	@ analyzed canonical ROM range 0x08D8DA9C-0x08D8E97B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 9 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_anims/sprites/flying_dirt_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpriteGfx_MetalSoundWaves
gBattleAnimSpriteGfx_MetalSoundWaves: @ 0x08D8DAC4
	.incbin "build/graphics/battle_anims/sprites/metal_sound_waves_rom_exact.4bpp.lz"
	.globl gBattleAnimSpritePal_MetalSoundWaves
gBattleAnimSpritePal_MetalSoundWaves: @ 0x08D8DC80
	.incbin "build/graphics/battle_anims/sprites/metal_sound_waves_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimBgImage_Ice
gBattleAnimBgImage_Ice: @ 0x08D8DC98
	.incbin "build/graphics/battle_anims/backgrounds/ice/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimBgPalette_Ice
gBattleAnimBgPalette_Ice: @ 0x08D8E608
	.incbin "build/graphics/battle_anims/backgrounds/ice/palette_rom_exact.gbapal.lz"
	.globl gBattleAnimBgTilemap_Ice
gBattleAnimBgTilemap_Ice: @ 0x08D8E62C
	.incbin "build/graphics/battle_anims/backgrounds/ice/tilemap_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpriteGfx_IcicleSpear
gBattleAnimSpriteGfx_IcicleSpear: @ 0x08D8E824
	.incbin "build/graphics/battle_anims/sprites/icicle_spear_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpritePal_IcicleSpear
gBattleAnimSpritePal_IcicleSpear: @ 0x08D8E8F8
	.incbin "build/graphics/battle_anims/sprites/icicle_spear_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D8E920
gLz77Asset_08D8E920: @ 0x08D8E920
	.incbin "build/assets/lz77_raw/08D8E920.bin.lz"
	.byte 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D8E97C: contest.s: GetTurnOrderNumberGfx
	.globl gContestData_08D8E97C
gContestData_08D8E97C: @ 0x08D8E97C
	@ analyzed canonical ROM range 0x08D8E97C-0x08D8E9FB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x80 bytes=128
	.byte 0x77, 0x77, 0x77, 0x77, 0x88, 0xF8, 0x8F, 0x88, 0x88, 0xFF, 0x8F, 0x88, 0x88, 0xF8, 0x8F, 0x88
	.byte 0x88, 0xF8, 0x8F, 0x88, 0x88, 0xF8, 0x8F, 0x88, 0xF8, 0xFF, 0xFF, 0x8F, 0x99, 0x99, 0x99, 0x99
	.byte 0x77, 0x77, 0x77, 0x77, 0xF8, 0xFF, 0xFF, 0x88, 0xFF, 0x88, 0xF8, 0x8F, 0x88, 0x88, 0xF8, 0x8F
	.byte 0x88, 0xFF, 0xFF, 0x88, 0xF8, 0xFF, 0x88, 0x88, 0xF8, 0xFF, 0xFF, 0x8F, 0x99, 0x99, 0x99, 0x99
	.byte 0x77, 0x77, 0x77, 0x77, 0xF8, 0xFF, 0xFF, 0x8F, 0x88, 0x88, 0xFF, 0x88, 0x88, 0xFF, 0x8F, 0x88
	.byte 0x88, 0x88, 0xF8, 0x8F, 0xFF, 0x88, 0xF8, 0x8F, 0xF8, 0xFF, 0xFF, 0x88, 0x99, 0x99, 0x99, 0x99
	.byte 0x77, 0x77, 0x77, 0x77, 0x88, 0xF8, 0xFF, 0x88, 0x88, 0xFF, 0xFF, 0x88, 0xF8, 0x8F, 0xFF, 0x88
	.byte 0xFF, 0x88, 0xFF, 0x88, 0xFF, 0xFF, 0xFF, 0x8F, 0x88, 0x88, 0xFF, 0x88, 0x99, 0x99, 0x99, 0x99
	@ pret/pokeemerald-jp direct xref for 0x08D8E9FC: contest.s: GetTurnOrderNumberGfx
	.globl gContestData_08D8E9FC
gContestData_08D8E9FC: @ 0x08D8E9FC
	@ analyzed canonical ROM range 0x08D8E9FC-0x08D8EBD7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 6 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.byte 0x77, 0x77, 0x77, 0x77, 0xF8, 0xFF, 0xFF, 0x8F, 0xFF, 0x8F, 0xF8, 0xFF, 0xFF, 0x88, 0xFF, 0x8F
	.byte 0x88, 0xF8, 0x8F, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xF8, 0x8F, 0x88, 0x99, 0xF9, 0x9F, 0x99
	.globl gBattleAnimSpriteGfx_GlowyRedOrb
gBattleAnimSpriteGfx_GlowyRedOrb: @ 0x08D8EA1C
	.incbin "build/graphics/battle_anims/sprites/glowy_red_orb_rom_exact.4bpp.lz"
	.byte 0x00
	.globl gBattleAnimSpritePal_GlowyRedOrb
gBattleAnimSpritePal_GlowyRedOrb: @ 0x08D8EA3C
	.incbin "build/graphics/battle_anims/sprites/glowy_red_orb_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpritePal_GlowyGreenOrb
gBattleAnimSpritePal_GlowyGreenOrb: @ 0x08D8EA54
	.incbin "build/graphics/battle_anims/sprites/glowy_green_orb_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpritePal_SleepPowder
gBattleAnimSpritePal_SleepPowder: @ 0x08D8EA6C
	.incbin "build/graphics/battle_anims/sprites/sleep_powder_palette_rom_exact.gbapal.lz"
	.byte 0x00
	.globl gBattleAnimSpritePal_StunSpore
gBattleAnimSpritePal_StunSpore: @ 0x08D8EA8C
	.incbin "build/graphics/battle_anims/sprites/stun_spore_palette_rom_exact.gbapal.lz"
	.byte 0x00
	.globl gLz77Asset_08D8EAAC
gLz77Asset_08D8EAAC: @ 0x08D8EAAC
	.incbin "build/assets/lz77_raw/08D8EAAC.bin.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D8EBD8: contest.s: UpdateApplauseMeter
	.globl gContestData_08D8EBD8
gContestData_08D8EBD8: @ 0x08D8EBD8
	@ analyzed canonical ROM range 0x08D8EBD8-0x08D8FB4F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 14 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.byte 0x44, 0x44, 0x44, 0x44, 0x44, 0x33, 0x43, 0x44, 0x34, 0x44, 0x34, 0x44, 0x43, 0x44, 0x44, 0x43
	.byte 0x43, 0x44, 0x44, 0x43, 0x43, 0x44, 0x44, 0x43, 0x43, 0x44, 0x44, 0x43, 0x43, 0x44, 0x44, 0x43
	.byte 0x34, 0x44, 0x34, 0x44, 0x44, 0x33, 0x43, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44
	.byte 0x33, 0x33, 0x33, 0x33, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x44, 0x44, 0x44, 0x44, 0x44, 0x77, 0x47, 0x44, 0x74, 0x88, 0x78, 0x44, 0x87, 0x88, 0x88, 0x47
	.byte 0x87, 0x88, 0x88, 0x47, 0x87, 0x88, 0x88, 0x47, 0x87, 0x88, 0x88, 0x47, 0x87, 0x88, 0x88, 0x47
	.byte 0x74, 0x88, 0x78, 0x44, 0x44, 0x77, 0x47, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44
	.byte 0x33, 0x33, 0x33, 0x33, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x72, 0x09, 0xFE, 0x3A, 0x7F, 0x3B, 0xFF, 0x4F, 0xDF, 0x0C, 0x5A, 0x00, 0x7E, 0x6E
	.byte 0x1F, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.globl gBattleAnimSpriteGfx_Splash
gBattleAnimSpriteGfx_Splash: @ 0x08D8EC78
	.incbin "build/graphics/battle_anims/sprites/splash_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpritePal_Splash
gBattleAnimSpritePal_Splash: @ 0x08D8EE94
	.incbin "build/graphics/battle_anims/sprites/splash_palette_rom_exact.gbapal.lz"
	.globl gBattleAnimSpriteGfx_SweatBead
gBattleAnimSpriteGfx_SweatBead: @ 0x08D8EEB8
	.incbin "build/graphics/battle_anims/sprites/sweat_bead_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpriteGfx_Pokeblock
gBattleAnimSpriteGfx_Pokeblock: @ 0x08D8EEE0
	.incbin "build/graphics/battle_anims/sprites/pokeblock_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpritePal_Pokeblock
gBattleAnimSpritePal_Pokeblock: @ 0x08D8EF34
	.incbin "build/graphics/battle_anims/sprites/pokeblock_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpriteGfx_Gem1
gBattleAnimSpriteGfx_Gem1: @ 0x08D8EF4C
	.incbin "build/graphics/battle_anims/sprites/gem_1_rom_exact.4bpp.lz"
	.byte 0x00
	.globl gBattleAnimSpriteGfx_Gem2
gBattleAnimSpriteGfx_Gem2: @ 0x08D8F0CC
	.incbin "build/graphics/battle_anims/sprites/gem_2_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpriteGfx_Gem3
gBattleAnimSpriteGfx_Gem3: @ 0x08D8F238
	.incbin "build/graphics/battle_anims/sprites/gem_3_rom_exact.4bpp.lz"
	.globl gBattleAnimSpritePal_Gem1
gBattleAnimSpritePal_Gem1: @ 0x08D8F3A0
	.incbin "build/graphics/battle_anims/sprites/gem_1_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimBgImage_InAir
gBattleAnimBgImage_InAir: @ 0x08D8F3C8
	.incbin "build/graphics/battle_anims/backgrounds/in_air/tiles_rom_exact.4bpp.lz"
	.byte 0x00
	.globl gBattleAnimBgPalette_InAir
gBattleAnimBgPalette_InAir: @ 0x08D8F524
	.incbin "build/graphics/battle_anims/backgrounds/in_air/palette_rom_exact.gbapal.lz"
	.byte 0x00
	.globl gBattleAnimBgTilemap_InAir
gBattleAnimBgTilemap_InAir: @ 0x08D8F54C
	.incbin "build/graphics/battle_anims/backgrounds/in_air/tilemap_rom_exact.tilemap.lz"
	.globl gBattleAnimSpriteGfx_Protect
gBattleAnimSpriteGfx_Protect: @ 0x08D8F734
	.incbin "build/graphics/battle_anims/sprites/protect_rom_exact.4bpp.lz"
	.byte 0x00
	.globl gBattleAnimSpritePal_Protect
gBattleAnimSpritePal_Protect: @ 0x08D8FB30
	.incbin "build/graphics/battle_anims/sprites/protect_palette_rom_exact.gbapal.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D8FB50: water.s: AnimTask_CreateSurfWave
.globl gBattleAnimBackgroundImageMuddyWater_Pal
gBattleAnimBackgroundImageMuddyWater_Pal: @ 0x08D8FB50
	@ confirmed GBA LZ77 stream: compressed=0x24, decompressed=0x20
	@ analyzed canonical ROM range 0x08D8FB50-0x08D8FC27
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_anims/backgrounds/muddy_water_palette_rom_exact.gbapal.lz"
	.globl gLz77Asset_08D8FB74
gLz77Asset_08D8FB74: @ 0x08D8FB74
	.incbin "build/assets/lz77_raw/08D8FB74.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D8FBA4
gLz77Asset_08D8FBA4: @ 0x08D8FBA4
	.incbin "build/assets/lz77_raw/08D8FBA4.bin.lz"
	.byte 0x00, 0x00, 0x00

	.globl gMonIcon_Egg
gMonIcon_Egg: @ 0x08D8FC28 [412]
	.incbin "build/graphics/pokemon/egg/icon.4bpp"
	@ analyzed canonical ROM range 0x08D90028-0x08D9154B
	@ confirmed GBA LZ77 stream: compressed=0xCC6, decompressed=0x2000
	.globl gBattleAnimBgImage_Ghost
gBattleAnimBgImage_Ghost: @ 0x08D90028
	@ structured 4bpp background tiles
	@ ANALYSIS: 6 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_anims/backgrounds/ghost/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimBgPalette_Ghost
gBattleAnimBgPalette_Ghost: @ 0x08D90CF0
	.incbin "build/graphics/battle_anims/backgrounds/ghost/palette_rom_exact.gbapal.lz"
	.byte 0x00
	.globl gBattleAnimBgTilemap_Ghost
gBattleAnimBgTilemap_Ghost: @ 0x08D90D0C
	.incbin "build/graphics/battle_anims/backgrounds/ghost/tilemap_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpritePal_WhipHit
gBattleAnimSpritePal_WhipHit: @ 0x08D91000
	.incbin "build/graphics/battle_anims/sprites/whip_hit_palette_rom_exact.gbapal.lz"
	.globl gBattleAnimBgPalette_SolarBeam
gBattleAnimBgPalette_SolarBeam: @ 0x08D91028
	.incbin "build/graphics/battle_anims/backgrounds/solar_beam/palette_rom_exact.gbapal.lz"
	.globl gLz77Asset_08D91050
gLz77Asset_08D91050: @ 0x08D91050
	.incbin "build/graphics/battle_anims/backgrounds/exact_lz/impact_opponent_rom_exact.tilemap.lz"
	.byte 0x00
