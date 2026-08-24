	@ data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc:51 LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon
	.globl LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon
LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon: @ 0x082082B6
	.string "この せかいには\nどれだけの ポケモンが いるのかな?\pいつのひか うみを こえて\nとおい くにの ひとと\lポケモン こうかん したいなあ！{EOS}"
	.if (. - LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon) > 0x47
	.error "LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon) < 0x47
	.space 0x47 - (. - LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon)
	.endif
	@ data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc:54 LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels
	.globl LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels
LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels: @ 0x082082FD
	.string "ちかごろ ひとの ポケモンを うばったり\nいんせきを よこどり したりする\lろくでもない やつらが いるらしいな！{EOS}"
	.if (. - LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels) > 0x3a
	.error "LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels) < 0x3a
	.space 0x3a - (. - LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels)
	.endif
	@ data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc:57 LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels
	.globl LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels
LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels: @ 0x08208337
	.string "ひとの ポケモンを うばったり\nいんせきを よこどり していた\lろくでもない やつら……\pちかごろ すがたを みなくなったよ{EOS}"
	.if (. - LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels) > 0x3f
	.error "LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels) < 0x3f
	.space 0x3f - (. - LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels)
	.endif
	@ analyzed canonical ROM range 0x08208376-0x08208B16
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
gMapScriptDispatch_LilycoveCity_PokemonTrainerFanClub_OnFrame_OnTransition: @ 0x0820839E
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_LilycoveCity_PokemonTrainerFanClub_OnFrame
	.byte 0x03
	.4byte EventScript_JP_08208426
	.byte 0
gMapScriptConditionTable_LilycoveCity_PokemonTrainerFanClub_OnFrame: @ 0x082083A9
	@ conditional map script table
	.2byte 0x4095, 0x0001
	.4byte EventScript_JP_082083B3
	.2byte 0
EventScript_JP_082083B3: @ 0x082083B3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, 0x08208B19
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_PokemonCenter_1F_Movement_WalkFastLeftX2_WalkFastDownX2_WalkFastLeft_WalkFastDown
	@ event command: applymovement
	applymovement 0x0002, LilycoveCity_PokemonCenter_1F_Movement_Delay8_WalkInPlaceFastestDown_WalkDownX3_WalkLeftX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_PokemonCenter_1F_Movement_WalkDown_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_PokemonCenter_1F_Movement_JumpInPlaceRight_WalkFastUpX2_WalkFastRight_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x4095, 0x0002
	releaseall
	end
LilycoveCity_PokemonCenter_1F_Movement_Delay8_WalkInPlaceFastestDown_WalkDownX3_WalkLeftX2: @ 0x0820840E
	@ object movement sequence
	delay_8
	walk_in_place_fastest_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	step_end
LilycoveCity_PokemonCenter_1F_Movement_WalkFastLeftX2_WalkFastDownX2_WalkFastLeft_WalkFastDown: @ 0x08208416
	@ object movement sequence
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	step_end
LilycoveCity_PokemonCenter_1F_Movement_WalkDown_WalkInPlaceFastestRight: @ 0x0820841D
	@ object movement sequence
	walk_down
	walk_in_place_fastest_right
	step_end
LilycoveCity_PokemonCenter_1F_Movement_JumpInPlaceRight_WalkFastUpX2_WalkFastRight_WalkInPlaceFastestDown: @ 0x08208420
	@ object movement sequence
	jump_in_place_right
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_in_place_fastest_down
	step_end
EventScript_JP_08208426: @ 0x08208426
	call EventScript_JP_082084F3
	compare_var_to_value 0x4095, 0x0001
	goto_if 0x01, EventScript_JP_08208611
	compare_var_to_value 0x4095, 0x0002
	goto_if 0x01, EventScript_JP_08208442
	end
EventScript_JP_08208442: @ 0x08208442
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special UpdateMovedLilycoveFanClubMembers
	call EventScript_JP_0820850E
	setvar 0x8004, 0x0008
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085D1
	setvar 0x8004, 0x0009
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085D9
	setvar 0x8004, 0x000A
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085E1
	setvar 0x8004, 0x000B
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085E9
	setvar 0x8004, 0x000C
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085F1
	setvar 0x8004, 0x000D
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085F9
	setvar 0x8004, 0x000E
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08208601
	setvar 0x8004, 0x000F
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08208609
	end
EventScript_JP_082084F3: @ 0x082084F3
	specialvar_ 0x800D, 0x0158
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820850A
	clearflag 0x02DA
	clearflag 0x00D2
	return
EventScript_JP_0820850A: @ 0x0820850A
	setflag 0x02DA
	return
EventScript_JP_0820850E: @ 0x0820850E
	setvar 0x8005, 0x0008
	setvar 0x8004, 0x0008
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085C7
	setvar 0x8004, 0x0009
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085C7
	setvar 0x8004, 0x000A
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085C7
	setvar 0x8004, 0x000B
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085C7
	setvar 0x8004, 0x000C
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085C7
	setvar 0x8004, 0x000D
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085C7
	setvar 0x8004, 0x000E
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085C7
	setvar 0x8004, 0x000F
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082085C7
	compare_var_to_value 0x8005, 0x0005
	goto_if 0x04, EventScript_JP_082085CD
	return
EventScript_JP_082085C7: @ 0x082085C7
	subvar 0x8005, 0x0001
	return
EventScript_JP_082085CD: @ 0x082085CD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special TryPutTrainerFanClubOnAir
	return
EventScript_JP_082085D1: @ 0x082085D1
	setobjectxyperm 0x0001, 0x0007, 0x0005
	return
EventScript_JP_082085D9: @ 0x082085D9
	setobjectxyperm 0x0003, 0x0003, 0x0004
	return
EventScript_JP_082085E1: @ 0x082085E1
	setobjectxyperm 0x0004, 0x0007, 0x0002
	return
EventScript_JP_082085E9: @ 0x082085E9
	setobjectxyperm 0x0005, 0x0005, 0x0005
	return
EventScript_JP_082085F1: @ 0x082085F1
	setobjectxyperm 0x0006, 0x0005, 0x0002
	return
EventScript_JP_082085F9: @ 0x082085F9
	setobjectxyperm 0x0002, 0x0008, 0x0004
	return
EventScript_JP_08208601: @ 0x08208601
	setobjectxyperm 0x0007, 0x0003, 0x0003
	return
EventScript_JP_08208609: @ 0x08208609
	setobjectxyperm 0x0008, 0x0008, 0x0003
	return
EventScript_JP_08208611: @ 0x08208611
	call EventScript_JP_0820850E
	call EventScript_JP_082085D9
	call EventScript_JP_082085E9
	call EventScript_JP_082085F1
	call EventScript_JP_08208601
	call EventScript_JP_08208609
	end
.globl EventScript_JP_08208630
EventScript_JP_08208630: @ 0x08208630
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x000D
	@ event command: special
	special BufferStreakTrainerText
	compare_var_to_value 0x4095, 0x0000
	goto_if 0x01, EventScript_JP_0820869D
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820866F
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x01, EventScript_JP_08208693
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary
	callstd 0x04
	release
	end
EventScript_JP_0820866F: @ 0x0820866F
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08208689
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin
	callstd 0x04
	release
	end
EventScript_JP_08208689: @ 0x08208689
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest
	callstd 0x04
	release
	end
EventScript_JP_08208693: @ 0x08208693
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen
	callstd 0x04
	release
	end
EventScript_JP_0820869D: @ 0x0820869D
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer
	callstd 0x04
	release
	end
.globl EventScript_JP_082086A7
EventScript_JP_082086A7: @ 0x082086A7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x0008
	@ event command: special
	special BufferStreakTrainerText
	compare_var_to_value 0x4095, 0x0000
	goto_if 0x01, EventScript_JP_08208714
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082086E6
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x01, EventScript_JP_0820870A
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly
	callstd 0x04
	release
	end
EventScript_JP_082086E6: @ 0x082086E6
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08208700
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou
	callstd 0x04
	release
	end
EventScript_JP_08208700: @ 0x08208700
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan
	callstd 0x04
	release
	end
EventScript_JP_0820870A: @ 0x0820870A
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly
	callstd 0x04
	release
	end
EventScript_JP_08208714: @ 0x08208714
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly
	callstd 0x04
	release
	end
.globl EventScript_JP_0820871E
EventScript_JP_0820871E: @ 0x0820871E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x0009
	@ event command: special
	special BufferStreakTrainerText
	compare_var_to_value 0x4095, 0x0000
	goto_if 0x01, EventScript_JP_0820878B
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820875D
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x01, EventScript_JP_08208781
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman
	callstd 0x04
	release
	end
EventScript_JP_0820875D: @ 0x0820875D
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08208777
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather
	callstd 0x04
	release
	end
EventScript_JP_08208777: @ 0x08208777
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling
	callstd 0x04
	release
	end
EventScript_JP_08208781: @ 0x08208781
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent
	callstd 0x04
	release
	end
EventScript_JP_0820878B: @ 0x0820878B
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers
	callstd 0x04
	release
	end
.globl EventScript_JP_08208795
EventScript_JP_08208795: @ 0x08208795
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x000A
	@ event command: special
	special BufferStreakTrainerText
	compare_var_to_value 0x4095, 0x0000
	goto_if 0x01, EventScript_JP_08208802
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082087D4
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x01, EventScript_JP_082087F8
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool
	callstd 0x04
	release
	end
EventScript_JP_082087D4: @ 0x082087D4
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082087EE
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer
	callstd 0x04
	release
	end
EventScript_JP_082087EE: @ 0x082087EE
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
	callstd 0x04
	release
	end
EventScript_JP_082087F8: @ 0x082087F8
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe
	callstd 0x04
	release
	end
EventScript_JP_08208802: @ 0x08208802
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat
	callstd 0x04
	release
	end
.globl EventScript_JP_0820880C
EventScript_JP_0820880C: @ 0x0820880C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x000B
	@ event command: special
	special BufferStreakTrainerText
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08208840
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x01, EventScript_JP_08208864
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool
	callstd 0x04
	release
	end
EventScript_JP_08208840: @ 0x08208840
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820885A
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou
	callstd 0x04
	release
	end
EventScript_JP_0820885A: @ 0x0820885A
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou
	callstd 0x04
	release
	end
EventScript_JP_08208864: @ 0x08208864
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan
	callstd 0x04
	release
	end
.globl EventScript_JP_0820886E
EventScript_JP_0820886E: @ 0x0820886E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x000C
	@ event command: special
	special BufferStreakTrainerText
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082088A2
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x01, EventScript_JP_082088C6
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne
	callstd 0x04
	release
	end
EventScript_JP_082088A2: @ 0x082088A2
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082088BC
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll
	callstd 0x04
	release
	end
EventScript_JP_082088BC: @ 0x082088BC
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner
	callstd 0x04
	release
	end
EventScript_JP_082088C6: @ 0x082088C6
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer
	callstd 0x04
	release
	end
.globl EventScript_JP_082088D0
EventScript_JP_082088D0: @ 0x082088D0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x000E
	@ event command: special
	special BufferStreakTrainerText
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08208904
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x01, EventScript_JP_08208928
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout
	callstd 0x04
	release
	end
EventScript_JP_08208904: @ 0x08208904
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820891E
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind
	callstd 0x04
	release
	end
EventScript_JP_0820891E: @ 0x0820891E
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation
	callstd 0x04
	release
	end
EventScript_JP_08208928: @ 0x08208928
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger
	callstd 0x04
	release
	end
.globl EventScript_JP_08208932
EventScript_JP_08208932: @ 0x08208932
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x000F
	@ event command: special
	special BufferStreakTrainerText
	specialvar_ 0x800D, 0x00A3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08208966
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x01, EventScript_JP_0820898A
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential
	callstd 0x04
	release
	end
EventScript_JP_08208966: @ 0x08208966
	specialvar_ 0x800D, 0x00A4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08208980
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive
	callstd 0x04
	release
	end
EventScript_JP_08208980: @ 0x08208980
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth
	callstd 0x04
	release
	end
EventScript_JP_0820898A: @ 0x0820898A
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength
	callstd 0x04
	release
	end
.globl EventScript_JP_08208994
EventScript_JP_08208994: @ 0x08208994
	lock
	faceplayer
	checkflag 0x00D2
	goto_if 0x01, EventScript_JP_08208B06
	checkflag 0x00D2
	goto_if 0x00, EventScript_JP_082089A9
	end
EventScript_JP_082089A9: @ 0x082089A9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8005, 0x000B
	@ event command: special
	special InterviewBefore
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08208B18
	copyvar 0x800A, 0x8006
	setvar 0x8004, 0x0008
	@ event command: special
	special BufferStreakTrainerText
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer
	callstd 0x04
	setvar 0x8004, 0x000E
	copyvar 0x8005, 0x800A
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082089F9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08208A07
	end
EventScript_JP_082089F9: @ 0x082089F9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink
	callstd 0x04
	goto EventScript_JP_08208A66
	.byte 0x02
EventScript_JP_08208A07: @ 0x08208A07
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0008
	@ event command: special
	special BufferStreakTrainerText
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DE51
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08208ADF
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08208A2E
	end
EventScript_JP_08208A2E: @ 0x08208A2E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0008
	@ event command: special
	special BufferStreakTrainerText
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2
	callstd 0x04
	setvar 0x8004, 0x000E
	copyvar 0x8005, 0x800A
	call 0x08242F08
	lock
	faceplayer
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082089F9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08208A07
	end
EventScript_JP_08208A66: @ 0x08208A66
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0008
	@ event command: special
	special BufferStreakTrainerText
	message LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer
	waitmessage
	setvar 0x8004, 0x0002
	@ event command: special
	special ShowScrollableMultichoice
	waitstate
	setvar 0x8004, 0x0008
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x000B
	goto_if 0x01, EventScript_JP_08208AB8
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08208AB8
	setvar 0x8004, 0x0008
	@ event command: special
	special BufferStreakTrainerText
	copyvar 0x8006, 0x800A
	copyvar 0x8005, 0x800D
	@ event command: special
	special PutFanClubSpecialOnTheAir
	goto EventScript_JP_08208AF1
	.byte 0x02
EventScript_JP_08208AB8: @ 0x08208AB8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0008
	@ event command: special
	special BufferStreakTrainerText
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DEA3
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08208ADF
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08208A66
	end
EventScript_JP_08208ADF: @ 0x08208ADF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0008
	@ event command: special
	special BufferStreakTrainerText
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer
	callstd 0x04
	release
	end
EventScript_JP_08208AF1: @ 0x08208AF1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0008
	@ event command: special
	special BufferStreakTrainerText
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo
	callstd 0x04
	setflag 0x00D2
	release
	end
EventScript_JP_08208B06: @ 0x08208B06
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0008
	@ event command: special
	special BufferStreakTrainerText
	loadword 0x00, LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial
	callstd 0x04
	release
