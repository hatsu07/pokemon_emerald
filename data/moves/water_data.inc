	@ pret/pokeemerald-jp direct xref for 0x08D96358: water.s: AnimTask_CreateSurfWave
.globl gBattleAnimBgTilemap_SurfContest
gBattleAnimBgTilemap_SurfContest: @ 0x08D96358
	@ confirmed GBA LZ77 stream: compressed=0x2F2, decompressed=0x1000
	@ analyzed canonical ROM range 0x08D96358-0x08D9679F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 4 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_anims/backgrounds/surf_contest_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpritePal_Slash2
gBattleAnimSpritePal_Slash2: @ 0x08D9664C
	.incbin "build/graphics/battle_anims/sprites/slash_2_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	.globl gBattleAnimSpriteGfx_WhiteShadow
gBattleAnimSpriteGfx_WhiteShadow: @ 0x08D96674
	.incbin "build/graphics/battle_anims/sprites/white_shadow_rom_exact.4bpp.lz"
	.globl gBattleAnimSpritePal_WhiteShadow
gBattleAnimSpritePal_WhiteShadow: @ 0x08D96788
	.incbin "build/graphics/battle_anims/sprites/white_shadow_palette_rom_exact.gbapal.lz"
	.byte 0x00, 0x00
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gPartyMenuBg_Gfx
gPartyMenuBg_Gfx: @ 0x08D967A0
	@ exact GBA LZ77 slot: compressed=0x2C8, decompressed=0x7C0
	.incbin "build/graphics/party_menu/bg.4bpp.lz"
	.if (. - gPartyMenuBg_Gfx) != 0x2C8
	.error "gPartyMenuBg_Gfx compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gPartyMenuBg_Pal
gPartyMenuBg_Pal: @ 0x08D96A68
	@ exact GBA LZ77 slot: compressed=0xEC, decompressed=0x160
	.incbin "build/graphics/party_menu/bg.gbapal.lz"
	.if (. - gPartyMenuBg_Pal) != 0xEC
	.error "gPartyMenuBg_Pal compressed size mismatch"
	.endif
