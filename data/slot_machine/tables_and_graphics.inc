	@ pret/pokeemerald-jp direct xref for 0x085843A8: slot_machine.s: SlotMachineSetup_0_0
	.globl sSlotMachineBgTemplates
sSlotMachineBgTemplates: @ 0x085843A8
	@ semantic: 4 SlotMachine BG templates
	.2byte 0x01F8, 0x0000, 0x11C5, 0x0000, 0x21D6, 0x0000, 0x11E7, 0x0000
	.globl sSlotMachineWindowTemplates
sSlotMachineWindowTemplates: @ 0x085843B8
	@ semantic: SlotMachine message window templates
	.2byte 0x0400, 0x160F, 0x0F04, 0x01A8, 0x00FF, 0x0000, 0x0000, 0x0000
	.globl sSlotMachineInfoBoxWindowTemplate
sSlotMachineInfoBoxWindowTemplate: @ 0x085843C8
	@ semantic: SlotMachine InfoBox window template
	.2byte 0x0200, 0x1204, 0x0D0C, 0x0001
	.globl sSlotMachineReelTimeHelpColors
sSlotMachineReelTimeHelpColors: @ 0x085843D0
	@ semantic: ReelTime help text colors
	.byte 0x03, 0x01, 0x02, 0x00
	.globl sSlotActions
sSlotActions: @ 0x085843D4
	.4byte SlotAction_UnfadeScreen
	.4byte SlotAction_WaitForUnfade
	.4byte SlotAction_SetSlotMachineVars
	.4byte SlotAction3
	.4byte SlotAction4
	.4byte SlotAction_AwaitPlayerInput
	.4byte SlotAction_PrintYouDontHaveThreeCoins
	.4byte SlotAction_ExitMessage_9999Coins
	.4byte SlotAction_GivingInformation
	.4byte SlotAction9
	.4byte SlotAction10
	.4byte SlotAction_SetLuckySpins
	.4byte SlotAction_AwaitReelStop
	.4byte SlotAction_WaitForAllReelsToStop
	.4byte SlotAction_CheckMatches
	.4byte SlotAction_WaitForPayoutToBeAwarded
	.4byte SlotAction_EndOfRoll
	.4byte SlotAction_MatchedPower
	.4byte SlotAction18
	.4byte SlotAction_Loop
	.4byte SlotAction_NoMatches
	.4byte SlotAction_PrintQuitTheGame
	.4byte SlotAction_SeeIfPlayerQuits
	.4byte SlotAction_PrintMessage_9999Coins
	.4byte SlotAction_ExitYouDontHaveThreeCoinsMessage
	.4byte SlotAction_PrintMessage_NoMoreCoins
	.4byte SlotAction_ExitMessage_NoMoreCoins
	.4byte SlotAction_EndGame
	.4byte SlotAction_FreeDataStructures
	.globl sAwardPayoutActions
sAwardPayoutActions: @ 0x08584448
	.4byte AwardPayoutAction0
	.4byte AwardPayoutAction_GivePayoutToPlayer
	.4byte AwardPayoutAction_FreeTask
	.globl sSlotReelActions
sSlotReelActions: @ 0x08584454
	.4byte SlotReelAction_StayStill
	.4byte SlotReelAction_Spin
	.4byte SlotReelAction_DecideWhereToStop
	.4byte SlotReelAction_MoveToStop
	.4byte SlotReelAction_OscillatingStop
	.globl sDecideStop_Bias
sDecideStop_Bias: @ 0x08584468
	.4byte DecideStop_Bias_Reel1
	.4byte DecideStop_Bias_Reel2
	.4byte DecideStop_Bias_Reel3
	.globl sDecideStop_NoBias
sDecideStop_NoBias: @ 0x08584474
	.4byte DecideStop_NoBias_Reel1
	.4byte DecideStop_NoBias_Reel2
	.4byte DecideStop_NoBias_Reel3
	@ pret/pokeemerald-jp direct xref for 0x08584480: slot_machine.s: SlotReelAction_MoveToStop
	.globl sReelStopShocks
sReelStopShocks: @ 0x08584480
	@ ANALYSIS: SEMANTIC_NUMERIC_REEL_STOP_SHOCKS
	@ Five reel-stop shock magnitudes for 0..4 extra turns; the final zero u16 is alignment padding.
	@ ANALYSIS: ZERO_PADDING
	@ The final zero u16 pads the 10-byte canonical table to the next 4-byte boundary.
	@ analyzed canonical ROM range 0x08584480-0x0858448B
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0002, 0x0004, 0x0004, 0x0004, 0x0008, 0x0000
	.globl sDecideStop_Bias_Reel1_Bets
sDecideStop_Bias_Reel1_Bets: @ 0x0858448C
	.4byte DecideStop_Bias_Reel1_Bet1
	.4byte DecideStop_Bias_Reel1_Bet2or3
	.4byte DecideStop_Bias_Reel1_Bet2or3
	.globl sDecideStop_Bias_Reel2_Bets
sDecideStop_Bias_Reel2_Bets: @ 0x08584498
	.4byte DecideStop_Bias_Reel2_Bet1or2
	.4byte DecideStop_Bias_Reel2_Bet1or2
	.4byte DecideStop_Bias_Reel2_Bet3
	.globl sDecideStop_Bias_Reel3_Bets
sDecideStop_Bias_Reel3_Bets: @ 0x085844A4
	.4byte DecideStop_Bias_Reel3_Bet1or2
	.4byte DecideStop_Bias_Reel3_Bet1or2
	.4byte DecideStop_Bias_Reel3_Bet3
	.globl sDecideStop_NoBias_Reel2_Bets
sDecideStop_NoBias_Reel2_Bets: @ 0x085844B0
	.4byte DecideStop_NoBias_Reel2_Bet1
	.4byte DecideStop_NoBias_Reel2_Bet2
	.4byte DecideStop_NoBias_Reel2_Bet3
	.globl sDecideStop_NoBias_Reel3_Bets
sDecideStop_NoBias_Reel3_Bets: @ 0x085844BC
	.4byte DecideStop_NoBias_Reel3_Bet1
	.4byte DecideStop_NoBias_Reel3_Bet2
	.4byte DecideStop_NoBias_Reel3_Bet3
	.globl sReelStopButtonTasks
sReelStopButtonTasks: @ 0x085844C8
	.4byte StopReelButton_Press
	.4byte StopReelButton_Wait
	.4byte StopReelButton_Unpress
	@ pret/pokeemerald-jp direct xref for 0x085844D4: slot_machine.s: StopReelButton_Press, StopReelButton_Unpress
	.globl sReelButtonOffsets
sReelButtonOffsets: @ 0x085844D4
	@ ANALYSIS: SEMANTIC_NUMERIC_REEL_BUTTON_OFFSETS
	@ Slot-machine reel-button offset table; numeric offsets are the intended representation.
	@ analyzed canonical ROM range 0x085844D4-0x085844DB
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0005, 0x000A, 0x000F, 0x0000
	.globl sPikaPowerBoltTasks
sPikaPowerBoltTasks: @ 0x085844DC
	.4byte PikaPowerBolt_Idle
	.4byte PikaPowerBolt_AddBolt
	.4byte PikaPowerBolt_WaitAnim
	.4byte PikaPowerBolt_ClearAll
	@ pret/pokeemerald-jp direct xref for 0x085844EC: slot_machine.s: PikaPowerBolt_WaitAnim, PikaPowerBolt_ClearAll, sub_0812D3C4
	.globl sPikaPowerTileTable
sPikaPowerTileTable: @ 0x085844EC
	@ analyzed canonical ROM range 0x085844EC-0x085844ED
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0x9E, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085844EE: slot_machine.s: sub_0812D3C4
	@ analyzed canonical ROM range 0x085844EE-0x085844F7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x006E, 0x009F, 0x006F, 0x00AF, 0x007F
	.globl sReelTimeTasks
sReelTimeTasks: @ 0x085844F8
	.4byte ReelTime_Init
	.4byte ReelTime_WindowEnter
	.4byte ReelTime_WaitStartPikachu
	.4byte ReelTime_PikachuSpeedUp1
	.4byte ReelTime_PikachuSpeedUp2
	.4byte ReelTime_WaitReel
	.4byte ReelTime_CheckExplode
	.4byte ReelTime_LandOnOutcome
	.4byte ReelTime_PikachuReact
	.4byte ReelTime_WaitClearPikaPower
	.4byte ReelTime_CloseWindow
	.4byte ReelTime_DestroySprites
	.4byte ReelTime_SetReelSpeed
	.4byte ReelTime_EndSuccess
	.4byte ReelTime_ExplodeMachine
	.4byte ReelTime_WaitExplode
	.4byte ReelTime_WaitSmoke
	.4byte ReelTime_CloseWindow
	.4byte ReelTime_EndFailure
	@ pret/pokeemerald-jp direct xref for 0x08584544: slot_machine.s: ReelTime_PikachuSpeedUp1
	.globl sReelTimePikachuAnimIds
sReelTimePikachuAnimIds: @ 0x08584544
	@ ANALYSIS: SEMANTIC_NUMERIC_REEL_TIME_PIKACHU_ANIM_IDS
	@ Slot-machine Reel Time Pikachu animation-ID table; numeric animation IDs are the intended representation.
	@ analyzed canonical ROM range 0x08584544-0x08584547
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x01, 0x02, 0x02
	@ pret/pokeemerald-jp direct xref for 0x08584548: slot_machine.s: ReelTime_PikachuSpeedUp1
	.globl sReelTimeBoltDelays
sReelTimeBoltDelays: @ 0x08584548
	@ ANALYSIS: SEMANTIC_NUMERIC_REEL_TIME_BOLT_DELAYS
	@ Slot-machine Reel Time bolt delay table; numeric delay values are the intended representation.
	@ analyzed canonical ROM range 0x08584548-0x0858454F
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0040, 0x0030, 0x0018, 0x0008
	@ pret/pokeemerald-jp direct xref for 0x08584550: slot_machine.s: ReelTime_PikachuSpeedUp1
	.globl sPikachuAuraFlashDelays
sPikachuAuraFlashDelays: @ 0x08584550
	@ ANALYSIS: SEMANTIC_NUMERIC_PIKACHU_AURA_FLASH_DELAYS
	@ Slot-machine Pikachu aura-flash delay table; numeric delay values are the intended representation.
	@ analyzed canonical ROM range 0x08584550-0x08584557
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x000A, 0x0008, 0x0006, 0x0004
	.globl sInfoBoxTasks
sInfoBoxTasks: @ 0x08584558
	.4byte InfoBox_FadeIn
	.4byte InfoBox_WaitFade
	.4byte InfoBox_DrawWindow
	.4byte InfoBox_WaitFade
	.4byte InfoBox_AddText
	.4byte InfoBox_WaitFade
	.4byte InfoBox_WaitInput
	.4byte InfoBox_WaitFade
	.4byte InfoBox_LoadSlotMachineTilemap
	.4byte InfoBox_WaitFade
	.4byte InfoBox_CreateDigitalDisplay
	.4byte InfoBox_WaitFade
	.4byte InfoBox_LoadPikaPowerMeter
	.4byte InfoBox_WaitFade
	.4byte InfoBox_FreeTask
	.globl sDigitalDisplayTasks
sDigitalDisplayTasks: @ 0x08584594
	.4byte DigitalDisplay_Idle
	@ pret/pokeemerald-jp direct xref for 0x08584598: slot_machine.s: sub_0812EB58
	.globl sSlotMachineReelTimePikachuAuraFlashColors
sSlotMachineReelTimePikachuAuraFlashColors: @ 0x08584598
	@ semantic: Pikachu aura palette flash strengths
	.byte 0x10, 0x00
	.globl sSlotMachineReelTimeDuckAngles
sSlotMachineReelTimeDuckAngles: @ 0x0858459A
	@ semantic: initial orbit angles for 4 ReelTime confusion ducks
	.2byte 0x0000, 0x0040, 0x0080, 0x00C0
	.globl sSlotMachineDigitalDisplaySmokeTargetX
sSlotMachineDigitalDisplaySmokeTargetX: @ 0x085845A2
	@ semantic: Digital Display smoke target X offsets
	.byte 0x04, 0x00, 0xFC, 0xFF, 0x04, 0x00, 0xFC, 0xFF
	.globl sSlotMachineDigitalDisplaySmokeTargetY
sSlotMachineDigitalDisplaySmokeTargetY: @ 0x085845AA
	@ semantic: Digital Display smoke target Y offsets
	.byte 0x04, 0x00, 0x04, 0x00, 0xFC, 0xFF, 0xFC, 0xFF
	.globl sSlotMachineDigitalDisplayRegBonusLetterXOffsets
sSlotMachineDigitalDisplayRegBonusLetterXOffsets: @ 0x085845B2
	@ semantic: REG BONUS letter initial X offsets
	.2byte 0x0000, 0xFFD8, 0x0000, 0x0000, 0x0030, 0x0000, 0x0018, 0x0000
	.globl sSlotMachineDigitalDisplayRegBonusLetterYOffsets
sSlotMachineDigitalDisplayRegBonusLetterYOffsets: @ 0x085845C2
	@ semantic: REG BONUS letter initial Y offsets
	.byte 0xE0, 0xFF, 0x00, 0x00, 0xE0, 0xFF, 0xD0, 0xFF, 0x00, 0x00, 0xD0, 0xFF, 0x00, 0x00, 0xD0, 0xFF
	.globl sSlotMachineDigitalDisplayRegBonusLetterDelays
sSlotMachineDigitalDisplayRegBonusLetterDelays: @ 0x085845D2
	@ semantic: REG BONUS letter entry delays
	.2byte 0x0010, 0x000C, 0x0010, 0x0000, 0x0000, 0x0004, 0x0008, 0x0008
	.globl sSlotMachineDigitalDisplayBigBonusAngles
sSlotMachineDigitalDisplayBigBonusAngles: @ 0x085845E2
	@ semantic: BIG BONUS per-letter trig angles
	.2byte 0x00A0, 0x00C0, 0x00E0, 0x0068, 0x0050, 0x0040, 0x0030, 0x0018
	.globl sSlotMachineReelSymbols
sSlotMachineReelSymbols: @ 0x085845F2
	@ semantic: 3 reels x 21 symbols
	.byte 0x00, 0x04, 0x02, 0x06, 0x05, 0x03, 0x01, 0x03, 0x04, 0x05, 0x06, 0x02, 0x00, 0x05, 0x03, 0x06
	.byte 0x02, 0x01, 0x05, 0x03, 0x06, 0x00, 0x04, 0x06, 0x03, 0x02, 0x04, 0x06, 0x05, 0x05, 0x03, 0x01
	.byte 0x03, 0x06, 0x04, 0x02, 0x03, 0x06, 0x04, 0x03, 0x06, 0x04, 0x00, 0x05, 0x01, 0x06, 0x03, 0x02
	.byte 0x06, 0x03, 0x05, 0x02, 0x06, 0x03, 0x02, 0x05, 0x06, 0x03, 0x02, 0x05, 0x06, 0x03, 0x04
	.globl sSlotMachineReelTimeSymbols
sSlotMachineReelTimeSymbols: @ 0x08584631
	@ semantic: ReelTime reel symbol order
	.byte 0x01, 0x00, 0x05, 0x04, 0x03, 0x02, 0x00
	.globl sSlotMachineInitialReelPositions
sSlotMachineInitialReelPositions: @ 0x08584638
	@ semantic: initial reel positions [3 reels][normal/lucky]
	.2byte 0x0000, 0x0006, 0x0000, 0x000A, 0x0000, 0x0002
	.globl sSlotMachineSpecialDrawOdds
sSlotMachineSpecialDrawOdds: @ 0x08584644
	@ semantic: special-bias draw odds [machine][bet]
	.2byte 0x0101, 0x010C, 0x0E01, 0x0202, 0x020E, 0x0E02, 0x0302, 0x0310
	.2byte 0x1003
	.globl sSlotMachineBiasProbabilities_Special
sSlotMachineBiasProbabilities_Special: @ 0x08584656
	@ semantic: special bias probabilities [bias][machine]
	.2byte 0x1919, 0x281E, 0x3228, 0x1919, 0x1E1E, 0x2323, 0x1919, 0x191E
	.2byte 0x1E19
	.globl sSlotMachineBiasProbabilities_Regular
sSlotMachineBiasProbabilities_Regular: @ 0x08584668
	@ semantic: regular bias probabilities [bias][machine]
	.2byte 0x1914, 0x1419, 0x1919, 0x0F0C, 0x120F, 0x1613, 0x1919, 0x1E19
	.2byte 0x281E, 0x1919, 0x1414, 0x0F0F, 0x2828, 0x2323, 0x2828
	.globl sSlotMachineReelTimeProbabilities_NormalGame
sSlotMachineReelTimeProbabilities_NormalGame: @ 0x08584686
	@ semantic: ReelTime draw probabilities for normal games
	.byte 0xF3, 0xF3, 0xF3, 0x50, 0x50, 0x50, 0x50, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x05, 0x05, 0x05
	.byte 0x05, 0x05, 0x05, 0x05, 0x96, 0x96, 0x96, 0x96, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x64, 0x64
	.byte 0x64, 0x05, 0x04, 0x04, 0x04, 0x14, 0x14, 0x14, 0x14, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x64
	.byte 0x64, 0x64, 0x28, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03
	.byte 0x2D, 0x2D, 0x2D, 0x64, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02
	.byte 0x02, 0x05, 0x05, 0x05, 0x64, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
	.byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x06
	.globl sSlotMachineReelTimeProbabilities_LuckyGame
sSlotMachineReelTimeProbabilities_LuckyGame: @ 0x085846EC
	@ semantic: ReelTime draw probabilities for lucky games
	.2byte 0xF3F3, 0xC8F3, 0xC8C8, 0xA0C8, 0xA0A0, 0xA0A0, 0x46A0, 0x4646
	.2byte 0x0505, 0x0505, 0x1919, 0x1919, 0x0505, 0x0505, 0x0505, 0x0202
	.2byte 0x0602, 0x0404, 0x1904, 0x1919, 0x1E19, 0x1E1E, 0x1E1E, 0x281E
	.2byte 0x2828, 0x0223, 0x0202, 0x0303, 0x0303, 0x1E1E, 0x1E1E, 0x1E1E
	.2byte 0x6464, 0x3264, 0x0101, 0x0201, 0x0202, 0x1E02, 0x1E1E, 0x1E1E
	.2byte 0x281E, 0x2828, 0x0164, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101
	.2byte 0x0101, 0x0404, 0x3C04
	.globl sSlotMachineReelTimeExplodeProbability
sSlotMachineReelTimeExplodeProbability: @ 0x08584752
	@ semantic: ReelTime explosion probability by check
	.2byte 0x0080, 0x00AF, 0x00C8, 0x00E1, 0x0100
	.globl sSlotMachineReelTimeSpeedProbabilities
sSlotMachineReelTimeSpeedProbabilities: @ 0x0858475C
	@ semantic: half/quarter-speed probabilities
	.2byte 0x000A, 0x0005, 0x000A, 0x000A, 0x000A, 0x000F, 0x000A, 0x0019
	.2byte 0x000A, 0x0023
	.globl sSlotMachineQuarterSpeedProbabilityBoost
sSlotMachineQuarterSpeedProbabilityBoost: @ 0x08584770
	@ semantic: quarter-speed probability boost by ReelTime spins used
	.2byte 0x0000, 0x0005, 0x000A, 0x000F, 0x0014
	.globl sSlotMachineBiasSymbols
sSlotMachineBiasSymbols: @ 0x0858477A
	@ semantic: symbol corresponding to each bias bit
	.2byte 0x0406, 0x0203, 0x0005, 0x0000
	.globl sSlotMachineBiasesSpecial
sSlotMachineBiasesSpecial: @ 0x08584782
	@ semantic: special bias flags
	.byte 0x80, 0x00, 0x20, 0x00, 0x40, 0x00
	.globl sSlotMachineBiasesRegular
sSlotMachineBiasesRegular: @ 0x08584788
	@ semantic: regular bias flags
	.2byte 0x0010, 0x0008, 0x0004, 0x0002, 0x0001
	.globl sSlotMachineSymbolToMatch
sSlotMachineSymbolToMatch: @ 0x08584792
	@ semantic: reel symbol to match-type lookup
	.2byte 0x0807, 0x0304, 0x0500, 0x0002
	.globl sSlotMachineMatchFlags
sSlotMachineMatchFlags: @ 0x0858479A
	@ semantic: match type to bit flag
	.2byte 0x0001, 0x0002, 0x0004, 0x0008, 0x0010, 0x0020, 0x0040, 0x0080
	.2byte 0x0100
	.globl sSlotMachinePayouts
sSlotMachinePayouts: @ 0x085847AC
	@ semantic: match type to coin payout
	.2byte 0x0002, 0x0004, 0x0000, 0x0006, 0x000C, 0x0003, 0x005A, 0x012C
	.2byte 0x012C
	.globl sSlotMachineDigitalDisplaySpriteCoords
sSlotMachineDigitalDisplaySpriteCoords: @ 0x085847BE
	@ semantic: Digital Display sprite coordinates
	.2byte 0x00D0, 0x0038, 0x00B8, 0x0000, 0x00C8, 0x0008, 0x00D8, 0x0010
	.2byte 0x00E8, 0x0018, 0x00D0, 0x0048, 0x00D0, 0x0008, 0x00D0, 0x0040
	.2byte 0x00D0, 0x0038, 0x00C0, 0x0058, 0x00E0, 0x0058, 0x00C0, 0x0078
	.2byte 0x00E0, 0x0078, 0x0090, 0x0038, 0x0110, 0x0058, 0x00A8, 0x0070
	.2byte 0x00D0, 0x0054, 0x00D0, 0x0070, 0x00BC, 0x0034, 0x00D0, 0x0034
	.2byte 0x00E4, 0x0034, 0x00B8, 0x0048, 0x00C4, 0x0048, 0x00D0, 0x0048
	.2byte 0x00DC, 0x0048, 0x00E8, 0x0048, 0x00BC, 0x0034, 0x00D0, 0x0034
	.2byte 0x00E4, 0x0034, 0x00B8, 0x0048, 0x00C4, 0x0048, 0x00D0, 0x0048
	.2byte 0x00DC, 0x0048, 0x00E8, 0x0048, 0x0000, 0x0000, 0x0000
	@ Digital Display callback / scene data
	.globl sDigitalDisplay_SpriteCallbacks
sDigitalDisplay_SpriteCallbacks: @ 0x0858484C
	.4byte sub_0812F088 @ [0] DIG_DISPINFO_INSERT
	.4byte sub_0812F37C @ [1] DIG_DISPINFO_STOP_S
	.4byte sub_0812F37C @ [2] DIG_DISPINFO_STOP_T
	.4byte sub_0812F37C @ [3] DIG_DISPINFO_STOP_O
	.4byte sub_0812F37C @ [4] DIG_DISPINFO_STOP_P
	.4byte sub_0812F3C4 @ [5] DIG_DISPINFO_A_BUTTON_STOP
	.4byte sub_0812F2DC @ [6] DIG_DISPINFO_POKE_BALL_ROCKING
	.4byte sub_0812F088 @ [7] DIG_DISPINFO_WIN
	.4byte sub_0812F088 @ [8] DIG_DISPINFO_LOSE
	.4byte sub_0812F090 @ [9] DIG_DISPINFO_SMOKE_NW
	.4byte sub_0812F114 @ [10] DIG_DISPINFO_SMOKE_NE
	.4byte sub_0812F12C @ [11] DIG_DISPINFO_SMOKE_SW
	.4byte sub_0812F144 @ [12] DIG_DISPINFO_SMOKE_SE
	.4byte sub_0812F160 @ [13] DIG_DISPINFO_REEL
	.4byte sub_0812F1C8 @ [14] DIG_DISPINFO_TIME
	.4byte sub_0812F22C @ [15] DIG_DISPINFO_NUMBER
	.4byte sub_0812F088 @ [16] DIG_DISPINFO_DPAD
	.4byte sub_0812F480 @ [17] DIG_DISPINFO_POKE_BALL_SHINING
	.4byte sub_0812F524 @ [18] DIG_DISPINFO_REG_R
	.4byte sub_0812F524 @ [19] DIG_DISPINFO_REG_E
	.4byte sub_0812F524 @ [20] DIG_DISPINFO_REG_G
	.4byte sub_0812F524 @ [21] DIG_DISPINFO_REG_BONUS_B
	.4byte sub_0812F524 @ [22] DIG_DISPINFO_REG_BONUS_O
	.4byte sub_0812F524 @ [23] DIG_DISPINFO_REG_BONUS_N
	.4byte sub_0812F524 @ [24] DIG_DISPINFO_REG_BONUS_U
	.4byte sub_0812F524 @ [25] DIG_DISPINFO_REG_BONUS_S
	.4byte sub_0812F5F0 @ [26] DIG_DISPINFO_BIG_B
	.4byte sub_0812F5F0 @ [27] DIG_DISPINFO_BIG_I
	.4byte sub_0812F5F0 @ [28] DIG_DISPINFO_BIG_G
	.4byte sub_0812F5F0 @ [29] DIG_DISPINFO_BIG_BONUS_B
	.4byte sub_0812F5F0 @ [30] DIG_DISPINFO_BIG_BONUS_O
	.4byte sub_0812F5F0 @ [31] DIG_DISPINFO_BIG_BONUS_N
	.4byte sub_0812F5F0 @ [32] DIG_DISPINFO_BIG_BONUS_U
	.4byte sub_0812F5F0 @ [33] DIG_DISPINFO_BIG_BONUS_S
	.4byte sub_0812F658 @ [34] DIG_DISPINFO_A_BUTTON_START
sDigitalDisplay_InsertBet: @ 0x085848D8
	.byte 0x19, 0x22
	.2byte 0x0000 @ DIG_SPRITE_EMPTY, DIG_DISPINFO_A_BUTTON_START, spriteId=0
	.byte 0x02, 0x00
	.2byte 0x0000 @ DIG_SPRITE_INSERT, DIG_DISPINFO_INSERT, spriteId=0
	.byte 0x09, 0x10
	.2byte 0x0000 @ DIG_SPRITE_D_PAD, DIG_DISPINFO_DPAD, spriteId=0
	.byte 0xFF, 0x00
	.2byte 0x0000 @ DIG_SPRITE_DUMMY
sDigitalDisplay_StopReel: @ 0x085848E8
	.byte 0x0A, 0x01
	.2byte 0x0000 @ DIG_SPRITE_STOP_S, DIG_DISPINFO_STOP_S, spriteId=0
	.byte 0x0B, 0x02
	.2byte 0x0000 @ DIG_SPRITE_STOP_T, DIG_DISPINFO_STOP_T, spriteId=0
	.byte 0x0C, 0x03
	.2byte 0x0000 @ DIG_SPRITE_STOP_O, DIG_DISPINFO_STOP_O, spriteId=0
	.byte 0x0D, 0x04
	.2byte 0x0000 @ DIG_SPRITE_STOP_P, DIG_DISPINFO_STOP_P, spriteId=0
	.byte 0x05, 0x05
	.2byte 0x0000 @ DIG_SPRITE_A_BUTTON, DIG_DISPINFO_A_BUTTON_STOP, spriteId=0
	.byte 0x08, 0x06
	.2byte 0x0000 @ DIG_SPRITE_POKE_BALL, DIG_DISPINFO_POKE_BALL_ROCKING, spriteId=0
	.byte 0xFF, 0x00
	.2byte 0x0000 @ DIG_SPRITE_DUMMY
sDigitalDisplay_Win: @ 0x08584904
	.byte 0x03, 0x07
	.2byte 0x0000 @ DIG_SPRITE_WIN, DIG_DISPINFO_WIN, spriteId=0
	.byte 0x08, 0x11
	.2byte 0x0000 @ DIG_SPRITE_POKE_BALL, DIG_DISPINFO_POKE_BALL_SHINING, spriteId=0
	.byte 0xFF, 0x00
	.2byte 0x0000 @ DIG_SPRITE_DUMMY
sDigitalDisplay_Lose: @ 0x08584910
	.byte 0x04, 0x08
	.2byte 0x0000 @ DIG_SPRITE_LOSE, DIG_DISPINFO_LOSE, spriteId=0
	.byte 0x06, 0x09
	.2byte 0x0000 @ DIG_SPRITE_SMOKE, DIG_DISPINFO_SMOKE_NW, spriteId=0
	.byte 0x06, 0x0A
	.2byte 0x0001 @ DIG_SPRITE_SMOKE, DIG_DISPINFO_SMOKE_NE, spriteId=1
	.byte 0x06, 0x0B
	.2byte 0x0002 @ DIG_SPRITE_SMOKE, DIG_DISPINFO_SMOKE_SW, spriteId=2
	.byte 0x06, 0x0C
	.2byte 0x0003 @ DIG_SPRITE_SMOKE, DIG_DISPINFO_SMOKE_SE, spriteId=3
	.byte 0xFF, 0x00
	.2byte 0x0000 @ DIG_SPRITE_DUMMY
sDigitalDisplay_ReelTime: @ 0x08584928
	.byte 0x00, 0x0D
	.2byte 0x0000 @ DIG_SPRITE_REEL, DIG_DISPINFO_REEL, spriteId=0
	.byte 0x01, 0x0E
	.2byte 0x0000 @ DIG_SPRITE_TIME, DIG_DISPINFO_TIME, spriteId=0
	.byte 0x07, 0x0F
	.2byte 0x0000 @ DIG_SPRITE_NUMBER, DIG_DISPINFO_NUMBER, spriteId=0
	.byte 0xFF, 0x00
	.2byte 0x0000 @ DIG_SPRITE_DUMMY
sDigitalDisplay_BonusBig: @ 0x08584938
	.byte 0x13, 0x1A
	.2byte 0x0000 @ DIG_SPRITE_BIG_B, DIG_DISPINFO_BIG_B, spriteId=0
	.byte 0x14, 0x1B
	.2byte 0x0001 @ DIG_SPRITE_BIG_I, DIG_DISPINFO_BIG_I, spriteId=1
	.byte 0x15, 0x1C
	.2byte 0x0002 @ DIG_SPRITE_BIG_G, DIG_DISPINFO_BIG_G, spriteId=2
	.byte 0x0E, 0x1D
	.2byte 0x0003 @ DIG_SPRITE_BONUS_B, DIG_DISPINFO_BIG_BONUS_B, spriteId=3
	.byte 0x0F, 0x1E
	.2byte 0x0004 @ DIG_SPRITE_BONUS_O, DIG_DISPINFO_BIG_BONUS_O, spriteId=4
	.byte 0x10, 0x1F
	.2byte 0x0005 @ DIG_SPRITE_BONUS_N, DIG_DISPINFO_BIG_BONUS_N, spriteId=5
	.byte 0x11, 0x20
	.2byte 0x0006 @ DIG_SPRITE_BONUS_U, DIG_DISPINFO_BIG_BONUS_U, spriteId=6
	.byte 0x12, 0x21
	.2byte 0x0007 @ DIG_SPRITE_BONUS_S, DIG_DISPINFO_BIG_BONUS_S, spriteId=7
	.byte 0x08, 0x11
	.2byte 0x0000 @ DIG_SPRITE_POKE_BALL, DIG_DISPINFO_POKE_BALL_SHINING, spriteId=0
	.byte 0xFF, 0x00
	.2byte 0x0000 @ DIG_SPRITE_DUMMY
sDigitalDisplay_BonusRegular: @ 0x08584960
	.byte 0x16, 0x12
	.2byte 0x0000 @ DIG_SPRITE_REG_R, DIG_DISPINFO_REG_R, spriteId=0
	.byte 0x17, 0x13
	.2byte 0x0001 @ DIG_SPRITE_REG_E, DIG_DISPINFO_REG_E, spriteId=1
	.byte 0x18, 0x14
	.2byte 0x0002 @ DIG_SPRITE_REG_G, DIG_DISPINFO_REG_G, spriteId=2
	.byte 0x0E, 0x15
	.2byte 0x0003 @ DIG_SPRITE_BONUS_B, DIG_DISPINFO_REG_BONUS_B, spriteId=3
	.byte 0x0F, 0x16
	.2byte 0x0004 @ DIG_SPRITE_BONUS_O, DIG_DISPINFO_REG_BONUS_O, spriteId=4
	.byte 0x10, 0x17
	.2byte 0x0005 @ DIG_SPRITE_BONUS_N, DIG_DISPINFO_REG_BONUS_N, spriteId=5
	.byte 0x11, 0x18
	.2byte 0x0006 @ DIG_SPRITE_BONUS_U, DIG_DISPINFO_REG_BONUS_U, spriteId=6
	.byte 0x12, 0x19
	.2byte 0x0007 @ DIG_SPRITE_BONUS_S, DIG_DISPINFO_REG_BONUS_S, spriteId=7
	.byte 0x08, 0x11
	.2byte 0x0000 @ DIG_SPRITE_POKE_BALL, DIG_DISPINFO_POKE_BALL_SHINING, spriteId=0
	.byte 0xFF, 0x00
	.2byte 0x0000 @ DIG_SPRITE_DUMMY
	.globl sDigitalDisplayScenes
sDigitalDisplayScenes: @ 0x08584988
	.4byte sDigitalDisplay_InsertBet @ DIG_DISPLAY_INSERT_BET
	.4byte sDigitalDisplay_StopReel @ DIG_DISPLAY_STOP_REEL
	.4byte sDigitalDisplay_Win @ DIG_DISPLAY_WIN
	.4byte sDigitalDisplay_Lose @ DIG_DISPLAY_LOSE
	.4byte sDigitalDisplay_ReelTime @ DIG_DISPLAY_REEL_TIME
	.4byte sDigitalDisplay_BonusRegular @ DIG_DISPLAY_BONUS_REG
	.4byte sDigitalDisplay_BonusBig @ DIG_DISPLAY_BONUS_BIG
	.globl sDigitalDisplaySceneExitCallbacks
sDigitalDisplaySceneExitCallbacks: @ 0x085849A4
	.4byte sub_0812F7D0 @ DIG_DISPLAY_INSERT_BET
	.4byte sub_0812F794 @ DIG_DISPLAY_STOP_REEL
	.4byte sub_0812F7A4 @ DIG_DISPLAY_WIN
	.4byte sub_0812F790 @ DIG_DISPLAY_LOSE
	.4byte sub_0812F790 @ DIG_DISPLAY_REEL_TIME
	.4byte sub_0812F7A4 @ DIG_DISPLAY_BONUS_REG
	.4byte sub_0812F7A4 @ DIG_DISPLAY_BONUS_BIG

	@ Sprite OAM descriptors
sOam_8x8: @ 0x085849C0
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
sOam_8x16: @ 0x085849C8
	.byte 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
sOam_16x16: @ 0x085849D0
	.byte 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00
sOam_16x32: @ 0x085849D8
	.byte 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00
sOam_32x32: @ 0x085849E0
	.byte 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00
sOam_32x64: @ 0x085849E8
	.byte 0x00, 0x80, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00
sOam_64x32: @ 0x085849F0
	.byte 0x00, 0x40, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00
sOam_64x64: @ 0x085849F8
	.byte 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00

	@ Static SpriteFrameImage tables
sImageTable_ReelTimeNumbers: @ 0x08584A00
	.4byte gSlotMachineNumber9Tiles + 0x100
	.4byte 0x00000080 @ image[0] size
	.4byte gSlotMachineNumber9Tiles + 0x180
	.4byte 0x00000080 @ image[1] size
	.4byte gSlotMachineNumber9Tiles + 0x200
	.4byte 0x00000080 @ image[2] size
	.4byte gSlotMachineNumber9Tiles + 0x280
	.4byte 0x00000080 @ image[3] size
	.4byte gSlotMachineNumber9Tiles + 0x300
	.4byte 0x00000080 @ image[4] size
	.4byte gSlotMachineNumber9Tiles + 0x380
	.4byte 0x00000080 @ image[5] size
sImageTable_ReelTimeShadow: @ 0x08584A30
	.4byte gSlotMachineNumber9Tiles + 0xA00
	.4byte 0x00000200 @ image[0] size
sImageTable_ReelTimeNumberGap: @ 0x08584A38
	.4byte gSlotMachineReelBackground_Tilemap + 0x20
	.4byte 0x00000040 @ image[0] size
sImageTable_ReelTimeBolt: @ 0x08584A40
	.4byte gSlotMachineNumber9Tiles + 0x400
	.4byte 0x00000100 @ image[0] size
	.4byte gSlotMachineNumber9Tiles + 0x500
	.4byte 0x00000100 @ image[1] size
sImageTable_ReelTimePikachuAura: @ 0x08584A50
	.4byte gSlotMachineNumber9Tiles + 0xC00
	.4byte 0x00000400 @ image[0] size
sImageTable_ReelTimeExplosion: @ 0x08584A58
	.4byte gSlotMachineNumber9Tiles + 0x600
	.4byte 0x00000200 @ image[0] size
	.4byte gSlotMachineNumber9Tiles + 0x800
	.4byte 0x00000200 @ image[1] size
sImageTable_ReelTimeDuck: @ 0x08584A68
	.4byte gSlotMachineNumber9Tiles + 0x60
	.4byte 0x00000020 @ image[0] size
sImageTable_ReelTimeSmoke: @ 0x08584A70
	.4byte gSlotMachineNumber9Tiles + 0x80
	.4byte 0x00000080 @ image[0] size
sImageTable_PikaPowerBolt: @ 0x08584A78
	.4byte gSlotMachineNumber9Tiles + 0x40
	.4byte 0x00000020 @ image[0] size

	@ Sprite animation command arrays
sAnim_SingleFrame: @ 0x08584A80
	.byte 0x00, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_ReelTimeDuck: @ 0x08584A88
	.byte 0x00, 0x00, 0x01, 0x00, 0xFE, 0xFF, 0x00, 0x00
sAnim_ReelTimePikachu_Still: @ 0x08584A90
	.byte 0x00, 0x00, 0x10, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_ReelTimePikachu_ChargingSlow: @ 0x08584A98
	.byte 0x01, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0xFE, 0xFF, 0x00, 0x00
sAnim_ReelTimePikachu_ChargingMedium: @ 0x08584AA4
	.byte 0x01, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0xFE, 0xFF, 0x00, 0x00
sAnim_ReelTimePikachu_ChargingFast: @ 0x08584AB0
	.byte 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0xFE, 0xFF, 0x00, 0x00
sAnim_ReelTimePikachu_Cheering: @ 0x08584ABC
	.byte 0x02, 0x00, 0x20, 0x00, 0x03, 0x00, 0x20, 0x00, 0xFE, 0xFF, 0x00, 0x00
sAnim_ReelTimePikachu_FellOver: @ 0x08584AC8
	.byte 0x04, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_ReelTimeNumber_0: @ 0x08584AD0
	.byte 0x00, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_ReelTimeNumber_1: @ 0x08584AD8
	.byte 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_ReelTimeNumber_2: @ 0x08584AE0
	.byte 0x02, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_ReelTimeNumber_3: @ 0x08584AE8
	.byte 0x03, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_ReelTimeNumber_4: @ 0x08584AF0
	.byte 0x04, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_ReelTimeNumber_5: @ 0x08584AF8
	.byte 0x05, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_ReelTimeBolt: @ 0x08584B00
	.byte 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0xFE, 0xFF, 0x00, 0x00
sAnim_ReelTimeExplosion: @ 0x08584B0C
	.byte 0x00, 0x00, 0x10, 0x00, 0x01, 0x00, 0x10, 0x00, 0xFE, 0xFF, 0x00, 0x00
sAnim_DigitalDisplay_AButton_Flashing: @ 0x08584B18
	.byte 0x00, 0x00, 0x1E, 0x00, 0x01, 0x00, 0x1E, 0x00, 0xFE, 0xFF, 0x00, 0x00
sAnim_DigitalDisplay_AButton_Static: @ 0x08584B24
	.byte 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_DigitalDisplay_DPad_Flashing: @ 0x08584B2C
	.byte 0x00, 0x00, 0x1E, 0x00, 0x01, 0x00, 0x1E, 0x00, 0xFE, 0xFF, 0x00, 0x00
sAnim_DigitalDisplay_Pokeball_Rocking: @ 0x08584B38
	.byte 0x00, 0x00, 0x10, 0x00, 0x01, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00, 0x50, 0x00
	.byte 0xFE, 0xFF, 0x00, 0x00
sAnim_DigitalDisplay_Pokeball_Static: @ 0x08584B4C
	.byte 0x00, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_DigitalDisplay_Number_1: @ 0x08584B54
	.byte 0x00, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_DigitalDisplay_Number_2: @ 0x08584B5C
	.byte 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_DigitalDisplay_Number_3: @ 0x08584B64
	.byte 0x02, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_DigitalDisplay_Number_4: @ 0x08584B6C
	.byte 0x03, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
sAnim_DigitalDisplay_Number_5: @ 0x08584B74
	.byte 0x04, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00

	@ Sprite animation pointer tables
sAnims_SingleFrame: @ 0x08584B7C
	.4byte sAnim_SingleFrame
sAnims_ReelTimeDuck: @ 0x08584B80
	.4byte sAnim_ReelTimeDuck
sAnims_ReelTimePikachu: @ 0x08584B84
	.4byte sAnim_ReelTimePikachu_Still
	.4byte sAnim_ReelTimePikachu_ChargingSlow
	.4byte sAnim_ReelTimePikachu_ChargingMedium
	.4byte sAnim_ReelTimePikachu_ChargingFast
	.4byte sAnim_ReelTimePikachu_Cheering
	.4byte sAnim_ReelTimePikachu_FellOver
sAnims_ReelTimeNumbers: @ 0x08584B9C
	.4byte sAnim_ReelTimeNumber_0
	.4byte sAnim_ReelTimeNumber_1
	.4byte sAnim_ReelTimeNumber_2
	.4byte sAnim_ReelTimeNumber_3
	.4byte sAnim_ReelTimeNumber_4
	.4byte sAnim_ReelTimeNumber_5
sAnims_ReelTimeBolt: @ 0x08584BB4
	.4byte sAnim_ReelTimeBolt
sAnims_ReelTimeExplosion: @ 0x08584BB8
	.4byte sAnim_ReelTimeExplosion
sAnims_DigitalDisplay_AButton: @ 0x08584BBC
	.4byte sAnim_DigitalDisplay_AButton_Flashing
	.4byte sAnim_DigitalDisplay_AButton_Static
sAnims_DigitalDisplay_DPad: @ 0x08584BC4
	.4byte sAnim_DigitalDisplay_DPad_Flashing
sAnims_DigitalDisplay_Pokeball: @ 0x08584BC8
	.4byte sAnim_DigitalDisplay_Pokeball_Rocking
	.4byte sAnim_DigitalDisplay_Pokeball_Static
sAnims_DigitalDisplay_Number: @ 0x08584BD0
	.4byte sAnim_DigitalDisplay_Number_1
	.4byte sAnim_DigitalDisplay_Number_2
	.4byte sAnim_DigitalDisplay_Number_3
	.4byte sAnim_DigitalDisplay_Number_4
	.4byte sAnim_DigitalDisplay_Number_5

	@ Affine animation data
sAffineAnim_ReelTimeSmoke: @ 0x08584BE4
	.byte 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFD, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0xFD, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
sAffineAnims_ReelTimeSmoke: @ 0x08584C0C
	.4byte sAffineAnim_ReelTimeSmoke
sAffineAnim_PikaPowerBolt: @ 0x08584C10
	.byte 0x00, 0x00, 0x00, 0x00, 0x08, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x02, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xF4, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x02, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x0C, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x0C, 0x02, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
sAffineAnims_PikaPowerBolt: @ 0x08584C60
	.4byte sAffineAnim_PikaPowerBolt

	.globl sSpriteTemplate_ReelSymbol
sSpriteTemplate_ReelSymbol: @ 0x08584C64
	rodata_sprite_template 0x0000, 0x0000, 0x085849E0, 0x08584B7C, 0, gDummySpriteAffineAnimTable, sub_0812E164
	@ pret/pokeemerald-jp direct xref for 0x08584C7C: slot_machine.s: sub_0812E240
	@ analyzed canonical ROM range 0x08584C7C-0x08584C93
	.globl sSpriteTemplate_CoinNumber
sSpriteTemplate_CoinNumber: @ 0x08584C7C
	rodata_sprite_template 0x0007, 0x0004, 0x085849C8, 0x08584B7C, 0, gDummySpriteAffineAnimTable, sub_0812E2B8
	@ pret/pokeemerald-jp direct xref for 0x08584C94: slot_machine.s: sub_0812E310
	@ analyzed canonical ROM range 0x08584C94-0x08584CAB
	.globl sSpriteTemplate_ReelBackground
sSpriteTemplate_ReelBackground: @ 0x08584C94
	rodata_sprite_template 0x0011, 0x0000, 0x085849F8, 0x08584B7C, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x08584CAC: slot_machine.s: sub_0812E34C
	@ analyzed canonical ROM range 0x08584CAC-0x08584CC3
	.globl sSpriteTemplate_ReelTimePikachu
sSpriteTemplate_ReelTimePikachu: @ 0x08584CAC
	rodata_sprite_template 0xFFFF, 0x0001, 0x085849F8, 0x08584B84, 0, gDummySpriteAffineAnimTable, sub_0812E434
	@ pret/pokeemerald-jp direct xref for 0x08584CC4: slot_machine.s: sub_0812E484
	@ analyzed canonical ROM range 0x08584CC4-0x08584CDB
	.globl sSpriteTemplate_ReelTimeMachineAntennae
sSpriteTemplate_ReelTimeMachineAntennae: @ 0x08584CC4
	rodata_sprite_template 0xFFFF, 0x0002, 0x085849C8, 0x08584B7C, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x08584CDC: slot_machine.s: sub_0812E484
	@ analyzed canonical ROM range 0x08584CDC-0x08584CF3
	.globl sSpriteTemplate_ReelTimeMachine
sSpriteTemplate_ReelTimeMachine: @ 0x08584CDC
	rodata_sprite_template 0xFFFF, 0x0003, 0x085849C8, 0x08584B7C, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x08584CF4: slot_machine.s: sub_0812E5B8
	@ analyzed canonical ROM range 0x08584CF4-0x08584D0B
	.globl sSpriteTemplate_BrokenReelTimeMachine
sSpriteTemplate_BrokenReelTimeMachine: @ 0x08584CF4
	rodata_sprite_template 0xFFFF, 0x0003, 0x085849C8, 0x08584B7C, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x08584D0C: slot_machine.s: sub_0812E660
	@ analyzed canonical ROM range 0x08584D0C-0x08584D23
	.globl sSpriteTemplate_ReelTimeNumbers
sSpriteTemplate_ReelTimeNumbers: @ 0x08584D0C
	rodata_sprite_template 0xFFFF, 0x0004, 0x085849D0, 0x08584B9C, 0x08584A00, gDummySpriteAffineAnimTable, sub_0812E6D4
	@ pret/pokeemerald-jp direct xref for 0x08584D24: slot_machine.s: sub_0812E71C
	@ analyzed canonical ROM range 0x08584D24-0x08584D3B
	.globl sSpriteTemplate_ReelTimeShadow
sSpriteTemplate_ReelTimeShadow: @ 0x08584D24
	rodata_sprite_template 0xFFFF, 0x0004, 0x085849D0, 0x08584B7C, 0x08584A30, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x08584D3C: slot_machine.s: sub_0812E7DC
	@ analyzed canonical ROM range 0x08584D3C-0x08584D53
	.globl sSpriteTemplate_ReelTimeNumberGap
sSpriteTemplate_ReelTimeNumberGap: @ 0x08584D3C
	rodata_sprite_template 0xFFFF, 0x0004, 0x085849D0, 0x08584B7C, 0x08584A38, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x08584D54: slot_machine.s: CreateReelTimeSprites1
	@ analyzed canonical ROM range 0x08584D54-0x08584D6B
	.globl sSpriteTemplate_ReelTimeBolt
sSpriteTemplate_ReelTimeBolt: @ 0x08584D54
	rodata_sprite_template 0xFFFF, 0x0004, 0x085849D8, 0x08584BB4, 0x08584A40, gDummySpriteAffineAnimTable, sub_0812E9F8
	@ pret/pokeemerald-jp direct xref for 0x08584D6C: slot_machine.s: CreateReelTimeSprite2
	@ analyzed canonical ROM range 0x08584D6C-0x08584D83
	.globl sSpriteTemplate_ReelTimePikachuAura
sSpriteTemplate_ReelTimePikachuAura: @ 0x08584D6C
	rodata_sprite_template 0xFFFF, 0x0007, 0x085849E8, 0x08584B7C, 0x08584A50, gDummySpriteAffineAnimTable, sub_0812EB58
	@ pret/pokeemerald-jp direct xref for 0x08584D84: slot_machine.s: sub_0812EC30
	@ analyzed canonical ROM range 0x08584D84-0x08584D9B
	.globl sSpriteTemplate_ReelTimeExplosion
sSpriteTemplate_ReelTimeExplosion: @ 0x08584D84
	rodata_sprite_template 0xFFFF, 0x0005, 0x085849E0, 0x08584BB8, 0x08584A58, gDummySpriteAffineAnimTable, sub_0812EC74
	@ pret/pokeemerald-jp direct xref for 0x08584D9C: slot_machine.s: sub_0812ECA4
	@ analyzed canonical ROM range 0x08584D9C-0x08584DB3
	.globl sSpriteTemplate_ReelTimeDuck
sSpriteTemplate_ReelTimeDuck: @ 0x08584D9C
	rodata_sprite_template 0xFFFF, 0x0004, 0x085849C0, 0x08584B80, 0x08584A68, gDummySpriteAffineAnimTable, sub_0812ED30
	@ pret/pokeemerald-jp direct xref for 0x08584DB4: slot_machine.s: sub_0812EDD0
	.globl sSpriteTemplate_ReelTimeSmoke
sSpriteTemplate_ReelTimeSmoke: @ 0x08584DB4
	rodata_sprite_template 0xFFFF, 0x0004, 0x085849D0, 0x08584B7C, 0x08584A70, 0x08584C0C, sub_0812EE24
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584DCC parent=sSpriteTemplate_DigitalDisplay_Reel offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Reel: @ 0x08584DCC
	.4byte 0x0006FFFF @ +0x18
	.4byte sOam_8x8 @ +0x1C
	.4byte sAnims_SingleFrame @ +0x20
	.4byte 0 @ +0x24
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte SpriteCallbackDummy @ +0x2C
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584DE4 parent=sSpriteTemplate_DigitalDisplay_Time offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Time: @ 0x08584DE4
	.4byte 0x0006FFFF @ +0x30
	.4byte sOam_8x8 @ +0x34
	.4byte sAnims_SingleFrame @ +0x38
	.4byte 0 @ +0x3C
	.4byte gDummySpriteAffineAnimTable @ +0x40
	.4byte SpriteCallbackDummy @ +0x44
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584DFC parent=sSpriteTemplate_DigitalDisplay_Insert offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Insert: @ 0x08584DFC
	.4byte 0x0006FFFF @ +0x48
	.4byte sOam_8x8 @ +0x4C
	.4byte sAnims_SingleFrame @ +0x50
	.4byte 0 @ +0x54
	.4byte gDummySpriteAffineAnimTable @ +0x58
	.4byte SpriteCallbackDummy @ +0x5C
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584E14 parent=sSpriteTemplate_DigitalDisplay_Stop offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Stop: @ 0x08584E14
	.4byte 0x00060012 @ +0x60
	.4byte sOam_8x8 @ +0x64
	.4byte sAnims_SingleFrame @ +0x68
	.4byte 0 @ +0x6C
	.4byte gDummySpriteAffineAnimTable @ +0x70
	.4byte SpriteCallbackDummy @ +0x74
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584E2C parent=sSpriteTemplate_DigitalDisplay_Win offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Win: @ 0x08584E2C
	.4byte 0x0006FFFF @ +0x78
	.4byte sOam_64x32 @ +0x7C
	.4byte sAnims_SingleFrame @ +0x80
	.4byte 0 @ +0x84
	.4byte gDummySpriteAffineAnimTable @ +0x88
	.4byte SpriteCallbackDummy @ +0x8C
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584E44 parent=sSpriteTemplate_DigitalDisplay_Lose offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Lose: @ 0x08584E44
	.4byte 0x0006FFFF @ +0x90
	.4byte sOam_64x32 @ +0x94
	.4byte sAnims_SingleFrame @ +0x98
	.4byte 0 @ +0x9C
	.4byte gDummySpriteAffineAnimTable @ +0xA0
	.4byte SpriteCallbackDummy @ +0xA4
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584E5C parent=sSpriteTemplate_DigitalDisplay_Bonus offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Bonus: @ 0x08584E5C
	.4byte 0x00060013 @ +0xA8
	.4byte sOam_8x8 @ +0xAC
	.4byte sAnims_SingleFrame @ +0xB0
	.4byte 0 @ +0xB4
	.4byte gDummySpriteAffineAnimTable @ +0xB8
	.4byte SpriteCallbackDummy @ +0xBC
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584E74 parent=sSpriteTemplate_DigitalDisplay_Big offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Big: @ 0x08584E74
	.4byte 0x00060014 @ +0xC0
	.4byte sOam_8x8 @ +0xC4
	.4byte sAnims_SingleFrame @ +0xC8
	.4byte 0 @ +0xCC
	.4byte gDummySpriteAffineAnimTable @ +0xD0
	.4byte SpriteCallbackDummy @ +0xD4
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584E8C parent=sSpriteTemplate_DigitalDisplay_Reg offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Reg: @ 0x08584E8C
	.4byte 0x00060015 @ +0xD8
	.4byte sOam_8x8 @ +0xDC
	.4byte sAnims_SingleFrame @ +0xE0
	.4byte 0 @ +0xE4
	.4byte gDummySpriteAffineAnimTable @ +0xE8
	.4byte SpriteCallbackDummy @ +0xEC
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584EA4 parent=sSpriteTemplate_DigitalDisplay_AButton offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_AButton: @ 0x08584EA4
	.4byte 0x0006FFFF @ +0xF0
	.4byte sOam_32x32 @ +0xF4
	.4byte sAnims_DigitalDisplay_AButton @ +0xF8
	.4byte 0 @ +0xFC
	.4byte gDummySpriteAffineAnimTable @ +0x100
	.4byte SpriteCallbackDummy @ +0x104
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584EBC parent=sSpriteTemplate_DigitalDisplay_Smoke offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Smoke: @ 0x08584EBC
	.4byte 0x0006FFFF @ +0x108
	.4byte sOam_8x8 @ +0x10C
	.4byte sAnims_SingleFrame @ +0x110
	.4byte 0 @ +0x114
	.4byte gDummySpriteAffineAnimTable @ +0x118
	.4byte SpriteCallbackDummy @ +0x11C
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584ED4 parent=sSpriteTemplate_DigitalDisplay_Number offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Number: @ 0x08584ED4
	.4byte 0x0006FFFF @ +0x120
	.4byte sOam_16x16 @ +0x124
	.4byte sAnims_DigitalDisplay_Number @ +0x128
	.4byte 0 @ +0x12C
	.4byte gDummySpriteAffineAnimTable @ +0x130
	.4byte SpriteCallbackDummy @ +0x134
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584EEC parent=sSpriteTemplate_DigitalDisplay_Pokeball offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_Pokeball: @ 0x08584EEC
	.4byte 0x0006FFFF @ +0x138
	.4byte sOam_8x8 @ +0x13C
	.4byte sAnims_DigitalDisplay_Pokeball @ +0x140
	.4byte 0 @ +0x144
	.4byte gDummySpriteAffineAnimTable @ +0x148
	.4byte SpriteCallbackDummy @ +0x14C
	@ ANALYSIS: MIXED_POINTER_FRAGMENT size=0x10 addr=0x08584F04 parent=sSpriteTemplate_DigitalDisplay_DPad offset=0x0 dwords=4 ptrish=3
sSpriteTemplate_DigitalDisplay_DPad: @ 0x08584F04
	.4byte 0x0006FFFF @ +0x150
	.4byte sOam_8x8 @ +0x154
	.4byte sAnims_DigitalDisplay_DPad @ +0x158
	.4byte 0 @ +0x15C
	.4byte gDummySpriteAffineAnimTable @ +0x160
	.4byte SpriteCallbackDummy @ +0x164
	@ pret/pokeemerald-jp direct xref for 0x08584F1C: slot_machine.s: sub_0812EF10
	.globl sSpriteTemplate_PikaPowerBolt
sSpriteTemplate_PikaPowerBolt: @ 0x08584F1C
	rodata_sprite_template 0xFFFF, 0x0004, 0x085849C0, 0x08584B7C, 0x08584A78, 0x08584C60, sub_0812EF64
sSubsprites_ReelBackground: @ 0x08584F34
	.byte 0xC0, 0xC0, 0x0C, 0xC0, 0x00, 0xC0, 0x0C, 0xC0
	.byte 0xC0, 0x00, 0x0C, 0xC0, 0x00, 0x00, 0x0C, 0xC0
	.globl sSubspriteTable_ReelBackground
sSubspriteTable_ReelBackground: @ 0x08584F44
	.byte 0x04, 0x00, 0x00, 0x00
	.4byte sSubsprites_ReelBackground
sSubsprites_ReelTimeMachineAntennae: @ 0x08584F4C
	.byte 0xE0, 0xF4, 0x05, 0x40, 0x00, 0xF4, 0x45, 0x40, 0xE0, 0xFC, 0x85, 0x40, 0x00, 0xFC, 0xC5, 0x40
	.byte 0xE0, 0x04, 0x05, 0x41, 0x00, 0x04, 0x45, 0x41
	.globl sSubspriteTable_ReelTimeMachineAntennae
sSubspriteTable_ReelTimeMachineAntennae: @ 0x08584F64
	.byte 0x06, 0x00, 0x00, 0x00
	.4byte sSubsprites_ReelTimeMachineAntennae
sSubsprites_ReelTimeMachine: @ 0x08584F6C
	.byte 0xE0, 0xEC, 0x0D, 0x40, 0xE0, 0x0C, 0x05, 0x42, 0x00, 0x0C, 0x45, 0x42
	.globl sSubspriteTable_ReelTimeMachine
sSubspriteTable_ReelTimeMachine: @ 0x08584F78
	.byte 0x03, 0x00, 0x00, 0x00
	.4byte sSubsprites_ReelTimeMachine
sSubsprites_BrokenReelTimeMachine: @ 0x08584F80
	.byte 0xE0, 0xE8, 0x0D, 0x40, 0xE0, 0x08, 0x05, 0x42, 0x00, 0x08, 0x45, 0x42, 0xE0, 0x10, 0x85, 0x42
	.byte 0x00, 0x10, 0xC5, 0x42
	.globl sSubspriteTable_BrokenReelTimeMachine
sSubspriteTable_BrokenReelTimeMachine: @ 0x08584F94
	.byte 0x05, 0x00, 0x00, 0x00
	.4byte sSubsprites_BrokenReelTimeMachine
sSubsprites_ReelTimeShadow: @ 0x08584F9C
	.byte 0xE0, 0xF8, 0x05, 0x40, 0x00, 0xF8, 0x45, 0x40, 0xE0, 0x00, 0x85, 0x40, 0x00, 0x00, 0xC5, 0x40
	.globl sSubspriteTable_ReelTimeShadow
sSubspriteTable_ReelTimeShadow: @ 0x08584FAC
	.byte 0x04, 0x00, 0x00, 0x00
	.4byte sSubsprites_ReelTimeShadow
sSubsprites_ReelTimeNumberGap: @ 0x08584FB4
	.byte 0xF8, 0xF4, 0x01, 0x40, 0xF8, 0xFC, 0x01, 0x40, 0xF8, 0x04, 0x01, 0x40
	.globl sSubspriteTable_ReelTimeNumberGap
sSubspriteTable_ReelTimeNumberGap: @ 0x08584FC0
	.byte 0x03, 0x00, 0x00, 0x00
	.4byte sSubsprites_ReelTimeNumberGap
sSubsprites_DigitalDisplay_Reel: @ 0x08584FC8
	.byte 0xE0, 0xE8, 0x0D, 0xC0, 0xE0, 0x08, 0x05, 0xC2
	.byte 0x00, 0x08, 0x45, 0xC2, 0xE0, 0x10, 0x85, 0xC2, 0x00, 0x10, 0xC5, 0xC2
sSubspriteTable_DigitalDisplay_Reel: @ 0x08584FDC
	.byte 0x05, 0x00, 0x00, 0x00
	.byte 0xC8, 0x4F, 0x58, 0x08
sSubsprites_DigitalDisplay_Time: @ 0x08584FE4
	.byte 0xE0, 0xF8, 0x05, 0xC0, 0x00, 0xF8, 0x45, 0xC0, 0xE0, 0x00, 0x85, 0xC0
	.byte 0x00, 0x00, 0xC5, 0xC0
sSubspriteTable_DigitalDisplay_Time: @ 0x08584FF4
	.byte 0x04, 0x00, 0x00, 0x00, 0xE4, 0x4F, 0x58, 0x08
sSubsprites_DigitalDisplay_Insert: @ 0x08584FFC
	.byte 0xE0, 0xF8, 0x05, 0xC0
	.byte 0x00, 0xF8, 0x45, 0xC0, 0xE0, 0x00, 0x85, 0xC0, 0x00, 0x00, 0xC5, 0xC0
sSubspriteTable_DigitalDisplay_Insert: @ 0x0858500C
	.byte 0x04, 0x00, 0x00, 0x00
	.byte 0xFC, 0x4F, 0x58, 0x08
sSubsprites_DigitalDisplay_Unused1: @ 0x08585014
	.byte 0xE0, 0xF8, 0x05, 0xC0, 0x00, 0xF8, 0x45, 0xC0, 0xE0, 0x00, 0x85, 0xC0
	.byte 0x00, 0x00, 0xC5, 0xC0
sSubspriteTable_DigitalDisplay_Unused1: @ 0x08585024
	.byte 0x04, 0x00, 0x00, 0x00, 0x14, 0x50, 0x58, 0x08
sSubsprites_DigitalDisplay_Win: @ 0x0858502C
	.byte 0xE0, 0xF4, 0x05, 0xC0
	.byte 0x00, 0xF4, 0x45, 0xC0, 0xE0, 0xFC, 0x85, 0xC0, 0x00, 0xFC, 0xC5, 0xC0, 0xE0, 0x04, 0x05, 0xC1
	.byte 0x00, 0x04, 0x45, 0xC1
sSubspriteTable_DigitalDisplay_Win: @ 0x08585044
	.byte 0x06, 0x00, 0x00, 0x00, 0x2C, 0x50, 0x58, 0x08
sSubsprites_DigitalDisplay_SmokeBig: @ 0x0858504C
	.byte 0xF0, 0xF0, 0x08, 0xC0
sSubsprites_DigitalDisplay_SmokeSmall: @ 0x08585050
	.byte 0xF8, 0xF8, 0x04, 0xC1
sSubspriteTable_DigitalDisplay_Smoke: @ 0x08585054
	.byte 0x01, 0x00, 0x00, 0x00, 0x4C, 0x50, 0x58, 0x08, 0x01, 0x00, 0x00, 0x00
	.byte 0x50, 0x50, 0x58, 0x08
sSubsprites_DigitalDisplay_Pokeball: @ 0x08585064
	.byte 0xE8, 0xE8, 0x05, 0xC0, 0x08, 0xE8, 0x41, 0xC0, 0xE8, 0xF0, 0x65, 0xC0
	.byte 0x08, 0xF0, 0xA1, 0xC0, 0xE8, 0xF8, 0xC5, 0xC0, 0x08, 0xF8, 0x01, 0xC1, 0xE8, 0x00, 0x25, 0xC1
	.byte 0x08, 0x00, 0x61, 0xC1, 0xE8, 0x08, 0x85, 0xC1, 0x08, 0x08, 0xC1, 0xC1, 0xE8, 0x10, 0xE5, 0xC1
	.byte 0x08, 0x10, 0x21, 0xC2
sSubspriteTable_DigitalDisplay_Pokeball: @ 0x08585094
	.byte 0x0C, 0x00, 0x00, 0x00, 0x64, 0x50, 0x58, 0x08
sSubsprites_DigitalDisplay_DPad: @ 0x0858509C
	.byte 0xF0, 0xF4, 0x09, 0xC0
	.byte 0xF0, 0x04, 0x81, 0xC0, 0x00, 0x04, 0xA1, 0xC0
sSubspriteTable_DigitalDisplay_DPad: @ 0x085850A8
	.byte 0x03, 0x00, 0x00, 0x00, 0x9C, 0x50, 0x58, 0x08
sSubsprites_DigitalDisplay_StopS: @ 0x085850B0
	.byte 0xF8, 0xF8, 0x01, 0xC0, 0xF8, 0x00, 0x81, 0xC0
sSubspriteTable_DigitalDisplay_StopS: @ 0x085850B8
	.byte 0x02, 0x00, 0x00, 0x00, 0xB0, 0x50, 0x58, 0x08
sSubsprites_DigitalDisplay_StopT: @ 0x085850C0
	.byte 0xF8, 0xF8, 0x21, 0xC0, 0xF8, 0x00, 0xA1, 0xC0
sSubspriteTable_DigitalDisplay_StopT: @ 0x085850C8
	.byte 0x02, 0x00, 0x00, 0x00, 0xC0, 0x50, 0x58, 0x08
sSubsprites_DigitalDisplay_StopO: @ 0x085850D0
	.byte 0xF8, 0xF8, 0x41, 0xC0, 0xF8, 0x00, 0xC1, 0xC0
sSubspriteTable_DigitalDisplay_StopO: @ 0x085850D8
	.byte 0x02, 0x00, 0x00, 0x00, 0xD0, 0x50, 0x58, 0x08
sSubsprites_DigitalDisplay_StopP: @ 0x085850E0
	.byte 0xF8, 0xF8, 0x61, 0xC0, 0xF8, 0x00, 0xE1, 0xC0
sSubspriteTable_DigitalDisplay_StopP: @ 0x085850E8
	.byte 0x02, 0x00, 0x00, 0x00, 0xE0, 0x50, 0x58, 0x08
sSubsprites_DigitalDisplay_BonusB: @ 0x085850F0
	.byte 0xF8, 0xF8, 0x01, 0xC0, 0xF8, 0x00, 0x81, 0xC0
sSubspriteTable_DigitalDisplay_BonusB: @ 0x085850F8
	.byte 0x02, 0x00, 0x00, 0x00, 0xF0, 0x50, 0x58, 0x08
sSubsprites_DigitalDisplay_BonusO: @ 0x08585100
	.byte 0xFC, 0xF8, 0x20, 0xC0, 0xFC, 0x00, 0xA0, 0xC0
sSubspriteTable_DigitalDisplay_BonusO: @ 0x08585108
	.byte 0x02, 0x00, 0x00, 0x00, 0x00, 0x51, 0x58, 0x08
sSubsprites_DigitalDisplay_BonusN: @ 0x08585110
	.byte 0xF8, 0xF8, 0x31, 0xC0, 0xF8, 0x00, 0xB1, 0xC0
sSubspriteTable_DigitalDisplay_BonusN: @ 0x08585118
	.byte 0x02, 0x00, 0x00, 0x00, 0x10, 0x51, 0x58, 0x08
sSubsprites_DigitalDisplay_BonusU: @ 0x08585120
	.byte 0xFC, 0xF8, 0x50, 0xC0, 0xFC, 0x00, 0xD0, 0xC0
sSubspriteTable_DigitalDisplay_BonusU: @ 0x08585128
	.byte 0x02, 0x00, 0x00, 0x00, 0x20, 0x51, 0x58, 0x08
sSubsprites_DigitalDisplay_BonusS: @ 0x08585130
	.byte 0xF8, 0xF8, 0x61, 0xC0, 0xF8, 0x00, 0xE1, 0xC0
sSubspriteTable_DigitalDisplay_BonusS: @ 0x08585138
	.byte 0x02, 0x00, 0x00, 0x00, 0x30, 0x51, 0x58, 0x08
sSubsprites_DigitalDisplay_BigB: @ 0x08585140
	.byte 0xF4, 0xF4, 0x01, 0xC0, 0x04, 0xF4, 0x20, 0xC0, 0xF4, 0xFC, 0x81, 0xC0, 0x04, 0xFC, 0xA0, 0xC0
	.byte 0xF4, 0x04, 0x01, 0xC1, 0x04, 0x04, 0x20, 0xC1
sSubspriteTable_DigitalDisplay_BigB: @ 0x08585158
	.byte 0x06, 0x00, 0x00, 0x00, 0x40, 0x51, 0x58, 0x08
sSubsprites_DigitalDisplay_BigI: @ 0x08585160
	.byte 0xF8, 0xF4, 0x31, 0xC0, 0xF8, 0xFC, 0xB1, 0xC0, 0xF8, 0x04, 0x31, 0xC1
sSubspriteTable_DigitalDisplay_BigI: @ 0x0858516C
	.byte 0x03, 0x00, 0x00, 0x00
	.byte 0x60, 0x51, 0x58, 0x08
sSubsprites_DigitalDisplay_BigG: @ 0x08585174
	.byte 0xF4, 0xF4, 0x51, 0xC0, 0x04, 0xF4, 0x70, 0xC0, 0xF4, 0xFC, 0xD1, 0xC0
	.byte 0x04, 0xFC, 0xF0, 0xC0, 0xF4, 0x04, 0x51, 0xC1, 0x04, 0x04, 0x70, 0xC1
sSubspriteTable_DigitalDisplay_BigG: @ 0x0858518C
	.byte 0x06, 0x00, 0x00, 0x00
	.byte 0x74, 0x51, 0x58, 0x08
sSubsprites_DigitalDisplay_RegR: @ 0x08585194
	.byte 0xF4, 0xF4, 0x01, 0xC0, 0x04, 0xF4, 0x20, 0xC0, 0xF4, 0xFC, 0x81, 0xC0
	.byte 0x04, 0xFC, 0xA0, 0xC0, 0xF4, 0x04, 0x01, 0xC1, 0x04, 0x04, 0x20, 0xC1
sSubspriteTable_DigitalDisplay_RegR: @ 0x085851AC
	.byte 0x06, 0x00, 0x00, 0x00
	.byte 0x94, 0x51, 0x58, 0x08
sSubsprites_DigitalDisplay_RegE: @ 0x085851B4
	.byte 0xF8, 0xF4, 0x31, 0xC0, 0xF8, 0xFC, 0xB1, 0xC0, 0xF8, 0x04, 0x31, 0xC1
sSubspriteTable_DigitalDisplay_RegE: @ 0x085851C0
	.byte 0x03, 0x00, 0x00, 0x00, 0xB4, 0x51, 0x58, 0x08
sSubsprites_DigitalDisplay_RegG: @ 0x085851C8
	.byte 0xF4, 0xF4, 0x51, 0xC0, 0x04, 0xF4, 0x70, 0xC0
	.byte 0xF4, 0xFC, 0xD1, 0xC0, 0x04, 0xFC, 0xF0, 0xC0, 0xF4, 0x04, 0x51, 0xC1, 0x04, 0x04, 0x70, 0xC1
sSubspriteTable_DigitalDisplay_RegG: @ 0x085851E0
	.byte 0x06, 0x00, 0x00, 0x00, 0xC8, 0x51, 0x58, 0x08
	@ pret/pokeemerald-jp direct xref for 0x085851E8: slot_machine.s: sub_0812EFEC
	.globl sSpriteTemplates_DigitalDisplay
sSpriteTemplates_DigitalDisplay: @ 0x085851E8
	.4byte sSpriteTemplate_DigitalDisplay_Reel @ DIG_SPRITE_REEL
	.4byte sSpriteTemplate_DigitalDisplay_Time @ DIG_SPRITE_TIME
	.4byte sSpriteTemplate_DigitalDisplay_Insert @ DIG_SPRITE_INSERT
	.4byte sSpriteTemplate_DigitalDisplay_Win @ DIG_SPRITE_WIN
	.4byte sSpriteTemplate_DigitalDisplay_Lose @ DIG_SPRITE_LOSE
	.4byte sSpriteTemplate_DigitalDisplay_AButton @ DIG_SPRITE_A_BUTTON
	.4byte sSpriteTemplate_DigitalDisplay_Smoke @ DIG_SPRITE_SMOKE
	.4byte sSpriteTemplate_DigitalDisplay_Number @ DIG_SPRITE_NUMBER
	.4byte sSpriteTemplate_DigitalDisplay_Pokeball @ DIG_SPRITE_POKE_BALL
	.4byte sSpriteTemplate_DigitalDisplay_DPad @ DIG_SPRITE_D_PAD
	.4byte sSpriteTemplate_DigitalDisplay_Stop @ DIG_SPRITE_STOP_S
	.4byte sSpriteTemplate_DigitalDisplay_Stop @ DIG_SPRITE_STOP_T
	.4byte sSpriteTemplate_DigitalDisplay_Stop @ DIG_SPRITE_STOP_O
	.4byte sSpriteTemplate_DigitalDisplay_Stop @ DIG_SPRITE_STOP_P
	.4byte sSpriteTemplate_DigitalDisplay_Bonus @ DIG_SPRITE_BONUS_B
	.4byte sSpriteTemplate_DigitalDisplay_Bonus @ DIG_SPRITE_BONUS_O
	.4byte sSpriteTemplate_DigitalDisplay_Bonus @ DIG_SPRITE_BONUS_N
	.4byte sSpriteTemplate_DigitalDisplay_Bonus @ DIG_SPRITE_BONUS_U
	.4byte sSpriteTemplate_DigitalDisplay_Bonus @ DIG_SPRITE_BONUS_S
	.4byte sSpriteTemplate_DigitalDisplay_Big @ DIG_SPRITE_BIG_B
	.4byte sSpriteTemplate_DigitalDisplay_Big @ DIG_SPRITE_BIG_I
	.4byte sSpriteTemplate_DigitalDisplay_Big @ DIG_SPRITE_BIG_G
	.4byte sSpriteTemplate_DigitalDisplay_Reg @ DIG_SPRITE_REG_R
	.4byte sSpriteTemplate_DigitalDisplay_Reg @ DIG_SPRITE_REG_E
	.4byte sSpriteTemplate_DigitalDisplay_Reg @ DIG_SPRITE_REG_G
	.4byte gDummySpriteTemplate @ DIG_SPRITE_EMPTY
	@ pret/pokeemerald-jp direct xref for 0x08585250: slot_machine.s: sub_0812EFEC
	.globl sSubspriteTables_DigitalDisplay
sSubspriteTables_DigitalDisplay: @ 0x08585250
	.4byte sSubspriteTable_DigitalDisplay_Reel @ DIG_SPRITE_REEL
	.4byte sSubspriteTable_DigitalDisplay_Time @ DIG_SPRITE_TIME
	.4byte sSubspriteTable_DigitalDisplay_Insert @ DIG_SPRITE_INSERT
	.4byte sSubspriteTable_DigitalDisplay_Win @ DIG_SPRITE_WIN
	.4byte 0 @ DIG_SPRITE_LOSE
	.4byte 0 @ DIG_SPRITE_A_BUTTON
	.4byte sSubspriteTable_DigitalDisplay_Smoke @ DIG_SPRITE_SMOKE
	.4byte 0 @ DIG_SPRITE_NUMBER
	.4byte sSubspriteTable_DigitalDisplay_Pokeball @ DIG_SPRITE_POKE_BALL
	.4byte sSubspriteTable_DigitalDisplay_DPad @ DIG_SPRITE_D_PAD
	.4byte sSubspriteTable_DigitalDisplay_StopS @ DIG_SPRITE_STOP_S
	.4byte sSubspriteTable_DigitalDisplay_StopT @ DIG_SPRITE_STOP_T
	.4byte sSubspriteTable_DigitalDisplay_StopO @ DIG_SPRITE_STOP_O
	.4byte sSubspriteTable_DigitalDisplay_StopP @ DIG_SPRITE_STOP_P
	.4byte sSubspriteTable_DigitalDisplay_BonusB @ DIG_SPRITE_BONUS_B
	.4byte sSubspriteTable_DigitalDisplay_BonusO @ DIG_SPRITE_BONUS_O
	.4byte sSubspriteTable_DigitalDisplay_BonusN @ DIG_SPRITE_BONUS_N
	.4byte sSubspriteTable_DigitalDisplay_BonusU @ DIG_SPRITE_BONUS_U
	.4byte sSubspriteTable_DigitalDisplay_BonusS @ DIG_SPRITE_BONUS_S
	.4byte sSubspriteTable_DigitalDisplay_BigB @ DIG_SPRITE_BIG_B
	.4byte sSubspriteTable_DigitalDisplay_BigI @ DIG_SPRITE_BIG_I
	.4byte sSubspriteTable_DigitalDisplay_BigG @ DIG_SPRITE_BIG_G
	.4byte sSubspriteTable_DigitalDisplay_RegR @ DIG_SPRITE_REG_R
	.4byte sSubspriteTable_DigitalDisplay_RegE @ DIG_SPRITE_REG_E
	.4byte sSubspriteTable_DigitalDisplay_RegG @ DIG_SPRITE_REG_G
	.4byte 0 @ DIG_SPRITE_EMPTY
	@ pret/pokeemerald-jp direct xref for 0x085852B8: slot_machine.s: sub_0812F7F4
	.macro slot_machine_sprite_sheet data:req, size:req, tag:req
	.4byte \data
	.2byte \size, \tag
	.endm

	.globl sSlotMachineSpriteSheets
sSlotMachineSpriteSheets: @ 0x085852B8
	@ struct SpriteSheet { const void *data; u16 size; u16 tag; }
	@ 17 static graphics, 4 runtime-populated sheets, 1 zero terminator
	slot_machine_sprite_sheet gSlotMachineReelSymbol1Tiles, 0x0200, 0x0000 @ GFXTAG_7_RED
	slot_machine_sprite_sheet gSlotMachineReelSymbol2Tiles, 0x0200, 0x0001 @ GFXTAG_7_BLUE
	slot_machine_sprite_sheet gSlotMachineReelSymbol3Tiles, 0x0200, 0x0002 @ GFXTAG_AZURILL
	slot_machine_sprite_sheet gSlotMachineReelSymbol4Tiles, 0x0200, 0x0003 @ GFXTAG_LOTAD
	slot_machine_sprite_sheet gSlotMachineReelSymbol5Tiles, 0x0200, 0x0004 @ GFXTAG_CHERRY
	slot_machine_sprite_sheet gSlotMachineReelSymbol6Tiles, 0x0200, 0x0005 @ GFXTAG_POWER
	slot_machine_sprite_sheet gSlotMachineReelSymbol7Tiles, 0x0200, 0x0006 @ GFXTAG_REPLAY
	slot_machine_sprite_sheet gSlotMachineNumber0Tiles, 0x0040, 0x0007 @ GFXTAG_NUM_0
	slot_machine_sprite_sheet gSlotMachineNumber1Tiles, 0x0040, 0x0008 @ GFXTAG_NUM_1
	slot_machine_sprite_sheet gSlotMachineNumber2Tiles, 0x0040, 0x0009 @ GFXTAG_NUM_2
	slot_machine_sprite_sheet gSlotMachineNumber3Tiles, 0x0040, 0x000A @ GFXTAG_NUM_3
	slot_machine_sprite_sheet gSlotMachineNumber4Tiles, 0x0040, 0x000B @ GFXTAG_NUM_4
	slot_machine_sprite_sheet gSlotMachineNumber5Tiles, 0x0040, 0x000C @ GFXTAG_NUM_5
	slot_machine_sprite_sheet gSlotMachineNumber6Tiles, 0x0040, 0x000D @ GFXTAG_NUM_6
	slot_machine_sprite_sheet gSlotMachineNumber7Tiles, 0x0040, 0x000E @ GFXTAG_NUM_7
	slot_machine_sprite_sheet gSlotMachineNumber8Tiles, 0x0040, 0x000F @ GFXTAG_NUM_8
	slot_machine_sprite_sheet gSlotMachineNumber9Tiles, 0x0040, 0x0010 @ GFXTAG_NUM_9
	slot_machine_sprite_sheet 0, 0x0200, 0x0012 @ GFXTAG_STOP
	slot_machine_sprite_sheet 0, 0x0200, 0x0013 @ GFXTAG_BONUS
	slot_machine_sprite_sheet 0, 0x0300, 0x0014 @ GFXTAG_BIG
	slot_machine_sprite_sheet 0, 0x0300, 0x0015 @ GFXTAG_REG
	slot_machine_sprite_sheet 0, 0x0000, 0x0000 @ terminator
	.purgem slot_machine_sprite_sheet
	@ Slot machine reel background source pointer and palette cluster
	.globl sReelBackground_Tilemap
sReelBackground_Tilemap: @ 0x08585368
	.4byte gSlotMachineReelBackground_Tilemap
	.globl gSlotMachineReelSymbols_Pal
gSlotMachineReelSymbols_Pal: @ 0x0858536C
	@ 16-color GBA palette
	.2byte 0x7FFF, 0x3DEF, 0x5AF7, 0x7FFF, 0x7C00, 0x7DC2, 0x7E8E, 0x268E
	.2byte 0x27B3, 0x001F, 0x017F, 0x025F, 0x127B, 0x13BF, 0x2D8C, 0x2108
	.globl gSlotMachineReelTimePikachu_Pal
gSlotMachineReelTimePikachu_Pal: @ 0x0858538C
	@ 16-color GBA palette
	.2byte 0x56B9, 0x7FFF, 0x3FFF, 0x03BF, 0x02FD, 0x0238, 0x0150, 0x7C1F
	.2byte 0x7C1F, 0x7C1F, 0x253F, 0x001C, 0x0016, 0x35AD, 0x0842, 0x7C1F
	.globl gSlotMachineReelTimeMisc_Pal
gSlotMachineReelTimeMisc_Pal: @ 0x085853AC
	@ 16-color GBA palette
	.2byte 0x5755, 0x7FFF, 0x7C1F, 0x4791, 0x4BB2, 0x4BB2, 0x5FD7, 0x5BD6
	.2byte 0x5FD7, 0x57A7, 0x4AA0, 0x21A0, 0x7C1F, 0x4E52, 0x356B, 0x20A5
	.globl gSlotMachineReelTimeMachine_Pal
gSlotMachineReelTimeMachine_Pal: @ 0x085853CC
	@ 16-color GBA palette
	.2byte 0x62B5, 0x7FFF, 0x63FF, 0x03BE, 0x0277, 0x012C, 0x29BF, 0x2137
	.2byte 0x18F1, 0x57A7, 0x4AA0, 0x21A0, 0x7C1F, 0x4E52, 0x356B, 0x20A5
	.globl gSlotMachineMisc_Pal
gSlotMachineMisc_Pal: @ 0x085853EC
	@ 16-color GBA palette
	.2byte 0x3D08, 0x7FFF, 0x4BBF, 0x035F, 0x02BF, 0x0134, 0x7C1F, 0x7C1F
	.2byte 0x7C1F, 0x7C1F, 0x7C1F, 0x6F7B, 0x6739, 0x5694, 0x356B, 0x20A5
	.globl gSlotMachineReelTimeExplosion_Pal
gSlotMachineReelTimeExplosion_Pal: @ 0x0858540C
	@ 16-color GBA palette
	.2byte 0x0000, 0x013C, 0x029F, 0x017C, 0x0F9F, 0x021F, 0x379F, 0x53FF
	.2byte 0x7FFF, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F
	.globl gSlotMachineDigitalDisplay_Pal
gSlotMachineDigitalDisplay_Pal: @ 0x0858542C
	@ 16-color GBA palette
	.2byte 0x2D8C, 0x0AFF, 0x0010, 0x0918, 0x0918, 0x0918, 0x0918, 0x7C1F
	.2byte 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x0000
	.globl gSlotMachineMenu_Pal
gSlotMachineMenu_Pal: @ 0x0858544C
	@ slot machine menu palette; LoadPalette size 0xA0
	.2byte 0x0000, 0x18E7, 0x739C, 0x7FFF, 0x5750, 0x25E6, 0x36AB, 0x7C1F
	.2byte 0x36AB, 0x169F, 0x1D9F, 0x4F1F, 0x00F5, 0x0D00, 0x2D8C, 0x0000
	.2byte 0x6F7B, 0x7FFF, 0x5750, 0x017F, 0x00BB, 0x017F, 0x00BB, 0x017F
	.2byte 0x00BB, 0x017F, 0x00BB, 0x017F, 0x00BB, 0x7C1F, 0x0013, 0x0000
	.2byte 0x0000, 0x7FFF, 0x6929, 0x7EAE, 0x268E, 0x27B3, 0x0D1C, 0x169F
	.2byte 0x13BF, 0x5750, 0x5EF7, 0x4E73, 0x3DEF, 0x2D6B, 0x2108, 0x0000
	.2byte 0x7C1F, 0x7FFF, 0x2A88, 0x4791, 0x4791, 0x4BB2, 0x53D4, 0x5BD6
	.2byte 0x5FD7, 0x67F9, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x0000
	.2byte 0x6F7B, 0x6968, 0x36AB, 0x7FFF, 0x5750, 0x3980, 0x016B, 0x016B
	.2byte 0x0053, 0x0053, 0x7A6D, 0x0339, 0x0339, 0x25BE, 0x25BE, 0x0000
	.globl sUnusedColors
sUnusedColors: @ 0x085854EC
	@ unused slot machine colors
	.2byte 0x6F7B, 0x6968, 0x36AB, 0x7FFF, 0x5750, 0x7EC0, 0x02BA, 0x02BA
	.2byte 0x01FD, 0x01FD
	.globl sMiddleRowLit_Pal
sMiddleRowLit_Pal: @ 0x08585500
	@ lit match-line color
	.2byte 0x7F91
	.globl sTopRowLit_Pal
sTopRowLit_Pal: @ 0x08585502
	@ lit match-line color
	.2byte 0x43BF
	.globl sBottomRowt_Pal
sBottomRowt_Pal: @ 0x08585504
	@ lit match-line color
	.2byte 0x43BF
	.globl sNWSEDiagLit_Pal
sNWSEDiagLit_Pal: @ 0x08585506
	@ lit match-line color
	.2byte 0x4ABF
	.globl sNESWDiagLit_Pal
sNESWDiagLit_Pal: @ 0x08585508
	@ lit match-line color
	.2byte 0x4ABF
	.align 2, 0
	.globl sLitMatchLinePalTable
sLitMatchLinePalTable: @ 0x0858550C
	.4byte sMiddleRowLit_Pal @ MATCH_MIDDLE_ROW
	.4byte sTopRowLit_Pal @ MATCH_TOP_ROW
	.4byte sBottomRowt_Pal @ MATCH_BOTTOM_ROW
	.4byte sNWSEDiagLit_Pal @ MATCH_NWSE_DIAG
	.4byte sNESWDiagLit_Pal @ MATCH_NESW_DIAG
	.globl sDarkMatchLinePalTable
sDarkMatchLinePalTable: @ 0x08585520
	.4byte gSlotMachineMenu_Pal + 0x94 @ MATCH_MIDDLE_ROW
	.4byte gSlotMachineMenu_Pal + 0x96 @ MATCH_TOP_ROW
	.4byte gSlotMachineMenu_Pal + 0x98 @ MATCH_BOTTOM_ROW
	.4byte gSlotMachineMenu_Pal + 0x9A @ MATCH_NWSE_DIAG
	.4byte gSlotMachineMenu_Pal + 0x9C @ MATCH_NESW_DIAG
	.globl sMatchLinePalOffsets
sMatchLinePalOffsets: @ 0x08585534
	.byte 0x4A, 0x4B, 0x4C, 0x4E, 0x4D @ middle, top, bottom, NW-SE, NE-SW
	.globl sBetToMatchLineIds
sBetToMatchLineIds: @ 0x08585539
	.byte 0, 0 @ bet 1: middle, middle
	.byte 1, 2 @ bet 2: top, bottom
	.byte 3, 4 @ bet 3: NW-SE, NE-SW
	.globl sMatchLinesPerBet
sMatchLinesPerBet: @ 0x0858553F
	.byte 1, 2, 2
	.globl sFlashingLightsInside_Pal
sFlashingLightsInside_Pal: @ 0x08585542
	@ flashing lights 16-color palette
	.2byte 0x6F7B, 0x7FFF, 0x5750, 0x43FF, 0x22DF, 0x7FFF, 0x43FF, 0x43FF
	.2byte 0x22DF, 0x22DF, 0x017F, 0x017F, 0x00BB, 0x7C1F, 0x0013, 0x0000
	.globl sFlashingLightsMiddle_Pal
sFlashingLightsMiddle_Pal: @ 0x08585562
	@ flashing lights 16-color palette
	.2byte 0x6F7B, 0x7FFF, 0x5750, 0x22DF, 0x017F, 0x43FF, 0x22DF, 0x7FFF
	.2byte 0x43FF, 0x43FF, 0x22DF, 0x22DF, 0x017F, 0x7C1F, 0x0013, 0x0000
	.globl sFlashingLightsOutside_Pal
sFlashingLightsOutside_Pal: @ 0x08585582
	@ flashing lights 16-color palette
	.2byte 0x6F7B, 0x7FFF, 0x5750, 0x017F, 0x00BB, 0x22DF, 0x017F, 0x43FF
	.2byte 0x22DF, 0x7FFF, 0x43FF, 0x43FF, 0x22DF, 0x7C1F, 0x0013, 0x0000
	.align 2, 0
	.globl sFlashingLightsPalTable
sFlashingLightsPalTable: @ 0x085855A4
	.4byte sFlashingLightsInside_Pal
	.4byte sFlashingLightsMiddle_Pal
	.4byte sFlashingLightsOutside_Pal
	.globl sSlotMachineMenu_Pal
sSlotMachineMenu_Pal: @ 0x085855B0
	.4byte gSlotMachineMenu_Pal + 0x20 @ +16 u16 colors
	.globl sPokeballShining0_Pal
sPokeballShining0_Pal: @ 0x085855B4
	@ digital display Poke Ball shining palette
	.2byte 0x2D8C, 0x0AFF, 0x0010, 0x0AFF, 0x0918, 0x0918, 0x0918, 0x7C1F
	.2byte 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x0000
	.globl sPokeballShining1_Pal
sPokeballShining1_Pal: @ 0x085855D4
	@ digital display Poke Ball shining palette
	.2byte 0x2D8C, 0x0AFF, 0x0010, 0x0918, 0x0AFF, 0x0918, 0x0918, 0x7C1F
	.2byte 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x0000
	.globl sPokeballShining2_Pal
sPokeballShining2_Pal: @ 0x085855F4
	@ digital display Poke Ball shining palette
	.2byte 0x2D8C, 0x0AFF, 0x0010, 0x0918, 0x0918, 0x0AFF, 0x0918, 0x7C1F
	.2byte 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x7C1F, 0x0000
	.globl sPokeballShiningPalTable
sPokeballShiningPalTable: @ 0x08585614
	.4byte sPokeballShining0_Pal @ streak left
	.4byte sPokeballShining1_Pal @ streak middle
	.4byte sPokeballShining2_Pal @ streak right
	.4byte gSlotMachineDigitalDisplay_Pal @ normal
	.globl sDigitalDisplay_Pal
sDigitalDisplay_Pal: @ 0x08585624
	.4byte gSlotMachineDigitalDisplay_Pal
	.globl sUnkPalette
sUnkPalette: @ 0x08585628
	@ [1] RGB_WHITEALPHA; [3] RGB(8, 8, 8)
	.2byte 0x0000, 0xFFFF, 0x0000, 0x2108, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.macro slot_machine_sprite_palette data:req, tag:req
	.4byte \data
	.2byte \tag, 0
	.endm

	.globl sSlotMachineSpritePalettes
sSlotMachineSpritePalettes: @ 0x08585648
	slot_machine_sprite_palette gSlotMachineReelSymbols_Pal, 0x0000 @ PALTAG_REEL
	slot_machine_sprite_palette gSlotMachineReelTimePikachu_Pal, 0x0001 @ PALTAG_REEL_TIME_PIKACHU
	slot_machine_sprite_palette gSlotMachineReelTimeMisc_Pal, 0x0002 @ PALTAG_REEL_TIME_MISC
	slot_machine_sprite_palette gSlotMachineReelTimeMachine_Pal, 0x0003 @ PALTAG_REEL_TIME_MACHINE
	slot_machine_sprite_palette gSlotMachineMisc_Pal, 0x0004 @ PALTAG_MISC
	slot_machine_sprite_palette gSlotMachineReelTimeExplosion_Pal, 0x0005 @ PALTAG_EXPLOSION
	slot_machine_sprite_palette gSlotMachineDigitalDisplay_Pal, 0x0006 @ PALTAG_DIG_DISPLAY
	slot_machine_sprite_palette gSlotMachineMisc_Pal, 0x0007 @ PALTAG_PIKA_AURA
	slot_machine_sprite_palette 0, 0x0000 @ terminator
	.purgem slot_machine_sprite_palette
	@ Digital Display graphics; LZ77 -> 0x3200 bytes
	.globl gSlotMachineDigitalDisplay_Gfx
gSlotMachineDigitalDisplay_Gfx: @ 0x08585690
	.incbin "build/graphics/slot_machine/digital_display.4bpp.lz"
	.if (. - gSlotMachineDigitalDisplay_Gfx) != 0x768
	.error "gSlotMachineDigitalDisplay_Gfx compressed block size mismatch"
	.endif
	@ combined ReelTime graphics; LZ77 -> 0x3600 bytes
	.globl sReelTimeGfx
sReelTimeGfx: @ 0x08585DF8
	.incbin "build/graphics/slot_machine/reel_time_gfx.4bpp.lz"
	.if (. - sReelTimeGfx) != 0x1154
	.error "sReelTimeGfx compressed block size mismatch"
	.endif
	@ JP slot machine menu graphics; LZ77 -> 0x1E00 bytes
	.globl gSlotMachineMenu_Gfx
gSlotMachineMenu_Gfx: @ 0x08586F4C
	.incbin "build/graphics/slot_machine/menu.4bpp.lz"
	.if (. - gSlotMachineMenu_Gfx) != 0xBA0
	.error "gSlotMachineMenu_Gfx compressed block size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08587AEC: slot_machine.s: LoadSlotMachineMenuTilemap
	@ 30x20 slot machine menu BG tilemap
	.globl gSlotMachineMenu_Tilemap
gSlotMachineMenu_Tilemap: @ 0x08587AEC
	.include "build/graphics/slot_machine/menu.tilemap.inc"
	.if (. - gSlotMachineMenu_Tilemap) != 0x4B0
	.error "gSlotMachineMenu_Tilemap size mismatch"
	.endif
	@ 20x11 Reel Time window BG tilemap
	.globl sReelTimeWindow_Tilemap
sReelTimeWindow_Tilemap: @ 0x08587F9C
	.include "build/graphics/slot_machine/reel_time_window.tilemap.inc"
	.if (. - sReelTimeWindow_Tilemap) != 0x1B8
	.error "sReelTimeWindow_Tilemap size mismatch"
	.endif
	@ 30x20 slot machine info-box BG tilemap
	.globl gSlotMachineInfoBox_Tilemap
gSlotMachineInfoBox_Tilemap: @ 0x08588154
	.include "build/graphics/slot_machine/info_box.tilemap.inc"
	.if (. - gSlotMachineInfoBox_Tilemap) != 0x4B0
	.error "gSlotMachineInfoBox_Tilemap size mismatch"
	.endif
	@ Empty tile used to clear the Reel Time window
	.globl sEmptyTilemap
sEmptyTilemap: @ 0x08588604
	.2byte 0x0000
.globl gText_Rom_588606
