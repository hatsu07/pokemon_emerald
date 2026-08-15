@ Battle Tent bytes moved to data/battle_frontier/battle_tent.inc; emits no bytes here.

	.include "data/battle_frontier/battle_tower_static.inc"

	@ 0x085BE99E-0x085BE99F: alignment between battle_tower and next rodata object
	.align 2, 0

	.include "data/pokeblock/use_screen_assets.inc"

	.include "data/pokenav/legacy_hoenn_map_assets.inc"

	.include "data/pokenav/legacy_screen_assets.inc"
	@ pret/pokeemerald-jp direct xref for 0x085BF880: use_pokeblock.s: sub_08167734
	.include "data/pokeblock/use_screen_menu_assets.inc"
	.include "data/pokenav/legacy_outline_assets.inc"
	@ 0x085C08C4 onward remains unresolved
	.byte 0x81, 0x32, 0x81, 0x32, 0xA0, 0x32, 0xA1, 0x32, 0xA2, 0x32, 0xA3, 0x32, 0xA4
	.byte 0x32, 0xA5, 0x32, 0xA6, 0x32, 0xA7, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0xA8
	.byte 0x32, 0xA9, 0x32, 0xAA, 0x32, 0xAB, 0x32, 0xAC, 0x32, 0xAD, 0x32, 0xAE, 0x32, 0xAF, 0x32, 0x81
	.byte 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0xB0, 0x32, 0xB1, 0x32, 0xB2, 0x32, 0xB3, 0x32, 0xB4
	.byte 0x32, 0xB5, 0x32, 0xB6, 0x32, 0xB7, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0xB8
	.byte 0x32, 0xB9, 0x32, 0xBA, 0x32, 0xBB, 0x32, 0xBC, 0x32, 0xBD, 0x32, 0xBE, 0x32, 0xBF, 0x32, 0x81
	.byte 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0xC0, 0x32, 0xC1, 0x32, 0xC2, 0x32, 0xC3, 0x32, 0xC4
	.byte 0x32, 0xC5, 0x32, 0xC6, 0x32, 0xC7, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81
	.byte 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81, 0x32, 0x81
	.byte 0x32, 0x81, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x96, 0x99, 0x99, 0x69, 0x96, 0x99, 0x99, 0x69, 0x96
	.byte 0x79, 0x97, 0x69, 0x76, 0x77, 0x77, 0x67, 0x86, 0x78, 0x87, 0x68, 0x86, 0x88, 0x88, 0x68, 0x86
	.byte 0x88, 0x88, 0x68, 0x66, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00
	.include "data/pokeblock/use_screen_tables.inc"

	.globl gBattlePointerTable_Rom_5C0AA4
gBattlePointerTable_Rom_5C0AA4: @ 0x085C0AA4
	.4byte WallyHandleGetMonData
	.4byte sub_081691C8
	.4byte WallyHandleSetMonData
	.4byte WallyHandleSetRawMonData
	.4byte WallyHandleLoadMonSprite
	.4byte WallyHandleSwitchInAnim
	.4byte WallyHandleReturnMonToBall
	.4byte WallyHandleDrawTrainerPic
	.4byte WallyHandleTrainerSlide
	.4byte WallyHandleTrainerSlideBack
	.4byte WallyHandleFaintAnimation
	.4byte WallyHandlePaletteFade
	.4byte WallyHandleSuccessBallThrowAnim
	.4byte WallyHandleBallThrowAnim
	.4byte WallyHandlePause
	.4byte WallyHandleMoveAnimation
	.4byte WallyHandlePrintString
	.4byte WallyHandlePrintSelectionString
	.4byte WallyHandleChooseAction
	.4byte WallyHandleUnknownYesNoBox
	.4byte WallyHandleChooseMove
	.4byte WallyHandleChooseItem
	.4byte WallyHandleChoosePokemon
	.4byte WallyHandleCmd23
	.4byte WallyHandleHealthBarUpdate
	.4byte WallyHandleExpUpdate
	.4byte WallyHandleStatusIconUpdate
	.4byte WallyHandleStatusAnimation
	.4byte WallyHandleStatusXor
	.4byte WallyHandleDataTransfer
	.4byte WallyHandleDMA3Transfer
	.4byte WallyHandlePlayBGM
	.4byte WallyHandleCmd32
	.4byte WallyHandleTwoReturnValues
	.4byte sub_0816A548
	.4byte sub_0816A554
	.4byte WallyHandleOneReturnValue_Duplicate
	.4byte WallyHandleCmd37
	.4byte WallyHandleCmd38
	.4byte sub_0816A584
	.4byte WallyHandleCmd40
	.4byte WallyHandleHitAnimation
	.4byte WallyHandleCmd42
	.4byte WallyHandlePlaySE
	.4byte WallyHandlePlayFanfareOrBGM
	.4byte WallyHandleFaintingCry
	.4byte WallyHandleIntroSlide
	.4byte WallyHandleIntroTrainerBallThrow
	.4byte WallyHandleDrawPartyStatusSummary
	.4byte WallyHandleHidePartyStatusSummary
	.4byte WallyHandleEndBounceEffect
	.4byte WallyHandleSpriteInvisibility
	.4byte WallyHandleBattleAnimation
	.4byte WallyHandleLinkStandbyMsg
	.4byte WallyHandleResetActionMoveSelection
	.4byte WallyHandleCmd55
	.4byte SpriteCB_Null7
	.globl gBattlePointerTable_Rom_5C0B88
gBattlePointerTable_Rom_5C0B88: @ 0x085C0B88
	.4byte gText_Rom_5CA8EC
	.4byte gText_Rom_5CA8DA
	.4byte gText_Rom_5CA900
	.4byte gText_Rom_5C9423
	.globl gBattlePointerTable_Rom_5C0B98
gBattlePointerTable_Rom_5C0B98: @ 0x085C0B98
	.4byte gText_Rom_5CA8AC
	.4byte PlayerPC_ItemStorage
	.4byte gText_Rom_5CA8B5
	.4byte PlayerPC_Mailbox
	.4byte gText_Rom_5CA8A6
	.4byte PlayerPC_Decoration
	.4byte gText_Rom_5CA89D
	.4byte PlayerPC_TurnOff
	@ pret/pokeemerald-jp direct xref for 0x085C0BB8: player_pc.s: BedroomPC
	.globl gPlayerPcData_085C0BB8
gPlayerPcData_085C0BB8: @ 0x085C0BB8
	@ analyzed canonical ROM range 0x085C0BB8-0x085C0BBB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0x00, 0x01, 0x02, 0x03
	@ pret/pokeemerald-jp direct xref for 0x085C0BBC: player_pc.s: PlayerPC
	.globl gPlayerPcData_085C0BBC
gPlayerPcData_085C0BBC: @ 0x085C0BBC
	@ analyzed canonical ROM range 0x085C0BBC-0x085C0BBF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0x00, 0x01, 0x03, 0x00
	.globl gBattlePointerTable_Rom_5C0BC0
gBattlePointerTable_Rom_5C0BC0: @ 0x085C0BC0
	.4byte gText_Rom_5CA8C7
	.4byte ItemStorage_Withdraw
	.4byte gText_Rom_5CA8BD
	.4byte ItemStorage_Deposit
	.4byte gText_Rom_5CA8D1
	.4byte ItemStorage_Toss
	.4byte gText_Rom_5C93C4
	.4byte ItemStorage_Exit
	@ pret/pokeemerald-jp direct xref for 0x085C0BE0: player_pc.s: NewGameInitPCItems
	.globl gPlayerPcData_085C0BE0
gPlayerPcData_085C0BE0: @ 0x085C0BE0
	@ analyzed canonical ROM range 0x085C0BE0-0x085C0BE7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x000D, 0x0001, 0x0000, 0x0000
	.globl gBattlePointerTable_Rom_5C0BE8
gBattlePointerTable_Rom_5C0BE8: @ 0x085C0BE8
	.4byte gText_Rom_5CA959
	.4byte Mailbox_DoMailRead
	.4byte gText_Rom_5CA962
	.4byte Mailbox_MoveToBag
	.4byte gText_Rom_5CA96B
	.4byte Mailbox_Give
	.4byte gText_Exit
	.4byte Mailbox_Cancel
	@ pret/pokeemerald-jp direct xref for 0x085C0C08: player_pc.s: InitPlayerPCMenu
	.globl gPlayerPcData_085C0C08
gPlayerPcData_085C0C08: @ 0x085C0C08
	@ analyzed canonical ROM range 0x085C0C08-0x085C0C0F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0100, 0x0901, 0x0F06, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x085C0C10: player_pc.s: InitPlayerPCMenu
	.globl gPlayerPcData_085C0C10
gPlayerPcData_085C0C10: @ 0x085C0C10
	@ analyzed canonical ROM range 0x085C0C10-0x085C0C17
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0100, 0x0901, 0x0F08, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x085C0C18: player_pc.s: InitItemStorageMenu
	.globl gPlayerPcData_085C0C18
gPlayerPcData_085C0C18: @ 0x085C0C18
	@ analyzed canonical ROM range 0x085C0C18-0x085C0C1F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0100, 0x0A01, 0x0F08, 0x0001
	.globl gBattleU32Table_Rom_5C0C20
gBattleU32Table_Rom_5C0C20: @ 0x085C0C20
	.4byte ItemStorage_ResumeInputFromYesToss
	.4byte ItemStorage_ResumeInputFromNoToss
	@ pret/pokeemerald-jp direct xref for 0x085C0C28: player_pc.s: ItemStorage_RefreshListMenu
	.globl gPlayerPcData_085C0C28
gPlayerPcData_085C0C28: @ 0x085C0C28
	@ analyzed canonical ROM range 0x085C0C28-0x085C0C3F
	@ semantic recovery: rodata; byte-verified against linked ROM
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0x00, 0x00, 0x00, 0x00
FunctionPointerTable_JP_085C0C2C: @ 0x085C0C2C
	@ proven function-pointer table
	.4byte ItemStorage_MoveCursor
	.4byte fish4_goto_x5_or_x6
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x2A, 0x31, 0x00, 0x01
	@ pret/pokeemerald-jp direct xref for 0x085C0C40: player_pc.s: sub_0816BABC
	.globl gPlayerPcData_085C0C40
gPlayerPcData_085C0C40: @ 0x085C0C40
	@ analyzed canonical ROM range 0x085C0C40-0x085C0C67
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x28
	.2byte 0x0F00, 0x0E01, 0x0F12, 0x0051, 0x0100, 0x0C0D, 0x0F06, 0x014D
	.2byte 0x0100, 0x0308, 0x0F03, 0x01A7, 0x0100, 0x0901, 0x0F02, 0x0195
	.2byte 0x0700, 0x0609, 0x0F02, 0x01B0
	@ pret/pokeemerald-jp direct xref for 0x085C0C68: player_pc.s: ItemStorage_DoItemToss
	.globl gPlayerPcData_085C0C68
gPlayerPcData_085C0C68: @ 0x085C0C68
	@ analyzed canonical ROM range 0x085C0C68-0x085C0C6F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0800, 0x0507, 0x0F04, 0x01BC
	@ pret/pokeemerald-jp direct xref for 0x085C0C70: player_pc.s: sub_0816BE14
	.globl gPlayerPcData_085C0C70
gPlayerPcData_085C0C70: @ 0x085C0C70
	@ analyzed canonical ROM range 0x085C0C70-0x085C0C73
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0x01, 0x03, 0x02, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085C0C74: credits.s: sub_08176B24; intro.s: LoadCopyrightGraphics
	.include "data/intro/copyright_assets.inc"
	@ Unclassified 2-byte residual between copyright and the proven intro scene assets.
	.byte 0x00, 0x00
	.include "data/intro/scene_assets.inc"
	.include "data/intro/scene_static_data.inc"
	@ pret/pokeemerald-jp direct xref for 0x085C5FFC: intro.s: sub_0816F91C
	.globl gIntroData_085C5FFC
gIntroData_085C5FFC: @ 0x085C5FFC
	@ analyzed canonical ROM range 0x085C5FFC-0x085C600F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x14
	.2byte 0x0100, 0x00C0, 0x0080, 0x0040, 0x0000, 0x0040, 0x0080, 0x00C0
	.2byte 0x0100, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C6010: intro.s: CreatePart1Animations
	.globl gIntroData_085C6010
gIntroData_085C6010: @ 0x085C6010
	@ analyzed canonical ROM range 0x085C6010-0x085C603F
	@ pointer/nullable table
	@ ANALYSIS: RAW_BLOCK size=0x14
	.4byte 0x07D107D0 @ +0x0
	.4byte 0x085C5E88 @ +0x4
	.4byte 0x085C5F10 @ +0x8
	.4byte 0 @ +0xC
	.4byte 0x085C5FEC @ +0x10
	.4byte sub_0816F91C @ +0x14
	@ ANALYSIS: RAW_BLOCK size=0x10
	.4byte 0x07D107D0 @ +0x18
	.4byte 0x085C5E90 @ +0x1C
	.4byte 0x085C5F2C @ +0x20
	.4byte 0 @ +0x24
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte sub_0816F91C @ +0x2C
	@ pret/pokeemerald-jp direct xref for 0x085C6040: intro.s: CreatePart1Animations
	.globl gIntroData_085C6040
gIntroData_085C6040: @ 0x085C6040
	@ analyzed canonical ROM range 0x085C6040-0x085C6057
sSpriteTemplate_085C6040: @ 0x085C6040
	rodata_sprite_template 0x07D0, 0x07D1, 0x085C5E98, 0x085C5F44, 0, 0x085C5FEC, sub_0816FB3C
	@ pret/pokeemerald-jp direct xref for 0x085C6058: intro.s: CreatePart1Animations
	.globl gIntroData_085C6058
gIntroData_085C6058: @ 0x085C6058
	@ analyzed canonical ROM range 0x085C6058-0x085C6077
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x20
	.2byte 0x1700, 0x3117, 0x243E, 0x0A24, 0x000A, 0x0000, 0x40A0, 0xC000
	.2byte 0x0000, 0x0000, 0x0000, 0x000A, 0xFFFE, 0x0000, 0x606C, 0x085C
	@ pret/pokeemerald-jp direct xref for 0x085C6078: intro.s: Task_IntroScrollDownAndShowFlygon
	.globl gIntroData_085C6078
gIntroData_085C6078: @ 0x085C6078
	@ analyzed canonical ROM range 0x085C6078-0x085C608F
sSpriteTemplate_085C6078: @ 0x085C6078
	rodata_sprite_template 0x07D2, 0x07D2, 0x085C6064, 0x085C6074, 0, gDummySpriteAffineAnimTable, sub_0816FCD4
	@ pret/pokeemerald-jp direct xref for 0x085C6090: intro.s: Task_IntroLoadPart1Graphics
	.globl gIntroData_085C6090
gIntroData_085C6090: @ 0x085C6090
	@ analyzed canonical ROM range 0x085C6090-0x085C609F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x10
	.2byte 0x1084, 0x085C, 0x1400, 0x07D0, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C60A0: intro.s: Task_IntroLoadPart1Graphics
	.globl gIntroData_085C60A0
gIntroData_085C60A0: @ 0x085C60A0
	@ analyzed canonical ROM range 0x085C60A0-0x085C60AF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x10
	.2byte 0xD114, 0x08D8, 0x0400, 0x07D2, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C60B0: intro.s: Task_IntroLoadPart1Graphics
	.globl gIntroData_085C60B0
gIntroData_085C60B0: @ 0x085C60B0
	@ analyzed canonical ROM range 0x085C60B0-0x085C60E3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x34
	.2byte 0x1044, 0x085C, 0x07D0, 0x0000, 0x1064, 0x085C, 0x07D1, 0x0000
	.2byte 0x59E0, 0x085C, 0x07D2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x00A0, 0xC000, 0x0000, 0x0000, 0x0010, 0x0008, 0xFFFF, 0x0000
	.2byte 0x60D8, 0x085C
	@ pret/pokeemerald-jp direct xref for 0x085C60E4: intro.s: Task_IntroRayquazaGlowScene_1
	.globl gIntroData_085C60E4
gIntroData_085C60E4: @ 0x085C60E4
	@ analyzed canonical ROM range 0x085C60E4-0x085C60FB
sSpriteTemplate_085C60E4: @ 0x085C60E4
	rodata_sprite_template 0x07D3, 0x07D3, 0x085C60D0, 0x085C60E0, 0, gDummySpriteAffineAnimTable, SpriteCB_IntroRayquazaHyperbeam
	@ pret/pokeemerald-jp direct xref for 0x085C60FC: intro.s: Task_IntroLoadRayquazaGlowScene
	.globl gIntroData_085C60FC
gIntroData_085C60FC: @ 0x085C60FC
	@ analyzed canonical ROM range 0x085C60FC-0x085C610B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x10
	.2byte 0x5664, 0x085C, 0x0A00, 0x07D3, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C610C: intro.s: Task_IntroLoadRayquazaGlowScene
	.globl gIntroData_085C610C
gIntroData_085C610C: @ 0x085C610C
	@ analyzed canonical ROM range 0x085C610C-0x085C611B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x10
	.2byte 0x5624, 0x085C, 0x07D3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.globl gText_Rom_5C611C
