	@ pret/pokeemerald-jp direct xref for 0x08572FFC: battle_anim_utility_funcs.s: sub_08117364
	.globl sCurseLinesPalette
sCurseLinesPalette:
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ battle_anim_utility_funcs: { RGB_WHITE }
	.2byte 0x7FFF
	.globl gBattleAnimBgCntSet
gBattleAnimBgCntSet:
	@ REG_OFFSET_BG0CNT..REG_OFFSET_BG3CNT
	.byte 0x08, 0x0A, 0x0C, 0x0E
	.globl gBattleAnimBgCntGet
gBattleAnimBgCntGet:
	@ REG_OFFSET_BG0CNT..REG_OFFSET_BG3CNT
	.byte 0x08, 0x0A, 0x0C, 0x0E
	@ original alignment before sBattleIntroSlideFuncs
	.byte 0x00, 0x00
sBattleIntroSlideFuncs:
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide2
	.4byte BattleIntroSlide2
	.4byte BattleIntroSlide2
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide3
	.4byte BattleIntroSlide3
sMachBikeTransitions:
	.4byte MachBikeTransition_FaceDirection
	.4byte MachBikeTransition_TurnDirection
	.4byte MachBikeTransition_TrySpeedUp
	.4byte MachBikeTransition_TrySlowDown
sMachBikeSpeedCallbacks:
	.4byte PlayerGoSpeed1
	.4byte PlayerGoSpeed2
	.4byte PlayerGoSpeed4
sAcroBikeTransitions:
	.4byte AcroBikeTransition_TurnJump
	.4byte AcroBikeTransition_TurnDirection
	.4byte AcroBikeTransition_Moving
	.4byte AcroBikeTransition_NormalToWheelie
	.4byte AcroBikeTransition_WheelieToNormal
	.4byte AcroBikeTransition_WheelieIdle
	.4byte AcroBikeTransition_WheelieHoppingStanding
	.4byte AcroBikeTransition_WheelieHoppingMoving
	.4byte AcroBikeTransition_SideJump
	.4byte sub_0811A2E4
	.4byte AcroBikeTransition_WheelieMoving
	.4byte AcroBikeTransition_WheelieRisingMoving
	.4byte AcroBikeTransition_WheelieLoweringMoving
sAcroBikeInputHandlers:
	.4byte AcroBikeHandleInputNormal
	.4byte AcroBikeHandleInputTurning
	.4byte AcroBikeHandleInputWheelieStanding
	.4byte AcroBikeHandleInputBunnyHop
	.4byte AcroBikeHandleInputWheelieMoving
	.4byte AcroBikeHandleInputSidewaysJump
	.4byte AcroBikeHandleInputTurnJump
