	.globl gUnknown_8257A89
gUnknown_8257A89: @ 0x08257A89
	@ analyzed canonical ROM range 0x08257A89-0x08257A97
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_08257A89: @ 0x08257A89
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08257E82 @ gText_Rom_257E82
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x00C2
	@ event command: waitstate
	.byte 0x27
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
