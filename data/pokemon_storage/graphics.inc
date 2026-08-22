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
	.globl gPokemonStorageSystemData_0854BEBC
gPokemonStorageSystemData_0854BEBC: @ 0x0854BEBC
	@ analyzed canonical ROM range 0x0854BEBC-0x0854BEFB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x40 entries=32
	.2byte 0x0101, 0x0102, 0x0103, 0x0104, 0x0105, 0x0106, 0x0107, 0x0108
	.2byte 0x0111, 0x0112, 0x0113, 0x0114, 0x0115, 0x0116, 0x0117, 0x0118
	.2byte 0x2101, 0x2102, 0x2103, 0x2104, 0x2105, 0x2106, 0x2107, 0x2108
	.2byte 0x2111, 0x2112, 0x2113, 0x2114, 0x2115, 0x2116, 0x2117, 0x2118
	@ pret/pokeemerald-jp direct xref for 0x0854BEFC: pokemon_storage_system.s: sub_080C994C
	.globl gPokemonStorageSystemData_0854BEFC
gPokemonStorageSystemData_0854BEFC: @ 0x0854BEFC
	@ analyzed canonical ROM range 0x0854BEFC-0x0854BF1B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0x00, 0x00, 0x52, 0x56, 0xCE, 0x3D, 0x4A, 0x2D, 0x52, 0x56, 0xBE, 0x2A, 0x94, 0x5A, 0x00, 0x00
	.byte 0x34, 0x7B, 0xCF, 0x6A, 0x7F, 0x4B, 0x9A, 0x7F, 0x56, 0x7B, 0x33, 0x77, 0xFF, 0x7F, 0xEB, 0x77
	@ pret/pokeemerald-jp direct xref for 0x0854BF1C: pokemon_storage_system.s: sub_080C994C
	.globl gPokemonStorageSystemData_0854BF1C
gPokemonStorageSystemData_0854BF1C: @ 0x0854BF1C
	@ analyzed canonical ROM range 0x0854BF1C-0x0854BF3B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0xDF, 0x4B, 0x52, 0x56, 0xCE, 0x3D, 0x4A, 0x2D, 0x31, 0x52, 0xF4, 0x01, 0x94, 0x5A, 0x00, 0x00
	.byte 0x34, 0x7B, 0xCF, 0x6A, 0xF8, 0x0E, 0x9A, 0x7F, 0x56, 0x7B, 0x33, 0x77, 0xD6, 0x5A, 0xEB, 0x77
	@ pret/pokeemerald-jp direct xref for 0x0854BF3C: pokemon_storage_system.s: sub_080C9F68
	.globl gPokemonStorageSystemData_0854BF3C
gPokemonStorageSystemData_0854BF3C: @ 0x0854BF3C
	@ analyzed canonical ROM range 0x0854BF3C-0x0854BF5B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0x00, 0x00, 0xB0, 0x5A, 0xA5, 0x31, 0x8A, 0x39, 0xA9, 0x52, 0x27, 0x46, 0x54, 0x7B, 0xEE, 0x32
	.byte 0xFF, 0x7F, 0xEF, 0x7E, 0xE0, 0x7D, 0x65, 0x51, 0x2F, 0x5B, 0x21, 0x21, 0xB4, 0x4B, 0x48, 0x2D
	@ pret/pokeemerald-jp direct xref for 0x0854BF5C: pokemon_storage_system.s: sub_080C994C
	.globl gPokemonStorageSystemData_0854BF5C
gPokemonStorageSystemData_0854BF5C: @ 0x0854BF5C
	@ analyzed canonical ROM range 0x0854BF5C-0x0854BF7B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0x00, 0x00, 0x52, 0x56, 0xFF, 0x7F, 0x00, 0x00, 0xEF, 0x7E, 0xE0, 0x7D, 0x1F, 0x42, 0x75, 0x0C
	.byte 0xBF, 0x73, 0x9F, 0x6B, 0x7F, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0854BF7C: pokemon_storage_system.s: sub_080C994C
	.globl gPokemonStorageSystemData_0854BF7C
gPokemonStorageSystemData_0854BF7C: @ 0x0854BF7C
	@ analyzed canonical ROM range 0x0854BF7C-0x0854BF9B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0x00, 0x00, 0x52, 0x56, 0xFF, 0x7F, 0x00, 0x00, 0xEF, 0x7E, 0xE0, 0x7D, 0x1F, 0x42, 0x75, 0x0C
	.byte 0xDC, 0x7F, 0xBB, 0x7B, 0xBA, 0x7B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ semantic exact asset for 0x0854BF9C: gStorageSystemMenu_Gfx
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
	.globl gPokemonStorageSystemData_0854CA1C
gPokemonStorageSystemData_0854CA1C: @ 0x0854CA1C
	@ analyzed canonical ROM range 0x0854CA1C-0x0854CB13
	@ pointer/nullable table
	.4byte gText_Rom_5CB1B9 + 0x4 @ +0x0
	.4byte 0 @ +0x4
	.4byte gText_Rom_5CB1D0 @ +0x8
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB1E0 @ +0x10
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB1ED @ +0x18
	.4byte 0 @ +0x1C
	.4byte gText_Rom_5CB1ED + 0xE @ +0x20
	.4byte 0x00000001 @ +0x24
	.4byte gText_Rom_5CB207 @ +0x28
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB21A @ +0x30
	.4byte 0 @ +0x34
	.4byte gText_Rom_5CB21A + 0x11 @ +0x38
	.4byte 0x00000001 @ +0x3C
	.4byte gText_Rom_5CB236 @ +0x40
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB245 @ +0x48
	.4byte 0 @ +0x4C
	.4byte gText_Rom_5CB245 + 0xE @ +0x50
	.4byte 0x00000004 @ +0x54
	.4byte gText_Rom_5CB245 + 0x1E @ +0x58
	.4byte 0x00000006 @ +0x5C
	.4byte gText_Rom_5CB26C @ +0x60
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB278 @ +0x68
	.4byte 0 @ +0x6C
	.4byte gText_Rom_5CB278 + 0x13 @ +0x70
	.4byte 0 @ +0x74
	.4byte gText_Rom_5CB298 @ +0x78
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB2A9 @ +0x80
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB2BB @ +0x88
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB2CE @ +0x90
	.4byte 0 @ +0x94
	.4byte gText_Rom_5CB2CE + 0x11 @ +0x98
	.4byte 0x00000001 @ +0x9C
	.4byte gText_Rom_5CB2EB @ +0xA0
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB2F9 @ +0xA8
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB300 @ +0xB0
	.4byte 0 @ +0xB4
	.4byte gText_Rom_5CB1ED + 0xE @ +0xB8
	.4byte 0x00000007 @ +0xBC
	.4byte gText_Rom_5CB310 @ +0xC0
	.4byte 0 @ +0xC4
	.4byte gText_Rom_5CB310 + 0xD @ +0xC8
	.4byte 0x00000007 @ +0xCC
	.4byte gText_Rom_5CB32A @ +0xD0
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gText_Rom_5CB337 @ +0xD8
	.4byte 0 @ +0xDC
	.4byte gText_Rom_5CB337 + 0x11 @ +0xE0
	.4byte 0x00000007 @ +0xE4
	.4byte gText_Rom_5CB337 + 0x1B @ +0xE8
	.4byte 0x00000007 @ +0xEC
	.4byte gText_Rom_5CB35D @ +0xF0
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	@ pret/pokeemerald-jp direct xref for 0x0854CB14: pokemon_storage_system.s: ShowYesNoWindow
	.globl gPokemonStorageSystemData_0854CB14
gPokemonStorageSystemData_0854CB14: @ 0x0854CB14
	@ analyzed canonical ROM range 0x0854CB14-0x0854CB6B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x58 entries=44
	.2byte 0x1800, 0x050B, 0x0F04, 0x005C, 0x0000, 0xC000, 0x0000, 0x0000
	.2byte 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0005, 0xFFFF, 0x0000
	.2byte 0x0002, 0x0008, 0x0004, 0x0008, 0x0006, 0x0008, 0xFFFE, 0x0000
	.2byte 0x0008, 0x0005, 0xFFFF, 0x0000, 0x000A, 0x0008, 0x0004, 0x0008
	.2byte 0x000C, 0x0008, 0xFFFE, 0x0000, 0xCB2C, 0x0854, 0xCB34, 0x0854
	.2byte 0xCB44, 0x0854, 0xCB4C, 0x0854
	@ pret/pokeemerald-jp direct xref for 0x0854CB6C: pokemon_storage_system.s: sub_080C9A38
	.globl gPokemonStorageSystemData_0854CB6C
gPokemonStorageSystemData_0854CB6C: @ 0x0854CB6C
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

	.globl sWallpaperPalettes_Zigzagoon
sWallpaperPalettes_Zigzagoon: @ 0x0854CBD4
	.incbin "build/graphics/pokemon_storage/wallpapers/zigzagoon/palette.gbapal"
	.if (. - sWallpaperPalettes_Zigzagoon) != 0x40
	.error "sWallpaperPalettes_Zigzagoon size mismatch"
	.endif

	.globl sWallpaperTiles_Zigzagoon
sWallpaperTiles_Zigzagoon: @ 0x0854CC14
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/zigzagoon/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/zigzagoon/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Zigzagoon) != 0x484
	.error "sWallpaperTiles_Zigzagoon slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Zigzagoon
sWallpaperTilemap_Zigzagoon: @ 0x0854D098
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/zigzagoon/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/zigzagoon/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Zigzagoon) != 0xE0
	.error "sWallpaperTilemap_Zigzagoon slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Screen
sWallpaperPalettes_Screen: @ 0x0854D178
	.incbin "build/graphics/pokemon_storage/wallpapers/screen/palette.gbapal"
	.if (. - sWallpaperPalettes_Screen) != 0x40
	.error "sWallpaperPalettes_Screen size mismatch"
	.endif

	.globl sWallpaperTiles_Screen
sWallpaperTiles_Screen: @ 0x0854D1B8
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/screen/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/screen/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Screen) != 0x318
	.error "sWallpaperTiles_Screen slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Screen
sWallpaperTilemap_Screen: @ 0x0854D4D0
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/screen/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/screen/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Screen) != 0xDC
	.error "sWallpaperTilemap_Screen slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Diagonal
sWallpaperPalettes_Diagonal: @ 0x0854D5AC
	.incbin "build/graphics/pokemon_storage/wallpapers/diagonal/palette.gbapal"
	.if (. - sWallpaperPalettes_Diagonal) != 0x40
	.error "sWallpaperPalettes_Diagonal size mismatch"
	.endif

	.globl sWallpaperTiles_Diagonal
sWallpaperTiles_Diagonal: @ 0x0854D5EC
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/diagonal/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/diagonal/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Diagonal) != 0x3B4
	.error "sWallpaperTiles_Diagonal slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Diagonal
sWallpaperTilemap_Diagonal: @ 0x0854D9A0
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/diagonal/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/diagonal/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Diagonal) != 0xFC
	.error "sWallpaperTilemap_Diagonal slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Block
sWallpaperPalettes_Block: @ 0x0854DA9C
	.incbin "build/graphics/pokemon_storage/wallpapers/block/palette.gbapal"
	.if (. - sWallpaperPalettes_Block) != 0x40
	.error "sWallpaperPalettes_Block size mismatch"
	.endif

	.globl sWallpaperTiles_Block
sWallpaperTiles_Block: @ 0x0854DADC
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/block/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/block/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Block) != 0x414
	.error "sWallpaperTiles_Block slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Block
sWallpaperTilemap_Block: @ 0x0854DEF0
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/block/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/block/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Block) != 0x104
	.error "sWallpaperTilemap_Block slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Pokecenter2
sWallpaperPalettes_Pokecenter2: @ 0x0854DFF4
	.incbin "build/graphics/pokemon_storage/wallpapers/pokecenter2/palette.gbapal"
	.if (. - sWallpaperPalettes_Pokecenter2) != 0x40
	.error "sWallpaperPalettes_Pokecenter2 size mismatch"
	.endif

	.globl sWallpaperTiles_Pokecenter2
sWallpaperTiles_Pokecenter2: @ 0x0854E034
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/pokecenter2/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/pokecenter2/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Pokecenter2) != 0x3FC
	.error "sWallpaperTiles_Pokecenter2 slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Pokecenter2
sWallpaperTilemap_Pokecenter2: @ 0x0854E430
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/pokecenter2/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/pokecenter2/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Pokecenter2) != 0xF0
	.error "sWallpaperTilemap_Pokecenter2 slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Frame
sWallpaperPalettes_Frame: @ 0x0854E520
	.incbin "build/graphics/pokemon_storage/wallpapers/frame/palette.gbapal"
	.if (. - sWallpaperPalettes_Frame) != 0x40
	.error "sWallpaperPalettes_Frame size mismatch"
	.endif

	.globl sWallpaperTiles_Frame
sWallpaperTiles_Frame: @ 0x0854E560
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/frame/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/frame/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Frame) != 0x4F0
	.error "sWallpaperTiles_Frame slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Frame
sWallpaperTilemap_Frame: @ 0x0854EA50
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/frame/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/frame/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Frame) != 0x13C
	.error "sWallpaperTilemap_Frame slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Blank
sWallpaperPalettes_Blank: @ 0x0854EB8C
	.incbin "build/graphics/pokemon_storage/wallpapers/blank/palette.gbapal"
	.if (. - sWallpaperPalettes_Blank) != 0x40
	.error "sWallpaperPalettes_Blank size mismatch"
	.endif

	.globl sWallpaperTiles_Blank
sWallpaperTiles_Blank: @ 0x0854EBCC
	@ Editable sequential tile grid: graphics/pokemon_storage/wallpapers/blank/tiles.png
	.incbin "build/graphics/pokemon_storage/wallpapers/blank/tiles_rom_exact.4bpp.lz"
	.if (. - sWallpaperTiles_Blank) != 0x460
	.error "sWallpaperTiles_Blank slot size mismatch"
	.endif

	.globl sWallpaperTilemap_Blank
sWallpaperTilemap_Blank: @ 0x0854F02C
	@ Editable 20x18 tilemap: graphics/pokemon_storage/wallpapers/blank/tilemap.u16
	.incbin "build/graphics/pokemon_storage/wallpapers/blank/tilemap_rom_exact.tilemap.lz"
	.if (. - sWallpaperTilemap_Blank) != 0x10C
	.error "sWallpaperTilemap_Blank slot size mismatch"
	.endif

	.globl sWallpaperPalettes_Forest
sWallpaperPalettes_Forest: @ 0x0854F138
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Forest.gbapal"
	.globl sWallpaperTiles_Forest
sWallpaperTiles_Forest: @ 0x0854F178
	.incbin "build/graphics/pokemon_storage/wallpapers/forest/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl sWallpaperTilemap_Forest
sWallpaperTilemap_Forest: @ 0x0854F550
	.incbin "build/graphics/pokemon_storage/wallpapers/forest/tilemap_rom_exact.tilemap.lz"
	.globl sWallpaperPalettes_City
sWallpaperPalettes_City: @ 0x0854F628
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_City.gbapal"
	.globl sWallpaperTiles_City
sWallpaperTiles_City: @ 0x0854F668
	.incbin "build/graphics/pokemon_storage/wallpapers/city/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl sWallpaperTilemap_City
sWallpaperTilemap_City: @ 0x0854FA38
	@ ANALYSIS: SEMANTIC_NUMERIC_WALLPAPER_TILEMAP
	.incbin "build/graphics/pokemon_storage/wallpapers/city/tilemap_rom_exact.tilemap.lz"
	.byte 0x00
	.globl sWallpaperPalettes_Desert
sWallpaperPalettes_Desert: @ 0x0854FB38
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Desert.gbapal"
	.globl sWallpaperTiles_Desert
sWallpaperTiles_Desert: @ 0x0854FB78
	.incbin "build/graphics/pokemon_storage/wallpapers/desert/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperTilemap_Desert
sWallpaperTilemap_Desert: @ 0x0854FE74
	@ ANALYSIS: SEMANTIC_NUMERIC_WALLPAPER_TILEMAP
	.incbin "build/graphics/pokemon_storage/wallpapers/desert/tilemap_rom_exact.tilemap.lz"
	.byte 0x00
	.globl sWallpaperPalettes_Savanna
sWallpaperPalettes_Savanna: @ 0x0854FF88
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Savanna.gbapal"
	.globl sWallpaperTiles_Savanna
sWallpaperTiles_Savanna: @ 0x0854FFC8
	.incbin "build/graphics/pokemon_storage/wallpapers/savanna/tiles_rom_exact.4bpp.lz"
	.byte 0x00
	.globl sWallpaperTilemap_Savanna
sWallpaperTilemap_Savanna: @ 0x085503B0
	.incbin "build/graphics/pokemon_storage/wallpapers/savanna/tilemap_rom_exact.tilemap.lz"
	.globl sWallpaperPalettes_Crag
sWallpaperPalettes_Crag: @ 0x085504A8
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Crag.gbapal"
	.globl sWallpaperTiles_Crag
sWallpaperTiles_Crag: @ 0x085504E8
	.incbin "build/graphics/pokemon_storage/wallpapers/crag/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00
	.globl sWallpaperTilemap_Crag
sWallpaperTilemap_Crag: @ 0x08550870
	.incbin "build/graphics/pokemon_storage/wallpapers/crag/tilemap_rom_exact.tilemap.lz"
	.globl sWallpaperPalettes_Volcano
sWallpaperPalettes_Volcano: @ 0x08550960
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Volcano.gbapal"
	.globl sWallpaperTiles_Volcano
sWallpaperTiles_Volcano: @ 0x085509A0
	.incbin "build/graphics/pokemon_storage/wallpapers/volcano/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperTilemap_Volcano
sWallpaperTilemap_Volcano: @ 0x08550C68
	.incbin "build/graphics/pokemon_storage/wallpapers/volcano/tilemap_rom_exact.tilemap.lz"
	.globl sWallpaperPalettes_Snow
sWallpaperPalettes_Snow: @ 0x08550D68
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Snow.gbapal"
	.globl sWallpaperTiles_Snow
sWallpaperTiles_Snow: @ 0x08550DA8
	.incbin "build/graphics/pokemon_storage/wallpapers/snow/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperTilemap_Snow
sWallpaperTilemap_Snow: @ 0x08551024
	@ ANALYSIS: SEMANTIC_NUMERIC_WALLPAPER_TILEMAP
	.incbin "build/graphics/pokemon_storage/wallpapers/snow/tilemap_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperPalettes_Cave
sWallpaperPalettes_Cave: @ 0x08551124
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Cave.gbapal"
	.globl sWallpaperTiles_Cave
sWallpaperTiles_Cave: @ 0x08551164
	.incbin "build/graphics/pokemon_storage/wallpapers/cave/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperTilemap_Cave
sWallpaperTilemap_Cave: @ 0x085513B8
	@ ANALYSIS: SEMANTIC_NUMERIC_WALLPAPER_TILEMAP
	.incbin "build/graphics/pokemon_storage/wallpapers/cave/tilemap_rom_exact.tilemap.lz"
	.byte 0x00
	.globl sWallpaperPalettes_Beach
sWallpaperPalettes_Beach: @ 0x0855147C
	@ Editable palette PNG: 2 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/pokemon_storage/sWallpaperPalettes_Beach.gbapal"
	.globl sWallpaperTiles_Beach
sWallpaperTiles_Beach: @ 0x085514BC
	.incbin "build/graphics/pokemon_storage/wallpapers/beach/tiles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl sWallpaperTilemap_Beach
sWallpaperTilemap_Beach: @ 0x085515DC
	@ ANALYSIS: SEMANTIC_NUMERIC_WALLPAPER_TILEMAP
	.incbin "build/graphics/pokemon_storage/wallpapers/beach/tilemap_rom_exact.tilemap.lz"
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
	.globl gPokemonStorageSystemData_08551824
gPokemonStorageSystemData_08551824: @ 0x08551824
	@ analyzed canonical ROM range 0x08551824-0x08551867
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x44 entries=34
	.2byte 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF
	.2byte 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF
	.2byte 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF
	.2byte 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF, 0x1CE7, 0x7FFF
	.2byte 0x1CE7, 0x7FFF
