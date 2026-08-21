	@ Naming-screen BG templates.
	.globl sNamingScreenBgTemplates
sNamingScreenBgTemplates: @ 0x085659FC
	bg_template 0, 0, 30, 0, 0, 0, 0
	bg_template 1, 2, 29, 0, 0, 1, 0
	bg_template 2, 2, 28, 0, 0, 2, 0
	bg_template 3, 3, 31, 0, 0, 3, 0

	@ Naming-screen WindowTemplate[6], including the dummy terminator.
	.globl sNamingScreenWindowTemplates
sNamingScreenWindowTemplates: @ 0x08565A0C
	rodata_window_template 1, 3, 10, 19, 8, 10, 0x030
	rodata_window_template 2, 3, 10, 19, 8, 10, 0x0C8
	rodata_window_template 3, 8,  6, 17, 2, 10, 0x030
	rodata_window_template 3, 8,  4, 17, 2, 10, 0x052
	rodata_window_template 0, 0,  0, 30, 2, 11, 0x074
	rodata_window_template 0xFF, 0, 0, 0, 0, 0, 0

	@ JP has two naming-screen page layouts. sub_080E270C selects row 1
	@ for player/Walda screens and row 0 for the other naming screens.
	.globl sNamingScreenPageToNextGfxId
sNamingScreenPageToNextGfxId: @ 0x08565A3C
	.byte 0, 1, 2 @ layout 0
	.byte 0, 2, 1 @ layout 1

	.globl sNamingScreenPageToNextKeyboardId
sNamingScreenPageToNextKeyboardId: @ 0x08565A42
	.byte 1, 2, 0 @ layout 0
	.byte 1, 0, 2 @ layout 1

	.globl sNamingScreenPageToKeyboardId
sNamingScreenPageToKeyboardId: @ 0x08565A48
	.byte 0, 1, 2 @ layout 0
	.byte 2, 1, 0 @ layout 1
	.2byte 0 @ alignment

	.globl sNamingScreenPageSwapAnimStateFuncs
sNamingScreenPageSwapAnimStateFuncs: @ 0x08565A50
	.4byte PageSwapAnimState_Init
	.4byte PageSwapAnimState_1
	.4byte PageSwapAnimState_2
	.4byte PageSwapAnimState_Done

	.globl sNamingScreenInputArrowXOffsets
sNamingScreenInputArrowXOffsets: @ 0x08565A60
	.2byte 0, -4, -2, -1

	.globl sNamingScreenUnderscoreYOffsets
sNamingScreenUnderscoreYOffsets: @ 0x08565A68
	.2byte 2, 3, 2, 1

	.globl sNamingScreenButtonKeyRoles
sNamingScreenButtonKeyRoles: @ 0x08565A70
	.byte 1, 2, 3
	.byte 0 @ alignment

	.globl sNamingScreenPageSwapSpriteFuncs
sNamingScreenPageSwapSpriteFuncs: @ 0x08565A74
	.4byte sub_080E356C
	.4byte sub_080E35C0
	.4byte sub_080E35C4
	.4byte sub_080E3638

	.globl sNamingScreenPageSwapPalTags
sNamingScreenPageSwapPalTags: @ 0x08565A84
	.2byte 1, 3, 2

	.globl sNamingScreenPageSwapGfxTags
sNamingScreenPageSwapGfxTags: @ 0x08565A8A
	.2byte 4, 6, 5

	.globl sNamingScreenIconFunctions
sNamingScreenIconFunctions: @ 0x08565A90
	.4byte TaskDummy2
	.4byte NamingScreen_CreatePlayerIcon
	.4byte NamingScreen_CreatePCIcon
	.4byte NamingScreen_CreateMonIcon
	.4byte NamingScreen_CreateWandaDadIcon

	.globl sNamingScreenKeyboardKeyHandlers
sNamingScreenKeyboardKeyHandlers: @ 0x08565AA4
	.4byte KeyboardKeyHandler_Character
	.4byte KeyboardKeyHandler_Page
	.4byte KeyboardKeyHandler_Backspace
	.4byte KeyboardKeyHandler_OK

	.globl sNamingScreenInputFuncs
sNamingScreenInputFuncs: @ 0x08565AB4
	.4byte InputState_2
	.4byte InputState_Enabled
	.4byte sub_080E3BD0

	.globl sNamingScreenDpadDeltaX
sNamingScreenDpadDeltaX: @ 0x08565AC0
	.2byte 0, 0, 0, -1, 1

	.globl sNamingScreenDpadDeltaY
sNamingScreenDpadDeltaY: @ 0x08565ACA
	.2byte 0, -1, 1, 0, 0

	.globl sNamingScreenKeyRowToButtonRow
sNamingScreenKeyRowToButtonRow: @ 0x08565AD4
	.2byte 0, 1, 1, 2

	.globl sNamingScreenButtonRowToKeyRow
sNamingScreenButtonRowToKeyRow: @ 0x08565ADC
	.2byte 0, 0, 3
	.2byte 0 @ alignment

	.globl sNamingScreenDrawTextEntryBoxFuncs
sNamingScreenDrawTextEntryBoxFuncs: @ 0x08565AE4
	.4byte sub_080E3D50
	.4byte sub_080E3D50
	.4byte sub_080E3DA4
	.4byte sub_080E3DA4
	.4byte sub_080E3D50

	.globl sNamingScreenDrawGenderIconFuncs
sNamingScreenDrawGenderIconFuncs: @ 0x08565AF8
	.4byte sub_080E3E78
	.4byte sub_080E3E7C

	.globl sNamingScreenGenderColors
sNamingScreenGenderColors: @ 0x08565B00
	.byte 0, 9, 8
	.byte 0, 5, 4

	@ JP character conversion lookup. The first 0xB5 bytes are here;
	@ the final 5 source bytes plus 0xFF terminator are the immediately
	@ following gText_Rom_565BBB slot, preserving the original ROM layout.
	.globl sNamingScreenCharConversionFrom
sNamingScreenCharConversionFrom: @ 0x08565B06
	.byte 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10
	.byte 0x11, 0x12, 0x13, 0x14, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x24, 0x25, 0x26, 0x34, 0x35, 0x36, 0x2F
	.byte 0x30, 0x31, 0x32, 0x33, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x40, 0x41, 0x42
	.byte 0x43, 0x44, 0x45, 0x50, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x51, 0x52
	.byte 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0x60, 0x61, 0x62
	.byte 0x63, 0x64, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x74, 0x75, 0x76, 0x84, 0x85, 0x86, 0x7F, 0x80, 0x81
	.byte 0x82, 0x83, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94
	.byte 0x95, 0xA0, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xBB, 0xBC, 0xBD, 0xBE
	.byte 0xBF, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE
	.byte 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE
	.byte 0xDF, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE
	.byte 0xA1, 0xA2, 0xA3, 0xA4, 0xA5

	.if (. - sNamingScreenBgTemplates) != 0x1BF
	.error "naming-screen core static table range size mismatch"
	.endif
