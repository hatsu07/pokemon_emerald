	@ Semantic graphics block proven against pret/pokeemerald declaration order
@ and pret/pokeemerald-jp consumers; exact JP slot bytes are reconstructed
@ from editable semantic sources plus committed LZ77 token plans.

@ gDomeTourneyLine_Gfx: LZ stream=0x404, slot=0x404, raw=0x2000.
	.globl gDomeTourneyLine_Gfx
gDomeTourneyLine_Gfx: @ 0x08D835A0
	.incbin "build/graphics/battle_frontier/tourney_line.4bpp.lz"
	.if (. - gDomeTourneyLine_Gfx) != 0x404
	.error "gDomeTourneyLine_Gfx exact slot size mismatch"
	.endif

@ gDomeTourneyTree_Tilemap: LZ stream=0x22A, slot=0x22C, raw=0x800.
	.globl gDomeTourneyTree_Tilemap
gDomeTourneyTree_Tilemap: @ 0x08D839A4
	.incbin "build/graphics/battle_frontier/tourney_tree.bin.lz"
	.if (. - gDomeTourneyTree_Tilemap) != 0x22C
	.error "gDomeTourneyTree_Tilemap exact slot size mismatch"
	.endif

@ gDomeTourneyLineDown_Tilemap: LZ stream=0x110, slot=0x110, raw=0x800.
	.globl gDomeTourneyLineDown_Tilemap
gDomeTourneyLineDown_Tilemap: @ 0x08D83BD0
	.incbin "build/graphics/battle_frontier/tourney_line_down_map.bin.lz"
	.if (. - gDomeTourneyLineDown_Tilemap) != 0x110
	.error "gDomeTourneyLineDown_Tilemap exact slot size mismatch"
	.endif

@ gDomeTourneyLineUp_Tilemap: LZ stream=0x111, slot=0x114, raw=0x800.
	.globl gDomeTourneyLineUp_Tilemap
gDomeTourneyLineUp_Tilemap: @ 0x08D83CE0
	.incbin "build/graphics/battle_frontier/tourney_line_up_map.bin.lz"
	.if (. - gDomeTourneyLineUp_Tilemap) != 0x114
	.error "gDomeTourneyLineUp_Tilemap exact slot size mismatch"
	.endif

@ gDomeTourneyInfoCard_Gfx: LZ stream=0xC14, slot=0xC14, raw=0x4000. JP-specific source retained.
	.globl gDomeTourneyInfoCard_Gfx
gDomeTourneyInfoCard_Gfx: @ 0x08D83DF4
	.incbin "build/graphics/battle_frontier/tourney_info_card.4bpp.lz"
	.if (. - gDomeTourneyInfoCard_Gfx) != 0xC14
	.error "gDomeTourneyInfoCard_Gfx exact slot size mismatch"
	.endif

@ gDomeTourneyInfoCard_Tilemap: LZ stream=0x58E, slot=0x590, raw=0x2000. JP-specific source retained.
	.globl gDomeTourneyInfoCard_Tilemap
gDomeTourneyInfoCard_Tilemap: @ 0x08D84A08
	.incbin "build/graphics/battle_frontier/tourney_info_card_tilemap.bin.lz"
	.if (. - gDomeTourneyInfoCard_Tilemap) != 0x590
	.error "gDomeTourneyInfoCard_Tilemap exact slot size mismatch"
	.endif

@ gDomeTourneyInfoCardBg_Tilemap: LZ stream=0x158, slot=0x158, raw=0x800.
	.globl gDomeTourneyInfoCardBg_Tilemap
gDomeTourneyInfoCardBg_Tilemap: @ 0x08D84F98
	.incbin "build/graphics/battle_frontier/tourney_info_card_bg.bin.lz"
	.if (. - gDomeTourneyInfoCardBg_Tilemap) != 0x158
	.error "gDomeTourneyInfoCardBg_Tilemap exact slot size mismatch"
	.endif

@ gDomeTourneyTreeButtons_Gfx: LZ stream=0x24C, slot=0x24C, raw=0x400. JP-specific source retained.
	.globl gDomeTourneyTreeButtons_Gfx
gDomeTourneyTreeButtons_Gfx: @ 0x08D850F0
	.incbin "build/graphics/battle_frontier/tourney_buttons.4bpp.lz"
	.if (. - gDomeTourneyTreeButtons_Gfx) != 0x24C
	.error "gDomeTourneyTreeButtons_Gfx exact slot size mismatch"
	.endif

@ gDomeTourneyTree_Pal: LZ stream=0xEA, slot=0xEC, raw=0x200.
	.globl gDomeTourneyTree_Pal
gDomeTourneyTree_Pal: @ 0x08D8533C
	.incbin "build/graphics/battle_frontier/tourney_tree.gbapal.lz"
	.if (. - gDomeTourneyTree_Pal) != 0xEC
	.error "gDomeTourneyTree_Pal exact slot size mismatch"
	.endif

@ gDomeTourneyTreeButtons_Pal: LZ stream=0x83, slot=0x84, raw=0x200.
	.globl gDomeTourneyTreeButtons_Pal
gDomeTourneyTreeButtons_Pal: @ 0x08D85428
	.incbin "build/graphics/battle_frontier/tourney_buttons.gbapal.lz"
	.if (. - gDomeTourneyTreeButtons_Pal) != 0x84
	.error "gDomeTourneyTreeButtons_Pal exact slot size mismatch"
	.endif

@ gDomeTourneyMatchCardBg_Pal: LZ stream=0x1D, slot=0x20, raw=0x20.
	.globl gDomeTourneyMatchCardBg_Pal
gDomeTourneyMatchCardBg_Pal: @ 0x08D854AC
	.incbin "build/graphics/battle_frontier/tourney_match_card_bg.gbapal.lz"
	.if (. - gDomeTourneyMatchCardBg_Pal) != 0x20
	.error "gDomeTourneyMatchCardBg_Pal exact slot size mismatch"
	.endif

@ gBattleArenaJudgmentSymbolsGfx: LZ stream=0xFD, slot=0x100, raw=0x200.
