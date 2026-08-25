	@ pret/pokeemerald-jp direct xref for 0x08592EE0: battle_records.s: LoadTrainerHillRecordsWindowGfx
	.globl sTrainerHillWindowTileset
sTrainerHillWindowTileset: @ 0x08592EE0
	@ Editable 24x16 indexed PNG: graphics/trainer_hill/records_window.png
	.incbin "build/graphics/trainer_hill/records_window.4bpp"
	.if (. - sTrainerHillWindowTileset) != 0xC0
	.error "sTrainerHillWindowTileset gfx size mismatch"
	.endif
	.globl sTrainerHillWindowPalette
sTrainerHillWindowPalette: @ 0x08592FA0
	@ First 16 palette entries from graphics/trainer_hill/records_window.png
	.incbin "build/graphics/trainer_hill/records_window.gbapal"
	.if (. - sTrainerHillWindowPalette) != 0x20
	.error "sTrainerHillWindowPalette palette size mismatch"
	.endif
	.globl sTrainerHillWindowTilemap
sTrainerHillWindowTilemap: @ 0x08592FC0
	@ Editable 32x32 u16 tilemap: graphics/trainer_hill/records_window.tilemap.u16
	.incbin "build/graphics/trainer_hill/records_window.bin"
	.if (. - sTrainerHillWindowTilemap) != 0x800
	.error "sTrainerHillWindowTilemap tilemap size mismatch"
	.endif
	.globl sTrainerHillRecordsBgTemplates
sTrainerHillRecordsBgTemplates: @ 0x085937C0
	@ struct BgTemplate[2], decoded from JP baseline ROM
	.macro trainer_hill_bg_template bg, charbase, mapbase, screensize, palmode, priority, basetile
		.2byte ((\bg) | ((\charbase) << 2) | ((\mapbase) << 4) | ((\screensize) << 9) | ((\palmode) << 11) | ((\priority) << 12))
		.2byte \basetile
	.endm
	trainer_hill_bg_template 0, 0, 31, 0, 0, 0, 0
	trainer_hill_bg_template 3, 1, 30, 0, 0, 3, 0
	.if (. - sTrainerHillRecordsBgTemplates) != 0x8
	.error "sTrainerHillRecordsBgTemplates BgTemplate size mismatch"
	.endif
	.globl sTrainerHillRecordsWindowTemplates
sTrainerHillRecordsWindowTemplates: @ 0x085937C8
	@ struct WindowTemplate[2], decoded from JP baseline ROM
	.macro trainer_hill_window_template bg, left, top, width, height, palnum, baseblock
		.byte \bg, \left, \top, \width, \height, \palnum
		.2byte \baseblock
	.endm
	trainer_hill_window_template 0, 2, 1, 27, 18, 15, 20
	trainer_hill_window_template 0xFF, 0, 0, 0, 0, 0, 0 @ DUMMY_WIN_TEMPLATE
	.if (. - sTrainerHillRecordsWindowTemplates) != 0x10
	.error "sTrainerHillRecordsWindowTemplates WindowTemplate array size mismatch"
	.endif
	.globl sLinkBattleRecordsWindow
sLinkBattleRecordsWindow: @ 0x085937D8
	@ struct WindowTemplate, decoded from JP baseline ROM
	trainer_hill_window_template 0, 2, 1, 26, 17, 15, 1
	.if (. - sLinkBattleRecordsWindow) != 0x8
	.error "sLinkBattleRecordsWindow WindowTemplate size mismatch"
	.endif
