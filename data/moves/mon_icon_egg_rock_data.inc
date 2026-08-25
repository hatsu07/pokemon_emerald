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
