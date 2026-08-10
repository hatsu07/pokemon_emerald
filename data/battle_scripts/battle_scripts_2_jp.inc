@ Japanese Emerald battle scripts for balls, items, running, and Safari actions.

	.globl gUnknown_828A290
gUnknown_828A290:
	.globl gBattlescriptsForBallThrow
gBattlescriptsForBallThrow: @ 0x0828A290
	.4byte BattleScript_BallThrow @ entry 0
	.4byte BattleScript_BallThrow @ entry 1
	.4byte BattleScript_BallThrow @ entry 2
	.4byte BattleScript_BallThrow @ entry 3
	.4byte BattleScript_BallThrow @ entry 4
	.4byte BattleScript_SafariBallThrow @ entry 5
	.4byte BattleScript_BallThrow @ entry 6
	.4byte BattleScript_BallThrow @ entry 7
	.4byte BattleScript_BallThrow @ entry 8
	.4byte BattleScript_BallThrow @ entry 9
	.4byte BattleScript_BallThrow @ entry 10
	.4byte BattleScript_BallThrow @ entry 11
	.4byte BattleScript_BallThrow @ entry 12

	.globl gBattlescriptsForUsingItem
gBattlescriptsForUsingItem: @ 0x0828A2C4
	.4byte BattleScript_PlayerUsesItem @ entry 0
	.4byte BattleScript_OpponentUsesHealItem @ entry 1
	.4byte BattleScript_OpponentUsesHealItem @ entry 2
	.4byte BattleScript_OpponentUsesStatusCureItem @ entry 3
	.4byte BattleScript_OpponentUsesXItem @ entry 4
	.4byte BattleScript_OpponentUsesGuardSpec @ entry 5

	.globl gBattlescriptsForRunningByItem
gBattlescriptsForRunningByItem: @ 0x0828A2DC
	.4byte BattleScript_RunByUsingItem @ entry 0

	.globl gBattlescriptsForSafariActions
gBattlescriptsForSafariActions: @ 0x0828A2E0
	.4byte BattleScript_ActionWatchesCarefully @ entry 0
	.4byte BattleScript_ActionGetNear @ entry 1
	.4byte BattleScript_ActionThrowPokeblock @ entry 2
	.4byte BattleScript_ActionWallyThrow @ entry 3


BattleScript_BallThrow: @ 0x0828A2F0
	bs_jumpifword 0x04, 0x02022C90, 0x00000200, 0x0828A302
	bs_printstring 0x0101
	bs_handleballthrow
	bs_printstring 0x0102
	bs_handleballthrow

BattleScript_SafariBallThrow: @ 0x0828A306
	bs_printstring 0x0101
	bs_updatestatusicon 0x01
	bs_handleballthrow
	bs_jumpifhalfword 0x00, 0x02023EAC, 0x0005, 0x0828A31A
	bs_incrementgamestat 0x0B
	bs_printstring 0x010B
	bs_trysetcaughtmondexflags 0x0828A32D
	bs_printstring 0x010F
	bs_waitstate
	bs_setbyte 0x02023FD6, 0x00
	bs_displaydexinfo
	bs_printstring 0x010D
	bs_waitstate
	bs_setbyte 0x02023FD6, 0x00
	bs_trygivecaughtmonnick 0x0828A34A
	bs_givecaughtmon
	bs_printfromtable 0x085ABAE6
	bs_waitmessage 0x0040
	bs_goto 0x0828A34B
	bs_givecaughtmon
	bs_setbyte 0x02023FDE, 0x07
	bs_finishturn
	bs_printstring 0x010C
	bs_setbyte 0x02023FDE, 0x07
	bs_finishturn
	bs_printfromtable 0x085ABA7E
	bs_waitmessage 0x0040
	bs_jumpifword 0x05, 0x02022C90, 0x00000080, 0x0828A389
	bs_jumpifbyte 0x01, 0x02039D18, 0x00, 0x0828A389
	bs_printstring 0x0122
	bs_waitmessage 0x0040
	bs_setbyte 0x02023FDE, 0x08
	bs_finishaction
	bs_waitmessage 0x0040
	bs_printstring 0x0103
	bs_waitmessage 0x0040
	bs_printstring 0x0104
	bs_waitmessage 0x0040
	bs_finishaction

BattleScript_PlayerUsesItem: @ 0x0828A39A
	bs_setbyte 0x0202412C, 0x0F
	bs_moveend 0x01, 0x00
	bs_end

BattleScript_OpponentUsesHealItem: @ 0x0828A3A4
	bs_printstring 0x0130
	bs_pause 0x0030
	bs_playse 0x0001
	bs_printstring 0x0157
	bs_waitmessage 0x0040
	bs_useitemonopponent
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_printstring 0x012A
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x01
	bs_setbyte 0x0202412C, 0x0F
	bs_moveend 0x01, 0x00
	bs_finishaction

BattleScript_OpponentUsesStatusCureItem: @ 0x0828A3D3
	bs_printstring 0x0130
	bs_pause 0x0030
	bs_playse 0x0001
	bs_printstring 0x0157
	bs_waitmessage 0x0040
	bs_useitemonopponent
	bs_printfromtable 0x085ABABA
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x01
	bs_setbyte 0x0202412C, 0x0F
	bs_moveend 0x01, 0x00
	bs_finishaction

BattleScript_OpponentUsesXItem: @ 0x0828A3F7
	bs_printstring 0x0130
	bs_pause 0x0030
	bs_playse 0x0001
	bs_printstring 0x0157
	bs_waitmessage 0x0040
	bs_useitemonopponent
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_setbyte 0x0202412C, 0x0F
	bs_moveend 0x01, 0x00
	bs_finishaction

BattleScript_OpponentUsesGuardSpec: @ 0x0828A419
	bs_printstring 0x0130
	bs_pause 0x0030
	bs_playse 0x0001
	bs_printstring 0x0157
	bs_waitmessage 0x0040
	bs_useitemonopponent
	bs_printfromtable 0x085ABA38
	bs_waitmessage 0x0040
	bs_setbyte 0x0202412C, 0x0F
	bs_moveend 0x01, 0x00
	bs_finishaction

BattleScript_RunByUsingItem: @ 0x0828A43B
	bs_playse 0x0011
	bs_setbyte 0x02023FDE, 0x04
	bs_finishturn

BattleScript_ActionWatchesCarefully: @ 0x0828A445
	bs_printstring 0x011D
	bs_waitmessage 0x0040
	bs_end2

BattleScript_ActionGetNear: @ 0x0828A44C
	bs_printfromtable 0x085ABAB0
	bs_waitmessage 0x0040
	bs_end2

BattleScript_ActionThrowPokeblock: @ 0x0828A455
	bs_printstring 0x0121
	bs_waitmessage 0x0040
	bs_playanimation 0x01, 0x04, 0x00000000
	bs_printfromtable 0x085ABAB4
	bs_waitmessage 0x0040
	bs_end2

BattleScript_ActionWallyThrow: @ 0x0828A46B
	bs_printstring 0x0002
	bs_waitmessage 0x0040
	bs_returnatktoball
	bs_waitstate
	bs_trainerslidein 0x00
	bs_waitstate
	bs_printstring 0x014D
	bs_waitmessage 0x0040
	bs_end2

	.byte 0x00, 0x00, 0x00 @ alignment padding at 0x0828A47D
