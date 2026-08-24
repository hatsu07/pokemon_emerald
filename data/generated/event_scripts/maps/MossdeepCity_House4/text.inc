	@ data/maps/MossdeepCity_House4/scripts.inc:42 MossdeepCity_House4_Text_BrotherLikesToFindBases
	.globl MossdeepCity_House4_Text_BrotherLikesToFindBases
MossdeepCity_House4_Text_BrotherLikesToFindBases: @ 0x0820CCB5
	.string "おとうと ったら\nひとの ひみつきちを さがすのが\lたのしみ なんだって!{EOS}"
	.if (. - MossdeepCity_House4_Text_BrotherLikesToFindBases) > 0x26
	.error "MossdeepCity_House4_Text_BrotherLikesToFindBases may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House4_Text_BrotherLikesToFindBases) < 0x26
	.space 0x26 - (. - MossdeepCity_House4_Text_BrotherLikesToFindBases)
	.endif
	@ data/maps/MossdeepCity_House4/scripts.inc:45 MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle
	.globl MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle
MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle: @ 0x0820CCDB
	.string "おとうと ったら\nともだちの ひみつきちに いって\lポケモンしょうぶを するのが\lたのしみ なんだって!{EOS}"
	.if (. - MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle) > 0x35
	.error "MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle) < 0x35
	.space 0x35 - (. - MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle)
	.endif
	@ data/maps/MossdeepCity_House4/scripts.inc:48 MossdeepCity_House4_Text_YouMadeSecretBaseNearX
	.globl MossdeepCity_House4_Text_YouMadeSecretBaseNearX
MossdeepCity_House4_Text_YouMadeSecretBaseNearX: @ 0x0820CD10
	.string "ひょっとして {STR_VAR_1} に\nひみつきち つくったの きみ?{EOS}"
	.if (. - MossdeepCity_House4_Text_YouMadeSecretBaseNearX) > 0x1c
	.error "MossdeepCity_House4_Text_YouMadeSecretBaseNearX may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House4_Text_YouMadeSecretBaseNearX) < 0x1c
	.space 0x1c - (. - MossdeepCity_House4_Text_YouMadeSecretBaseNearX)
	.endif
	@ data/maps/MossdeepCity_House4/scripts.inc:51 MossdeepCity_House4_Text_MakeSecretBase
	.globl MossdeepCity_House4_Text_MakeSecretBase
MossdeepCity_House4_Text_MakeSecretBase: @ 0x0820CD2C
	.string "きみ どこかに ひみつきち つくりなよ!\nぼくが さがしだして みせるからさ{EOS}"
	.if (. - MossdeepCity_House4_Text_MakeSecretBase) > 0x27
	.error "MossdeepCity_House4_Text_MakeSecretBase may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House4_Text_MakeSecretBase) < 0x27
	.space 0x27 - (. - MossdeepCity_House4_Text_MakeSecretBase)
	.endif
	@ data/maps/MossdeepCity_House4/scripts.inc:54 MossdeepCity_House4_Text_Skitty
	.globl MossdeepCity_House4_Text_Skitty
MossdeepCity_House4_Text_Skitty: @ 0x0820CD53
	.string "エネコ『みゃあん?{EOS}"
	.if (. - MossdeepCity_House4_Text_Skitty) > 0xa
	.error "MossdeepCity_House4_Text_Skitty may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House4_Text_Skitty) < 0xa
	.space 0xa - (. - MossdeepCity_House4_Text_Skitty)
	.endif
	@ analyzed canonical ROM range 0x0820CD5D-0x0820D0C2
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820CD5D: @ 0x0820CD5D
gMapScriptDispatch_MossdeepCity_SpaceCenter_1F_OnLoad_OnTransition: @ 0x0820CD5D
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_0820CDDE
	.byte 0x03
	.4byte EventScript_JP_0820CD68
	.byte 0
EventScript_JP_0820CD68: @ 0x0820CD68
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CD74
	end
EventScript_JP_0820CD74: @ 0x0820CD74
	setobjectxyperm 0x0003, 0x0001, 0x0009
	setobjectmovementtype 0x0003, 0x0A
	setobjectxyperm 0x0005, 0x0000, 0x0008
	setobjectmovementtype 0x0005, 0x0A
	setobjectxyperm 0x0004, 0x0001, 0x0006
	setobjectmovementtype 0x0004, 0x0A
	setobjectxyperm 0x0001, 0x0003, 0x0004
	setobjectmovementtype 0x0001, 0x0A
	setobjectmovementtype 0x0002, 0x0A
	compare_var_to_value 0x409E, 0x0001
	goto_if 0x01, EventScript_JP_0820CDC6
	compare_var_to_value 0x409E, 0x0002
	goto_if 0x01, EventScript_JP_0820CDCE
	compare_var_to_value 0x409E, 0x0003
	goto_if 0x01, EventScript_JP_0820CDD6
	end
EventScript_JP_0820CDC6: @ 0x0820CDC6
	setobjectxyperm 0x0009, 0x000C, 0x0002
	end
EventScript_JP_0820CDCE: @ 0x0820CDCE
	setobjectxyperm 0x0009, 0x000D, 0x0003
	end
EventScript_JP_0820CDD6: @ 0x0820CDD6
	setobjectxyperm 0x0009, 0x000E, 0x0002
	end
EventScript_JP_0820CDDE: @ 0x0820CDDE
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x03, EventScript_JP_0820CDEA
	end
EventScript_JP_0820CDEA: @ 0x0820CDEA
	setmetatile 0x0002, 0x0005, 0x03E4, 0x0001
	return
.globl EventScript_JP_0820CDF4
EventScript_JP_0820CDF4: @ 0x0820CDF4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CE40
	dotimebasedevents
	specialvar_ 0x800D, 0x0100
	buffernumberstring 0x00, 0x800D
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820CE2E
	compare_var_to_value 0x800D, 0x0001
	call_if 0x04, EventScript_JP_0820CE37
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_0820CE2E: @ 0x0820CE2E
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent
	callstd 0x04
	return
EventScript_JP_0820CE37: @ 0x0820CE37
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber
	callstd 0x04
	return
EventScript_JP_0820CE40: @ 0x0820CE40
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	dotimebasedevents
	specialvar_ 0x800D, 0x0100
	buffernumberstring 0x00, 0x800D
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820CE6D
	compare_var_to_value 0x800D, 0x0001
	call_if 0x04, EventScript_JP_0820CE76
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_0820CE6D: @ 0x0820CE6D
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent
	callstd 0x04
	return
EventScript_JP_0820CE76: @ 0x0820CE76
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber
	callstd 0x04
	return
.globl EventScript_JP_0820CE7F
EventScript_JP_0820CE7F: @ 0x0820CE7F
	lock
	faceplayer
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CE96
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection
	callstd 0x04
	release
	end
EventScript_JP_0820CE96: @ 0x0820CE96
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter
	callstd 0x04
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820CEAA
EventScript_JP_0820CEAA: @ 0x0820CEAA
	lock
	faceplayer
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CEF6
	checkflag 0x00C0
	goto_if 0x01, EventScript_JP_0820CEEC
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt
	callstd 0x04
	setorcopyvar 0x8000, 0x005D
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00C0
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers
	callstd 0x04
	release
	end
EventScript_JP_0820CEEC: @ 0x0820CEEC
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers
	callstd 0x04
	release
	end
EventScript_JP_0820CEF6: @ 0x0820CEF6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00C0
	goto_if 0x01, EventScript_JP_0820CF35
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis
	callstd 0x04
	setorcopyvar 0x8000, 0x005D
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00C0
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma
	callstd 0x04
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_0820CF35: @ 0x0820CF35
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma
	callstd 0x04
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820CF49
EventScript_JP_0820CF49: @ 0x0820CF49
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820CF70
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CF7A
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x00, EventScript_JP_0820CF70
	goto EventScript_JP_0820CF7A
	.byte 0x02
EventScript_JP_0820CF70: @ 0x0820CF70
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace
	callstd 0x04
	release
	end
EventScript_JP_0820CF7A: @ 0x0820CF7A
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma
	callstd 0x04
	release
	end
.globl EventScript_JP_0820CF84
EventScript_JP_0820CF84: @ 0x0820CF84
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820CFAB
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x01, EventScript_JP_0820CFC0
	compare_var_to_value 0x405D, 0x0002
	goto_if 0x00, EventScript_JP_0820CFAB
	goto EventScript_JP_0820CFC0
	.byte 0x02
EventScript_JP_0820CFAB: @ 0x0820CFAB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_0820CFC0: @ 0x0820CFC0
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820CFD5
EventScript_JP_0820CFD5: @ 0x0820CFD5
	lock
	faceplayer
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel
	callstd 0x04
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820CFEB
EventScript_JP_0820CFEB: @ 0x0820CFEB
	lockall
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_0820CFF6
EventScript_JP_0820CFF6: @ 0x0820CFF6
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x024A, 0x0000, MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820D00D
EventScript_JP_0820D00D: @ 0x0820D00D
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0016, 0x0000, MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820D024
EventScript_JP_0820D024: @ 0x0820D024
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x024B, 0x0000, MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820D03B
EventScript_JP_0820D03B: @ 0x0820D03B
	lock
	faceplayer
	checkflag 0x00BF
	goto_if 0x01, EventScript_JP_0820D08A
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0074, 0x0000, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat
	setflag 0x00BF
	moveobjectoffscreen 0x0009
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820D094
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820D0A5
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_House4_Movement_FaceLeft_LockFacingDirection_WalkRight_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x409E, 0x0002
	release
	end
EventScript_JP_0820D08A: @ 0x0820D08A
	loadword 0x00, MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle
	callstd 0x04
	release
	end
EventScript_JP_0820D094: @ 0x0820D094
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_House4_Movement_LockFacingDirection_WalkLeft_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x409E, 0x0001
	release
	end
EventScript_JP_0820D0A5: @ 0x0820D0A5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0009, MossdeepCity_House4_Movement_LockFacingDirection_WalkRight_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x409E, 0x0003
	release
	end
MossdeepCity_House4_Movement_LockFacingDirection_WalkLeft_UnlockFacingDirection: @ 0x0820D0B6
	@ object movement sequence
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end
MossdeepCity_House4_Movement_LockFacingDirection_WalkRight_UnlockFacingDirection: @ 0x0820D0BA
	@ object movement sequence
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end
MossdeepCity_House4_Movement_FaceLeft_LockFacingDirection_WalkRight_UnlockFacingDirection: @ 0x0820D0BE
	@ object movement sequence
	face_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end
