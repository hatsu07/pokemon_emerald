	@ analyzed canonical ROM range 0x08205343-0x08205368
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08205343: @ 0x08205343
	.byte 0x00
.globl EventScript_JP_08205344
EventScript_JP_08205344: @ 0x08205344
	loadword 0x00, FortreeCity_House5_Text_TreeHousesAreGreat
	callstd 0x02
	end
.globl EventScript_JP_0820534D
EventScript_JP_0820534D: @ 0x0820534D
	loadword 0x00, FortreeCity_House5_Text_AdaptedToNature
	callstd 0x02
	end
.globl EventScript_JP_08205356
EventScript_JP_08205356: @ 0x08205356
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, FortreeCity_House5_Text_Zigzagoon
	callstd 0x04
	waitmoncry
	release
	end
