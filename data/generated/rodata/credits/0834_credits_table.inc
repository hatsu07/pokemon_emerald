	@ pret/pokeemerald-jp direct xref for 0x085659FC: naming_screen.s: NamingScreen_InitBGs
	.globl gNamingScreenData_085659FC
gNamingScreenData_085659FC: @ 0x085659FC
	@ analyzed canonical ROM range 0x085659FC-0x08565A0B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x10
	.2byte 0x01E0, 0x0000, 0x11D9, 0x0000, 0x21CA, 0x0000, 0x31FF, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08565A0C: naming_screen.s: NamingScreen_InitBGs
	.globl gNamingScreenData_08565A0C
gNamingScreenData_08565A0C: @ 0x08565A0C
	@ analyzed canonical ROM range 0x08565A0C-0x08565A3B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x30
	.2byte 0x0301, 0x130A, 0x0A08, 0x0030, 0x0302, 0x130A, 0x0A08, 0x00C8
	.2byte 0x0803, 0x1106, 0x0A02, 0x0030, 0x0803, 0x1104, 0x0A02, 0x0052
	.2byte 0x0000, 0x1E00, 0x0B02, 0x0074, 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08565A3C: naming_screen.s: GetCurrentPageColumnCount
	.globl gNamingScreenData_08565A3C
gNamingScreenData_08565A3C: @ 0x08565A3C
	@ analyzed canonical ROM range 0x08565A3C-0x08565A41
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0x00, 0x01, 0x02, 0x00, 0x02, 0x01
	@ pret/pokeemerald-jp direct xref for 0x08565A42: naming_screen.s: sub_080E2758
	.globl gNamingScreenData_08565A42
gNamingScreenData_08565A42: @ 0x08565A42
	@ analyzed canonical ROM range 0x08565A42-0x08565A47
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0x01, 0x02, 0x00, 0x01, 0x00, 0x02
	@ pret/pokeemerald-jp direct xref for 0x08565A48: naming_screen.s: sub_080E2788
	.globl gNamingScreenData_08565A48
gNamingScreenData_08565A48: @ 0x08565A48
	@ analyzed canonical ROM range 0x08565A48-0x08565A4F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0100, 0x0202, 0x0001, 0x0000
	.globl gCreditsU32Table_Rom_565A50
gCreditsU32Table_Rom_565A50: @ 0x08565A50
	.4byte PageSwapAnimState_Init
	.4byte PageSwapAnimState_1
	.4byte PageSwapAnimState_2
	.4byte PageSwapAnimState_Done
	@ pret/pokeemerald-jp direct xref for 0x08565A60: naming_screen.s: sub_080E3144
	.globl gNamingScreenData_08565A60
gNamingScreenData_08565A60: @ 0x08565A60
	@ analyzed canonical ROM range 0x08565A60-0x08565A67
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x8
	.byte 0x00, 0x00, 0xFC, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x08565A68: naming_screen.s: sub_080E3190
	.globl gNamingScreenData_08565A68
gNamingScreenData_08565A68: @ 0x08565A68
	@ analyzed canonical ROM range 0x08565A68-0x08565A6F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0002, 0x0003, 0x0002, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x08565A70: naming_screen.s: GetKeyRoleAtCursorPos
	.globl gNamingScreenData_08565A70
gNamingScreenData_08565A70: @ 0x08565A70
	@ analyzed canonical ROM range 0x08565A70-0x08565A73
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0x01, 0x02, 0x03, 0x00
	.globl gCreditsPointerTable_Rom_565A74
gCreditsPointerTable_Rom_565A74: @ 0x08565A74
	.4byte sub_080E356C
	.4byte sub_080E35C0
	.4byte sub_080E35C4
	.4byte sub_080E3638
	@ pret/pokeemerald-jp direct xref for 0x08565A84: naming_screen.s: sub_080E3678
	.globl gNamingScreenData_08565A84
gNamingScreenData_08565A84: @ 0x08565A84
	@ analyzed canonical ROM range 0x08565A84-0x08565A89
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0x01, 0x00, 0x03, 0x00, 0x02, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08565A8A: naming_screen.s: sub_080E3678
	.globl gNamingScreenData_08565A8A
gNamingScreenData_08565A8A: @ 0x08565A8A
	@ analyzed canonical ROM range 0x08565A8A-0x08565A8F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0x04, 0x00, 0x06, 0x00, 0x05, 0x00
	.globl gCreditsU32Table_Rom_565A90
gCreditsU32Table_Rom_565A90: @ 0x08565A90
	.4byte TaskDummy2
	.4byte NamingScreen_CreatePlayerIcon
	.4byte NamingScreen_CreatePCIcon
	.4byte NamingScreen_CreateMonIcon
	.4byte NamingScreen_CreateWandaDadIcon
	.globl gCreditsU32Table_Rom_565AA4
gCreditsU32Table_Rom_565AA4: @ 0x08565AA4
	.4byte KeyboardKeyHandler_Character
	.4byte KeyboardKeyHandler_Page
	.4byte KeyboardKeyHandler_Backspace
	.4byte KeyboardKeyHandler_OK
	.globl gCreditsPointerTable_Rom_565AB4
gCreditsPointerTable_Rom_565AB4: @ 0x08565AB4
	.4byte InputState_2
	.4byte InputState_Enabled
	.4byte sub_080E3BD0
	@ pret/pokeemerald-jp direct xref for 0x08565AC0: naming_screen.s: HandleDpadMovement
	.globl gNamingScreenData_08565AC0
gNamingScreenData_08565AC0: @ 0x08565AC0
	@ analyzed canonical ROM range 0x08565AC0-0x08565AC9
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0xA
	.2byte 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x08565ACA: naming_screen.s: HandleDpadMovement
	.globl gNamingScreenData_08565ACA
gNamingScreenData_08565ACA: @ 0x08565ACA
	@ analyzed canonical ROM range 0x08565ACA-0x08565AD3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0xA
	.2byte 0x0000, 0xFFFF, 0x0001, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08565AD4: naming_screen.s: HandleDpadMovement
	.globl gNamingScreenData_08565AD4
gNamingScreenData_08565AD4: @ 0x08565AD4
	@ analyzed canonical ROM range 0x08565AD4-0x08565ADB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0000, 0x0001, 0x0001, 0x0002
	.globl gCreditsU32Table_Rom_565ADC
gCreditsU32Table_Rom_565ADC: @ 0x08565ADC
	@ Resolved pointer table; original ROM range 0x565ADC..0x565AE3.
	@ ANALYSIS: RAW_BLOCK size=0x4
	.4byte 0
	.4byte TYPE_POISON
	.globl gCreditsPointerTable_Rom_565AE4
gCreditsPointerTable_Rom_565AE4: @ 0x08565AE4
	.4byte sub_080E3D50
	.4byte sub_080E3D50
	.4byte sub_080E3DA4
	.4byte sub_080E3DA4
	.4byte sub_080E3D50
	.globl gCreditsPointerTable_Rom_565AF8
gCreditsPointerTable_Rom_565AF8: @ 0x08565AF8
	.4byte sub_080E3E78
	.4byte sub_080E3E7C
	@ pret/pokeemerald-jp direct xref for 0x08565B00: naming_screen.s: sub_080E3E7C
	.globl gNamingScreenData_08565B00
gNamingScreenData_08565B00: @ 0x08565B00
	@ analyzed canonical ROM range 0x08565B00-0x08565B05
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0x00, 0x09, 0x08, 0x00, 0x05, 0x04
	@ pret/pokeemerald-jp direct xref for 0x08565B06: naming_screen.s: sub_080E40A8
	.globl gNamingScreenData_08565B06
gNamingScreenData_08565B06: @ 0x08565B06
	@ analyzed canonical ROM range 0x08565B06-0x08565BBA
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xB5
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
