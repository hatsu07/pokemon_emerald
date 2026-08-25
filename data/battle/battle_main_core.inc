@ Battle main / battle_util tables decoded from the original raw battle table fragment.
@ ROM range: 0x082EC600-0x082EC693.

	.globl sTurnActionsFuncsTable
sTurnActionsFuncsTable:
	.4byte HandleAction_UseMove
	.4byte HandleAction_UseItem
	.4byte HandleAction_Switch
	.4byte HandleAction_Run
	.4byte HandleAction_WatchesCarefully
	.4byte HandleAction_SafariZoneBallThrow
	.4byte HandleAction_ThrowPokeblock
	.4byte HandleAction_GoNear
	.4byte HandleAction_SafariZoneRun
	.4byte HandleAction_WallyBallThrow
	.4byte sub_080454F4
	.4byte sub_0803EEE4
	.4byte HandleAction_ActionFinished
	.4byte HandleAction_NothingIsFainted

	.globl sEndTurnFuncsTable
sEndTurnFuncsTable:
	.4byte HandleEndTurn_ContinueBattle
	.4byte HandleEndTurn_BattleWon
	.4byte HandleEndTurn_BattleLost
	.4byte HandleEndTurn_BattleLost
	.4byte HandleEndTurn_RanFromBattle
	.4byte HandleEndTurn_FinishBattle
	.4byte HandleEndTurn_MonFled
	.4byte HandleEndTurn_FinishBattle
	.4byte HandleEndTurn_FinishBattle
	.4byte HandleEndTurn_FinishBattle
	.4byte HandleEndTurn_FinishBattle

	.globl sPkblToEscapeFactor
sPkblToEscapeFactor:
	.byte 0, 0, 0 @ reaction row 0
	.byte 3, 5, 0 @ reaction row 1
	.byte 2, 3, 0 @ reaction row 2
	.byte 1, 2, 0 @ reaction row 3
	.byte 1, 1, 0 @ reaction row 4

	.globl sGoNearCounterToCatchFactor
sGoNearCounterToCatchFactor:
	.byte 4, 3, 2, 1

	.globl sGoNearCounterToEscapeFactor
sGoNearCounterToEscapeFactor:
	.byte 4, 4, 4, 4
	.byte 0 @ alignment

	.globl sSoundMovesTable
sSoundMovesTable:
	.2byte MOVE_GROWL @ 45
	.2byte MOVE_ROAR @ 46
	.2byte MOVE_SING @ 47
	.2byte MOVE_SUPERSONIC @ 48
	.2byte MOVE_SCREECH @ 103
	.2byte MOVE_SNORE @ 173
	.2byte MOVE_UPROAR @ 253
	.2byte MOVE_METAL_SOUND @ 319
	.2byte MOVE_GRASS_WHISTLE @ 320
	.2byte MOVE_HYPER_VOICE @ 304
	.2byte 0xFFFF @ end
	.2byte 0 @ alignment
