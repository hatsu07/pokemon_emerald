	@ pret/pokeemerald-jp direct xref for 0x0854B25C: pokemon_storage_system.s: sub_080C7080
	.globl sChooseBoxMenu_Pal
sChooseBoxMenu_Pal: @ 0x0854B25C
	@ Shared choose-box popup palette from graphics/pokemon_storage/box_selection_popup_center.png.
	.incbin "build/graphics/pokemon_storage/box_selection_popup.gbapal"
	.if (. - sChooseBoxMenu_Pal) != 0x20
	.error "sChooseBoxMenu_Pal palette size mismatch"
	.endif
	.globl sChooseBoxMenuCenter_Gfx
sChooseBoxMenuCenter_Gfx: @ 0x0854B27C
	@ Choose-box popup center: one 64x64 4bpp sprite sheet.
	@ Editable source: graphics/pokemon_storage/box_selection_popup_center.png
	.incbin "build/graphics/pokemon_storage/box_selection_popup_center.4bpp"
	.if (. - sChooseBoxMenuCenter_Gfx) != 0x800
	.error "sChooseBoxMenuCenter_Gfx center gfx size mismatch"
	.endif
	.globl sChooseBoxMenuSides_Gfx
sChooseBoxMenuSides_Gfx: @ 0x0854BA7C
	@ Choose-box popup side tiles: 12 sequential 4bpp tiles.
	@ Stored as an 8x96 tile strip to preserve 1D SpriteSheet order
	@ without inventing a higher-level display arrangement.
	@ Editable source: graphics/pokemon_storage/box_selection_popup_sides.png
	.incbin "build/graphics/pokemon_storage/box_selection_popup_sides.4bpp"
	.if (. - sChooseBoxMenuSides_Gfx) != 0x180
	.error "sChooseBoxMenuSides_Gfx side gfx size mismatch"
	.endif
	.globl sScrollingBg_Gfx
sScrollingBg_Gfx:
	.incbin "build/graphics/pokemon_storage/scrolling_bg.4bpp.lz"
	.if (. - sScrollingBg_Gfx) != 0x98
	.error "sScrollingBg_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0854BC94: pokemon_storage_system.s: SetScrollingBackground
.globl sScrollingBg_Tilemap
sScrollingBg_Tilemap: @ 0x0854BC94
	@ confirmed GBA LZ77 stream: compressed=0x10C, decompressed=0x800
	@ analyzed canonical ROM range 0x0854BC94-0x0854BDBF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/pokemon_storage/scrolling_bg_rom_exact.tilemap.lz"
	.byte 0x60, 0x1D, 0x52, 0x56, 0xFF, 0x7F, 0x00, 0x00, 0x7B, 0x7B, 0xEB, 0x76, 0x94, 0x5A, 0x8C, 0x39
	.byte 0x00, 0x00, 0x4A, 0x2D, 0xB7, 0x33, 0x74, 0x27, 0x94, 0x27, 0x96, 0x3B, 0x32, 0x1F, 0x52, 0x56
	@ semantic exact asset for 0x0854BDC0: sDisplayMenu_Tilemap
	.globl sDisplayMenu_Tilemap
sDisplayMenu_Tilemap:
	.incbin "build/graphics/pokemon_storage/display_menu.bin.lz"
	.if (. - sDisplayMenu_Tilemap) != 0xFC
	.error "sDisplayMenu_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0854BEBC: pokemon_storage_system.s: sub_080C7734
	@ Pokémon Storage UI tilemap/palette data, identified against the
	@ canonical pokemon_storage_system layout and local direct xrefs.
	.macro storage_tilemap_row t0, t1, t2, t3, t4, t5, t6, t7
		.2byte \t0, \t1, \t2, \t3, \t4, \t5, \t6, \t7
	.endm
	.macro storage_palette16 c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15
		.2byte \c0, \c1, \c2, \c3, \c4, \c5, \c6, \c7, \c8, \c9, \c10, \c11, \c12, \c13, \c14, \c15
	.endm

	.globl sPkmnData_Tilemap
sPkmnData_Tilemap: @ 0x0854BEBC
	@ 8x4 tilemap used by TILEMAPID_PKMN_DATA.
	storage_tilemap_row 0x0101, 0x0102, 0x0103, 0x0104, 0x0105, 0x0106, 0x0107, 0x0108
	storage_tilemap_row 0x0111, 0x0112, 0x0113, 0x0114, 0x0115, 0x0116, 0x0117, 0x0118
	storage_tilemap_row 0x2101, 0x2102, 0x2103, 0x2104, 0x2105, 0x2106, 0x2107, 0x2108
	storage_tilemap_row 0x2111, 0x2112, 0x2113, 0x2114, 0x2115, 0x2116, 0x2117, 0x2118
	.if (. - sPkmnData_Tilemap) != 0x40
	.error "sPkmnData_Tilemap size mismatch"
	.endif

	.globl sInterface_Pal
sInterface_Pal: @ 0x0854BEFC
	@ Storage interface/frame palette.
	storage_palette16 0x0000, 0x5652, 0x3DCE, 0x2D4A, 0x5652, 0x2ABE, 0x5A94, 0x0000, 0x7B34, 0x6ACF, 0x4B7F, 0x7F9A, 0x7B56, 0x7733, 0x7FFF, 0x77EB
	.if (. - sInterface_Pal) != 0x20
	.error "sInterface_Pal size mismatch"
	.endif

	.globl sPkmnDataGray_Pal
sPkmnDataGray_Pal: @ 0x0854BF1C
	@ Gray Pkmn Data palette.
	storage_palette16 0x4BDF, 0x5652, 0x3DCE, 0x2D4A, 0x5231, 0x01F4, 0x5A94, 0x0000, 0x7B34, 0x6ACF, 0x0EF8, 0x7F9A, 0x7B56, 0x7733, 0x5AD6, 0x77EB
	.if (. - sPkmnDataGray_Pal) != 0x20
	.error "sPkmnDataGray_Pal size mismatch"
	.endif

	.globl sDisplayMenu_Pal
sDisplayMenu_Pal: @ 0x0854BF3C
	@ Display-menu palette.
	storage_palette16 0x0000, 0x5AB0, 0x31A5, 0x398A, 0x52A9, 0x4627, 0x7B54, 0x32EE, 0x7FFF, 0x7EEF, 0x7DE0, 0x5165, 0x5B2F, 0x2121, 0x4BB4, 0x2D48
	.if (. - sDisplayMenu_Pal) != 0x20
	.error "sDisplayMenu_Pal size mismatch"
	.endif

	.globl sScrollingBg_Pal
sScrollingBg_Pal: @ 0x0854BF5C
	@ Normal scrolling-background palette.
	storage_palette16 0x0000, 0x5652, 0x7FFF, 0x0000, 0x7EEF, 0x7DE0, 0x421F, 0x0C75, 0x73BF, 0x6B9F, 0x677F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.if (. - sScrollingBg_Pal) != 0x20
	.error "sScrollingBg_Pal size mismatch"
	.endif

	.globl sScrollingBgMoveItems_Pal
sScrollingBgMoveItems_Pal: @ 0x0854BF7C
	@ Move-items scrolling-background palette.
	storage_palette16 0x0000, 0x5652, 0x7FFF, 0x0000, 0x7EEF, 0x7DE0, 0x421F, 0x0C75, 0x7FDC, 0x7BBB, 0x7BBA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.if (. - sScrollingBgMoveItems_Pal) != 0x20
	.error "sScrollingBgMoveItems_Pal size mismatch"
	.endif

	.purgem storage_tilemap_row
	.purgem storage_palette16
	.globl gStorageSystemMenu_Gfx
gStorageSystemMenu_Gfx:
	.incbin "build/graphics/pokemon_storage/menu.4bpp.lz"
	.if (. - gStorageSystemMenu_Gfx) != 0x6C0
	.error "gStorageSystemMenu_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0854C65C: pokemon_storage_system.s: sub_080C9F68
.globl gStorageSystemPartyMenu_Tilemap
gStorageSystemPartyMenu_Tilemap: @ 0x0854C65C
	@ confirmed GBA LZ77 stream: compressed=0xAF, decompressed=0x210
	@ analyzed canonical ROM range 0x0854C65C-0x0854C70B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/pokemon_storage/party_menu_rom_exact.tilemap.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x0854C70C: pokemon_storage_system.s: sub_080C9F68
	.globl sPokemonStorageCloseBoxButton_Tilemap
sPokemonStorageCloseBoxButton_Tilemap: @ 0x0854C70C
	@ Close Box button 6x6 tilemap (36 u16 entries).
	.2byte 0x014C, 0x014D, 0x014E, 0x014F, 0x0170, 0x0171, 0x0172, 0x0173
	.2byte 0x0174, 0x015C, 0x015D, 0x015E, 0x015F, 0x0180, 0x0181, 0x0182
	.2byte 0x0183, 0x0184, 0x0175, 0x0176, 0x0177, 0x0178, 0x0179, 0x017A
	.2byte 0x017B, 0x017C, 0x017D, 0x0185, 0x0186, 0x0187, 0x0188, 0x0189
	.2byte 0x018A, 0x018B, 0x018C, 0x018D
	.if (. - sPokemonStorageCloseBoxButton_Tilemap) != 0x48
	.error "sPokemonStorageCloseBoxButton_Tilemap size mismatch"
	.endif
	.globl sPokemonStoragePartySlotFilled_Tilemap
sPokemonStoragePartySlotFilled_Tilemap: @ 0x0854C754
	@ Filled party-slot tilemap (12 u16 entries).
	.2byte 0x1140, 0x1141, 0x1141, 0x1142, 0x1150, 0x1151, 0x1151, 0x1152
	.2byte 0x1160, 0x1161, 0x1161, 0x1162
	.if (. - sPokemonStoragePartySlotFilled_Tilemap) != 0x18
	.error "sPokemonStoragePartySlotFilled_Tilemap size mismatch"
	.endif
	.globl sPokemonStoragePartySlotEmpty_Tilemap
sPokemonStoragePartySlotEmpty_Tilemap: @ 0x0854C76C
	@ Empty party-slot tilemap (12 u16 entries).
	.2byte 0x1143, 0x1144, 0x1144, 0x1145, 0x1153, 0x1154, 0x1154, 0x1155
	.2byte 0x1163, 0x1164, 0x1164, 0x1165
	.if (. - sPokemonStoragePartySlotEmpty_Tilemap) != 0x18
	.error "sPokemonStoragePartySlotEmpty_Tilemap size mismatch"
	.endif

sPokemonStorageWaveform_Pal: @ 0x0854C784
	.incbin "build/graphics/pokemon_storage/waveform.gbapal"
	.if (. - sPokemonStorageWaveform_Pal) != 0x20
	.error "sPokemonStorageWaveform_Pal size mismatch"
	.endif

sPokemonStorageWaveform_Gfx: @ 0x0854C7A4
	.incbin "build/graphics/pokemon_storage/waveform.4bpp"
	.if (. - sPokemonStorageWaveform_Gfx) != 0x1C0
	.error "sPokemonStorageWaveform_Gfx size mismatch"
	.endif

sPokemonStorageUnused_Pal: @ 0x0854C964
	@ 32-color unused Pokémon Storage palette.
	.2byte 0x0000, 0x7F28, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x5E20, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5652
	.2byte 0x0000, 0x4A7F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x2977, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5652
	.if (. - sPokemonStorageUnused_Pal) != 0x40
	.error "sPokemonStorageUnused_Pal size mismatch"
	.endif

	.if (. - sPokemonStoragePartySlotEmpty_Tilemap) != 0x238
	.error "C76C semantic aggregate size mismatch"
	.endif
	.globl sPokemonStorageTextWindows_Pal
sPokemonStorageTextWindows_Pal: @ 0x0854C9A4
	@ 16-color Pokémon Storage text-window palette.
	.2byte 0x0000, 0x7FFF, 0x318C, 0x675A, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.if (. - sPokemonStorageTextWindows_Pal) != 0x20
	.error "sPokemonStorageTextWindows_Pal size mismatch"
	.endif
	.globl sPokemonStorageWindowTemplates
sPokemonStorageWindowTemplates: @ 0x0854C9C4
	.macro storage_window_template bg, left, top, width, height, palette, base
		.byte \bg, \left, \top, \width, \height, \palette
		.2byte \base
	.endm
	@ WIN_DISPLAY_INFO
	storage_window_template 1, 1, 11, 8, 7, 3, 0x00C0
	@ WIN_MESSAGE
	storage_window_template 0, 11, 17, 18, 2, 15, 0x0014
	@ WIN_ITEM_DESC
	storage_window_template 0, 0, 13, 21, 7, 15, 0x0014
	@ DUMMY_WIN_TEMPLATE
	storage_window_template 0xFF, 0, 0, 0, 0, 0, 0
	.if (. - sPokemonStorageWindowTemplates) != 0x20
	.error "sPokemonStorageWindowTemplates size mismatch"
	.endif
	.globl sPokemonStorageBgTemplates
sPokemonStorageBgTemplates: @ 0x0854C9E4
	@ Four struct BgTemplate packed encodings, decoded from JP baseline.
	@ BG0: charbase0 mapbase29 size0 palmode0 priority0 baseTile0
	.4byte 0x000001D0
	@ BG1: charbase1 mapbase30 size0 palmode0 priority1 baseTile0x100
	.4byte 0x004011E5
	@ BG2: charbase2 mapbase27 size1 palmode0 priority2 baseTile0
	.4byte 0x000023BA
	@ BG3: charbase3 mapbase31 size0 palmode0 priority3 baseTile0
	.4byte 0x000031FF
	.if (. - sPokemonStorageBgTemplates) != 0x10
	.error "sPokemonStorageBgTemplates size mismatch"
	.endif
	.globl sPokemonStorageWaveformSpritePalette
sPokemonStorageWaveformSpritePalette: @ 0x0854C9F4
	@ struct SpritePalette
	.4byte sPokemonStorageWaveform_Pal
	.2byte 0xDACA, 0
	.globl sPokemonStorageSpriteSheet_Waveform
sPokemonStorageSpriteSheet_Waveform: @ 0x0854C9FC
	@ struct SpriteSheet
	.4byte sPokemonStorageWaveform_Gfx
	.2byte 0x01C0, 5
	.globl gPokemonStorageSystemData_0854CA04
gPokemonStorageSystemData_0854CA04: @ 0x0854CA04
	@ analyzed canonical ROM range 0x0854CA04-0x0854CA1B
sSpriteTemplate_0854CA04: @ 0x0854CA04
	rodata_sprite_template 0x0002, 0xDAC6, 0x0854CB1C, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x0854CA1C: pokemon_storage_system.s: PrintStorageActionText
	@ Pokémon Storage messages: 31 entries of {text pointer, format byte}.
	@ Format IDs match the canonical StorageMessage variable resolver.
	.set STORAGE_MSG_VAR_NONE, 0
	.set STORAGE_MSG_VAR_MON_NAME_1, 1
	.set STORAGE_MSG_VAR_RELEASE_MON_1, 4
	.set STORAGE_MSG_VAR_RELEASE_MON_3, 6
	.set STORAGE_MSG_VAR_ITEM_NAME, 7
	.macro storage_message text, format
		.4byte \text
		.byte \format, 0, 0, 0
	.endm

	.globl sPokemonStorageMessages
sPokemonStorageMessages: @ 0x0854CA1C
	storage_message gText_Rom_5CB1B9 + 0x4, STORAGE_MSG_VAR_NONE @ message 0
	storage_message gText_Rom_5CB1D0, STORAGE_MSG_VAR_NONE @ message 1
	storage_message gText_Rom_5CB1E0, STORAGE_MSG_VAR_NONE @ message 2
	storage_message gText_Rom_5CB1ED, STORAGE_MSG_VAR_NONE @ message 3
	storage_message gText_Rom_5CB1ED + 0xE, STORAGE_MSG_VAR_MON_NAME_1 @ message 4
	storage_message gText_Rom_5CB207, STORAGE_MSG_VAR_NONE @ message 5
	storage_message gText_Rom_5CB21A, STORAGE_MSG_VAR_NONE @ message 6
	storage_message gText_Rom_5CB21A + 0x11, STORAGE_MSG_VAR_MON_NAME_1 @ message 7
	storage_message gText_Rom_5CB236, STORAGE_MSG_VAR_NONE @ message 8
	storage_message gText_Rom_5CB245, STORAGE_MSG_VAR_NONE @ message 9
	storage_message gText_Rom_5CB245 + 0xE, STORAGE_MSG_VAR_RELEASE_MON_1 @ message 10
	storage_message gText_Rom_5CB245 + 0x1E, STORAGE_MSG_VAR_RELEASE_MON_3 @ message 11
	storage_message gText_Rom_5CB26C, STORAGE_MSG_VAR_NONE @ message 12
	storage_message gText_Rom_5CB278, STORAGE_MSG_VAR_NONE @ message 13
	storage_message gText_Rom_5CB278 + 0x13, STORAGE_MSG_VAR_NONE @ message 14
	storage_message gText_Rom_5CB298, STORAGE_MSG_VAR_NONE @ message 15
	storage_message gText_Rom_5CB2A9, STORAGE_MSG_VAR_NONE @ message 16
	storage_message gText_Rom_5CB2BB, STORAGE_MSG_VAR_NONE @ message 17
	storage_message gText_Rom_5CB2CE, STORAGE_MSG_VAR_NONE @ message 18
	storage_message gText_Rom_5CB2CE + 0x11, STORAGE_MSG_VAR_MON_NAME_1 @ message 19
	storage_message gText_Rom_5CB2EB, STORAGE_MSG_VAR_NONE @ message 20
	storage_message gText_Rom_5CB2F9, STORAGE_MSG_VAR_NONE @ message 21
	storage_message gText_Rom_5CB300, STORAGE_MSG_VAR_NONE @ message 22
	storage_message gText_Rom_5CB1ED + 0xE, STORAGE_MSG_VAR_ITEM_NAME @ message 23
	storage_message gText_Rom_5CB310, STORAGE_MSG_VAR_NONE @ message 24
	storage_message gText_Rom_5CB310 + 0xD, STORAGE_MSG_VAR_ITEM_NAME @ message 25
	storage_message gText_Rom_5CB32A, STORAGE_MSG_VAR_NONE @ message 26
	storage_message gText_Rom_5CB337, STORAGE_MSG_VAR_NONE @ message 27
	storage_message gText_Rom_5CB337 + 0x11, STORAGE_MSG_VAR_ITEM_NAME @ message 28
	storage_message gText_Rom_5CB337 + 0x1B, STORAGE_MSG_VAR_ITEM_NAME @ message 29
	storage_message gText_Rom_5CB35D, STORAGE_MSG_VAR_NONE @ message 30
	.if (. - sPokemonStorageMessages) != 0xF8
	.error "sPokemonStorageMessages size mismatch"
	.endif
	.purgem storage_message
	@ Yes/No menu and display/waveform sprite data.
	.globl sPokemonStorageYesNoWindowTemplate
sPokemonStorageYesNoWindowTemplate: @ 0x0854CB14
	@ bg=0 left=24 top=11 width=5 height=4 palette=15 baseBlock=0x5C
	storage_window_template 0, 24, 11, 5, 4, 15, 0x005C

	.macro storage_oam_words attr0, attr1, attr2, affine
		.2byte \attr0, \attr1, \attr2, \affine
	.endm
	.macro storage_anim_frame frame, duration
		.2byte \frame, \duration
	.endm
	.macro storage_anim_end
		.2byte 0xFFFF, 0
	.endm
	.macro storage_anim_jump target
		.2byte 0xFFFE, \target
	.endm

sPokemonStorageOamData_DisplayMon: @ 0x0854CB1C
	storage_oam_words 0x0000, 0xC000, 0x0000, 0x0000

sPokemonStorageOamData_Waveform: @ 0x0854CB24
	storage_oam_words 0x4000, 0x0000, 0x0000, 0x0000

sPokemonStorageAnim_Waveform_LeftOff: @ 0x0854CB2C
	storage_anim_frame 0, 5
	storage_anim_end

sPokemonStorageAnim_Waveform_LeftOn: @ 0x0854CB34
	storage_anim_frame 2, 8
	storage_anim_frame 4, 8
	storage_anim_frame 6, 8
	storage_anim_jump 0

sPokemonStorageAnim_Waveform_RightOff: @ 0x0854CB44
	storage_anim_frame 8, 5
	storage_anim_end

sPokemonStorageAnim_Waveform_RightOn: @ 0x0854CB4C
	storage_anim_frame 10, 8
	storage_anim_frame 4, 8
	storage_anim_frame 12, 8
	storage_anim_jump 0

sPokemonStorageAnims_Waveform: @ 0x0854CB5C
	.4byte sPokemonStorageAnim_Waveform_LeftOff
	.4byte sPokemonStorageAnim_Waveform_LeftOn
	.4byte sPokemonStorageAnim_Waveform_RightOff
	.4byte sPokemonStorageAnim_Waveform_RightOn
	.if (. - sPokemonStorageYesNoWindowTemplate) != 0x58
	.error "storage yes/no + waveform data size mismatch"
	.endif
	.purgem storage_oam_words
	.purgem storage_anim_frame
	.purgem storage_anim_end
	.purgem storage_anim_jump
	.globl sPokemonStorageSpriteTemplate_Waveform
sPokemonStorageSpriteTemplate_Waveform: @ 0x0854CB6C
	@ analyzed canonical ROM range 0x0854CB6C-0x0854CB83
sSpriteTemplate_0854CB6C: @ 0x0854CB6C
	rodata_sprite_template 0x0005, 0xDACA, 0x0854CB24, 0x0854CB5C, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x0854CB84: pokemon_storage_system.s: sub_080CBAA4
	.globl gPokemonStorageSystemData_0854CB84
gPokemonStorageSystemData_0854CB84: @ 0x0854CB84
	@ analyzed canonical ROM range 0x0854CB84-0x0854CBCB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ 24-byte SpriteTemplate copied by sub_080CBAA4 before CreateSprite.
	@ Pokémon Storage MonIcon / ReleaseMon data.
	.globl sPokemonStorageSpriteTemplate_MonIcon
sPokemonStorageSpriteTemplate_MonIcon: @ 0x0854CB84
	.2byte 0x0012, 0xDAC0
	.4byte sPokemonStorageOamData_MonIcon
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte SpriteCallbackDummy

	.globl sPokemonStorageOamData_MonIcon
sPokemonStorageOamData_MonIcon: @ 0x0854CB9C
	.2byte 0, 0x8000, 0, 0

	.globl sPokemonStorageAffineAnim_ReleaseMon_Release
sPokemonStorageAffineAnim_ReleaseMon_Release: @ 0x0854CBA4
	.2byte -2, -2
	.byte 0, 120
	.2byte 0 @ ABI padding
	.2byte 0x7FFF, 0, 0, 0

	.globl sPokemonStorageAffineAnim_ReleaseMon_CameBack
sPokemonStorageAffineAnim_ReleaseMon_CameBack: @ 0x0854CBB4
	.2byte 16, 16
	.byte 0, 0
	.2byte 0 @ ABI padding
	.2byte 16, 16
	.byte 0, 15
	.2byte 0 @ ABI padding
	.2byte 0x7FFF, 0, 0, 0

	.globl sPokemonStorageAffineAnims_ReleaseMon
sPokemonStorageAffineAnims_ReleaseMon: @ 0x0854CBCC
	.4byte sPokemonStorageAffineAnim_ReleaseMon_Release
	.4byte sPokemonStorageAffineAnim_ReleaseMon_CameBack

	.globl sWallpaperPalettes_Forest
sWallpaperPalettes_Forest: @ 0x0854CBD4
	.incbin "build/graphics/pokemon_storage/wallpapers/forest/palette.gbapal"
	.if (. - sWallpaperPalettes_Forest) != 0x40
	.error "sWallpaperPalettes_Forest size mismatch"
	.endif

	.globl sWallpaperTiles_Forest
sWallpaperTiles_Forest: @ 0x0854CC14
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/forest/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/forest/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Forest) != 0x484
	.error "sWallpaperTiles_Forest slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Forest
sWallpaperTilemap_Forest: @ 0x0854D098
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/forest/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/forest/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Forest) != 0xE0
	.error "sWallpaperTilemap_Forest slot size mismatch"
	.endif

	.globl sWallpaperPalettes_City
sWallpaperPalettes_City: @ 0x0854D178
	.incbin "build/graphics/pokemon_storage/wallpapers/city/palette.gbapal"
	.if (. - sWallpaperPalettes_City) != 0x40
	.error "sWallpaperPalettes_City size mismatch"
	.endif

	.globl sWallpaperTiles_City
sWallpaperTiles_City: @ 0x0854D1B8
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/city/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/city/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_City) != 0x318
	.error "sWallpaperTiles_City slot size mismatch"
	.endif

	.globl sWallpaperTilemap_City
sWallpaperTilemap_City: @ 0x0854D4D0
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/city/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/city/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_City) != 0xDC
	.error "sWallpaperTilemap_City slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Desert
sWallpaperPalettes_Desert: @ 0x0854D5AC
	.incbin "build/graphics/pokemon_storage/wallpapers/desert/palette.gbapal"
	.if (. - sWallpaperPalettes_Desert) != 0x40
	.error "sWallpaperPalettes_Desert size mismatch"
	.endif

	.globl sWallpaperTiles_Desert
sWallpaperTiles_Desert: @ 0x0854D5EC
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/desert/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/desert/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Desert) != 0x3B4
	.error "sWallpaperTiles_Desert slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Desert
sWallpaperTilemap_Desert: @ 0x0854D9A0
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/desert/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/desert/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Desert) != 0xFC
	.error "sWallpaperTilemap_Desert slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Savanna
sWallpaperPalettes_Savanna: @ 0x0854DA9C
	.incbin "build/graphics/pokemon_storage/wallpapers/savanna/palette.gbapal"
	.if (. - sWallpaperPalettes_Savanna) != 0x40
	.error "sWallpaperPalettes_Savanna size mismatch"
	.endif

	.globl sWallpaperTiles_Savanna
sWallpaperTiles_Savanna: @ 0x0854DADC
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/savanna/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/savanna/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Savanna) != 0x414
	.error "sWallpaperTiles_Savanna slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Savanna
sWallpaperTilemap_Savanna: @ 0x0854DEF0
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/savanna/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/savanna/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Savanna) != 0x104
	.error "sWallpaperTilemap_Savanna slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Crag
sWallpaperPalettes_Crag: @ 0x0854DFF4
	.incbin "build/graphics/pokemon_storage/wallpapers/crag/palette.gbapal"
	.if (. - sWallpaperPalettes_Crag) != 0x40
	.error "sWallpaperPalettes_Crag size mismatch"
	.endif

	.globl sWallpaperTiles_Crag
sWallpaperTiles_Crag: @ 0x0854E034
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/crag/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/crag/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Crag) != 0x3FC
	.error "sWallpaperTiles_Crag slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Crag
sWallpaperTilemap_Crag: @ 0x0854E430
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/crag/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/crag/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Crag) != 0xF0
	.error "sWallpaperTilemap_Crag slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Volcano
sWallpaperPalettes_Volcano: @ 0x0854E520
	.incbin "build/graphics/pokemon_storage/wallpapers/volcano/palette.gbapal"
	.if (. - sWallpaperPalettes_Volcano) != 0x40
	.error "sWallpaperPalettes_Volcano size mismatch"
	.endif

	.globl sWallpaperTiles_Volcano
sWallpaperTiles_Volcano: @ 0x0854E560
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/volcano/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/volcano/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Volcano) != 0x4F0
	.error "sWallpaperTiles_Volcano slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Volcano
sWallpaperTilemap_Volcano: @ 0x0854EA50
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/volcano/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/volcano/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Volcano) != 0x13C
	.error "sWallpaperTilemap_Volcano slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Snow
sWallpaperPalettes_Snow: @ 0x0854EB8C
	.incbin "build/graphics/pokemon_storage/wallpapers/snow/palette.gbapal"
	.if (. - sWallpaperPalettes_Snow) != 0x40
	.error "sWallpaperPalettes_Snow size mismatch"
	.endif

	.globl sWallpaperTiles_Snow
sWallpaperTiles_Snow: @ 0x0854EBCC
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/snow/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/snow/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Snow) != 0x460
	.error "sWallpaperTiles_Snow slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Snow
sWallpaperTilemap_Snow: @ 0x0854F02C
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/snow/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/snow/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Snow) != 0x10C
	.error "sWallpaperTilemap_Snow slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Cave
sWallpaperPalettes_Cave: @ 0x0854F138
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Forest.gbapal"
	.globl sWallpaperTiles_Cave
sWallpaperTiles_Cave: @ 0x0854F178
	.incbin "build/graphics/pokemon_storage/wallpapers/cave/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl sWallpaperTilemap_Cave
sWallpaperTilemap_Cave: @ 0x0854F550
	.incbin "build/graphics/pokemon_storage/wallpapers/cave/tilemap_rom_exact.tilemap.lz"
	.globl sWallpaperPalettes_Beach
sWallpaperPalettes_Beach: @ 0x0854F628
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_City.gbapal"
	.globl sWallpaperTiles_Beach
sWallpaperTiles_Beach: @ 0x0854F668
	.incbin "build/graphics/pokemon_storage/wallpapers/beach/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl sWallpaperTilemap_Beach
sWallpaperTilemap_Beach: @ 0x0854FA38
	@ ANALYSIS: SEMANTIC_NUMERIC_WALLPAPER_TILEMAP
	.incbin "build/graphics/pokemon_storage/wallpapers/beach/tilemap_rom_exact.tilemap.lz"
	.byte 0x00
	.globl sWallpaperPalettes_Seafloor
sWallpaperPalettes_Seafloor: @ 0x0854FB38
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Desert.gbapal"
	.globl sWallpaperTiles_Seafloor
sWallpaperTiles_Seafloor: @ 0x0854FB78
	.incbin "build/graphics/pokemon_storage/wallpapers/seafloor/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperTilemap_Seafloor
sWallpaperTilemap_Seafloor: @ 0x0854FE74
	@ ANALYSIS: SEMANTIC_NUMERIC_WALLPAPER_TILEMAP
	.incbin "build/graphics/pokemon_storage/wallpapers/seafloor/tilemap_rom_exact.tilemap.lz"
	.byte 0x00
	.globl sWallpaperPalettes_River
sWallpaperPalettes_River: @ 0x0854FF88
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Savanna.gbapal"
	.globl sWallpaperTiles_River
sWallpaperTiles_River: @ 0x0854FFC8
	.incbin "build/graphics/pokemon_storage/wallpapers/river/tiles_rom_exact.4bpp.lz"
	.byte 0x00
	.globl sWallpaperTilemap_River
sWallpaperTilemap_River: @ 0x085503B0
	.incbin "build/graphics/pokemon_storage/wallpapers/river/tilemap_rom_exact.tilemap.lz"
	.globl sWallpaperPalettes_Sky
sWallpaperPalettes_Sky: @ 0x085504A8
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Crag.gbapal"
	.globl sWallpaperTiles_Sky
sWallpaperTiles_Sky: @ 0x085504E8
	.incbin "build/graphics/pokemon_storage/wallpapers/sky/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl sWallpaperTilemap_Sky
sWallpaperTilemap_Sky: @ 0x08550870
	.incbin "build/graphics/pokemon_storage/wallpapers/sky/tilemap_rom_exact.tilemap.lz"
	.globl sWallpaperPalettes_PolkaDot
sWallpaperPalettes_PolkaDot: @ 0x08550960
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Volcano.gbapal"
	.globl sWallpaperTiles_PolkaDot
sWallpaperTiles_PolkaDot: @ 0x085509A0
	.incbin "build/graphics/pokemon_storage/wallpapers/polkadot/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperTilemap_PolkaDot
sWallpaperTilemap_PolkaDot: @ 0x08550C68
	.incbin "build/graphics/pokemon_storage/wallpapers/polkadot/tilemap_rom_exact.tilemap.lz"
	.globl sWallpaperPalettes_Pokecenter
sWallpaperPalettes_Pokecenter: @ 0x08550D68
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Snow.gbapal"
	.globl sWallpaperTiles_Pokecenter
sWallpaperTiles_Pokecenter: @ 0x08550DA8
	.incbin "build/graphics/pokemon_storage/wallpapers/pokecenter/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperTilemap_Pokecenter
sWallpaperTilemap_Pokecenter: @ 0x08551024
	@ ANALYSIS: SEMANTIC_NUMERIC_WALLPAPER_TILEMAP
	.incbin "build/graphics/pokemon_storage/wallpapers/pokecenter/tilemap_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperPalettes_Machine
sWallpaperPalettes_Machine: @ 0x08551124
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Cave.gbapal"
	.globl sWallpaperTiles_Machine
sWallpaperTiles_Machine: @ 0x08551164
	.incbin "build/graphics/pokemon_storage/wallpapers/machine/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperTilemap_Machine
sWallpaperTilemap_Machine: @ 0x085513B8
	@ ANALYSIS: SEMANTIC_NUMERIC_WALLPAPER_TILEMAP
	.incbin "build/graphics/pokemon_storage/wallpapers/machine/tilemap_rom_exact.tilemap.lz"
	.byte 0x00
	.globl sWallpaperPalettes_Plain
sWallpaperPalettes_Plain: @ 0x0855147C
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Beach.gbapal"
	.globl sWallpaperTiles_Plain
sWallpaperTiles_Plain: @ 0x085514BC
	.incbin "build/graphics/pokemon_storage/wallpapers/plain/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperTilemap_Plain
sWallpaperTilemap_Plain: @ 0x085515DC
	@ ANALYSIS: SEMANTIC_NUMERIC_WALLPAPER_TILEMAP
	.incbin "build/graphics/pokemon_storage/wallpapers/plain/tilemap_rom_exact.tilemap.lz"
	.byte 0x00, 0xAD, 0x22, 0xAE, 0x22, 0xAF, 0x22, 0xB0, 0x22, 0xB1, 0x22, 0xB2, 0x22, 0xB3, 0x22, 0xB4
	.byte 0x22, 0xB5, 0x22, 0xB6, 0x22, 0xAE, 0x22, 0xB7, 0x22, 0xB8, 0x22, 0xB9, 0x22, 0xBA, 0x22, 0xBB
	.byte 0x22, 0xBC, 0x22, 0xBD, 0x22, 0xBE, 0x22, 0xBF, 0x22, 0xC0, 0x22, 0xC1, 0x22, 0xB9, 0x22, 0xC2
	.byte 0x22, 0xC3, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5, 0x22, 0xC3, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5
	.byte 0x22, 0xC3, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5, 0x22, 0xC3, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5
	.byte 0x22, 0xC3, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5, 0x22, 0xC3, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5
	.byte 0x22, 0xC3, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5, 0x22, 0xC3, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5
	.byte 0x22, 0xC6, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5, 0x22, 0xC7, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5
	.byte 0x22, 0xC7, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5, 0x22, 0xC7, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5
	.byte 0x22, 0xC7, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5, 0x22, 0xC7, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5
	.byte 0x22, 0xC7, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4
	.byte 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC4, 0x22, 0xC5, 0x22, 0xC8, 0x22, 0xC9, 0x22, 0xC9, 0x22, 0xC9
	.byte 0x22, 0xC9, 0x22, 0xC9, 0x22, 0xC9, 0x22, 0xC9, 0x22, 0xC9, 0x22, 0xC9, 0x22, 0xC9, 0x22, 0xCA
	.byte 0x22
	@ pret/pokeemerald-jp direct xref for 0x08551824: pokemon_storage_system.s: sub_080CC3C4, sub_080CC57C, sub_080CC828
	@ Shadow/text colors for each wallpaper's box title.
	@ 0x1CE7 = RGB(7,7,7), 0x7FFF = white.
	.set STORAGE_BOX_TITLE_SHADOW_COLOR, 0x1CE7
	.set STORAGE_BOX_TITLE_TEXT_COLOR, 0x7FFF
	.macro storage_box_title_colors
		.2byte STORAGE_BOX_TITLE_SHADOW_COLOR, STORAGE_BOX_TITLE_TEXT_COLOR
	.endm

	.globl sBoxTitleColors
sBoxTitleColors: @ 0x08551824
	storage_box_title_colors @ wallpaper 0: Forest
	storage_box_title_colors @ wallpaper 1: City
	storage_box_title_colors @ wallpaper 2: Desert
	storage_box_title_colors @ wallpaper 3: Savanna
	storage_box_title_colors @ wallpaper 4: Crag
	storage_box_title_colors @ wallpaper 5: Volcano
	storage_box_title_colors @ wallpaper 6: Snow
	storage_box_title_colors @ wallpaper 7: Cave
	storage_box_title_colors @ wallpaper 8: Beach
	storage_box_title_colors @ wallpaper 9: Seafloor
	storage_box_title_colors @ wallpaper 10: River
	storage_box_title_colors @ wallpaper 11: Sky
	storage_box_title_colors @ wallpaper 12: PolkaDot
	storage_box_title_colors @ wallpaper 13: Pokecenter
	storage_box_title_colors @ wallpaper 14: Machine
	storage_box_title_colors @ wallpaper 15: Plain
	storage_box_title_colors @ wallpaper 16: Friends
	.if (. - sBoxTitleColors) != 0x44
	.error "sBoxTitleColors size mismatch"
	.endif
	.purgem storage_box_title_colors
