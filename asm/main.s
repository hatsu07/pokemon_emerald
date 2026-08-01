.include "asm/macros.inc"
.include "constants/constants.inc"
.include "constants/main.inc"
.text
.syntax unified

	thumb_func_start AgbMain
AgbMain: @ 0x080003A4
	push {r4, r5, r6, r7, lr}
	mov r7, r8
	push {r7}
	movs r0, #MAIN_RESET_ALL
	bl RegisterRamReset
	movs r1, #(BG_PLTT >> 19)
	lsls r1, r1, #19
	ldr r2, _08000468
	adds r0, r2, #0
	strh r0, [r1]
	bl InitGpuRegManager
	ldr r1, _0800046C
	ldr r3, _08000470
	adds r0, r3, #0
	strh r0, [r1]
	bl InitKeys
	bl InitIntrHandlers
	bl m4aSoundInit
	bl EnableVCountIntrAtLine150
	bl InitRFU
	bl RtcInit
	bl CheckForFlashMemory
	bl InitMainCallbacks
	bl InitMapMusic
	bl ClearDma3Requests
	bl ResetBgs
	bl SetDefaultFontsPointer
	ldr r0, _08000474
	movs r1, #(MAIN_HEAP_SIZE >> 9)
	lsls r1, r1, #9
	bl InitHeap
	ldr r0, _08000478
	movs r4, #0
	strb r4, [r0]
	ldr r0, _0800047C
	ldr r0, [r0]
	cmp r0, #1
	beq .LAgbMain_AfterFlashCheck
	movs r0, #0
	bl SetMainCallback2
.LAgbMain_AfterFlashCheck:
	ldr r2, _08000480
	strb r4, [r2]
	ldr r1, _08000484
	movs r3, #(MAIN_UNUSED_VAR_INITIAL_VALUE >> 4)
	lsls r3, r3, #4
	adds r0, r3, #0
	strh r0, [r1]
	ldr r7, _08000488
	movs r0, #0
	mov r8, r0
	adds r6, r2, #0
.LAgbMain_Loop:
	bl ReadKeys
	ldr r0, _08000478
	ldrb r0, [r0]
	cmp r0, #0
	bne .LAgbMain_CheckLinkMode
	ldrh r1, [r7, #MAIN_HELD_KEYS_RAW_OFFSET]
	movs r0, #MAIN_KEY_A
	ands r0, r1
	cmp r0, #0
	beq .LAgbMain_CheckLinkMode
	movs r0, #MAIN_SOFT_RESET_OTHER_KEYS
	ands r0, r1
	cmp r0, #MAIN_SOFT_RESET_OTHER_KEYS
	bne .LAgbMain_CheckLinkMode
	bl rfu_REQ_stopMode
	bl rfu_waitREQComplete
	bl DoSoftReset
.LAgbMain_CheckLinkMode:
	bl Overworld_SendKeysToLinkIsRunning
	cmp r0, #1
	bne .LAgbMain_NormalLinkMode
	strb r0, [r6]
	bl UpdateLinkAndCallCallbacks
	movs r0, #0
	strb r0, [r6]
	b .LAgbMain_EndFrame
	.align 2, 0
_08000468: .4byte MAIN_RGB_WHITE
_0800046C: .4byte REG_WAITCNT
_08000470: .4byte MAIN_WAITCNT_CONFIG
_08000474: .4byte gHeap
_08000478: .4byte gSoftResetDisabled
_0800047C: .4byte gFlashMemoryPresent
_08000480: .4byte gLinkTransferringData
_08000484: .4byte sUnusedVar
_08000488: .4byte gMain
.LAgbMain_NormalLinkMode:
	ldr r5, _080004C0
	movs r0, #0
	strb r0, [r5]
	bl UpdateLinkAndCallCallbacks
	bl Overworld_RecvKeysFromLinkIsRunning
	adds r4, r0, #0
	cmp r4, #1
	bne .LAgbMain_EndFrame
	movs r0, #0
	strh r0, [r7, #MAIN_NEW_KEYS_OFFSET]
	bl ClearSpriteCopyRequests
	strb r4, [r5]
	bl UpdateLinkAndCallCallbacks
	mov r2, r8
	strb r2, [r5]
.LAgbMain_EndFrame:
	bl PlayTimeCounter_Update
	bl MapMusicMain
	bl WaitForVBlank
	b .LAgbMain_Loop
	.align 2, 0
_080004C0: .4byte gLinkTransferringData
	thumb_func_end AgbMain

	thumb_func_start UpdateLinkAndCallCallbacks
UpdateLinkAndCallCallbacks: @ 0x080004C4
	push {lr}
	bl HandleLinkConnection
	lsls r0, r0, #0x18
	cmp r0, #0
	bne .LUpdateLinkAndCallCallbacks_Return
	bl CallCallbacks
.LUpdateLinkAndCallCallbacks_Return:
	pop {r0}
	bx r0
	thumb_func_end UpdateLinkAndCallCallbacks

	thumb_func_start InitMainCallbacks
InitMainCallbacks: @ 0x080004D8
	push {lr}
	ldr r2, _08000500
	movs r0, #0
	str r0, [r2, #MAIN_VBLANK_COUNTER1_OFFSET]
	ldr r1, _08000504
	str r0, [r1]
	str r0, [r2, #MAIN_VBLANK_COUNTER2_OFFSET]
	str r0, [r2, #MAIN_CALLBACK1_OFFSET]
	ldr r0, _08000508
	bl SetMainCallback2
	ldr r1, _0800050C
	ldr r0, _08000510
	str r0, [r1]
	ldr r1, _08000514
	ldr r0, _08000518
	str r0, [r1]
	pop {r0}
	bx r0
	.align 2, 0
_08000500: .4byte gMain
_08000504: .4byte gTrainerHillVBlankCounter
_08000508: .4byte CB2_InitCopyrightScreenAfterBootup + 1
_0800050C: .4byte gSaveBlock2Ptr
_08000510: .4byte gSaveblock2
_08000514: .4byte gPokemonStoragePtr
_08000518: .4byte gPokemonStorage
	thumb_func_end InitMainCallbacks

	thumb_func_start CallCallbacks
CallCallbacks: @ 0x0800051C
	push {r4, lr}
	ldr r4, _0800053C
	ldr r0, [r4, #MAIN_CALLBACK1_OFFSET]
	cmp r0, #0
	beq .LCallCallbacks_CheckCallback2
	bl _call_via_r0
.LCallCallbacks_CheckCallback2:
	ldr r0, [r4, #MAIN_CALLBACK2_OFFSET]
	cmp r0, #0
	beq .LCallCallbacks_Return
	bl _call_via_r0
.LCallCallbacks_Return:
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800053C: .4byte gMain
	thumb_func_end CallCallbacks

	thumb_func_start SetMainCallback2
SetMainCallback2: @ 0x08000540
	ldr r1, _08000550
	str r0, [r1, #MAIN_CALLBACK2_OFFSET]
	movs r0, #(MAIN_STATE_OFFSET >> 3)
	lsls r0, r0, #3
	adds r1, r1, r0
	movs r0, #0
	strb r0, [r1]
	bx lr
	.align 2, 0
_08000550: .4byte gMain
	thumb_func_end SetMainCallback2

	thumb_func_start StartTimer1
StartTimer1: @ 0x08000554
	ldr r1, _0800055C
	movs r0, #MAIN_TIMER_ENABLE
	strh r0, [r1]
	bx lr
	.align 2, 0
_0800055C: .4byte REG_TM1CNT_H
	thumb_func_end StartTimer1

	thumb_func_start SeedRngAndSetTrainerId
SeedRngAndSetTrainerId: @ 0x08000560
	push {r4, lr}
	ldr r0, _0800057C
	ldrh r4, [r0]
	adds r0, r4, #0
	bl SeedRng
	ldr r1, _08000580
	movs r0, #0
	strh r0, [r1]
	ldr r0, _08000584
	strh r4, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800057C: .4byte REG_TM1CNT_L
_08000580: .4byte REG_TM1CNT_H
_08000584: .4byte sTrainerId
	thumb_func_end SeedRngAndSetTrainerId

	thumb_func_start GetGeneratedTrainerIdLower
GetGeneratedTrainerIdLower: @ 0x08000588
	ldr r0, _08000590
	ldrh r0, [r0]
	bx lr
	.align 2, 0
_08000590: .4byte sTrainerId
	thumb_func_end GetGeneratedTrainerIdLower

	thumb_func_start EnableVCountIntrAtLine150
EnableVCountIntrAtLine150: @ 0x08000594
	push {lr}
	movs r0, #OFFSET_REG_DISPSTAT
	bl GetGpuReg
	movs r1, #0xff
	ands r1, r0
	movs r2, #MAIN_VCOUNT_LINE
	lsls r2, r2, #8
	adds r0, r2, #0
	orrs r1, r0
	movs r0, #MAIN_DISPSTAT_VCOUNT_INTR
	orrs r1, r0
	movs r0, #OFFSET_REG_DISPSTAT
	bl SetGpuReg
	movs r0, #INTR_FLAG_VCOUNT
	bl EnableInterrupts
	pop {r0}
	bx r0
	thumb_func_end EnableVCountIntrAtLine150

	thumb_func_start InitKeys
InitKeys: @ 0x080005BC
	ldr r1, _080005D8
	movs r0, #MAIN_KEY_REPEAT_CONTINUE_DELAY
	strh r0, [r1]
	ldr r1, _080005DC
	movs r0, #MAIN_KEY_REPEAT_START_DELAY
	strh r0, [r1]
	ldr r1, _080005E0
	movs r0, #0
	strh r0, [r1, #MAIN_HELD_KEYS_OFFSET]
	strh r0, [r1, #MAIN_NEW_KEYS_OFFSET]
	strh r0, [r1, #MAIN_NEW_AND_REPEATED_KEYS_OFFSET]
	strh r0, [r1, #MAIN_HELD_KEYS_RAW_OFFSET]
	strh r0, [r1, #MAIN_NEW_KEYS_RAW_OFFSET]
	bx lr
	.align 2, 0
_080005D8: .4byte gKeyRepeatContinueDelay
_080005DC: .4byte gKeyRepeatStartDelay
_080005E0: .4byte gMain
	thumb_func_end InitKeys

	thumb_func_start ReadKeys
ReadKeys: @ 0x080005E4
	push {lr}
	ldr r0, _08000620
	ldrh r1, [r0]
	ldr r2, _08000624
	adds r0, r2, #0
	adds r3, r0, #0
	eors r3, r1
	ldr r1, _08000628
	ldrh r2, [r1, #MAIN_HELD_KEYS_RAW_OFFSET]
	adds r0, r3, #0
	bics r0, r2
	strh r0, [r1, #MAIN_NEW_KEYS_RAW_OFFSET]
	strh r0, [r1, #MAIN_NEW_KEYS_OFFSET]
	strh r0, [r1, #MAIN_NEW_AND_REPEATED_KEYS_OFFSET]
	adds r2, r1, #0
	cmp r3, #0
	beq .LReadKeys_ResetRepeatCounter
	ldrh r0, [r2, #MAIN_HELD_KEYS_OFFSET]
	cmp r0, r3
	bne .LReadKeys_ResetRepeatCounter
	ldrh r0, [r2, #MAIN_KEY_REPEAT_COUNTER_OFFSET]
	subs r0, #1
	strh r0, [r2, #MAIN_KEY_REPEAT_COUNTER_OFFSET]
	lsls r0, r0, #0x10
	cmp r0, #0
	bne .LReadKeys_UpdateHeldKeys
	strh r3, [r2, #MAIN_NEW_AND_REPEATED_KEYS_OFFSET]
	ldr r0, _0800062C
	b .LReadKeys_StoreRepeatCounter
	.align 2, 0
_08000620: .4byte REG_KEYINPUT
_08000624: .4byte MAIN_KEYS_MASK
_08000628: .4byte gMain
_0800062C: .4byte gKeyRepeatContinueDelay
.LReadKeys_ResetRepeatCounter:
	ldr r0, _0800067C
.LReadKeys_StoreRepeatCounter:
	ldrh r0, [r0]
	strh r0, [r2, #MAIN_KEY_REPEAT_COUNTER_OFFSET]
.LReadKeys_UpdateHeldKeys:
	strh r3, [r2, #MAIN_HELD_KEYS_RAW_OFFSET]
	strh r3, [r2, #MAIN_HELD_KEYS_OFFSET]
	ldr r0, _08000680
	ldr r0, [r0]
	ldrb r0, [r0, #MAIN_SAVE_BLOCK2_BUTTON_MODE_OFFSET]
	cmp r0, #MAIN_BUTTON_MODE_L_EQUALS_A
	bne .LReadKeys_CheckWatchedKeys
	ldrh r1, [r2, #MAIN_NEW_KEYS_OFFSET]
	movs r3, #(MAIN_KEY_L >> 2)
	lsls r3, r3, #2
	adds r0, r3, #0
	ands r0, r1
	cmp r0, #0
	beq .LReadKeys_CheckHeldLButton
	movs r0, #1
	orrs r0, r1
	strh r0, [r2, #MAIN_NEW_KEYS_OFFSET]
.LReadKeys_CheckHeldLButton:
	ldrh r1, [r2, #MAIN_HELD_KEYS_OFFSET]
	adds r0, r3, #0
	ands r0, r1
	cmp r0, #0
	beq .LReadKeys_CheckWatchedKeys
	movs r0, #1
	orrs r0, r1
	strh r0, [r2, #MAIN_HELD_KEYS_OFFSET]
.LReadKeys_CheckWatchedKeys:
	ldrh r1, [r2, #MAIN_NEW_KEYS_OFFSET]
	ldrh r0, [r2, #MAIN_WATCHED_KEYS_MASK_OFFSET]
	ands r0, r1
	cmp r0, #0
	beq .LReadKeys_Return
	movs r0, #1
	strh r0, [r2, #MAIN_WATCHED_KEYS_PRESSED_OFFSET]
.LReadKeys_Return:
	pop {r0}
	bx r0
	.align 2, 0
_0800067C: .4byte gKeyRepeatStartDelay
_08000680: .4byte gSaveBlock2Ptr
	thumb_func_end ReadKeys

	thumb_func_start InitIntrHandlers
InitIntrHandlers: @ 0x08000684
	push {r4, r5, lr}
	ldr r5, _080006D0
	ldr r4, _080006D4
	ldr r3, _080006D8
	ldr r2, _080006DC
	movs r1, #(MAIN_INTR_TABLE_COUNT - 1)
.LInitIntrHandlers_CopyTableLoop:
	ldm r3!, {r0}
	stm r2!, {r0}
	subs r1, #1
	cmp r1, #0
	bge .LInitIntrHandlers_CopyTableLoop
	ldr r0, _080006E0
	str r5, [r0]
	str r4, [r0, #4]
	ldr r1, _080006E4
	str r1, [r0, #MAIN_INTR_TABLE_TIMER3_OFFSET]
	ldr r0, [r0, #8]
	ldr r0, _080006E8
	str r4, [r0]
	movs r0, #0
	bl SetVBlankCallback
	movs r0, #0
	bl SetHBlankCallback
	movs r0, #0
	bl SetSerialCallback
	ldr r1, _080006EC
	movs r0, #1
	strh r0, [r1]
	movs r0, #INTR_FLAG_VBLANK
	bl EnableInterrupts
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
_080006D0: .4byte IntrMain
_080006D4: .4byte IntrMain_Buffer
_080006D8: .4byte gIntrTableTemplate
_080006DC: .4byte gIntrTable
_080006E0: .4byte REG_DMA3SAD
_080006E4: .4byte MAIN_INTR_DMA_CONTROL
_080006E8: .4byte INTR_VECTOR
_080006EC: .4byte REG_IME
	thumb_func_end InitIntrHandlers

	thumb_func_start SetVBlankCallback
SetVBlankCallback: @ 0x080006F0
	ldr r1, _080006F8
	str r0, [r1, #MAIN_VBLANK_CALLBACK_OFFSET]
	bx lr
	.align 2, 0
_080006F8: .4byte gMain
	thumb_func_end SetVBlankCallback

	thumb_func_start SetHBlankCallback
SetHBlankCallback: @ 0x080006FC
	ldr r1, _08000704
	str r0, [r1, #MAIN_HBLANK_CALLBACK_OFFSET]
	bx lr
	.align 2, 0
_08000704: .4byte gMain
	thumb_func_end SetHBlankCallback

	thumb_func_start SetVCountCallback
SetVCountCallback: @ 0x08000708
	ldr r1, _08000710
	str r0, [r1, #MAIN_VCOUNT_CALLBACK_OFFSET]
	bx lr
	.align 2, 0
_08000710: .4byte gMain
	thumb_func_end SetVCountCallback

	thumb_func_start RestoreSerialTimer3IntrHandlers
RestoreSerialTimer3IntrHandlers: @ 0x08000714
	ldr r0, _08000720
	ldr r1, _08000724
	str r1, [r0, #MAIN_INTR_TABLE_SERIAL_OFFSET]
	ldr r1, _08000728
	str r1, [r0, #MAIN_INTR_TABLE_TIMER3_OFFSET]
	bx lr
	.align 2, 0
_08000720: .4byte gIntrTable
_08000724: .4byte SerialIntr + 1
_08000728: .4byte Timer3Intr + 1
	thumb_func_end RestoreSerialTimer3IntrHandlers

	thumb_func_start SetSerialCallback
SetSerialCallback: @ 0x0800072C
	ldr r1, _08000734
	str r0, [r1, #MAIN_SERIAL_CALLBACK_OFFSET]
	bx lr
	.align 2, 0
_08000734: .4byte gMain
	thumb_func_end SetSerialCallback

	thumb_func_start VBlankIntr
VBlankIntr: @ 0x08000738
	push {r4, lr}
	ldr r0, _08000748
	ldrb r0, [r0]
	cmp r0, #0
	beq .LVBlankIntr_CheckLinkVSync
	bl RfuVSync
	b .LVBlankIntr_UpdateCounters
	.align 2, 0
_08000748: .4byte gWirelessCommType
.LVBlankIntr_CheckLinkVSync:
	ldr r0, _080007DC
	ldrb r0, [r0]
	cmp r0, #0
	bne .LVBlankIntr_UpdateCounters
	bl LinkVSync
.LVBlankIntr_UpdateCounters:
	ldr r0, _080007E0
	ldr r1, [r0, #MAIN_VBLANK_COUNTER1_OFFSET]
	adds r1, #1
	str r1, [r0, #MAIN_VBLANK_COUNTER1_OFFSET]
	ldr r1, _080007E4
	ldr r1, [r1]
	adds r4, r0, #0
	cmp r1, #0
	beq .LVBlankIntr_CallCallback
	ldr r2, [r1]
	movs r0, #2
	rsbs r0, r0, #0
	cmp r2, r0
	bhi .LVBlankIntr_CallCallback
	adds r0, r2, #1
	str r0, [r1]
.LVBlankIntr_CallCallback:
	ldr r0, [r4, #MAIN_VBLANK_CALLBACK_OFFSET]
	cmp r0, #0
	beq .LVBlankIntr_AfterCallback
	bl _call_via_r0
.LVBlankIntr_AfterCallback:
	ldr r0, [r4, #MAIN_VBLANK_COUNTER2_OFFSET]
	adds r0, #1
	str r0, [r4, #MAIN_VBLANK_COUNTER2_OFFSET]
	bl CopyBufferedValuesToGpuRegs
	bl ProcessDma3Requests
	ldr r1, _080007E8
	ldr r0, _080007EC
	ldrb r0, [r0, #MAIN_SOUND_INFO_PCM_DMA_COUNTER_OFFSET]
	strb r0, [r1]
	bl m4aSoundMain
	bl TryReceiveLinkBattleData
	ldr r1, _080007F0
	adds r0, r4, r1
	ldrb r1, [r0]
	movs r0, #MAIN_FLAG_IN_BATTLE
	ands r0, r1
	cmp r0, #0
	beq .LVBlankIntr_AdvanceRng
	ldr r0, _080007F4
	ldr r0, [r0]
	ldr r1, _080007F8
	ands r0, r1
	cmp r0, #0
	bne .LVBlankIntr_UpdateWirelessIndicator
.LVBlankIntr_AdvanceRng:
	bl Random
.LVBlankIntr_UpdateWirelessIndicator:
	bl UpdateWirelessStatusIndicatorSprite
	ldr r2, _080007FC
	ldrh r0, [r2]
	movs r1, #INTR_FLAG_VBLANK
	orrs r0, r1
	strh r0, [r2]
	ldr r0, _080007E0
	ldrh r2, [r0, #MAIN_INTR_CHECK_OFFSET]
	ldrh r3, [r0, #MAIN_INTR_CHECK_OFFSET]
	orrs r1, r2
	strh r1, [r0, #MAIN_INTR_CHECK_OFFSET]
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_080007DC: .4byte gLinkVSyncDisabled
_080007E0: .4byte gMain
_080007E4: .4byte gTrainerHillVBlankCounter
_080007E8: .4byte gPcmDmaCounter
_080007EC: .4byte gSoundInfo
_080007F0: .4byte MAIN_FLAGS_OFFSET
_080007F4: .4byte gBattleTypeFlags
_080007F8: .4byte MAIN_BATTLE_TYPE_RNG_SYNC_MASK
_080007FC: .4byte INTR_CHECK
	thumb_func_end VBlankIntr

	thumb_func_start InitFlashTimer
InitFlashTimer: @ 0x08000800
	push {lr}
	ldr r1, _08000810
	movs r0, #2
	bl SetFlashTimerIntr
	pop {r0}
	bx r0
	.align 2, 0
_08000810: .4byte gIntrTable + MAIN_INTR_TABLE_TIMER2_OFFSET
	thumb_func_end InitFlashTimer

	thumb_func_start HBlankIntr
HBlankIntr: @ 0x08000814
	push {r4, lr}
	ldr r4, _0800083C
	ldr r0, [r4, #MAIN_HBLANK_CALLBACK_OFFSET]
	cmp r0, #0
	beq .LHBlankIntr_SetFlags
	bl _call_via_r0
.LHBlankIntr_SetFlags:
	ldr r2, _08000840
	ldrh r0, [r2]
	movs r1, #INTR_FLAG_HBLANK
	orrs r0, r1
	strh r0, [r2]
	ldrh r0, [r4, #MAIN_INTR_CHECK_OFFSET]
	ldrh r2, [r4, #MAIN_INTR_CHECK_OFFSET]
	orrs r1, r0
	strh r1, [r4, #MAIN_INTR_CHECK_OFFSET]
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800083C: .4byte gMain
_08000840: .4byte INTR_CHECK
	thumb_func_end HBlankIntr

	thumb_func_start VCountIntr
VCountIntr: @ 0x08000844
	push {r4, lr}
	ldr r4, _08000870
	ldr r0, [r4, #MAIN_VCOUNT_CALLBACK_OFFSET]
	cmp r0, #0
	beq .LVCountIntr_SoundVSync
	bl _call_via_r0
.LVCountIntr_SoundVSync:
	bl m4aSoundVSync
	ldr r2, _08000874
	ldrh r0, [r2]
	movs r1, #INTR_FLAG_VCOUNT
	orrs r0, r1
	strh r0, [r2]
	ldrh r0, [r4, #MAIN_INTR_CHECK_OFFSET]
	ldrh r2, [r4, #MAIN_INTR_CHECK_OFFSET]
	orrs r1, r0
	strh r1, [r4, #MAIN_INTR_CHECK_OFFSET]
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_08000870: .4byte gMain
_08000874: .4byte INTR_CHECK
	thumb_func_end VCountIntr

	thumb_func_start SerialIntr
SerialIntr: @ 0x08000878
	push {r4, lr}
	ldr r4, _080008A0
	ldr r0, [r4, #MAIN_SERIAL_CALLBACK_OFFSET]
	cmp r0, #0
	beq .LSerialIntr_SetFlags
	bl _call_via_r0
.LSerialIntr_SetFlags:
	ldr r2, _080008A4
	ldrh r0, [r2]
	movs r1, #INTR_FLAG_SERIAL
	orrs r0, r1
	strh r0, [r2]
	ldrh r0, [r4, #MAIN_INTR_CHECK_OFFSET]
	ldrh r2, [r4, #MAIN_INTR_CHECK_OFFSET]
	orrs r1, r0
	strh r1, [r4, #MAIN_INTR_CHECK_OFFSET]
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_080008A0: .4byte gMain
_080008A4: .4byte INTR_CHECK
	thumb_func_end SerialIntr

	thumb_func_start IntrDummy
IntrDummy: @ 0x080008A8
	bx lr
	.align 2, 0
	thumb_func_end IntrDummy

	thumb_func_start WaitForVBlank
WaitForVBlank: @ 0x080008AC
	push {lr}
	ldr r2, _080008D4
	ldrh r1, [r2, #MAIN_INTR_CHECK_OFFSET]
	ldr r0, _080008D8
	ands r0, r1
	ldrh r1, [r2, #MAIN_INTR_CHECK_OFFSET]
	strh r0, [r2, #MAIN_INTR_CHECK_OFFSET]
	ldrh r1, [r2, #MAIN_INTR_CHECK_OFFSET]
	movs r0, #INTR_FLAG_VBLANK
	ands r0, r1
	cmp r0, #0
	bne .LWaitForVBlank_Return
	movs r3, #INTR_FLAG_VBLANK
.LWaitForVBlank_Loop:
	ldrh r1, [r2, #MAIN_INTR_CHECK_OFFSET]
	adds r0, r3, #0
	ands r0, r1
	cmp r0, #0
	beq .LWaitForVBlank_Loop
.LWaitForVBlank_Return:
	pop {r0}
	bx r0
	.align 2, 0
_080008D4: .4byte gMain
_080008D8: .4byte MAIN_INTR_CHECK_CLEAR_VBLANK_MASK
	thumb_func_end WaitForVBlank

	thumb_func_start SetTrainerHillVBlankCounter
SetTrainerHillVBlankCounter: @ 0x080008DC
	ldr r1, _080008E4
	str r0, [r1]
	bx lr
	.align 2, 0
_080008E4: .4byte gTrainerHillVBlankCounter
	thumb_func_end SetTrainerHillVBlankCounter

	thumb_func_start ClearTrainerHillVBlankCounter
ClearTrainerHillVBlankCounter: @ 0x080008E8
	ldr r1, _080008F0
	movs r0, #0
	str r0, [r1]
	bx lr
	.align 2, 0
_080008F0: .4byte gTrainerHillVBlankCounter
	thumb_func_end ClearTrainerHillVBlankCounter

	thumb_func_start DoSoftReset
DoSoftReset: @ 0x080008F4
	push {r4, lr}
	ldr r1, _08000950
	movs r0, #0
	strh r0, [r1]
	bl m4aSoundVSyncOff
	bl ScanlineEffect_Stop
	ldr r1, _08000954
	ldrh r2, [r1, #0xa]
	ldr r3, _08000958
	adds r0, r3, #0
	ands r0, r2
	strh r0, [r1, #0xa]
	ldrh r4, [r1, #0xa]
	ldr r2, _0800095C
	adds r0, r2, #0
	ands r0, r4
	strh r0, [r1, #0xa]
	ldrh r0, [r1, #0xa]
	adds r1, #0xc
	ldrh r4, [r1, #0xa]
	adds r0, r3, #0
	ands r0, r4
	strh r0, [r1, #0xa]
	ldrh r4, [r1, #0xa]
	adds r0, r2, #0
	ands r0, r4
	strh r0, [r1, #0xa]
	ldrh r0, [r1, #0xa]
	ldr r0, _08000960
	ldrh r1, [r0, #0xa]
	ands r3, r1
	strh r3, [r0, #0xa]
	ldrh r1, [r0, #0xa]
	ands r2, r1
	strh r2, [r0, #0xa]
	ldrh r0, [r0, #0xa]
	bl SiiRtcProtect
	movs r0, #MAIN_RESET_ALL
	bl SoftReset
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_08000950: .4byte REG_IME
_08000954: .4byte REG_DMA1SAD
_08000958: .4byte MAIN_DMA_STOP_STAGE1_MASK
_0800095C: .4byte MAIN_DMA_STOP_STAGE2_MASK
_08000960: .4byte REG_DMA3SAD
	thumb_func_end DoSoftReset

	thumb_func_start ClearPokemonCrySongs
ClearPokemonCrySongs: @ 0x08000964
	push {lr}
	sub sp, #4
	mov r1, sp
	movs r0, #0
	strh r0, [r1]
	ldr r1, _08000980
	ldr r2, _08000984
	mov r0, sp
	bl CpuSet
	add sp, #4
	pop {r0}
	bx r0
	.align 2, 0
_08000980: .4byte gPokemonCrySongs
_08000984: .4byte MAIN_CLEAR_CRY_SONGS_CPUSET
	thumb_func_end ClearPokemonCrySongs

