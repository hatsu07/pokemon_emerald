	@ data/maps/RustboroCity_Flat1_1F/scripts.inc:12 RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility
	.globl RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility
RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility: @ 0x08203727
	.string "ポケモンには それぞれ\nとくせい とよばれる ふしぎな ちからが\lそなわって いるんだよな{EOS}"
	.if (. - RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility) > 0x2e
	.error "RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility) < 0x2e
	.space 0x2e - (. - RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility)
	.endif
	@ data/maps/RustboroCity_Flat1_1F/scripts.inc:15 RustboroCity_Flat1_1F_Text_PokemonStrange
	.globl RustboroCity_Flat1_1F_Text_PokemonStrange
RustboroCity_Flat1_1F_Text_PokemonStrange: @ 0x08203755
	.string "ほんとうに ポケモンって\nふしぎな いきもの なのね{EOS}"
	.if (. - RustboroCity_Flat1_1F_Text_PokemonStrange) > 0x1b
	.error "RustboroCity_Flat1_1F_Text_PokemonStrange may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat1_1F_Text_PokemonStrange) < 0x1b
	.space 0x1b - (. - RustboroCity_Flat1_1F_Text_PokemonStrange)
	.endif
	@ analyzed canonical ROM range 0x08203770-0x08203885
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_08203771
EventScript_JP_08203771: @ 0x08203771
	lock
	faceplayer
	specialvar_ 0x800D, 0x01FD
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082037C4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082037E4
EventScript_JP_0820378E: @ 0x0820378E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special DoWaldaNamingScreen
	waitstate
	compare_var_to_value 0x8004, 0x0001
	goto_if 0x01, EventScript_JP_0820380E
	compare_var_to_value 0x8004, 0x0002
	goto_if 0x01, EventScript_JP_08203818
	specialvar_ 0x800D, 0x01FF
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820382F
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08203858
	end
EventScript_JP_082037C4: @ 0x082037C4
	loadword 0x00, RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08203804
	loadword 0x00, RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion
	callstd 0x04
	goto EventScript_JP_0820378E
EventScript_JP_082037E4: @ 0x082037E4
	loadword 0x00, RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08203804
	loadword 0x00, RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion
	callstd 0x04
	goto EventScript_JP_0820378E
EventScript_JP_08203804: @ 0x08203804
	loadword 0x00, RustboroCity_Flat1_2F_Text_OhIsThatRight
	callstd 0x04
	release
	end
EventScript_JP_0820380E: @ 0x0820380E
	loadword 0x00, RustboroCity_Flat1_2F_Text_OhYouDontKnowAny
	callstd 0x04
	release
	end
EventScript_JP_08203818: @ 0x08203818
	loadword 0x00, RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase
	callstd 0x04
	call EventScript_JP_0820386F
	loadword 0x00, RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A9D
	callstd 0x04
	release
	end
EventScript_JP_0820382F: @ 0x0820382F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_2039FB
	callstd 0x04
	call EventScript_JP_0820386F
	loadword 0x00, RustboroCity_Flat1_2F_Text_OhShesLaughing
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper
	callstd 0x04
	release
	end
EventScript_JP_08203858: @ 0x08203858
	loadword 0x00, RustboroCity_Flat1_2F_Text_LetsGiveItATry2_Copy_Rom_203A2F
	callstd 0x04
	call EventScript_JP_0820386F
	loadword 0x00, RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll_Copy_Rom_203A44
	callstd 0x04
	release
	end
EventScript_JP_0820386F: @ 0x0820386F
	turnobject 0x0006, 0x04
	return
.globl EventScript_JP_08203874
EventScript_JP_08203874: @ 0x08203874
	loadword 0x00, RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard
	callstd 0x02
	end
.globl EventScript_JP_0820387D
EventScript_JP_0820387D: @ 0x0820387D
	loadword 0x00, RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll
	callstd 0x03
	end
