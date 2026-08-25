	@ pret/pokeemerald-jp direct xref for 0x08D93294: ice.s: AnimTask_Haze1, AnimTask_LoadMistTiles
.globl gBattleAnimFogTilemap
gBattleAnimFogTilemap: @ 0x08D93294
	@ confirmed GBA LZ77 stream: compressed=0x176, decompressed=0x800
	@ analyzed canonical ROM range 0x08D93294-0x08D9354B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_anims/backgrounds/fog_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpritePal_WeatherBall
gBattleAnimSpritePal_WeatherBall: @ 0x08D9340C
	.incbin "build/graphics/battle_anims/sprites/weather_ball_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpriteGfx_WeatherBall
gBattleAnimSpriteGfx_WeatherBall: @ 0x08D93428
	.incbin "build/graphics/battle_anims/sprites/weather_ball_rom_exact.4bpp.lz"
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/scary_face_player.bin
	.globl gBattleAnimBgTilemap_ScaryFacePlayer
gBattleAnimBgTilemap_ScaryFacePlayer: @ 0x08D9354C
	@ exact GBA LZ77 slot: compressed=0x1E4, decompressed=0x800
	.incbin "build/graphics/battle_anims/backgrounds/scary_face_player.bin.lz"
	.if (. - gBattleAnimBgTilemap_ScaryFacePlayer) != 0x1E4
	.error "gBattleAnimBgTilemap_ScaryFacePlayer compressed size mismatch"
	.endif
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/scary_face_opponent.bin
	.globl gBattleAnimBgTilemap_ScaryFaceOpponent
gBattleAnimBgTilemap_ScaryFaceOpponent: @ 0x08D93730
	@ exact GBA LZ77 slot: compressed=0x1E4, decompressed=0x800
	.incbin "build/graphics/battle_anims/backgrounds/scary_face_opponent.bin.lz"
	.if (. - gBattleAnimBgTilemap_ScaryFaceOpponent) != 0x1E4
	.error "gBattleAnimBgTilemap_ScaryFaceOpponent compressed size mismatch"
	.endif
