@ Player controller table. ROM 0x082ECE9C-0x082ECF8B.

	.globl gUnknown_82ECE9C
gUnknown_82ECE9C: @ 0x082ECE9C
sPlayerBufferCommands:
	.4byte PlayerHandleGetMonData
	.4byte PlayerHandleGetRawMonData
	.4byte PlayerHandleSetMonData
	.4byte PlayerHandleSetRawMonData
	.4byte PlayerHandleLoadMonSprite
	.4byte PlayerHandleSwitchInAnim
	.4byte PlayerHandleReturnMonToBall
	.4byte PlayerHandleDrawTrainerPic
	.4byte PlayerHandleTrainerSlide
	.4byte PlayerHandleTrainerSlideBack
	.4byte PlayerHandleFaintAnimation
	.4byte PlayerHandlePaletteFade
	.4byte PlayerHandleSuccessBallThrowAnim
	.4byte PlayerHandleBallThrowAnim
	.4byte PlayerHandlePause
	.4byte PlayerHandleMoveAnimation
	.4byte PlayerHandlePrintString
	.4byte PlayerHandlePrintSelectionString
	.4byte PlayerHandleChooseAction
	.4byte PlayerHandleUnknownYesNoBox
	.4byte PlayerHandleChooseMove
	.4byte PlayerHandleChooseItem
	.4byte PlayerHandleChoosePokemon
	.4byte PlayerHandleCmd23
	.4byte PlayerHandleHealthBarUpdate
	.4byte PlayerHandleExpUpdate
	.4byte PlayerHandleStatusIconUpdate
	.4byte PlayerHandleStatusAnimation
	.4byte PlayerHandleStatusXor
	.4byte sub_0805C32C
	.4byte PlayerHandleDMA3Transfer
	.4byte PlayerHandlePlayBGM
	.4byte PlayerHandleCmd32
	.4byte sub_0805C428
	.4byte sub_0805C43C
	.4byte sub_0805C450
	.4byte PlayerHandleOneReturnValue
	.4byte PlayerHandleCmd37
	.4byte PlayerHandleCmd38
	.4byte PlayerHandleCmd39
	.4byte PlayerHandleCmd40
	.4byte sub_0805C50C
	.4byte sub_0805C57C
	.4byte PlayerHandlePlaySE
	.4byte PlayerHandlePlayFanfareOrBGM
	.4byte PlayerHandleFaintingCry
	.4byte sub_0805C668
	.4byte PlayerHandleIntroTrainerBallThrow
	.4byte PlayerHandleDrawPartyStatusSummary
	.4byte PlayerHandleHidePartyStatusSummary
	.4byte PlayerHandleEndBounceEffect
	.4byte PlayerHandleSpriteInvisibility
	.4byte PlayerHandleBattleAnimation
	.4byte PlayerHandleLinkStandbyMsg
	.4byte PlayerHandleResetActionMoveSelection
	.4byte PlayerHandleCmd55
	.4byte PlayerCmdEnd

	@ pret/pokeemerald-jp direct xref for 0x082ECF80: battle_controller_player.s: HandleInputChooseTarget
	.globl gBattleControllerPlayerData_082ECF80
gBattleControllerPlayerData_082ECF80:
	.globl gUnknown_82ECF80
gUnknown_82ECF80: @ 0x082ECF80
sTargetIdentities:
	.byte 0, 2, 3, 1 @ player-left, player-right, opponent-right, opponent-left
sPlayerControllerUnused:
	.byte 0x48, 0x48, 0x20, 0x5A, 0x50, 0x50, 0x50, 0x58
