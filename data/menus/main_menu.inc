	@ pret/pokeemerald-jp direct xref for 0x082D2588: main_menu.s: CB2_NewGameBirchSpeech_ReturnFromNamingScreen, sub_0803058C
	@ Semantic names recovered from main_menu.c declaration order and JP consumers.
	.globl sBirchSpeechBgPals
sBirchSpeechBgPals = gMainMenuData_082D2588

	.globl gMainMenuData_082D2588
gMainMenuData_082D2588: @ 0x082D2588
	@ analyzed canonical ROM range 0x082D2588-0x082D25C7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x40
	.2byte 0x0000, 0x53FF, 0x37FF, 0x2F7B, 0x26F7, 0x1E73, 0x19EF, 0x116B
	.2byte 0x08E7, 0x67F8, 0x43EF, 0x376E, 0x2EED, 0x226C, 0x19EB, 0x0000
	.2byte 0x0000, 0x53FF, 0x37FF, 0x2F7B, 0x26F7, 0x1E73, 0x19EF, 0x116B
	.2byte 0x08E7, 0x67F8, 0x43EF, 0x376E, 0x2EED, 0x226C, 0x19EB, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x082D25C8: main_menu.s: CB2_NewGameBirchSpeech_ReturnFromNamingScreen, sub_0803058C
	.globl sBirchSpeechShadowGfx
sBirchSpeechShadowGfx: @ 0x082D25C8
	@ Semantic exact-LZ asset; source: graphics/birch_speech/shadow.png.
	.incbin "build/graphics/final_remaining/birch_speech_shadow.4bpp.lz"
	.if (. - sBirchSpeechShadowGfx) != 0x1B4
	.error "sBirchSpeechShadowGfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x082D277C: main_menu.s: CB2_NewGameBirchSpeech_ReturnFromNamingScreen, sub_0803058C
	.globl gMainMenuData_082D277C
gMainMenuData_082D277C:
	@ confirmed GBA LZ77 stream: compressed=0x126, decompressed=0x500
	.globl sBirchSpeechBgMap
sBirchSpeechBgMap: @ 0x082D277C
sLz77Block_082D277C:
	@ analyzed canonical ROM range 0x082D277C-0x082D28A5
	@ structured u8 payload; no safe higher-level semantic type was provable
	.incbin "build/graphics/raw_cleanup/main_menu/birch_speech_bg.bin.lz"
	.if (. - sLz77Block_082D277C) > 0x12A
	.error "sLz77Block_082D277C exceeds its exact ROM slot"
	.endif
	@ Compatibility aliases for the old generated split inside
	@ sBirchSpeechBgGradientPal. These emit no bytes.
	.globl gMainMenuData_082D28A6
	.set gMainMenuData_082D28A6, sBirchSpeechBgGradientPal

	.globl gMainMenuData_082D28A8
	.set gMainMenuData_082D28A8, sBirchSpeechBgGradientPal + 2
	.globl gMainMenuData_082D28A8

	.globl gMenuDataBlock_Rom_2D28B6
	.set gMenuDataBlock_Rom_2D28B6, sBirchSpeechBgGradientPal + 0x10

	.globl sBirchSpeechBgGradientPal
sBirchSpeechBgGradientPal: @ 0x082D28A6
	.incbin "build/graphics/raw_cleanup/main_menu/birch_speech_bg_gradient.gbapal"
	.if (. - sBirchSpeechBgGradientPal) != 0x20
	.error "sBirchSpeechBgGradientPal size mismatch"
	.endif
	.2byte 0 @ alignment
	.globl gMainMenuData_082D28A6
gMainMenuData_082D28A6 = sBirchSpeechBgGradientPal
	.globl sWindowTemplates_MainMenu
sWindowTemplates_MainMenu: @ 0x082D28C8
	window_template 0, 2, 1, 26, 2, 15, 0x001
	window_template 0, 2, 5, 26, 2, 15, 0x035
	window_template 0, 2, 1, 26, 6, 15, 0x001
	window_template 0, 2, 9, 26, 2, 15, 0x09D
	window_template 0, 2, 13, 26, 2, 15, 0x0D1
	window_template 0, 2, 17, 26, 2, 15, 0x105
	window_template 0, 2, 21, 26, 2, 15, 0x139
	window_template 0, 2, 15, 26, 4, 15, 0x16D
	null_window_template

	.globl gMainMenuData_082D28C8
gMainMenuData_082D28C8 = sWindowTemplates_MainMenu
	.globl gMainMenuData_082D28D8
gMainMenuData_082D28D8 = sWindowTemplates_MainMenu + 0x10
	.globl gMainMenuData_082D2900
gMainMenuData_082D2900 = sWindowTemplates_MainMenu + 0x38
	.globl gMainMenuData_082D28D8
	.globl gMainMenuData_082D2900

	.globl sNewGameBirchSpeechTextWindows
sNewGameBirchSpeechTextWindows: @ 0x082D2910
	window_template 0, 4, 15, 22, 4, 15, 0x001
	window_template 0, 3, 5, 5, 4, 15, 0x059
	window_template 0, 3, 2, 9, 10, 15, 0x06D
	null_window_template

	.globl gMainMenuData_082D2910
gMainMenuData_082D2910 = sNewGameBirchSpeechTextWindows
	.globl gMainMenuData_082D2918
gMainMenuData_082D2918 = sNewGameBirchSpeechTextWindows + 8
	.globl gMainMenuData_082D2918
	.globl sMainMenuBgPal
sMainMenuBgPal: @ 0x082D2930
	.incbin "build/graphics/raw_cleanup/main_menu/main_menu_bg.gbapal"
	.if (. - sMainMenuBgPal) != 0x20
	.error "sMainMenuBgPal size mismatch"
	.endif

	.globl sMainMenuTextPal
sMainMenuTextPal: @ 0x082D2950
	.incbin "build/graphics/raw_cleanup/main_menu/main_menu_text.gbapal"
	.if (. - sMainMenuTextPal) != 0x20
	.error "sMainMenuTextPal size mismatch"
	.endif

	.set MAIN_MENU_TEXT_DYNAMIC_COLOR_1, 10
	.set MAIN_MENU_TEXT_COLOR_WHITE, 1
	.set MAIN_MENU_TEXT_DYNAMIC_COLOR_2, 11
	.set MAIN_MENU_TEXT_DYNAMIC_COLOR_3, 12
	.globl sTextColor_Headers
sTextColor_Headers: @ 0x082D2970
	.byte MAIN_MENU_TEXT_DYNAMIC_COLOR_1, MAIN_MENU_TEXT_DYNAMIC_COLOR_2, MAIN_MENU_TEXT_DYNAMIC_COLOR_3
	.globl sTextColor_MenuInfo
sTextColor_MenuInfo: @ 0x082D2973
	.byte MAIN_MENU_TEXT_DYNAMIC_COLOR_1, MAIN_MENU_TEXT_COLOR_WHITE, MAIN_MENU_TEXT_DYNAMIC_COLOR_3
	.2byte 0 @ alignment

	.globl sMainMenuBgTemplates
sMainMenuBgTemplates: @ 0x082D2978
	bg_template 0, 2, 30, 0, 0, 0, 0
	bg_template 1, 0, 7, 0, 0, 3, 0
	.globl sBirchBgTemplate
sBirchBgTemplate: @ 0x082D2980
	bg_template 0, 3, 30, 0, 0, 0, 0

	.globl sScrollArrowsTemplate_MainMenu
sScrollArrowsTemplate_MainMenu: @ 0x082D2984
	.byte 2, 0x78, 8, 3, 0x78, 0x98
	.2byte 3, 4, 1, 1
	.byte 0, 0 @ palNum, compiler padding

	.globl sSpriteAffineAnim_PlayerShrink
sSpriteAffineAnim_PlayerShrink: @ 0x082D2994
	@ struct AffineAnimFrameCmd: s16 xScale, s16 yScale, u8 rotation, u8 duration
	.2byte -2, -2
	.byte 0, 0x30
	.2byte 0 @ original structure/alignment padding
	rodata_affine_anim_end
	.globl sSpriteAffineAnimTable_PlayerShrink
sSpriteAffineAnimTable_PlayerShrink: @ 0x082D29A4
	.4byte sSpriteAffineAnim_PlayerShrink

	.globl gMainMenuData_082D2930
gMainMenuData_082D2930 = sMainMenuBgPal
	.globl gMainMenuData_082D2950
gMainMenuData_082D2950 = sMainMenuTextPal
	.globl gMainMenuData_082D2970
gMainMenuData_082D2970 = sTextColor_Headers
	.globl gMainMenuData_082D2973
gMainMenuData_082D2973 = sTextColor_MenuInfo
	.globl gMainMenuData_082D2978
gMainMenuData_082D2978 = sMainMenuBgTemplates
	.globl gMainMenuData_082D2980
gMainMenuData_082D2980 = sBirchBgTemplate
	.globl gMainMenuData_082D2984
gMainMenuData_082D2984 = sScrollArrowsTemplate_MainMenu
	.globl gMainMenuData_082D29A4
gMainMenuData_082D29A4 = sSpriteAffineAnimTable_PlayerShrink
	.globl gMenuPointerTable_Rom_2D29A8
gMenuPointerTable_Rom_2D29A8: @ 0x082D29A8
	.4byte gText_Rom_5C8E92
	.4byte NULL
	.4byte gText_Rom_5C8E96
	.4byte NULL
	@ pret/pokeemerald-jp direct xref for 0x082D29B8: main_menu.s: NewGameBirchSpeech_SetDefaultPlayerName
	.globl gMainMenuData_082D29B8
gMainMenuData_082D29B8: @ 0x082D29B8
	@ confirmed contiguous ROM pointer table: 40 entries from this address
sPointerTable_082D29B8:
	@ analyzed canonical ROM range 0x082D29B8-0x082D2A07
	@ pointer/nullable table
	.4byte gText_Rom_5C8E9A @ +0x0
	.4byte gText_Rom_5C8EA0 @ +0x4
	.4byte 0x085C8EA6 @ +0x8
	.4byte gText_Rom_5C8EAC @ +0xC
	.4byte gText_Rom_5C8EB2 @ +0x10
	.4byte gText_Rom_5C8EB8 @ +0x14
	.4byte gText_Rom_5C8EBE @ +0x18
	.4byte gText_Rom_5C8EC4 @ +0x1C
	.4byte gText_Rom_5C8ECA @ +0x20
	.4byte gText_Rom_5C8ED0 @ +0x24
	.4byte 0x085C8ED6 @ +0x28
	.4byte gText_Rom_5C8EDC @ +0x2C
	.4byte gText_Rom_5C8EE2 @ +0x30
	.4byte gText_Rom_5C8EE8 @ +0x34
	.4byte gText_Rom_5C8EEE @ +0x38
	.4byte gText_Rom_5C8EF4 @ +0x3C
	.4byte gText_Rom_5C8EFA @ +0x40
	.4byte gText_Rom_5C8F00 @ +0x44
	.4byte gText_Rom_5C8F06 @ +0x48
	.4byte gText_Rom_5C8F0C @ +0x4C
	@ pret/pokeemerald-jp direct xref for 0x082D2A08: main_menu.s: NewGameBirchSpeech_SetDefaultPlayerName
	.globl gMainMenuData_082D2A08
gMainMenuData_082D2A08: @ 0x082D2A08
	@ analyzed canonical ROM range 0x082D2A08-0x082D2A57
	@ pointer/nullable table
	.4byte gText_Rom_5C8F12 @ +0x0
	.4byte gText_Rom_5C8F18 @ +0x4
	@ ANALYSIS: RAW_BLOCK size=0x4
	.4byte 0x085C8F1E @ +0x8
	.4byte gText_Rom_5C8F24 @ +0xC
	.4byte gText_Rom_5C8F28 @ +0x10
	.4byte gText_Rom_5C8F2E @ +0x14
	.4byte gText_Rom_5C8F34 @ +0x18
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0x085C8F3A @ +0x1C
	.4byte 0x085C8F40 @ +0x20
	.4byte gText_Rom_5C8F46 @ +0x24
	.4byte gText_Rom_5C8F4C @ +0x28
	.4byte gText_Rom_5C8F52 @ +0x2C
	.4byte gText_Rom_5C8F58 @ +0x30
	.4byte gText_Rom_5C8F5E @ +0x34
	@ ANALYSIS: RAW_BLOCK size=0x4
	.4byte 0x085C8F64 @ +0x38
	.4byte gText_Rom_5C8F6A @ +0x3C
	.4byte gText_Rom_5C8F70 @ +0x40
	.4byte gText_Rom_5C8F76 @ +0x44
	.4byte gText_Rom_5C8F7C @ +0x48
	.4byte gText_Rom_5C8F82 @ +0x4C
