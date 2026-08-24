	@ pret/pokeemerald-jp direct xref for 0x0857309C: bike.s: GetPlayerSpeed
	.globl sMachBikeSpeeds
sMachBikeSpeeds:
	@ PLAYER_SPEED_NORMAL, PLAYER_SPEED_FAST, PLAYER_SPEED_FASTEST
	.2byte 0x0001, 0x0002, 0x0004
sAcroBikeJumpTimerList:
	@ jump timer list terminated by 0
	.byte 0x04, 0x00

	@ pret/pokeemerald-jp direct xref for 0x085730A4: bike.s: AcroBike_GetJumpDirection
	.globl sAcroBikeTricksList
sAcroBikeTricksList:
	@ BikeHistoryInputInfo records matching pret/pokeemerald bike.c.
	.set JP_ACRO_DIR_SOUTH, 1
	.set JP_ACRO_DIR_NORTH, 2
	.set JP_ACRO_DIR_WEST,  3
	.set JP_ACRO_DIR_EAST,  4
	.set JP_ACRO_B_BUTTON,  2
	.set JP_ACRO_HISTORY_LAST_ENTRY_MASK, 0xF

	.macro jp_acro_bike_trick direction
		.4byte \direction
		.4byte JP_ACRO_B_BUTTON
		.4byte JP_ACRO_HISTORY_LAST_ENTRY_MASK
		.4byte JP_ACRO_HISTORY_LAST_ENTRY_MASK
		.4byte sAcroBikeJumpTimerList
		.4byte sAcroBikeJumpTimerList
		.4byte \direction
	.endm

	jp_acro_bike_trick JP_ACRO_DIR_SOUTH
	jp_acro_bike_trick JP_ACRO_DIR_NORTH
	jp_acro_bike_trick JP_ACRO_DIR_WEST
	jp_acro_bike_trick JP_ACRO_DIR_EAST
sQuizLadyEasyChatScreens:
	@ Resolved pointer table; original ROM range 0x573114..0x573133.
	.4byte ABILITY_LEVITATE
	.4byte DoQuizAnswerEasyChatScreen
	.4byte MAP_NUM_ROUTE110
	.4byte DoQuizQuestionEasyChatScreen
	.4byte MAP_NUM_ROUTE113
	.4byte DoQuizSetAnswerEasyChatScreen
	.4byte PSR_UND_MODE
	.4byte DoQuizSetQuestionEasyChatScreen
