	@ pret/pokeemerald-jp direct xref for 0x08D8FB50: water.s: AnimTask_CreateSurfWave
.globl gBattleAnimBackgroundImageMuddyWater_Pal
gBattleAnimBackgroundImageMuddyWater_Pal: @ 0x08D8FB50
	@ confirmed GBA LZ77 stream: compressed=0x24, decompressed=0x20
	@ analyzed canonical ROM range 0x08D8FB50-0x08D8FC27
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_anims/backgrounds/muddy_water_palette_rom_exact.gbapal.lz"
	.globl gEnemyMonShadow_Gfx
gEnemyMonShadow_Gfx: @ 0x08D8FB74
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/battle_interface/enemy_shadow_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBattleInterface_BallStatusBarGfx
gBattleInterface_BallStatusBarGfx: @ 0x08D8FBA4
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/battle_interface/ball_status_bar_rom_exact.4bpp.lz"
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
