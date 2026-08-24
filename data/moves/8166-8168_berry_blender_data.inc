	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	@ pret/pokeemerald-jp direct xref for 0x08D9154C: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderCenter_Gfx
gBerryBlenderCenter_Gfx: @ 0x08D9154C
	@ Semantic exact-LZ asset; source: graphics/berry_blender/center.png.
	.incbin "build/graphics/final_remaining/berry_blender_center.bin.lz"
	.if (. - gBerryBlenderCenter_Gfx) != 0x820
	.error "gBerryBlenderCenter_Gfx compressed size mismatch"
	.endif

	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBerryBlenderOuter_Gfx
gBerryBlenderOuter_Gfx: @ 0x08D91D6C
	@ exact GBA LZ77 slot: compressed=0xA34, decompressed=0x2000
	.incbin "build/graphics/berry_blender/outer.4bpp.lz"
	.if (. - gBerryBlenderOuter_Gfx) != 0xA34
	.error "gBerryBlenderOuter_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D927A0: berry_blender.s: LoadBerryBlenderGfx
.globl gBerryBlenderOuter_Tilemap
gBerryBlenderOuter_Tilemap: @ 0x08D927A0
	@ confirmed GBA LZ77 stream: compressed=0x311, decompressed=0x800
	@ analyzed canonical ROM range 0x08D927A0-0x08D93293
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 6 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/berry_blender/outer_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimBgPalette_Cosmic
gBattleAnimBgPalette_Cosmic: @ 0x08D92AB4
	.incbin "build/graphics/battle_anims/backgrounds/cosmic/palette_rom_exact.gbapal.lz"
	.globl gBattleAnimBgImage_Cosmic
gBattleAnimBgImage_Cosmic: @ 0x08D92ADC
	.incbin "build/graphics/battle_anims/backgrounds/cosmic/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimBgTilemap_Cosmic
gBattleAnimBgTilemap_Cosmic: @ 0x08D92D3C
	.incbin "build/graphics/battle_anims/backgrounds/cosmic/tilemap_rom_exact.tilemap.lz"
	.globl gBattleAnimSpritePal_SlamHit2
gBattleAnimSpritePal_SlamHit2: @ 0x08D92E78
	.incbin "build/graphics/battle_anims/sprites/slam_hit_2_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpriteGfx_SlamHit2
gBattleAnimSpriteGfx_SlamHit2: @ 0x08D92EA0
	.incbin "build/graphics/battle_anims/sprites/slam_hit_2_rom_exact.4bpp.lz"
