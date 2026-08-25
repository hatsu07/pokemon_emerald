	@ pret/pokeemerald-jp direct xref for 0x085E732C: battle_controller_player_partner.s: PlayerPartnerBufferRunCommand
	.globl gBattleControllerPlayerPartnerData_085E732C
gBattleControllerPlayerPartnerData_085E732C: @ 0x085E732C
	@ analyzed canonical ROM range 0x085E732C-0x085E742F
	@ semantic recovery: rodata; byte-verified against linked ROM
sPlayerPartnerBufferCommands: @ 0x085E732C
	@ proven function-pointer table
	.4byte PlayerPartnerHandleGetMonData
	.4byte PlayerPartnerHandleGetRawMonData
	.4byte PlayerPartnerHandleSetMonData
	.4byte PlayerPartnerHandleSetRawMonData
	.4byte PlayerPartnerHandleLoadMonSprite
	.4byte PlayerPartnerHandleSwitchInAnim
	.4byte PlayerPartnerHandleReturnMonToBall
	.4byte PlayerPartnerHandleDrawTrainerPic
	.4byte PlayerPartnerHandleTrainerSlide
	.4byte PlayerPartnerHandleTrainerSlideBack
	.4byte PlayerPartnerHandleFaintAnimation
	.4byte PlayerPartnerHandlePaletteFade
	.4byte PlayerPartnerHandleSuccessBallThrowAnim
	.4byte PlayerPartnerHandleBallThrowAnim
	.4byte PlayerPartnerHandlePause
	.4byte PlayerPartnerHandleMoveAnimation
	.4byte PlayerPartnerHandlePrintString
	.4byte PlayerPartnerHandlePrintSelectionString
	.4byte PlayerPartnerHandleChooseAction
	.4byte PlayerPartnerHandleUnknownYesNoBox
	.4byte PlayerPartnerHandleChooseMove
	.4byte PlayerPartnerHandleChooseItem
	.4byte PlayerPartnerHandleChoosePokemon
	.4byte PlayerPartnerHandleCmd23
	.4byte PlayerPartnerHandleHealthBarUpdate
	.4byte PlayerPartnerHandleExpUpdate
	.4byte PlayerPartnerHandleStatusIconUpdate
	.4byte PlayerPartnerHandleStatusAnimation
	.4byte PlayerPartnerHandleStatusXor
	.4byte PlayerPartnerHandleDataTransfer
	.4byte PlayerPartnerHandleDMA3Transfer
	.4byte PlayerPartnerHandlePlayBGM
	.4byte PlayerPartnerHandleCmd32
	.4byte PlayerPartnerHandleTwoReturnValues
	.4byte PlayerPartnerHandleChosenMonReturnValue
	.4byte PlayerPartnerHandleOneReturnValue
	.4byte PlayerPartnerHandleOneReturnValue_Duplicate
	.4byte PlayerPartnerHandleCmd37
	.4byte PlayerPartnerHandleCmd38
	.4byte PlayerPartnerHandleCmd39
	.4byte PlayerPartnerHandleCmd40
	.4byte PlayerPartnerHandleHitAnimation
	.4byte PlayerPartnerHandleCmd42
	.4byte PlayerPartnerHandlePlaySE
	.4byte PlayerPartnerHandlePlayFanfareOrBGM
	.4byte PlayerPartnerHandleFaintingCry
	.4byte PlayerPartnerHandleIntroSlide
	.4byte PlayerPartnerHandleIntroTrainerBallThrow
	.4byte PlayerPartnerHandleDrawPartyStatusSummary
	.4byte PlayerPartnerHandleHidePartyStatusSummary
	.4byte PlayerPartnerHandleEndBounceEffect
	.4byte PlayerPartnerHandleSpriteInvisibility
	.4byte PlayerPartnerHandleBattleAnimation
	.4byte PlayerPartnerHandleLinkStandbyMsg
	.4byte PlayerPartnerHandleResetActionMoveSelection
	.4byte PlayerPartnerHandleCmd55
	.4byte nullsub_77
	.byte 0x83, 0x4D, 0xF3, 0x5F, 0x6F, 0x4F, 0xEB, 0x3E, 0x67, 0x2E, 0x10, 0x46, 0x8C, 0x3D, 0x28, 0x35
	.byte 0xC5, 0x2C, 0x15, 0x7F, 0xB5, 0x56, 0x9D, 0x53, 0x3B, 0x43, 0xDA, 0x36, 0x79, 0x2A, 0x0E, 0x53
	@ pret/pokeemerald-jp direct xref for 0x085E7430: mirage_tower.s: InitMirageTowerShake
