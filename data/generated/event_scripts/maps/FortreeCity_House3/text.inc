	@ data/maps/FortreeCity_House3/scripts.inc:12 FortreeCity_House3_Text_MetStevenHadAmazingPokemon
	.globl FortreeCity_House3_Text_MetStevenHadAmazingPokemon
FortreeCity_House3_Text_MetStevenHadAmazingPokemon: @ 0x082050E3
	.string "ポケモンずかんで\nおもいだした ことが あるよ\pめずらしい いしを さがしてるとき\nダイゴって トレーナーと であったけど\lあいつの ポケモン すごいね!\pめずらしい だけでなく\nおそろしいほど きたえられてた!\pもしかしたら この まちの\nジムリーダーよりも つよいかも……{EOS}"
	.if (. - FortreeCity_House3_Text_MetStevenHadAmazingPokemon) > 0x8b
	.error "FortreeCity_House3_Text_MetStevenHadAmazingPokemon may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House3_Text_MetStevenHadAmazingPokemon) < 0x8b
	.space 0x8b - (. - FortreeCity_House3_Text_MetStevenHadAmazingPokemon)
	.endif
	@ data/maps/FortreeCity_House3/scripts.inc:15 FortreeCity_House3_Text_OhYouHavePokedex
	.globl FortreeCity_House3_Text_OhYouHavePokedex
FortreeCity_House3_Text_OhYouHavePokedex: @ 0x0820516E
	.string "きみの もっている それ なに?\p…… …… ……\pへー ポケモンずかん っていうんだ?\nすごいねえ!{EOS}"
	.if (. - FortreeCity_House3_Text_OhYouHavePokedex) > 0x34
	.error "FortreeCity_House3_Text_OhYouHavePokedex may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House3_Text_OhYouHavePokedex) < 0x34
	.space 0x34 - (. - FortreeCity_House3_Text_OhYouHavePokedex)
	.endif
	@ analyzed canonical ROM range 0x082051A2-0x08205254
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082051A2: @ 0x082051A2
	.byte 0x00
.globl EventScript_JP_082051A3
EventScript_JP_082051A3: @ 0x082051A3
	loadword 0x00, FortreeCity_House4_Text_BringsWorldCloserTogether
	callstd 0x02
	end
.globl EventScript_JP_082051AC
EventScript_JP_082051AC: @ 0x082051AC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x00DF
	goto_if 0x01, EventScript_JP_08205228
	checkflag 0x00E0
	goto_if 0x01, EventScript_JP_082051FA
	checkflag 0x00DE
	goto_if 0x01, EventScript_JP_082051E6
	loadword 0x00, FortreeCity_House4_Text_GoBirdPokemon
	callstd 0x04
	closemessage
	setflag 0x00DE
	clearflag 0x03A6
	@ event command: applymovement
	applymovement 0x0003, FortreeCity_House3_Movement_WalkFastDownX2_WalkFastRight_WalkInPlaceFastestDown_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x0003
	releaseall
	end
EventScript_JP_082051E6: @ 0x082051E6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, FortreeCity_House4_Text_AskedWingullToRunErrand
	callstd 0x04
	releaseall
	end
EventScript_JP_082051FA: @ 0x082051FA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb
	callstd 0x04
	setorcopyvar 0x8000, 0x00B9
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00DF
	releaseall
	end
EventScript_JP_08205228: @ 0x08205228
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, FortreeCity_House4_Text_FriendsFarAwayThanksToWingull
	callstd 0x04
	releaseall
	end
FortreeCity_House3_Movement_WalkFastDownX2_WalkFastRight_WalkInPlaceFastestDown_Delay8: @ 0x0820523C
	@ object movement sequence
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_in_place_fastest_down
	delay_8
	step_end
.globl EventScript_JP_08205242
EventScript_JP_08205242: @ 0x08205242
	lock
	faceplayer
	waitse
	playmoncry 0x0135, 0x0000
	loadword 0x00, FortreeCity_House4_Text_Wingull_Copy_Rom_205338
	callstd 0x04
	waitmoncry
	release
	end
