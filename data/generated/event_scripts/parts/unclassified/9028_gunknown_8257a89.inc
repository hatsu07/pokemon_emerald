	.globl gUnknown_8257A89
gUnknown_8257A89: @ 0x08257A89
	@ analyzed canonical ROM range 0x08257A89-0x08257A97
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_08257A89: @ 0x08257A89
	lockall
	loadword 0x00, gText_Rom_257E82
	callstd 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x00C2
	waitstate
	releaseall
	end
