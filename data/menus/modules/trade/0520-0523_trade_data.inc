	.4byte gText_Rom_300B38
	.4byte gText_Rom_300B59
	.4byte gText_Rom_300B75
	.4byte gText_Rom_5CA294
	.4byte gText_Rom_300B9E
	.4byte gText_Rom_300BBE
	.4byte gText_Rom_5CA2B4
	.4byte gText_Rom_5CA2CC
	.4byte gText_Rom_5CA2E0
	@ Trade menu text printer colors: transparent, white, dark gray.
	@ The fourth byte is alignment padding and is intentionally preserved.
	.globl sTradeTextColors
sTradeTextColors: @ 0x08300C00
	@ ANALYSIS: SEMANTIC_TEXT_COLOR_TRIPLE addr=0x08300C00 size=0x4
	.byte 0, 1, 2
	.byte 0 @ alignment padding

	@ Four packed struct BgTemplate records consumed by InitBgsFromTemplates(..., 4).
	@ JP values differ from the English upstream layout; these are the exact JP records.
	.globl sTradeBgTemplates
sTradeBgTemplates: @ 0x08300C04
	@ ANALYSIS: SEMANTIC_BG_TEMPLATE_TABLE addr=0x08300C04 size=0x10 count=4
	.4byte 0x000001F8 @ [0] bg=0 charBase=2 mapBase=31 priority=0
	.4byte 0x00001051 @ [1] bg=1 charBase=0 mapBase=5  priority=1
	.4byte 0x00002062 @ [2] bg=2 charBase=0 mapBase=6  priority=2
	.4byte 0x00003073 @ [3] bg=3 charBase=0 mapBase=7  priority=3

	.macro trade_window_template bg, left, top, width, height, palette, base_block
	.byte \bg, \left, \top, \width, \height, \palette
	.2byte \base_block
	.endm

	@ Nineteen struct WindowTemplate records (18 windows + DUMMY_WIN_TEMPLATE).
	.globl sTradeWindowTemplates
sTradeWindowTemplates: @ 0x08300C14
	@ ANALYSIS: SEMANTIC_WINDOW_TEMPLATE_TABLE addr=0x08300C14 size=0x98 count=19
	trade_window_template 0, 7, 7, 16, 4, 15, 0x001E @ [0]
	trade_window_template 0, 19, 15, 10, 4, 15, 0x005E @ [1]
	trade_window_template 0, 1, 5, 6, 2, 13, 0x0086 @ [2]
	trade_window_template 0, 8, 5, 6, 2, 13, 0x0092 @ [3]
	trade_window_template 0, 1, 10, 6, 2, 13, 0x009E @ [4]
	trade_window_template 0, 8, 10, 6, 2, 13, 0x00AA @ [5]
	trade_window_template 0, 1, 15, 6, 2, 13, 0x00B6 @ [6]
	trade_window_template 0, 8, 15, 6, 2, 13, 0x00C2 @ [7]
	trade_window_template 0, 16, 5, 6, 2, 13, 0x00CE @ [8]
	trade_window_template 0, 23, 5, 6, 2, 13, 0x00DA @ [9]
	trade_window_template 0, 16, 10, 6, 2, 13, 0x00E6 @ [10]
	trade_window_template 0, 23, 10, 6, 2, 13, 0x00F2 @ [11]
	trade_window_template 0, 16, 15, 6, 2, 13, 0x00FE @ [12]
	trade_window_template 0, 23, 15, 6, 2, 13, 0x010A @ [13]
	trade_window_template 0, 2, 5, 12, 2, 13, 0x0116 @ [14]
	trade_window_template 0, 3, 8, 11, 8, 15, 0x012E @ [15]
	trade_window_template 0, 17, 5, 12, 2, 15, 0x0186 @ [16]
	trade_window_template 0, 18, 8, 11, 8, 15, 0x019E @ [17]
	trade_window_template 0xFF, 0, 0, 0, 0, 0, 0 @ [18] DUMMY_WIN_TEMPLATE

	@ WindowTemplate used by the delayed trade Yes/No menu.
	.globl sTradeYesNoWindowTemplate
sTradeYesNoWindowTemplate: @ 0x08300CAC
	@ ANALYSIS: SEMANTIC_WINDOW_TEMPLATE addr=0x08300CAC size=0x8
	trade_window_template 0, 23, 13, 5, 4, 15, 0x01F6
	.purgem trade_window_template
	@ Japanese trade debug/status text block. Bytes are kept explicit because the
	@ JP charmap contains zero-valued full-width spaces and this preserves exact ROM layout.
	.globl sTradeDebugText_KStart
sTradeDebugText_KStart: @ 0x08300CB4
	@ "K START"
	.byte 0xC5, 0x00, 0xCD, 0xCE, 0xBB, 0xCC, 0xCE, 0xFF

	.globl sTradeDebugText_SendAttempt
sTradeDebugText_SendAttempt: @ 0x08300CBC
	@ "かいめの そうしん"
	.byte 0x06, 0x02, 0x22, 0x19, 0x00, 0x0F, 0x03, 0x0C, 0x2E, 0xFF
	.byte 0x00, 0x00, 0x00 @ alignment/padding

	.globl sTradeDebugText_ReceiveAttempt
sTradeDebugText_ReceiveAttempt: @ 0x08300CC9
	@ "かいめの じゅしん"
	.byte 0x06, 0x02, 0x22, 0x19, 0x00, 0x3D, 0x35, 0x0C, 0x2E, 0xFF
	.byte 0x00, 0x00, 0x00 @ alignment/padding

	.globl sTradeDebugText_SetPokemonIcon
sTradeDebugText_SetPokemonIcon: @ 0x08300CD6
	@ "ポケモンアイコンセット"
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x51, 0x52, 0x5A, 0x7E, 0x5E, 0xA0, 0x64, 0xFF
	.byte 0x00 @ alignment/padding

	.globl sTradeDebugText_SetObjText
sTradeDebugText_SetObjText: @ 0x08300CE3
	@ "OBJテキストセット"
	.byte 0xC9, 0xBC, 0xC4, 0x63, 0x57, 0x5D, 0x64, 0x5E, 0xA0, 0x64, 0xFF
	.byte 0x00, 0x00 @ alignment/padding

	.globl sTradeDebugText_SetCell
sTradeDebugText_SetCell: @ 0x08300CF0
	@ "セルセット"
	.byte 0x5E, 0x79, 0x5E, 0xA0, 0x64, 0xFF
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ padding

	.globl sTradeDebugText_AddObjText
sTradeDebugText_AddObjText: @ 0x08300CFD
	@ "OBJテキストADD"
	.byte 0xC9, 0xBC, 0xC4, 0x63, 0x57, 0x5D, 0x64, 0xBB, 0xBE, 0xBE, 0xFF
	.byte 0x00, 0x00 @ alignment/padding

	.globl sTradeDebugText_AddSystemMessage
sTradeDebugText_AddSystemMessage: @ 0x08300D0A
	@ "システムメッセージADD"
	.byte 0x5C, 0x5D, 0x63, 0x71, 0x72, 0xA0, 0x5E, 0xAE, 0x8D, 0xBB, 0xBE, 0xBE, 0xFF

	.globl sTradeDebugText_SetBackground
sTradeDebugText_SetBackground: @ 0x08300D17
	@ "はいけいセット"
	.byte 0x1A, 0x02, 0x09, 0x02, 0x5E, 0xA0, 0x64, 0xFF
	.byte 0x00, 0x00, 0x00, 0x00, 0x00 @ padding

	.globl sTradeDebugText_TradeEstablished
sTradeDebugText_TradeEstablished: @ 0x08300D24
	@ "こうかんせいりつ     "
	.byte 0x0A, 0x03, 0x06, 0x2E, 0x0E, 0x02, 0x28, 0x12
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF

	.globl sTradeDebugText_TradeFailed
sTradeDebugText_TradeFailed: @ 0x08300D32
	@ "だめだったらしいよ     "
	.byte 0x41, 0x22, 0x41, 0x10, 0x27, 0x0C, 0x02, 0x26
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF

	@ Trade selected-mon level/gender coordinates used by sub_080790C8.
	.globl sSelectedMonLevelGenderCoords_JP
sSelectedMonLevelGenderCoords_JP: @ 0x08300D40
	@ ANALYSIS: SEMANTIC_U8_PAIR_TABLE addr=0x08300D40 size=0x4 count=2
	.byte 4, 3
	.byte 19, 3

	@ Editable Poké Ball palette.
	.globl sPokeball_Pal
sPokeball_Pal: @ 0x08300D44
	@ ANALYSIS: EDITABLE_PALETTE addr=0x08300D44 size=0x20
	.incbin "build/graphics/trade/pokeball_palette.gbapal"

	@ Editable Poké Ball sprite graphics.
	.globl sPokeball_Gfx
sPokeball_Gfx: @ 0x08300D64
	@ ANALYSIS: EDITABLE_4BPP addr=0x08300D64 size=0x600 tiles=48
	.incbin "build/graphics/trade/pokeball.4bpp"

	@ Canonical unused Poké Ball symbol graphics; exact JP 8bpp asset.
	.globl sPokeballSymbol_Gfx
sPokeballSymbol_Gfx: @ 0x08301364
	@ ANALYSIS: EDITABLE_8BPP addr=0x08301364 size=0x1A00 tiles=104
	.incbin "build/graphics/trade/pokeball_symbol.8bpp"

	@ Cable trade crossing-highlight tilemap; directly copied by trade animation code.
	.globl sCableCloseup_Map
sCableCloseup_Map: @ 0x08302D64
	@ ANALYSIS: EDITABLE_TILEMAP_U16 addr=0x08302D64 size=0x800
	.incbin "graphics/trade/cable_closeup.tilemap.u16"

	@ Canonical unused Poké Ball symbol tilemap.
	.globl sPokeballSymbol_Map
sPokeballSymbol_Map: @ 0x08303564
	@ ANALYSIS: EDITABLE_TILEMAP_U16 addr=0x08303564 size=0x100
	.incbin "graphics/trade/pokeball_symbol.tilemap.u16"

	@ Canonical unused trade palette 1.
	.globl sUnusedPal1
sUnusedPal1: @ 0x08303664
	@ ANALYSIS: EDITABLE_PALETTE addr=0x08303664 size=0x20
	.incbin "build/graphics/trade/unused1_palette.gbapal"

	@ Editable GBA sprite palette.
	.globl sGba_Pal
sGba_Pal: @ 0x08303684
	@ ANALYSIS: EDITABLE_PALETTE addr=0x08303684 size=0x20
	.incbin "build/graphics/trade/gba_palette.gbapal"

	@ Canonical unused trade palette 2.
	.globl sUnusedPal2
sUnusedPal2: @ 0x083036A4
	@ ANALYSIS: EDITABLE_PALETTE addr=0x083036A4 size=0x20
	.incbin "build/graphics/trade/unused2_palette.gbapal"

	@ Canonical unused no-signal wireless palette; all colors are zero in JP.
	.globl sWirelessSignalNone_Pal_Unused
sWirelessSignalNone_Pal_Unused: @ 0x083036C4
	@ ANALYSIS: EDITABLE_PALETTE addr=0x083036C4 size=0x20
	.incbin "build/graphics/trade/wireless_signal_none_palette.gbapal"

	@ Editable link-mon palette shared by glow and shadow graphics.
	.globl sLinkMon_Pal
sLinkMon_Pal: @ 0x083036E4
	@ ANALYSIS: EDITABLE_PALETTE addr=0x083036E4 size=0x20
	.incbin "build/graphics/trade/link_mon_palette.gbapal"

	.globl sLinkMonGlow_Gfx
sLinkMonGlow_Gfx: @ 0x08303704
	@ ANALYSIS: EDITABLE_4BPP addr=0x08303704 size=0x200 tiles=16
	.incbin "build/graphics/trade/link_mon_glow.4bpp"

	.globl sLinkMonShadow_Gfx
sLinkMonShadow_Gfx: @ 0x08303904
	@ ANALYSIS: EDITABLE_4BPP addr=0x08303904 size=0x300 tiles=24
	.incbin "build/graphics/trade/link_mon_shadow.4bpp"

	@ Canonical cable-end graphics. JP data is an all-zero 16x32 4bpp image.
	.globl sCableEnd_Gfx
sCableEnd_Gfx: @ 0x08303C04
	@ ANALYSIS: EDITABLE_4BPP addr=0x08303C04 size=0x100 tiles=8
	.incbin "build/graphics/trade/cable_end.4bpp"

	.globl sGbaScreen_Gfx
sGbaScreen_Gfx: @ 0x08303D04
	@ ANALYSIS: EDITABLE_4BPP addr=0x08303D04 size=0x1000 tiles=128
	.incbin "build/graphics/trade/gba_screen.4bpp"
	@ Trade platform background tilemap, shared by trade and egg-hatch consumers.
	.globl gTradePlatform_Tilemap
gTradePlatform_Tilemap: @ 0x08304D04
	@ ANALYSIS: EDITABLE_TILEMAP_U16 addr=0x08304D04 size=0x1000
	.incbin "graphics/trade/platform.tilemap.u16"
	@ JP-only duplicate copy of sGba_Pal. v93 proved exact byte equality at
	@ 0x08303684, 0x08305D04, and 0x08305D44. No direct owner was found.
	.globl sGbaPaletteDuplicate_JP
sGbaPaletteDuplicate_JP: @ 0x08305D04
	@ ANALYSIS: SEMANTIC_DUPLICATE_PALETTE addr=0x08305D04 size=0x20
	.incbin "build/graphics/trade/gba_palette.gbapal"
	@ Trade GBA background palette source. The trade scene loads the first 0x60
	@ bytes (3 banks). Egg hatch loads 0xA0 bytes from this same start, so in JP
	@ that read intentionally continues 0x40 bytes into the following GBA gfx.
	.globl gTradeGba2_Pal
gTradeGba2_Pal: @ 0x08305D24
	@ ANALYSIS: EDITABLE_PALETTE_BANKS addr=0x08305D24 emitted_size=0x60 banks=3
	.incbin "build/graphics/trade/gba2_palette_bank0.gbapal"
	.incbin "build/graphics/trade/gba2_palette_bank1.gbapal"
	.incbin "build/graphics/trade/gba2_palette_bank2.gbapal"
	@ Uncompressed trade/egg-hatch GBA background graphics.
	@ Trade consumes the full 0x1420 bytes; egg hatch consumes the first 0x1300.
	.globl gTradeGba_Gfx
gTradeGba_Gfx: @ 0x08305D84
	@ ANALYSIS: EDITABLE_4BPP addr=0x08305D84 size=0x1420 tiles=161
	.incbin "build/graphics/trade/gba_bg.4bpp"
	@ 8bpp affine GBA graphics copied to VRAM by the trade close-up sequence.
	.globl sGbaAffine_Gfx
sGbaAffine_Gfx: @ 0x083071A4
	@ ANALYSIS: EDITABLE_8BPP addr=0x083071A4 size=0x2800 tiles=160
	.incbin "build/graphics/trade/gba_affine.8bpp"

	@ Canonical 64-byte empty graphics pad following the affine graphics.
	.globl sEmptyGfx
sEmptyGfx: @ 0x083099A4
	@ ANALYSIS: SEMANTIC_ZERO_GFX addr=0x083099A4 size=0x40
	.fill 0x40, 1, 0
	@ 8-bit affine map used for the cable trade close-up.
	.globl sGbaAffineMapCable
sGbaAffineMapCable: @ 0x083099E4
	@ ANALYSIS: EDITABLE_AFFINE_TILEMAP_U8 addr=0x083099E4 size=0x100
	.incbin "graphics/trade/gba_affine_map_cable.tilemap.u8"
	@ 8-bit affine map used for the wireless trade close-up.
	.globl sGbaAffineMapWireless
sGbaAffineMapWireless: @ 0x08309AE4
	@ ANALYSIS: EDITABLE_AFFINE_TILEMAP_U8 addr=0x08309AE4 size=0x100
	.incbin "graphics/trade/gba_affine_map_wireless.tilemap.u8"
