	@ data/maps/RustboroCity_PokemonCenter_1F/scripts.inc:31 RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities
	.globl RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities: @ 0x082034F0
	.string "わしの ポケモンは むじゃき で\nともだちの ポケモンは ようき なんだよ\pポケモンにも せいかくが ある というのは\nなかなか おもしろい もんだねー!{EOS}"
	.if (. - RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities) > 0x4e
	.error "RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities) < 0x4e
	.space 0x4e - (. - RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities)
	.endif
	@ data/maps/RustboroCity_PokemonCenter_1F/scripts.inc:34 RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon
	.globl RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon
RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon: @ 0x0820353E
	.string "にんげんと おなじで\nポケモンにも オスと メスが いるんだけど\lだから なにが ちがうのかは\lさっぱり わかっていない らしいよ{EOS}"
	.if (. - RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon) > 0x42
	.error "RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon) < 0x42
	.space 0x42 - (. - RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon)
	.endif
	@ data/maps/RustboroCity_PokemonCenter_1F/scripts.inc:37 RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor
	.globl RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor: @ 0x08203580
	.string "となりの いえの おじさんが くれた\nひでんマシンで あたしの ポケモン\lほそい きを きることが できるんだ!{EOS}"
	.if (. - RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor) > 0x39
	.error "RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor) < 0x39
	.space 0x39 - (. - RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor)
	.endif
	@ analyzed canonical ROM range 0x082035B9-0x0820366A
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
.globl EventScript_JP_082035E1
EventScript_JP_082035E1: @ 0x082035E1
	lock
	faceplayer
	message FieldScriptText_24390F
	waitmessage
	checkflag 0x011F
	goto_if 0x00, EventScript_JP_082035FC
	checkflag 0x011F
	goto_if 0x01, EventScript_JP_08203624
	end
EventScript_JP_082035FC: @ 0x082035FC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	pokemart 0x0820360C
	loadword 0x00, FieldScriptText_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x04, 0x00, 0x0D, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x55, 0x00, 0x56, 0x00, 0x4D
	.byte 0x00, 0x4B, 0x00, 0x4C, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_08203624: @ 0x08203624
	pokemart 0x08203634
	loadword 0x00, FieldScriptText_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x04, 0x00, 0x0A, 0x00, 0x09, 0x00, 0x0D, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x55
	.byte 0x00, 0x56, 0x00, 0x4D, 0x00, 0x4B, 0x00, 0x4C, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_08203650
EventScript_JP_08203650: @ 0x08203650
	loadword 0x00, RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish
	callstd 0x02
	end
.globl EventScript_JP_08203659
EventScript_JP_08203659: @ 0x08203659
	loadword 0x00, RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead
	callstd 0x02
	end
.globl EventScript_JP_08203662
EventScript_JP_08203662: @ 0x08203662
	loadword 0x00, RustboroCity_Mart_Text_GettingEscapeRopeJustInCase
	callstd 0x02
	end
