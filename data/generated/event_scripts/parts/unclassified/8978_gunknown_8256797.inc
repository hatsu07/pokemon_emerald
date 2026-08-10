	.globl gUnknown_8256797
gUnknown_8256797: @ 0x08256797
	@ analyzed canonical ROM range 0x08256797-0x082567C5
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256797: @ 0x08256797
EventScript_JP_08256797: @ 0x08256797
	@ event command: lockall
	.byte 0x69
	@ event command: dofieldeffect
	.byte 0x9C
	.2byte 0x0028
	@ event command: waitstate
	.byte 0x27
	@ event command: goto
	.byte 0x05
	.4byte 0x082567A2 @ EventScript_JP_082567A2
	.byte 0x02
EventScript_082567A2: @ 0x082567A2
EventScript_JP_082567A2: @ 0x082567A2
	@ event command: setflag
	.byte 0x29
	.2byte 0x0889
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082567F3 @ gText_Rom_2567F3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082567AF: @ 0x082567AF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08256824 @ gText_Rom_256824
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082567B9: @ 0x082567B9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08256843 @ gText_Rom_256843
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082567C3: @ 0x082567C3
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
