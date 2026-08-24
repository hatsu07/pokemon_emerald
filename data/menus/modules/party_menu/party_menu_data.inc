	@ pret/pokeemerald-jp direct xref for 0x085E1338: party_menu.s: DrawEmptySlot
	.globl gPartyMenuData_085E1338
gPartyMenuData_085E1338: @ 0x085E1338
	@ analyzed canonical ROM range 0x085E1338-0x085E136D
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x36 entries=27
	.2byte 0x1615, 0x1616, 0x1616, 0x1616, 0x1616, 0x1616, 0x1616, 0x1616
	.2byte 0x1716, 0x001E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x1F00, 0x2625, 0x2626, 0x2626, 0x2626, 0x2626, 0x2626
	.2byte 0x2626, 0x2626, 0x2726
	@ pret/pokeemerald-jp direct xref for 0x085E136E: party_menu.s: DisplayPartyPokemonGender
	.globl sGenderPalOffsets
sGenderPalOffsets: @ 0x085E136E
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x0B, 0x0C
	@ pret/pokeemerald-jp direct xref for 0x085E1370: party_menu.s: DisplayPartyPokemonHPBar
	.globl sHPBarPalOffsets
sHPBarPalOffsets: @ 0x085E1370
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x09, 0x0A
	@ pret/pokeemerald-jp direct xref for 0x085E1372: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxPalOffsets1
sPartyBoxPalOffsets1: @ 0x085E1372
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x04, 0x05, 0x06
	@ pret/pokeemerald-jp direct xref for 0x085E1375: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxPalOffsets2
sPartyBoxPalOffsets2: @ 0x085E1375
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x01, 0x07, 0x08
	@ pret/pokeemerald-jp direct xref for 0x085E1378: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxNoMonPalOffsets
sPartyBoxNoMonPalOffsets: @ 0x085E1378
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x01, 0x0B, 0x0C
	@ pret/pokeemerald-jp direct xref for 0x085E137B: party_menu.s: DisplayPartyPokemonGender
	.globl sGenderMalePalIds
sGenderMalePalIds: @ 0x085E137B
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x3B, 0x3C
	@ pret/pokeemerald-jp direct xref for 0x085E137D: party_menu.s: DisplayPartyPokemonGender
	.globl sGenderFemalePalIds
sGenderFemalePalIds: @ 0x085E137D
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x4B, 0x4C
	@ pret/pokeemerald-jp direct xref for 0x085E137F: party_menu.s: DisplayPartyPokemonHPBar
	.globl sHPBarGreenPalIds
sHPBarGreenPalIds: @ 0x085E137F
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x39, 0x3A
	@ pret/pokeemerald-jp direct xref for 0x085E1381: party_menu.s: DisplayPartyPokemonHPBar
	.globl sHPBarYellowPalIds
sHPBarYellowPalIds: @ 0x085E1381
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x49, 0x4A
	@ pret/pokeemerald-jp direct xref for 0x085E1383: party_menu.s: DisplayPartyPokemonHPBar
	.globl sHPBarRedPalIds
sHPBarRedPalIds: @ 0x085E1383
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x59, 0x5A
	@ pret/pokeemerald-jp direct xref for 0x085E1385: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxEmptySlotPalIds1
sPartyBoxEmptySlotPalIds1: @ 0x085E1385
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x34, 0x35, 0x36
	@ pret/pokeemerald-jp direct xref for 0x085E1388: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxMultiPalIds1
sPartyBoxMultiPalIds1: @ 0x085E1388
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x44, 0x45, 0x46
	@ pret/pokeemerald-jp direct xref for 0x085E138B: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxFaintedPalIds1
sPartyBoxFaintedPalIds1: @ 0x085E138B
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x54, 0x55, 0x56
	@ pret/pokeemerald-jp direct xref for 0x085E138E: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxCurrSelectionPalIds1
sPartyBoxCurrSelectionPalIds1: @ 0x085E138E
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x74, 0x75, 0x76
	@ pret/pokeemerald-jp direct xref for 0x085E1391: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxCurrSelectionMultiPalIds
sPartyBoxCurrSelectionMultiPalIds: @ 0x085E1391
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x84, 0x85, 0x86
	@ pret/pokeemerald-jp direct xref for 0x085E1394: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxCurrSelectionFaintedPalIds
sPartyBoxCurrSelectionFaintedPalIds: @ 0x085E1394
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x94, 0x95, 0x96
	@ pret/pokeemerald-jp direct xref for 0x085E1397: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxSelectedForActionPalIds1
sPartyBoxSelectedForActionPalIds1: @ 0x085E1397
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x64, 0x65, 0x66
	@ pret/pokeemerald-jp direct xref for 0x085E139A: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxEmptySlotPalIds2
sPartyBoxEmptySlotPalIds2: @ 0x085E139A
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x31, 0x37, 0x38
	@ pret/pokeemerald-jp direct xref for 0x085E139D: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxMultiPalIds2
sPartyBoxMultiPalIds2: @ 0x085E139D
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x41, 0x47, 0x48
	@ pret/pokeemerald-jp direct xref for 0x085E13A0: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxFaintedPalIds2
sPartyBoxFaintedPalIds2: @ 0x085E13A0
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x51, 0x57, 0x58
	@ pret/pokeemerald-jp direct xref for 0x085E13A3: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxCurrSelectionPalIds2
sPartyBoxCurrSelectionPalIds2: @ 0x085E13A3
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x61, 0x67, 0x68
	@ pret/pokeemerald-jp direct xref for 0x085E13A6: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxSelectedForActionPalIds2
sPartyBoxSelectedForActionPalIds2: @ 0x085E13A6
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0xA1, 0xA7, 0xA8
	@ pret/pokeemerald-jp direct xref for 0x085E13A9: party_menu.s: UpdateSelectedPartyBox
	.globl sPartyBoxNoMonPalIds
sPartyBoxNoMonPalIds: @ 0x085E13A9
	@ semantic Party Menu palette table; exact match to pret/pokeemerald src/data/party_menu.h
	.byte 0x11, 0x1B, 0x1C
	.4byte gText_Rom_5CA036
	.4byte gText_Rom_5CA159
	.4byte gText_Rom_5CA169
	.4byte gText_Rom_5CA046
	.4byte gText_Rom_5CA053
	.4byte gText_Rom_5CA063
	.4byte gText_Rom_5CA073
	.4byte gText_Rom_5CA08D
	.4byte gText_Rom_5CA09B
	.4byte gText_Rom_5CA0A6
	.4byte gText_Rom_5CA13D
	.4byte gText_Rom_5CA179
	.4byte gText_Rom_5CA188
	.4byte gText_Rom_5CA0B5
	.4byte gText_Rom_5CA0E4
	.4byte gText_Rom_5CA0F2
	.4byte gText_Rom_5CA102
	.4byte gText_Rom_5CA111
	.4byte gText_Rom_5CA11F
	.4byte gText_Rom_5CA12E
	.4byte gBattleSetupData_085C93D0
	.4byte gText_DoWhatWithPokemon
	.4byte gText_RestoreWhichMove
	.4byte gText_BoostPp
	.4byte gText_DoWhatWithItem
	.4byte gText_DoWhatWithMail
	.4byte gText_AlreadyHoldingOne
	@ pret/pokeemerald-jp direct xref for 0x085E1418: party_menu.s: DisplayPartyPokemonOtherText
	.globl gPartyMenuData_085E1418
gPartyMenuData_085E1418: @ 0x085E1418
	@ confirmed contiguous ROM pointer table: 13 entries from this address
sPointerTable_085E1418:
	@ analyzed canonical ROM range 0x085E1418-0x085E14BF
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0xA1A4, 0x085C, 0xA1AB, 0x085C, 0xA1B2, 0x085C, 0xA1B8, 0x085C
	.2byte 0xA1BD, 0x085C, 0xA1F5, 0x085C, 0xA1C3, 0x085C, 0xA1C9, 0x085C
	.2byte 0xA1D0, 0x085C, 0xA1D8, 0x085C, 0xA1E0, 0x085C, 0xA1E8, 0x085C
	.2byte 0xA1EE, 0x085C, 0x0108, 0x0151, 0x0160, 0x015B, 0x002E, 0x005C
	.2byte 0x0102, 0x0153, 0x014B, 0x00ED, 0x00F1, 0x010D, 0x003A, 0x003B
	.2byte 0x003F, 0x0071, 0x00B6, 0x00F0, 0x00CA, 0x00DB, 0x00DA, 0x004C
	.2byte 0x00E7, 0x0055, 0x0057, 0x0059, 0x00D8, 0x005B, 0x005E, 0x00F7
	.2byte 0x0118, 0x0068, 0x0073, 0x015F, 0x0035, 0x00BC, 0x00C9, 0x007E
	.2byte 0x013D, 0x014C, 0x0103, 0x0107, 0x0122, 0x009C, 0x00D5, 0x00A8
	.2byte 0x00D3, 0x011D, 0x0121, 0x013B, 0x000F, 0x0013, 0x0039, 0x0046
	.2byte 0x0094, 0x00F9, 0x007F, 0x0123
	@ pret/pokeemerald-jp direct xref for 0x085E14C0: party_menu.s: HandleMenuInput, sub_081B2E34
	.globl gPartyMenuData_085E14C0
gPartyMenuData_085E14C0: @ 0x085E14C0
	@ confirmed contiguous ROM pointer table: 66 entries from this address
sPointerTable_085E14C0:
	@ analyzed canonical ROM range 0x085E14C0-0x085E15EF
	@ pointer/nullable table
	.4byte gPartyMenuActionText_Give @ +0x0
	.4byte CursorCb_Give @ +0x4
	.4byte gPartyMenuActionText_Switch @ +0x8
	.4byte CursorCb_Switch @ +0xC
	.4byte gText_Exit @ +0x10
	.4byte CursorCb_Cancel1 @ +0x14
	.4byte sText_HeldItem @ +0x18
	.4byte CursorCb_Item @ +0x1C
	.4byte gPartyMenuActionText_Summary @ +0x20
	.4byte CursorCb_Summary @ +0x24
	.4byte gPartyMenuActionText_TakeItem @ +0x28
	.4byte CursorCb_TakeItem @ +0x2C
	.4byte gPartyMenuActionText_Mail @ +0x30
	.4byte CursorCb_Mail @ +0x34
	.4byte gPartyMenuActionText_TakeMail @ +0x38
	.4byte CursorCb_TakeMail @ +0x3C
	.4byte gPartyMenuActionText_Read @ +0x40
	.4byte CursorCb_Read @ +0x44
	.4byte gText_Exit @ +0x48
	.4byte CursorCb_Cancel2 @ +0x4C
	.4byte gPartyMenuActionText_SendMon @ +0x50
	.4byte CursorCb_SendMon @ +0x54
	.4byte gPartyMenuActionText_SendMon + 0x6 @ +0x58
	.4byte CursorCb_SendMon @ +0x5C
	.4byte gPartyMenuActionText_Give + 0xE @ +0x60
	.4byte CursorCb_Enter @ +0x64
	.4byte gText_Able_Copy_Menus @ +0x68
	.4byte CursorCb_NoEntry @ +0x6C
	.4byte gPartyMenuActionText_Store @ +0x70
	.4byte CursorCb_Store @ +0x74
	.4byte gText_Register @ +0x78
	.4byte CursorCb_Register @ +0x7C
	.4byte gPartyMenuActionText_Read + 0x8 @ +0x80
	.4byte CursorCb_Trade1 @ +0x84
	.4byte gPartyMenuActionText_Read + 0x8 @ +0x88
	.4byte CursorCb_Trade2 @ +0x8C
	.4byte gPartyMenuActionText_Toss @ +0x90
	.4byte CursorCb_Toss @ +0x94
	.4byte gMoveName_Cut @ +0x98
	.4byte CursorCb_FieldMove @ +0x9C
	.4byte gMoveName_Flash @ +0xA0
	.4byte CursorCb_FieldMove @ +0xA4
	.4byte gMoveName_RockSmash @ +0xA8
	.4byte CursorCb_FieldMove @ +0xAC
	.4byte gMoveName_Strength @ +0xB0
	.4byte CursorCb_FieldMove @ +0xB4
	.4byte gMoveName_Surf @ +0xB8
	.4byte CursorCb_FieldMove @ +0xBC
	.4byte gMoveName_Fly @ +0xC0
	.4byte CursorCb_FieldMove @ +0xC4
	.4byte gMoveName_Dive @ +0xC8
	.4byte CursorCb_FieldMove @ +0xCC
	.4byte gMoveName_Waterfall @ +0xD0
	.4byte CursorCb_FieldMove @ +0xD4
	.4byte gMoveName_Teleport @ +0xD8
	.4byte CursorCb_FieldMove @ +0xDC
	.4byte gMoveName_Dig @ +0xE0
	.4byte CursorCb_FieldMove @ +0xE4
	.4byte gMoveName_SecretPower @ +0xE8
	.4byte CursorCb_FieldMove @ +0xEC
	.4byte gMoveName_MilkDrink @ +0xF0
	.4byte CursorCb_FieldMove @ +0xF4
	.4byte gMoveName_SoftBoiled @ +0xF8
	.4byte CursorCb_FieldMove @ +0xFC
	.4byte gMoveName_SweetScent @ +0x100
	.4byte CursorCb_FieldMove @ +0x104
	.4byte 0x0A020100 @ +0x108
	.4byte 0x000B0200 @ +0x10C
	.4byte 0x0C020002 @ +0x110
	.4byte 0x000D0200 @ +0x114
	.4byte 0x02000E02 @ +0x118
	.4byte MovementType_FaceDownRightAndLeft_CodeAddress + 4 @ +0x11C
	.4byte 0x000F0907 @ +0x120
	.4byte 0x02001002 @ +0x124
	.4byte 0x05020011 @ +0x128
	.4byte 0x00000212 @ +0x12C
	@ pret/pokeemerald-jp direct xref for 0x085E15F0: party_menu.s: sub_081B3054
	.globl gPartyMenuData_085E15F0
gPartyMenuData_085E15F0: @ 0x085E15F0
	@ analyzed canonical ROM range 0x085E15F0-0x085E1627
	@ pointer/nullable table
	@ ANALYSIS: POINTER_TABLE entries=14 size=0x38
	.4byte 0
	.4byte gPartyMenuData_085E14C0 + 0x108
	.4byte gPartyMenuData_085E14C0 + 0x10B
	.4byte gPartyMenuData_085E14C0 + 0x10E
	.4byte gPartyMenuData_085E14C0 + 0x113
	.4byte gPartyMenuData_085E14C0 + 0x116
	.4byte gPartyMenuData_085E14C0 + 0x119
	.4byte gPartyMenuData_085E14C0 + 0x111
	.4byte gPartyMenuData_085E14C0 + 0x11C
	.4byte gPartyMenuData_085E14C0 + 0x11F
	.4byte gPartyMenuData_085E14C0 + 0x122
	.4byte gPartyMenuData_085E14C0 + 0x125
	.4byte gPartyMenuData_085E14C0 + 0x128
	.4byte gPartyMenuData_085E14C0 + 0x12B
	@ pret/pokeemerald-jp direct xref for 0x085E1628: party_menu.s: sub_081B3054
	.globl gPartyMenuData_085E1628
gPartyMenuData_085E1628: @ 0x085E1628
	@ analyzed canonical ROM range 0x085E1628-0x085E1635
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xE entries=7
	.2byte 0x0300, 0x0303, 0x0303, 0x0203, 0x0303, 0x0303, 0x0303
	@ pret/pokeemerald-jp direct xref for 0x085E1636: party_menu.s: CreateActionList
	.globl gPartyMenuData_085E1636
gPartyMenuData_085E1636: @ 0x085E1636
	@ analyzed canonical ROM range 0x085E1636-0x085E1653
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x1E entries=15
	.2byte 0x000F, 0x0094, 0x00F9, 0x0046, 0x0039, 0x0013, 0x0123, 0x007F
	.2byte 0x0064, 0x005B, 0x0122, 0x00D0, 0x0087, 0x00E6, 0x000E
	@ Resolved pointer table; original ROM range 0x5E1654..0x5E16C3.
	.4byte SetUpFieldMove_Cut
	.4byte TYPE_GHOST
	.4byte SetUpFieldMove_Flash
	.4byte TYPE_ELECTRIC
	.4byte SetUpFieldMove_RockSmash
	.4byte TYPE_ELECTRIC
	.4byte SetUpFieldMove_Strength
	.4byte TYPE_ELECTRIC
	.4byte SetUpFieldMove_Surf
	.4byte TYPE_STEEL
	.4byte SetUpFieldMove_Fly
	.4byte TYPE_ELECTRIC
	.4byte SetUpFieldMove_Dive
	.4byte TYPE_ELECTRIC
	.4byte SetUpFieldMove_Waterfall
	.4byte TYPE_ELECTRIC
	.4byte SetUpFieldMove_Teleport
	.4byte TYPE_ELECTRIC
	.4byte sub_08135780
	.4byte TYPE_ELECTRIC
	.4byte SetUpFieldMove_SecretPower
	.4byte TYPE_ELECTRIC
	.4byte SetUpFieldMove_SoftBoiled
	.4byte TYPE_DRAGON
	.4byte SetUpFieldMove_SoftBoiled
	.4byte TYPE_DRAGON
	.4byte SetUpFieldMove_SweetScent
	.4byte TYPE_ELECTRIC
	@ pret/pokeemerald-jp direct xref for 0x085E16C4: party_menu.s: CursorCb_Trade1
	.globl gPartyMenuData_085E16C4
gPartyMenuData_085E16C4: @ 0x085E16C4
	@ confirmed contiguous ROM pointer table: 9 entries from this address
sPointerTable_085E16C4:
	@ analyzed canonical ROM range 0x085E16C4-0x085E1767
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x38, 0xA3, 0x5C, 0x08, 0x58, 0xA3, 0x5C, 0x08, 0xB4, 0xA2, 0x5C, 0x08, 0xB4, 0xA2, 0x5C, 0x08
	.byte 0xE0, 0xA2, 0x5C, 0x08, 0xCC, 0xA2, 0x5C, 0x08, 0xFC, 0xA2, 0x5C, 0x08, 0x1C, 0xA3, 0x5C, 0x08
	.byte 0x1C, 0xA3, 0x5C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x50, 0x44, 0x44, 0x05, 0x50, 0x44, 0x44, 0xF5
	.byte 0x50, 0x44, 0x44, 0xF5, 0x70, 0x66, 0x66, 0xF7, 0x70, 0x66, 0x66, 0xF7, 0x50, 0x44, 0x44, 0xF5
	.byte 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x10, 0x11, 0x11, 0x01, 0x30, 0x11, 0x11, 0xF3
	.byte 0x10, 0x13, 0x31, 0xF1, 0x20, 0x32, 0x23, 0xF2, 0x20, 0x22, 0x22, 0xF2, 0x00, 0xFF, 0xFF, 0xFF
	.byte 0x00, 0x00, 0x00, 0x00, 0x27, 0x37, 0xFF, 0x7F, 0x5A, 0x7F, 0x52, 0x5A, 0xDF, 0x4F, 0x7B, 0x3B
	.byte 0x5E, 0x15, 0x74, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x8C, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x50, 0x17, 0x5E, 0x08
	.byte 0x58, 0x17, 0x5E, 0x08
	@ pret/pokeemerald-jp direct xref for 0x085E1768: party_menu.s: LoadHeldItemIcons
	.globl gPartyMenuData_085E1768
gPartyMenuData_085E1768: @ 0x085E1768
	@ analyzed canonical ROM range 0x085E1768-0x085E176F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0xE8, 0x16, 0x5E, 0x08, 0x40, 0x00, 0x50, 0xD7
	@ pret/pokeemerald-jp direct xref for 0x085E1770: party_menu.s: LoadHeldItemIcons
	.globl gPartyMenuData_085E1770
gPartyMenuData_085E1770: @ 0x085E1770
	@ analyzed canonical ROM range 0x085E1770-0x085E1777
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0x28, 0x17, 0x5E, 0x08, 0x50, 0xD7, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085E1778: party_menu.s: party_menu_held_item_object, party_menu_link_mon_held_item_object, sub_081B5A90
	.globl gPartyMenuData_085E1778
gPartyMenuData_085E1778: @ 0x085E1778
	@ analyzed canonical ROM range 0x085E1778-0x085E17AF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x38 entries=28
	.2byte 0xD750, 0xD750, 0x1748, 0x085E, 0x1760, 0x085E, 0x0000, 0x0000
	.2byte 0xF310, 0x082B, 0x7141, 0x0800, 0x0000, 0x8000, 0x0400, 0x0000
	.2byte 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0010, 0x0000, 0xFFFF, 0x0000
	.2byte 0x1798, 0x085E, 0x17A0, 0x085E
	@ pret/pokeemerald-jp direct xref for 0x085E17B0: party_menu.s: LoadPartyMenuPokeballGfx
	.globl gPartyMenuData_085E17B0
gPartyMenuData_085E17B0: @ 0x085E17B0
	@ analyzed canonical ROM range 0x085E17B0-0x085E17B7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085E17B0 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D96C8C
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x085E17B4 parent=gPartyMenuData_085E17B0 sheetSize=0x400 tag=0x4B0
	@ ANALYSIS: SOURCE_RANGE addr=0x085E17B4 size=0x4
	.2byte 0x400, 0x4B0 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x085E17B8: party_menu.s: LoadPartyMenuPokeballGfx
	.globl gPartyMenuData_085E17B8
gPartyMenuData_085E17B8: @ 0x085E17B8
	@ analyzed canonical ROM range 0x085E17B8-0x085E17BF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085E17B8 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D96F20
	@ ANALYSIS: COMPRESSED_SPRITE_PALETTE_META size=0x4 addr=0x085E17BC parent=gPartyMenuData_085E17B8 tag=0x4B0 padding=0
	@ ANALYSIS: SOURCE_RANGE addr=0x085E17BC size=0x4
	.2byte 0x4B0, 0 @ tag, padding
	@ pret/pokeemerald-jp direct xref for 0x085E17C0: party_menu.s: party_menu_link_mon_pokeball_object, party_menu_pokeball_object, sub_081B5BD4
	.globl gPartyMenuData_085E17C0
gPartyMenuData_085E17C0: @ 0x085E17C0
	@ analyzed canonical ROM range 0x085E17C0-0x085E1827
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x68 entries=52
	.2byte 0x04B0, 0x04B0, 0x1790, 0x085E, 0x17A8, 0x085E, 0x0000, 0x0000
	.2byte 0xF310, 0x082B, 0x7141, 0x0800, 0x0000, 0x4000, 0x0800, 0x0000
	.2byte 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0004, 0x0000, 0xFFFF, 0x0000
	.2byte 0x0008, 0x0000, 0xFFFF, 0x0000, 0x000C, 0x0000, 0xFFFF, 0x0000
	.2byte 0x0010, 0x0000, 0xFFFF, 0x0000, 0x0014, 0x0000, 0xFFFF, 0x0000
	.2byte 0x17E0, 0x085E, 0x17E8, 0x085E, 0x17F0, 0x085E, 0x17F8, 0x085E
	.2byte 0x1800, 0x085E, 0x1808, 0x085E
	@ pret/pokeemerald-jp direct xref for 0x085E1828: party_menu.s: LoadPartyMenuPokeballGfx
	.globl gPartyMenuData_085E1828
gPartyMenuData_085E1828: @ 0x085E1828
	@ analyzed canonical ROM range 0x085E1828-0x085E182F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085E1828 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D96E0C
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x085E182C parent=gPartyMenuData_085E1828 sheetSize=0x300 tag=0x4B1
	@ ANALYSIS: SOURCE_RANGE addr=0x085E182C size=0x4
	.2byte 0x300, 0x4B1 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x085E1830: party_menu.s: sub_081B5C14
	.globl gPartyMenuData_085E1830
gPartyMenuData_085E1830: @ 0x085E1830
	@ analyzed canonical ROM range 0x085E1830-0x085E18AF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x80 entries=64
	.2byte 0x04B1, 0x04B0, 0x17D8, 0x085E, 0x1810, 0x085E, 0x0000, 0x0000
	.2byte 0xF310, 0x082B, 0x7141, 0x0800, 0x4000, 0x4000, 0x0400, 0x0000
	.2byte 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0004, 0x0000, 0xFFFF, 0x0000
	.2byte 0x0008, 0x0000, 0xFFFF, 0x0000, 0x000C, 0x0000, 0xFFFF, 0x0000
	.2byte 0x0010, 0x0000, 0xFFFF, 0x0000, 0x0014, 0x0000, 0xFFFF, 0x0000
	.2byte 0x0018, 0x0000, 0xFFFF, 0x0000, 0x001C, 0x0000, 0xFFFF, 0x0000
	.2byte 0x1850, 0x085E, 0x1858, 0x085E, 0x1860, 0x085E, 0x1868, 0x085E
	.2byte 0x1870, 0x085E, 0x1878, 0x085E, 0x1880, 0x085E, 0x1888, 0x085E
	@ pret/pokeemerald-jp direct xref for 0x085E18B0: party_menu.s: LoadPartyMenuAilmentGfx
	.globl gPartyMenuData_085E18B0
gPartyMenuData_085E18B0: @ 0x085E18B0
	@ analyzed canonical ROM range 0x085E18B0-0x085E18B7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085E18B0 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D96F44
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x085E18B4 parent=gPartyMenuData_085E18B0 sheetSize=0x400 tag=0x4B2
	@ ANALYSIS: SOURCE_RANGE addr=0x085E18B4 size=0x4
	.2byte 0x400, 0x4B2 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x085E18B8: party_menu.s: LoadPartyMenuAilmentGfx
	.globl gPartyMenuData_085E18B8
gPartyMenuData_085E18B8: @ 0x085E18B8
	@ analyzed canonical ROM range 0x085E18B8-0x085E18BF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085E18B8 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D971A4
	@ ANALYSIS: COMPRESSED_SPRITE_PALETTE_META size=0x4 addr=0x085E18BC parent=gPartyMenuData_085E18B8 tag=0x4B2 padding=0
	@ ANALYSIS: SOURCE_RANGE addr=0x085E18BC size=0x4
	.2byte 0x4B2, 0 @ tag, padding
	@ pret/pokeemerald-jp direct xref for 0x085E18C0: party_menu.s: party_menu_link_mon_status_condition_object, party_menu_status_condition_object
	.globl gPartyMenuData_085E18C0
gPartyMenuData_085E18C0: @ 0x085E18C0
	@ analyzed canonical ROM range 0x085E18C0-0x085E18D7
sSpriteTemplate_085E18C0: @ 0x085E18C0
	rodata_sprite_template 0x04B2, 0x04B2, 0x085E1848, 0x085E1890, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ Resolved pointer table; original ROM range 0x5E18D8..0x5E18F7.
	.4byte DMA_SRC_FIXED
	.4byte SECRET_BASE_METATILE_POWDER_SNOW_MAT_1
	.4byte gPokemonSummaryScreenData_085CA388
	.4byte gText_Rom_5CA36F
	.4byte gText_Rom_5CA374
	.4byte gText_Rom_5CA379
	.4byte gText_Rom_5CA37E
	.4byte gText_Rom_5CA383
	@ pret/pokeemerald-jp direct xref for 0x085E18F8: party_menu.s: IsMoveHm, ItemIdToBattleMoveId
	.globl gPartyMenuData_085E18F8
gPartyMenuData_085E18F8: @ 0x085E18F8
	@ analyzed canonical ROM range 0x085E18F8-0x085E196B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x74 entries=58
	.2byte 0x0108, 0x0151, 0x0160, 0x015B, 0x002E, 0x005C, 0x0102, 0x0153
	.2byte 0x014B, 0x00ED, 0x00F1, 0x010D, 0x003A, 0x003B, 0x003F, 0x0071
	.2byte 0x00B6, 0x00F0, 0x00CA, 0x00DB, 0x00DA, 0x004C, 0x00E7, 0x0055
	.2byte 0x0057, 0x0059, 0x00D8, 0x005B, 0x005E, 0x00F7, 0x0118, 0x0068
	.2byte 0x0073, 0x015F, 0x0035, 0x00BC, 0x00C9, 0x007E, 0x013D, 0x014C
	.2byte 0x0103, 0x0107, 0x0122, 0x009C, 0x00D5, 0x00A8, 0x00D3, 0x011D
	.2byte 0x0121, 0x013B, 0x000F, 0x0013, 0x0039, 0x0046, 0x0094, 0x00F9
	.2byte 0x007F, 0x0123
