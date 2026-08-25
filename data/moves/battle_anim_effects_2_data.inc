	@ pret/pokeemerald-jp direct xref for 0x08D93914: battle_anim_effects_2.s: sub_08106D48
.globl gBattleAnimBgTilemap_ScaryFaceContest
gBattleAnimBgTilemap_ScaryFaceContest: @ 0x08D93914
	@ confirmed GBA LZ77 stream: compressed=0x1E2, decompressed=0x800
	@ analyzed canonical ROM range 0x08D93914-0x08D94A6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 20 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_anims/backgrounds/scary_face_contest_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpriteGfx_Hail
gBattleAnimSpriteGfx_Hail: @ 0x08D93AF8
	.incbin "build/graphics/battle_anims/sprites/hail_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpritePal_Hail
gBattleAnimSpritePal_Hail: @ 0x08D93B38
	.incbin "build/graphics/battle_anims/sprites/hail_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpriteGfx_GreenSpike
gBattleAnimSpriteGfx_GreenSpike: @ 0x08D93B50
	.incbin "build/graphics/battle_anims/sprites/green_spike_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpritePal_GreenSpike
gBattleAnimSpritePal_GreenSpike: @ 0x08D93B90
	.incbin "build/graphics/battle_anims/sprites/green_spike_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpritePal_WhiteCircleOfLight
gBattleAnimSpritePal_WhiteCircleOfLight: @ 0x08D93BA8
	.incbin "build/graphics/battle_anims/sprites/white_circle_of_light_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpritePal_GlowyBlueOrb
gBattleAnimSpritePal_GlowyBlueOrb: @ 0x08D93BC0
	.incbin "build/graphics/battle_anims/sprites/glowy_blue_orb_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpriteGfx_Recycle
gBattleAnimSpriteGfx_Recycle: @ 0x08D93BD8
	.incbin "build/graphics/battle_anims/sprites/recycle_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpritePal_Recycle
gBattleAnimSpritePal_Recycle: @ 0x08D93DE4
	.incbin "build/graphics/battle_anims/sprites/recycle_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpriteGfx_RedParticles
gBattleAnimSpriteGfx_RedParticles: @ 0x08D93E00
	.incbin "build/graphics/battle_anims/sprites/red_particles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpritePal_RedParticles
gBattleAnimSpritePal_RedParticles: @ 0x08D93E4C
	.incbin "build/graphics/battle_anims/sprites/red_particles_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpriteGfx_DirtMound
gBattleAnimSpriteGfx_DirtMound: @ 0x08D93E68
	.incbin "build/graphics/battle_anims/sprites/dirt_mound_rom_exact.4bpp.lz"
	.globl gBattleAnimSpritePal_DirtMound
gBattleAnimSpritePal_DirtMound: @ 0x08D93FF0
	.incbin "build/graphics/battle_anims/sprites/dirt_mound_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimBgImage_Fissure
gBattleAnimBgImage_Fissure: @ 0x08D94010
	.incbin "build/graphics/battle_anims/backgrounds/fissure/tiles_rom_exact.4bpp.lz"
	.byte 0x00
	.globl gBattleAnimBgPalette_Fissure
gBattleAnimBgPalette_Fissure: @ 0x08D94304
	.incbin "build/graphics/battle_anims/backgrounds/fissure/palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimBgTilemap_Fissure
gBattleAnimBgTilemap_Fissure: @ 0x08D94320
	.incbin "build/graphics/battle_anims/backgrounds/fissure/tilemap_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpriteGfx_Bird
gBattleAnimSpriteGfx_Bird: @ 0x08D9460C
	.incbin "build/graphics/battle_anims/sprites/bird_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpritePal_Bird
gBattleAnimSpritePal_Bird: @ 0x08D94988
	.incbin "build/graphics/battle_anims/sprites/bird_palette_rom_exact.gbapal.lz"
	.byte 0x00
	.globl gBattleAnimSpriteGfx_CrossImpact
gBattleAnimSpriteGfx_CrossImpact: @ 0x08D949A4
	.incbin "build/graphics/battle_anims/sprites/cross_impact_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpritePal_CrossImpact
gBattleAnimSpritePal_CrossImpact: @ 0x08D94A44
	.incbin "build/graphics/battle_anims/sprites/cross_impact_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/water.png
	.globl gBattleAnimBgImage_Surf
gBattleAnimBgImage_Surf: @ 0x08D94A6C
	@ exact GBA LZ77 slot: compressed=0x1320, decompressed=0x2000
	.incbin "build/graphics/battle_anims/backgrounds/water.4bpp.lz"
	.if (. - gBattleAnimBgImage_Surf) != 0x1320
	.error "gBattleAnimBgImage_Surf compressed size mismatch"
	.endif
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/water.png
	.globl gBattleAnimBgPalette_Surf
gBattleAnimBgPalette_Surf: @ 0x08D95D8C
	@ exact GBA LZ77 slot: compressed=0x28, decompressed=0x20
	.incbin "build/graphics/battle_anims/backgrounds/water.gbapal.lz"
	.if (. - gBattleAnimBgPalette_Surf) != 0x28
	.error "gBattleAnimBgPalette_Surf compressed size mismatch"
	.endif
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/water_opponent.bin
	.globl gBattleAnimBgTilemap_SurfOpponent
gBattleAnimBgTilemap_SurfOpponent: @ 0x08D95DB4
	@ exact GBA LZ77 slot: compressed=0x2D0, decompressed=0x1000
	.incbin "build/graphics/battle_anims/backgrounds/water_opponent.bin.lz"
	.if (. - gBattleAnimBgTilemap_SurfOpponent) != 0x2D0
	.error "gBattleAnimBgTilemap_SurfOpponent compressed size mismatch"
	.endif
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/water_player.bin
	.globl gBattleAnimBgTilemap_SurfPlayer
gBattleAnimBgTilemap_SurfPlayer: @ 0x08D96084
	@ exact GBA LZ77 slot: compressed=0x2D4, decompressed=0x1000
	.incbin "build/graphics/battle_anims/backgrounds/water_player.bin.lz"
	.if (. - gBattleAnimBgTilemap_SurfPlayer) != 0x2D4
	.error "gBattleAnimBgTilemap_SurfPlayer compressed size mismatch"
	.endif
