	@ Decoded from ROM 0x081DB7E8-0x081DBD52.
	@ This file is included after asm/macros/event.inc by
	@ data/generated/event_scripts/segments/000.inc.
	.include "asm/macros/asm.inc"
	.include "asm/macros/map.inc"
	.include "asm/macros/movement.inc"

	@ Map-script types.
	.set PETALBURG_MAP_SCRIPT_ON_FRAME_TABLE, 2
	.set PETALBURG_MAP_SCRIPT_ON_TRANSITION, 3

	@ Local object IDs.
	.set PETALBURG_LOCALID_GYM_BOY, 8
	.set PETALBURG_LOCALID_WALLY, 2
	.set PETALBURG_LOCALID_BOY, 3
	.set PETALBURG_LOCALID_WALLYS_DAD, 5
	.set PETALBURG_LOCALID_SCOTT, 9
	.set PETALBURG_LOCALID_PLAYER, 0xFF

	@ Event variables.
	.set PETALBURG_VAR_CITY_STATE, 0x4057
	.set PETALBURG_VAR_GYM_STATE, 0x4085
	.set PETALBURG_VAR_SCOTT_PETALBURG_ENCOUNTER, 0x40C9
	.set PETALBURG_VAR_SCOTT_STATE, 0x40D1
	.set PETALBURG_VAR_0x8004, 0x8004
	.set PETALBURG_VAR_0x8005, 0x8005
	.set PETALBURG_VAR_0x8008, 0x8008

	@ Event flags.
	.set PETALBURG_FLAG_HIDE_MAP_NAME_POPUP, 0x4000
	.set PETALBURG_FLAG_DONT_TRANSITION_MUSIC, 0x4001
	.set PETALBURG_FLAG_HIDE_WALLYS_DAD, 0x033E
	.set PETALBURG_FLAG_VISITED, 0x0876

	@ Map IDs use (group << 8) | map number.
	.set PETALBURG_MAP_CITY, 0x0000
	.set PETALBURG_MAP_WALLYS_HOUSE, 0x0800
	.set PETALBURG_MAP_GYM, 0x0801

	@ Music and sound-effect IDs.
	.set PETALBURG_MUS_FOLLOW_ME, 0x01A4
	.set PETALBURG_SE_PIN, 0x0015

	@ Special-function table IDs.
	.set PETALBURG_SPECIAL_START_WALLY_TUTORIAL_BATTLE, 0x009D
	.set PETALBURG_SPECIAL_SAVE_PLAYER_PARTY, 0x0027
	.set PETALBURG_SPECIAL_LOAD_PLAYER_PARTY, 0x0028
	.set PETALBURG_SPECIAL_LOAD_WALLY_ZIGZAGOON, 0x012C

	@ External scripts/text/movements that live outside this extracted block.
	.set PetalburgCity_Ext_Route102_WatchMeCatchPokemon, 0x081E693C
	.set PetalburgCity_Ext_Route102_WallyIDidIt, 0x081E6992
	.set PetalburgCity_Ext_Route102_LetsGoBack, 0x081E69B0
	.set PetalburgCity_Ext_QuestionMark, 0x08243619
	.set PetalburgCity_Ext_WallyFaceLeft, 0x08243627
	.set PetalburgCity_Ext_FacePlayer, 0x08243621
	.set PetalburgCity_Ext_FaceOriginalDirection, 0x08243625
	.set PetalburgCity_Ext_ExclamationMark, 0x0824361B
	.set PetalburgCity_Ext_Delay48, 0x0824361D
	.set PetalburgCity_Ext_WalkInPlaceFasterLeft, 0x08243627
	.set PetalburgCity_Ext_WalkInPlaceFasterUp, 0x08243629
	.set PetalburgCity_Ext_WalkInPlaceFasterRight, 0x0824362B
	.set PetalburgCity_Ext_WalkInPlaceFasterDown, 0x0824362D
	.set PetalburgCity_Ext_FaceUp, 0x08243635

	.macro petalburg_special id:req
	.byte 0x25
	.2byte \id
	.endm


	@ Export map/event entry points for map data and future source conversion.
	.globl PetalburgCity_OnTransition
	.globl PetalburgCity_EventScript_MoveGymBoyToWestEntrance
	.globl PetalburgCity_EventScript_DisableMapNameAndMusic
	.globl PetalburgCity_EventScript_SetGymDoorsUnlocked
	.globl PetalburgCity_OnFrame
	.globl PetalburgCity_EventScript_WallyTutorial
	.globl PetalburgCity_EventScript_WalkToWallyHouse
	.globl PetalburgCity_EventScript_Boy
	.globl PetalburgCity_EventScript_WallysMom
	.globl PetalburgCity_EventScript_GymSign
	.globl PetalburgCity_EventScript_CitySign
	.globl PetalburgCity_EventScript_Gentleman
	.globl PetalburgCity_EventScript_WallyHouseSign
	.globl PetalburgCity_EventScript_ShowGymToPlayer0
	.globl PetalburgCity_EventScript_ShowGymToPlayer1
	.globl PetalburgCity_EventScript_ShowGymToPlayer2
	.globl PetalburgCity_EventScript_ShowGymToPlayer3
	.globl PetalburgCity_EventScript_ShowGymToPlayer
	.globl PetalburgCity_EventScript_BoyApproachPlayer0
	.globl PetalburgCity_EventScript_BoyApproachPlayer1
	.globl PetalburgCity_EventScript_BoyApproachPlayer2
	.globl PetalburgCity_EventScript_BoyApproachPlayer3
	.globl PetalburgCity_EventScript_LeadPlayerToGym0
	.globl PetalburgCity_EventScript_LeadPlayerToGym1
	.globl PetalburgCity_EventScript_LeadPlayerToGym2
	.globl PetalburgCity_EventScript_LeadPlayerToGym3
	.globl PetalburgCity_EventScript_Scott0
	.globl PetalburgCity_EventScript_Scott1
	.globl PetalburgCity_EventScript_Scott2
	.globl PetalburgCity_EventScript_Scott3
	.globl PetalburgCity_EventScript_Scott
	.globl PetalburgCity_EventScript_ScottExit0
	.globl PetalburgCity_EventScript_ScottExit1
	.globl PetalburgCity_EventScript_ScottExit2
	.globl PetalburgCity_EventScript_ScottExit3
	.globl PetalburgCity_EventScript_GymBoy

	.globl PetalburgCity_MapScripts
	.globl PetalburgCity_MapScripts
PetalburgCity_MapScripts:
	map_script PETALBURG_MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	map_script PETALBURG_MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
	.byte 0

PetalburgCity_OnTransition:
	setflag PETALBURG_FLAG_VISITED
	compare_var_to_value PETALBURG_VAR_CITY_STATE, 0
	call_if 1, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
	compare_var_to_value PETALBURG_VAR_CITY_STATE, 2
	call_if 1, PetalburgCity_EventScript_DisableMapNameAndMusic
	compare_var_to_value PETALBURG_VAR_CITY_STATE, 4
	call_if 1, PetalburgCity_EventScript_DisableMapNameAndMusic
	compare_var_to_value PETALBURG_VAR_GYM_STATE, 8
	call_if 1, PetalburgCity_EventScript_SetGymDoorsUnlocked
	end

PetalburgCity_EventScript_MoveGymBoyToWestEntrance:
	setobjectxyperm PETALBURG_LOCALID_GYM_BOY, 5, 11
	return

PetalburgCity_EventScript_DisableMapNameAndMusic:
	setflag PETALBURG_FLAG_HIDE_MAP_NAME_POPUP
	savebgm PETALBURG_MUS_FOLLOW_ME
	return

PetalburgCity_EventScript_SetGymDoorsUnlocked:
	setvar PETALBURG_VAR_GYM_STATE, 7
	return

PetalburgCity_OnFrame:
	map_script_2 PETALBURG_VAR_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
	map_script_2 PETALBURG_VAR_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
	.2byte 0

PetalburgCity_EventScript_WallyTutorial:
	lockall
	petalburg_special PETALBURG_SPECIAL_SAVE_PLAYER_PARTY
	petalburg_special PETALBURG_SPECIAL_LOAD_WALLY_ZIGZAGOON
	applymovement PETALBURG_LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
	waitmovement 0
	msgbox PetalburgCity_Ext_Route102_WatchMeCatchPokemon, MSGBOX_DEFAULT
	petalburg_special PETALBURG_SPECIAL_START_WALLY_TUTORIAL_BATTLE
	waitstate
	msgbox PetalburgCity_Ext_Route102_WallyIDidIt, MSGBOX_DEFAULT
	applymovement PETALBURG_LOCALID_WALLY, PetalburgCity_Ext_WallyFaceLeft, PETALBURG_MAP_CITY
	waitmovement PETALBURG_LOCALID_WALLY, PETALBURG_MAP_CITY
	msgbox PetalburgCity_Ext_Route102_LetsGoBack, MSGBOX_DEFAULT
	closemessage
	clearflag PETALBURG_FLAG_HIDE_MAP_NAME_POPUP
	setvar PETALBURG_VAR_CITY_STATE, 3
	fadedefaultbgm
	clearflag PETALBURG_FLAG_DONT_TRANSITION_MUSIC
	petalburg_special PETALBURG_SPECIAL_LOAD_PLAYER_PARTY
	setvar PETALBURG_VAR_GYM_STATE, 1
	warp PETALBURG_MAP_GYM, 0xFF, 4, 108
	waitstate
	releaseall
	end

PetalburgCity_EventScript_WalkToWallyHouse:
	lockall
	setflag PETALBURG_FLAG_HIDE_MAP_NAME_POPUP
	applymovement PETALBURG_LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
	waitmovement 0
	setvar PETALBURG_VAR_0x8004, 7
	setvar PETALBURG_VAR_0x8005, 5
	opendoor PETALBURG_VAR_0x8004, PETALBURG_VAR_0x8005
	waitdooranim
	applymovement PETALBURG_LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
	waitmovement 0
	setflag PETALBURG_FLAG_HIDE_WALLYS_DAD
	hideobjectat PETALBURG_LOCALID_PLAYER, PETALBURG_MAP_CITY
	closedoor PETALBURG_VAR_0x8004, PETALBURG_VAR_0x8005
	waitdooranim
	clearflag PETALBURG_FLAG_HIDE_MAP_NAME_POPUP
	fadedefaultbgm
	clearflag PETALBURG_FLAG_DONT_TRANSITION_MUSIC
	warp PETALBURG_MAP_WALLYS_HOUSE, 0xFF, 2, 4
	waitstate
	releaseall
	end

PetalburgCity_EventScript_Boy:
	lock
	faceplayer
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
	closemessage
	applymovement PETALBURG_LOCALID_BOY, PetalburgCity_Ext_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_EventScript_WallysMom:
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end

PetalburgCity_Movement_WalkToWallyHousePlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHousePlayer:
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkToWallyHouseWallysDad:
	delay_8
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHouseWallysDad:
	walk_up
	set_invisible
	step_end

PetalburgCity_Movement_WallyTutorialPlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_in_place_fastest_right
	step_end

PetalburgCity_Movement_WallyTutorialWally:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end

PetalburgCity_EventScript_GymSign:
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_CitySign:
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_Gentleman:
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end

PetalburgCity_EventScript_WallyHouseSign:
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_ShowGymToPlayer0:
	lockall
	setvar PETALBURG_VAR_0x8008, 0
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer1:
	lockall
	setvar PETALBURG_VAR_0x8008, 1
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer2:
	lockall
	setvar PETALBURG_VAR_0x8008, 2
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer3:
	lockall
	setvar PETALBURG_VAR_0x8008, 3
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer:
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Ext_FacePlayer
	waitmovement 0
	playbgm PETALBURG_MUS_FOLLOW_ME, 0
	playse PETALBURG_SE_PIN
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Ext_ExclamationMark
	waitmovement 0
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Ext_Delay48
	waitmovement 0
	compare_var_to_value PETALBURG_VAR_0x8008, 0
	call_if 1, PetalburgCity_EventScript_BoyApproachPlayer0
	compare_var_to_value PETALBURG_VAR_0x8008, 1
	call_if 1, PetalburgCity_EventScript_BoyApproachPlayer1
	compare_var_to_value PETALBURG_VAR_0x8008, 2
	call_if 1, PetalburgCity_EventScript_BoyApproachPlayer2
	compare_var_to_value PETALBURG_VAR_0x8008, 3
	call_if 1, PetalburgCity_EventScript_BoyApproachPlayer3
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
	closemessage
	compare_var_to_value PETALBURG_VAR_0x8008, 0
	call_if 1, PetalburgCity_EventScript_LeadPlayerToGym0
	compare_var_to_value PETALBURG_VAR_0x8008, 1
	call_if 1, PetalburgCity_EventScript_LeadPlayerToGym1
	compare_var_to_value PETALBURG_VAR_0x8008, 2
	call_if 1, PetalburgCity_EventScript_LeadPlayerToGym2
	compare_var_to_value PETALBURG_VAR_0x8008, 3
	call_if 1, PetalburgCity_EventScript_LeadPlayerToGym3
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Ext_WalkInPlaceFasterRight
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Ext_WalkInPlaceFasterRight
	waitmovement 0
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
	closemessage
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

PetalburgCity_EventScript_BoyApproachPlayer0:
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
	waitmovement 0
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Ext_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer1:
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer2:
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
	waitmovement 0
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Ext_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer3:
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
	waitmovement 0
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Ext_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym0:
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym1:
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym2:
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym3:
	applymovement PETALBURG_LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
	waitmovement 0
	return

@ Unused in the original map data.
PetalburgCity_Movement_Delay48:
	delay_16
	delay_16
	delay_16
	step_end

PetalburgCity_Movement_BoyApproachPlayer0:
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

PetalburgCity_Movement_BoyApproachPlayer1:
	walk_right
	walk_right
	step_end

PetalburgCity_Movement_BoyApproachPlayer2:
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end

PetalburgCity_Movement_BoyApproachPlayer3:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end

PetalburgCity_Movement_BoyWalkToGym0:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

PetalburgCity_Movement_BoyWalkToGym1:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

PetalburgCity_Movement_BoyWalkToGym2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

PetalburgCity_Movement_BoyWalkToGym3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

PetalburgCity_Movement_BoyWalkAway:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWalkToGym0:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym1:
	delay_16
	delay_16
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym2:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym3:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_Scott0:
	lockall
	addobject PETALBURG_LOCALID_SCOTT
	setvar PETALBURG_VAR_0x8008, 0
	setobjectxy PETALBURG_LOCALID_SCOTT, 13, 10
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott1:
	lockall
	addobject PETALBURG_LOCALID_SCOTT
	setvar PETALBURG_VAR_0x8008, 1
	setobjectxy PETALBURG_LOCALID_SCOTT, 13, 11
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott2:
	lockall
	addobject PETALBURG_LOCALID_SCOTT
	setvar PETALBURG_VAR_0x8008, 2
	setobjectxy PETALBURG_LOCALID_SCOTT, 13, 12
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott3:
	lockall
	addobject PETALBURG_LOCALID_SCOTT
	setvar PETALBURG_VAR_0x8008, 3
	setobjectxy PETALBURG_LOCALID_SCOTT, 13, 13
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott:
	applymovement PETALBURG_LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
	waitmovement 0
	playse PETALBURG_SE_PIN
	applymovement PETALBURG_LOCALID_SCOTT, PetalburgCity_Ext_ExclamationMark
	waitmovement 0
	applymovement PETALBURG_LOCALID_SCOTT, PetalburgCity_Ext_Delay48
	waitmovement 0
	applymovement PETALBURG_LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
	waitmovement 0
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Ext_WalkInPlaceFasterRight
	waitmovement 0
	setvar PETALBURG_VAR_SCOTT_STATE, 1
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
	closemessage
	applymovement PETALBURG_LOCALID_SCOTT, PetalburgCity_Ext_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
	closemessage
	applymovement PETALBURG_LOCALID_SCOTT, PetalburgCity_Ext_WalkInPlaceFasterLeft
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
	closemessage
	compare_var_to_value PETALBURG_VAR_0x8008, 0
	call_if 1, PetalburgCity_EventScript_ScottExit0
	compare_var_to_value PETALBURG_VAR_0x8008, 1
	call_if 1, PetalburgCity_EventScript_ScottExit1
	compare_var_to_value PETALBURG_VAR_0x8008, 2
	call_if 1, PetalburgCity_EventScript_ScottExit2
	compare_var_to_value PETALBURG_VAR_0x8008, 3
	call_if 1, PetalburgCity_EventScript_ScottExit3
	setvar PETALBURG_VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	removeobject PETALBURG_LOCALID_SCOTT
	releaseall
	end

PetalburgCity_EventScript_ScottExit0:
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
	applymovement PETALBURG_LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit1:
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
	applymovement PETALBURG_LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit2:
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
	applymovement PETALBURG_LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit3:
	applymovement PETALBURG_LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
	applymovement PETALBURG_LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
	waitmovement 0
	return

PetalburgCity_Movement_ScottStartWalkLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottApproachPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottExit0:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit0:
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

PetalburgCity_Movement_ScottExit1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit1:
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

PetalburgCity_Movement_ScottExit2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit2:
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

PetalburgCity_Movement_ScottExit3:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit3:
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

PetalburgCity_EventScript_GymBoy:
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end

	@ data/maps/PetalburgCity/scripts.inc:700 PetalburgCity_Text_WhereIsWally
	.globl PetalburgCity_Text_WhereIsWally
PetalburgCity_Text_WhereIsWally: @ 0x081DBD53
	.string "うちの ミツルは どこまで\nあそびに いっちゃったの かしら……\pもう そろそろ シダケタウンに\nでかける じかん だって いうのに……{EOS}"
	.if (. - PetalburgCity_Text_WhereIsWally) > 0x45
	.error "PetalburgCity_Text_WhereIsWally may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_WhereIsWally) < 0x45
	.space 0x45 - (. - PetalburgCity_Text_WhereIsWally)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:706 PetalburgCity_Text_AreYouRookieTrainer
	.globl PetalburgCity_Text_AreYouRookieTrainer
PetalburgCity_Text_AreYouRookieTrainer: @ 0x081DBD98
	.string "きみ! もしかして……\nトレーナーに なりたて かい?\pぼくら ポケモン トレーナーは\nあたらしい まちに とうちゃく したら\pまずは そこに どんな ジムがあるのか\nかくにん しておく ものなんだ!{EOS}"
	.if (. - PetalburgCity_Text_AreYouRookieTrainer) > 0x65
	.error "PetalburgCity_Text_AreYouRookieTrainer may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_AreYouRookieTrainer) < 0x65
	.space 0x65 - (. - PetalburgCity_Text_AreYouRookieTrainer)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:714 PetalburgCity_Text_ThisIsPetalburgGym
	.globl PetalburgCity_Text_ThisIsPetalburgGym
PetalburgCity_Text_ThisIsPetalburgGym: @ 0x081DBDFD
	.string "ほら ここが トウカシティの ジムさ!{EOS}"
	.if (. - PetalburgCity_Text_ThisIsPetalburgGym) > 0x14
	.error "PetalburgCity_Text_ThisIsPetalburgGym may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_ThisIsPetalburgGym) < 0x14
	.space 0x14 - (. - PetalburgCity_Text_ThisIsPetalburgGym)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:717 PetalburgCity_Text_ThisIsGymSign
	.globl PetalburgCity_Text_ThisIsGymSign
PetalburgCity_Text_ThisIsGymSign: @ 0x081DBE11
	.string "これが ジムの かんばん だから\nかたちを よく おぼえておくと いいね!{EOS}"
	.if (. - PetalburgCity_Text_ThisIsGymSign) > 0x26
	.error "PetalburgCity_Text_ThisIsGymSign may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_ThisIsGymSign) < 0x26
	.space 0x26 - (. - PetalburgCity_Text_ThisIsGymSign)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:721 PetalburgCity_Text_WaterReflection
	.globl PetalburgCity_Text_WaterReflection
PetalburgCity_Text_WaterReflection: @ 0x081DBE37
	.string "ぼくの かおが すいめんに うつってる……\pきぼうに あふれた\nかがやく えがお……\pふあんと たたかう\nしずかな ちんもく……\pきみの かおは どんなふうに うつってる?{EOS}"
	.if (. - PetalburgCity_Text_WaterReflection) > 0x57
	.error "PetalburgCity_Text_WaterReflection may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_WaterReflection) < 0x57
	.space 0x57 - (. - PetalburgCity_Text_WaterReflection)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:729 PetalburgCity_Text_FullPartyExplanation
	.globl PetalburgCity_Text_FullPartyExplanation
PetalburgCity_Text_FullPartyExplanation: @ 0x081DBE8E
	.string "ポケモンを すでに 6ぴき もってるときに\nあたらしく ポケモンを つかまえる\pすると パソコン つうしんで じどうてきに\nボックスに おくられるのだよ!{EOS}"
	.if (. - PetalburgCity_Text_FullPartyExplanation) > 0x4e
	.error "PetalburgCity_Text_FullPartyExplanation may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_FullPartyExplanation) < 0x4e
	.space 0x4e - (. - PetalburgCity_Text_FullPartyExplanation)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:735 PetalburgCity_Text_GymSign
	.globl PetalburgCity_Text_GymSign
PetalburgCity_Text_GymSign: @ 0x081DBEDC
	.string "トウカ シティ ポケモンジム\nリーダー センリ\lつよさを おいもとめる おとこ!{EOS}"
	.if (. - PetalburgCity_Text_GymSign) > 0x29
	.error "PetalburgCity_Text_GymSign may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_GymSign) < 0x29
	.space 0x29 - (. - PetalburgCity_Text_GymSign)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:740 PetalburgCity_Text_CitySign
	.globl PetalburgCity_Text_CitySign
PetalburgCity_Text_CitySign: @ 0x081DBF05
	.string "ここは トウカ シティ\nしぜんと ひとが ふれあう まち{EOS}"
	.if (. - PetalburgCity_Text_CitySign) > 0x1d
	.error "PetalburgCity_Text_CitySign may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_CitySign) < 0x1d
	.space 0x1d - (. - PetalburgCity_Text_CitySign)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:744 PetalburgCity_Text_WallyHouseSign
	.globl PetalburgCity_Text_WallyHouseSign
PetalburgCity_Text_WallyHouseSign: @ 0x081DBF22
	.string "「ミツルの いえ」{EOS}"
	.if (. - PetalburgCity_Text_WallyHouseSign) > 0xa
	.error "PetalburgCity_Text_WallyHouseSign may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_WallyHouseSign) < 0xa
	.space 0xa - (. - PetalburgCity_Text_WallyHouseSign)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:747 PetalburgCity_Text_AreYouATrainer
	.globl PetalburgCity_Text_AreYouATrainer
PetalburgCity_Text_AreYouATrainer: @ 0x081DBF2C
	.string "きみ! その いでたちは……\nポケモン トレーナーさん かい?{EOS}"
	.if (. - PetalburgCity_Text_AreYouATrainer) > 0x20
	.error "PetalburgCity_Text_AreYouATrainer may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_AreYouATrainer) < 0x20
	.space 0x20 - (. - PetalburgCity_Text_AreYouATrainer)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:751 PetalburgCity_Text_WellMaybeNot
	.globl PetalburgCity_Text_WellMaybeNot
PetalburgCity_Text_WellMaybeNot: @ 0x081DBF4C
	.string "…… …… ……\pいや それにしては\nふくが あまり よごれて いない……\pデビューしたての トレーナーか\nあるいは ふつうの おこさま…… かな?{EOS}"
	.if (. - PetalburgCity_Text_WellMaybeNot) > 0x4b
	.error "PetalburgCity_Text_WellMaybeNot may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_WellMaybeNot) < 0x4b
	.space 0x4b - (. - PetalburgCity_Text_WellMaybeNot)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:758 PetalburgCity_Text_ImLookingForTalentedTrainers
	.globl PetalburgCity_Text_ImLookingForTalentedTrainers
PetalburgCity_Text_ImLookingForTalentedTrainers: @ 0x081DBF97
	.string "わたしは さいのうある トレーナーを\nさがし もとめて\lかくちを たびして いるんだ\pよびとめたりして すまなかったね{EOS}"
	.if (. - PetalburgCity_Text_ImLookingForTalentedTrainers) > 0x3c
	.error "PetalburgCity_Text_ImLookingForTalentedTrainers may not grow beyond its original slot"
	.endif
	.if (. - PetalburgCity_Text_ImLookingForTalentedTrainers) < 0x3c
	.space 0x3c - (. - PetalburgCity_Text_ImLookingForTalentedTrainers)
	.endif
