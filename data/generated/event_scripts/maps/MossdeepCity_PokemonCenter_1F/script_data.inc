	@ analyzed canonical ROM range 0x0820C4B2-0x0820C4E0
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_MossdeepCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x0820C4B2
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820C4BD
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_0820C4BD: @ 0x0820C4BD
	setrespawn 0x0009
	end
.globl EventScript_JP_0820C4C1
EventScript_JP_0820C4C1: @ 0x0820C4C1
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_0820C4CF
EventScript_JP_0820C4CF: @ 0x0820C4CF
	loadword 0x00, MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable
	callstd 0x02
	end
.globl EventScript_JP_0820C4D8
EventScript_JP_0820C4D8: @ 0x0820C4D8
	loadword 0x00, MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves
	callstd 0x02
	end
