	@ data/maps/MossdeepCity_House1/scripts.inc:24 MossdeepCity_House1_Text_HmmYourPokemon
	.globl MossdeepCity_House1_Text_HmmYourPokemon
MossdeepCity_House1_Text_HmmYourPokemon: @ 0x0820C36C
	.string "ムムムッ!\nきみの {STR_VAR_1}……{EOS}"
	.if (. - MossdeepCity_House1_Text_HmmYourPokemon) > 0xf
	.error "MossdeepCity_House1_Text_HmmYourPokemon may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House1_Text_HmmYourPokemon) < 0xf
	.space 0xf - (. - MossdeepCity_House1_Text_HmmYourPokemon)
	.endif
	@ data/maps/MossdeepCity_House1/scripts.inc:27 MossdeepCity_House1_Text_ItLikesXPokeblocks
	.globl MossdeepCity_House1_Text_ItLikesXPokeblocks
MossdeepCity_House1_Text_ItLikesXPokeblocks: @ 0x0820C37B
	.string "{STR_VAR_1} が すきだろう!\pいや まちがいなく\n{STR_VAR_1} が すきだ!{EOS}"
	.if (. - MossdeepCity_House1_Text_ItLikesXPokeblocks) > 0x20
	.error "MossdeepCity_House1_Text_ItLikesXPokeblocks may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House1_Text_ItLikesXPokeblocks) < 0x20
	.space 0x20 - (. - MossdeepCity_House1_Text_ItLikesXPokeblocks)
	.endif
	@ data/maps/MossdeepCity_House1/scripts.inc:30 MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks
	.globl MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks
MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks: @ 0x0820C39B
	.string "ポロックの すききらいは ないみたいだな{EOS}"
	.if (. - MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks) > 0x15
	.error "MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks) < 0x15
	.space 0x15 - (. - MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks)
	.endif
	@ data/maps/MossdeepCity_House1/scripts.inc:33 MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes
	.globl MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes
MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes: @ 0x0820C3B0
	.string "だんなったら みただけで\nポケモンが すきな ポロック わかるのよ{EOS}"
	.if (. - MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes) > 0x22
	.error "MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes) < 0x22
	.space 0x22 - (. - MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes)
	.endif
	@ analyzed canonical ROM range 0x0820C3D2-0x0820C439
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820C3D2: @ 0x0820C3D2
	.byte 0x00
.globl EventScript_JP_0820C3D3
EventScript_JP_0820C3D3: @ 0x0820C3D3
	loadword 0x00, MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree
	callstd 0x02
	end
.globl EventScript_JP_0820C3DC
EventScript_JP_0820C3DC: @ 0x0820C3DC
	loadword 0x00, MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth
	callstd 0x02
	end
.globl EventScript_JP_0820C3E5
EventScript_JP_0820C3E5: @ 0x0820C3E5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	waitse
	playmoncry 0x0135, 0x0000
	loadword 0x00, gText_Rom_20C4A7
	callstd 0x04
	waitmoncry
	closemessage
	setflag 0x00E0
	clearflag 0x03A5
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_0820C418
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_0820C423
	@ event command: removeobject
	removeobject 0x0003
	release
	end
EventScript_JP_0820C418: @ 0x0820C418
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0003, MossdeepCity_House1_Movement_WalkFastRight_WalkFastDownX2_WalkFastLeft_WalkFastDown_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_0820C423: @ 0x0820C423
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0003, MossdeepCity_House1_Movement_WalkFastDownX3_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	return
MossdeepCity_House1_Movement_WalkFastRight_WalkFastDownX2_WalkFastLeft_WalkFastDown_Delay8: @ 0x0820C42E
	@ object movement sequence
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	delay_8
	step_end
MossdeepCity_House1_Movement_WalkFastDownX3_Delay8: @ 0x0820C435
	@ object movement sequence
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end
