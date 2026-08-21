	.globl gCreditsPointerTable_Rom_5D79F4
gCreditsPointerTable_Rom_5D79F4: @ 0x085D79F4
	.4byte LoadMatchCallWindowGfx
	.4byte MoveMatchCallWindowToVram
	.4byte PrintMatchCallIntroEllipsis
	.4byte sub_08195EB0
	.4byte sub_08195ED8
	.4byte sub_08195F30
	.4byte sub_08195F90
	.4byte sub_08195FF0
	@ pret/pokeemerald-jp direct xref for 0x085D7A14: match_call.s: LoadMatchCallWindowGfx
	.globl gMatchCallData_085D7A14
gMatchCallData_085D7A14: @ 0x085D7A14
	@ analyzed canonical ROM range 0x085D7A14-0x085D7A1B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0100, 0x1C0F, 0x0F04, 0x0200
	@ pret/pokeemerald-jp direct xref for 0x085D7A1C: match_call.s: PopulateMatchCallStringVars
	.globl gMatchCallData_085D7A1C
gMatchCallData_085D7A1C: @ 0x085D7A1C
	@ analyzed canonical ROM range 0x085D7A1C-0x085D7A27
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085D7A1C size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02021C40
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085D7A20 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02021C54
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085D7A24 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02021C68
	@ pret/pokeemerald-jp direct xref for 0x085D7A28: match_call.s: PopulateMatchCallStringVar
	.globl gMatchCallData_085D7A28
gMatchCallData_085D7A28: @ 0x085D7A28
	@ confirmed contiguous ROM pointer table: 6 entries from this address
sPointerTable_085D7A28:
	@ analyzed canonical ROM range 0x085D7A28-0x085D7A53
	@ semantic recovery: rodata; byte-verified against linked ROM
FunctionPointerTable_JP_085D7A28: @ 0x085D7A28
	@ proven function-pointer table
	.4byte PopulateTrainerName
	.4byte PopulateMapName
	.4byte PopulateSpeciesFromTrainerLocation
	.4byte PopulateSpeciesFromTrainerParty
	.4byte PopulateBattleFrontierFacilityName
	.4byte PopulateBattleFrontierStreak
	.byte 0x65, 0x62, 0xFF, 0x58, 0x70, 0xFF, 0x8A, 0x7E, 0xFF, 0x5A, 0x53, 0xFF, 0x6F, 0x78, 0xFF, 0x70
	.byte 0x6E, 0xFF, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085D7A54: match_call.s: PopulateTrainerName
	.globl gMatchCallData_085D7A54
gMatchCallData_085D7A54: @ 0x085D7A54
	@ analyzed canonical ROM range 0x085D7A54-0x085D7A83
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x30 bytes=48
	.byte 0x82, 0x02, 0x00, 0x00, 0x40, 0x7A, 0x5D, 0x08, 0xE1, 0x01, 0x00, 0x00, 0x43, 0x7A, 0x5D, 0x08
	.byte 0xA9, 0x02, 0x00, 0x00, 0x46, 0x7A, 0x5D, 0x08, 0xAF, 0x02, 0x00, 0x00, 0x49, 0x7A, 0x5D, 0x08
	.byte 0x33, 0x00, 0x00, 0x00, 0x4C, 0x7A, 0x5D, 0x08, 0x1F, 0x01, 0x00, 0x00, 0x4F, 0x7A, 0x5D, 0x08
	.globl gCreditsPointerTable_Rom_5D7A84
gCreditsPointerTable_Rom_5D7A84: @ 0x085D7A84
	.4byte gText_Rom_5CC423
	.4byte gText_Rom_5CC42A
	.4byte gText_Rom_5CC431
	.4byte gText_Rom_5CC442
	.4byte gText_Rom_5CC44A
	.4byte gText_Rom_5CC438
	.4byte gText_Rom_5CC452
	@ pret/pokeemerald-jp direct xref for 0x085D7AA0: match_call.s: GetNumOwnedBadges
	.globl gMatchCallData_085D7AA0
gMatchCallData_085D7AA0: @ 0x085D7AA0
	@ confirmed contiguous ROM pointer table: 4 entries from this address
sPointerTable_085D7AA0:
	@ analyzed canonical ROM range 0x085D7AA0-0x085D7AAF
	@ pointer/nullable table
	.4byte gText_Rom_680867 @ +0x0
	.4byte DirectSoundWaveData_Instrument_063_JP_086A0804 + 0x65 @ +0x4
	.4byte DirectSoundWaveData_Instrument_084_JP_086BFD08 + 0xB63 @ +0x8
	.4byte DirectSoundWaveData_Cry_019_JP_086E0160 + 0x70D @ +0xC
	.globl gCreditsPointerTable_Rom_5D7AB0
gCreditsPointerTable_Rom_5D7AB0: @ 0x085D7AB0
	.4byte gText_Rom_262E5F
	.4byte gText_Rom_262E81
	.4byte gText_Rom_262EA6
	.4byte gText_Rom_262ECF
	.4byte gText_Rom_262EF5
	.4byte gText_Rom_262F18
	.4byte gText_Rom_262F3F
	.4byte gText_Rom_262F61
	.4byte gText_Rom_262F8A
	.4byte gText_Rom_262FAD
	.4byte gText_Rom_262FE1
	.4byte gText_Rom_26300C
	.4byte gText_Rom_263032
	.4byte gText_Rom_263050
	.4byte gText_Rom_263072
	.4byte gText_Rom_263095
	.4byte gText_Rom_2630C7
	.4byte gText_Rom_2630F0
	.4byte gText_Rom_26310C
	.4byte gText_Rom_26312D
	.4byte gText_Rom_26314F
	@ pret/pokeemerald-jp direct xref for 0x085D7B04: battle_pyramid_bag.s: sub_081C63F0; diploma.s: InitClearSaveDataScreenWindows; item_menu.s: SetupBagMenu_Textboxes; link.s: CB2_LinkError; menu.s: Menu_LoadStdPalAt, sub_08197680, sub_081976AC, sub_081976B4; menu_specialized.s: InitMoveR...
	.globl gCreditsU8Table_Rom_5D7B04
gCreditsU8Table_Rom_5D7B04: @ 0x085D7B04
	@ analyzed canonical ROM range 0x085D7B04-0x085D7B23
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0xFF, 0x7F, 0xFF, 0x7F, 0x8C, 0x31, 0x5A, 0x67, 0x3C, 0x04, 0xFF, 0x3A, 0x64, 0x06, 0xD2, 0x4B
	.byte 0x46, 0x65, 0x14, 0x7B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085D7B24: menu.s: GetPlayerTextSpeedDelay
	.globl gMenuData_085D7B24
gMenuData_085D7B24: @ 0x085D7B24
	@ analyzed canonical ROM range 0x085D7B24-0x085D7B27
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x08, 0x04, 0x01, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085D7B28: menu.s: InitStandardTextBoxWindows
	.globl gMenuData_085D7B28
gMenuData_085D7B28: @ 0x085D7B28
	@ analyzed canonical ROM range 0x085D7B28-0x085D7B37
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x0400, 0x160F, 0x0F04, 0x01A8, 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085D7B38: menu.s: DisplayYesNoMenuDefaultYes, DisplayYesNoMenuWithDefault
	.globl gMenuData_085D7B38
gMenuData_085D7B38: @ 0x085D7B38
	@ analyzed canonical ROM range 0x085D7B38-0x085D7B3F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x1500, 0x0509, 0x0F04, 0x0146
	.globl gText_Rom_5D7B40
