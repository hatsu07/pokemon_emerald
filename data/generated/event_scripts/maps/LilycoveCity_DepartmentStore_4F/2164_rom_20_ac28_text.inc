	@ data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc:52 LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM
	.globl LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM
LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM: @ 0x0820ABB4
	.string "うむむ……\pこうげきの わざ か……\nまもりの わざ か……\pどの わざマシンを\nポケモンに おぼえさせるか なやむ……{EOS}"
	.if (. - LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM) > 0x3d
	.error "LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM) < 0x3d
	.space 0x3d - (. - LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc:55 LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs
	.globl LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs
LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs: @ 0x0820ABF1
	.string "わざマシンって たくさん あるのね!\pなにかの カタログには\nぜんぶで 50しゅるい って\lかいて あったわ{EOS}"
	.if (. - LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs) > 0x37
	.error "LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs) < 0x37
	.space 0x37 - (. - LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc:58 LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves
	.globl LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves
LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves: @ 0x0820AC28
	.string "わざマシン ぜんぶ ほしいけど\nポケモン 4つしか わざ おぼえないもんな{EOS}"
	.if (. - LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves) > 0x26
	.error "LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves) < 0x26
	.space 0x26 - (. - LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves)
	.endif
	@ analyzed canonical ROM range 0x0820AC4E-0x0820AD98
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LilycoveCity_DepartmentStore_5F_OnWarpIntoMap: @ 0x0820AC4E
	@ map script dispatch table
	.byte 0x04
	.4byte gMapScriptConditionTable_LilycoveCity_DepartmentStore_5F_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_LilycoveCity_DepartmentStore_5F_OnWarpIntoMap: @ 0x0820AC54
	@ conditional map script table
	.2byte 0x405E, 0x0001
	.4byte EventScript_JP_0820AC6E
	.2byte 0x405E, 0x0002
	.4byte EventScript_JP_0820AC6E
	.2byte 0x405E, 0x0003
	.4byte EventScript_JP_0820AC6E
	.2byte 0
EventScript_JP_0820AC6E: @ 0x0820AC6E
	setobjectxy 0x0007, 0x0010, 0x0002
	turnobject 0x0007, 0x02
	end
.globl EventScript_JP_0820AC7A
EventScript_JP_0820AC7A: @ 0x0820AC7A
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration2 0x0820AC94
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x4C, 0x00, 0x4D, 0x00, 0x4E, 0x00, 0x53, 0x00, 0x5B, 0x00, 0x5C, 0x00, 0x5D
	.byte 0x00, 0x5E, 0x00, 0x5F, 0x00, 0x60, 0x00, 0x61, 0x00, 0x62, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820ACB0
EventScript_JP_0820ACB0: @ 0x0820ACB0
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration2 0x0820ACC8
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x65, 0x00, 0x66, 0x00, 0x68, 0x00, 0x69, 0x00, 0x6A, 0x00, 0x6B, 0x00, 0x6C, 0x00, 0x6D
	.byte 0x00, 0x6E, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820ACDE
EventScript_JP_0820ACDE: @ 0x0820ACDE
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration2 0x0820ACF8
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x42, 0x00, 0x43, 0x00, 0x44, 0x00, 0x45, 0x00, 0x46, 0x00, 0x47, 0x00, 0x48
	.byte 0x00, 0x49, 0x00, 0x4A, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820AD0E
EventScript_JP_0820AD0E: @ 0x0820AD0E
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration2 0x0820AD28
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x3B, 0x00, 0x3C, 0x00, 0x3D, 0x00, 0x3E, 0x00, 0x3F, 0x00, 0x40, 0x00, 0x41
	.byte 0x00, 0x30, 0x00, 0x31, 0x00, 0x32, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820AD40
EventScript_JP_0820AD40: @ 0x0820AD40
	loadword 0x00, LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls
	callstd 0x02
	end
.globl EventScript_JP_0820AD49
EventScript_JP_0820AD49: @ 0x0820AD49
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x405E, 0x0000
	goto_if 0x01, EventScript_JP_0820AD70
	compare_var_to_value 0x405E, 0x0004
	goto_if 0x04, EventScript_JP_0820AD70
	goto EventScript_JP_0820AD7B
	.byte 0x02
EventScript_JP_0820AD70: @ 0x0820AD70
	loadword 0x00, LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere
	callstd 0x04
	closemessage
	releaseall
	end
EventScript_JP_0820AD7B: @ 0x0820AD7B
	loadword 0x00, LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
.globl EventScript_JP_0820AD90
EventScript_JP_0820AD90: @ 0x0820AD90
	loadword 0x00, LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon
	callstd 0x02
	end
