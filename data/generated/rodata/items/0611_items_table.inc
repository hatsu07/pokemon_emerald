	@ pret/pokeemerald-jp direct xref for 0x0830FC60: berry_blender.s: ShowBerryBlenderRecordWindow
	.globl gBerryBlenderData_0830FC60
gBerryBlenderData_0830FC60: @ 0x0830FC60
	@ analyzed canonical ROM range 0x0830FC60-0x0830FC67
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0600, 0x1004, 0x0F0C, 0x0008
	@ pret/pokeemerald-jp direct xref for 0x0830FC68: new_game.s: ClearAllContestWinnerPics
	.globl gNewGameData_0830FC68
gNewGameData_0830FC68: @ 0x0830FC68
	@ analyzed canonical ROM range 0x0830FC68-0x0830FC87
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x20
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFF00, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x00FF, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0830FC88: overworld.s: ApplyCurrentWarp
	.globl gOverworldData_0830FC88
gOverworldData_0830FC88: @ 0x0830FC88
	@ analyzed canonical ROM range 0x0830FC88-0x0830FCAF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x28
	.2byte 0xFFFF, 0x00FF, 0xFFFF, 0xFFFF, 0x04B0, 0x0000, 0x0E10, 0x0000
	.2byte 0x04B0, 0x0000, 0x0960, 0x0000, 0x0032, 0x0000, 0x0050, 0x0000
	.2byte 0xFFD4, 0xFFFF, 0x002C, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0830FCB0: field_control_avatar.s: GetInteractedEventObjectScript, GetInteractedLinkPlayerScript; fieldmap.s: CanCameraMoveInDirection; overworld.s: TryInteractWithPlayer
	.globl gUnknown_830FCB0
gUnknown_830FCB0: @ 0x0830FCB0
	@ analyzed canonical ROM range 0x0830FCB0-0x0830FCF7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x48
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000
	.2byte 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000
	.2byte 0x0001, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0001, 0x0000
	.2byte 0x0001, 0x0000, 0x0001, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF
	.2byte 0x0001, 0x0000, 0xFFFF, 0xFFFF
	@ pret/pokeemerald-jp direct xref for 0x0830FCF8: overworld.s: InitOverworldBgs
	.globl gOverworldData_0830FCF8
gOverworldData_0830FCF8: @ 0x0830FCF8
	@ analyzed canonical ROM range 0x0830FCF8-0x0830FD07
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x10
	.2byte 0x01F8, 0x0000, 0x11D1, 0x0000, 0x21C2, 0x0000, 0x31E3, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0830FD08: overworld.s: InitCurrentFlashLevelScanlineEffect
	.globl gOverworldData_0830FD08
gOverworldData_0830FD08: @ 0x0830FD08
	@ analyzed canonical ROM range 0x0830FD08-0x0830FD13
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0xC
	.2byte 0x0040, 0x0400, 0x0001, 0xA260, 0x0001, 0x0000
	.globl gUnknown_830FD14
gUnknown_830FD14: @ 0x0830FD14
	.4byte MovementEventModeCB_Normal
	.4byte MovementEventModeCB_Ignored
	.4byte MovementEventModeCB_Normal_2
	.globl gUnknown_830FD20
gUnknown_830FD20: @ 0x0830FD20
	.4byte FacingHandler_DoNothing
	.4byte FacingHandler_DpadMovement
	.4byte FacingHandler_DpadMovement
	.4byte FacingHandler_DpadMovement
	.4byte FacingHandler_DpadMovement
	.4byte FacingHandler_DoNothing
	.4byte FacingHandler_DoNothing
	.4byte FacingHandler_ForcedFacingChange
	.4byte FacingHandler_ForcedFacingChange
	.4byte FacingHandler_ForcedFacingChange
	.4byte FacingHandler_ForcedFacingChange
