	.globl EventScript_JP_082623AA
	@ analyzed canonical ROM range 0x082623AA-0x082623CC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_082623AA: @ 0x082623AA
	setvar 0x40A4, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00CE
	@ event command: setwarp
	.byte 0x3E
	.byte 0x17
	.byte 0x00
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0005
	.byte 0x02
EventScript_JP_082623BB: @ 0x082623BB
	setvar 0x40A4, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00CE
	@ event command: warp
	.byte 0x39
	.byte 0x17
	.byte 0x00
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0005
	.byte 0x27, 0x02
	@ analyzed canonical ROM range 0x082623CD-0x082623E7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623CD: @ 0x082623CD
.globl EventScript_JP_082623CD
EventScript_JP_082623CD: @ 0x082623CD
	lockall
	loadword 0x00, gText_Rom_262452
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082623E3
	releaseall
	end
EventScript_082623E3: @ 0x082623E3
EventScript_JP_082623E3: @ 0x082623E3
	goto EventScript_JP_082623BB
	@ analyzed canonical ROM range 0x082623E8-0x082623F8
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623E8: @ 0x082623E8
.globl EventScript_JP_082623E8
EventScript_JP_082623E8: @ 0x082623E8
	lockall
	playse 0x0049
	message gText_Rom_26246D
	waitmessage
	waitbuttonpress
	releaseall
	goto EventScript_JP_082623BB
	@ analyzed canonical ROM range 0x082623F9-0x08262409
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623F9: @ 0x082623F9
.globl EventScript_JP_082623F9
EventScript_JP_082623F9: @ 0x082623F9
	lockall
	playse 0x0049
	message gText_Rom_262491
	waitmessage
	waitbuttonpress
	releaseall
	goto EventScript_JP_082623BB
	.globl EventScript_JP_0826240A
	@ analyzed canonical ROM range 0x0826240A-0x08262451
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_0826240A: @ 0x0826240A
	lockall
	@ event command: special
	.byte 0x25
	.2byte 0x00CF
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08262449
	loadword 0x00, gText_Rom_2624B7
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0826242E
	releaseall
	end
EventScript_JP_0826242E: @ 0x0826242E
	fadescreen 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x00D0
	waitstate
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08262440
	end
EventScript_JP_08262440: @ 0x08262440
	message gText_Rom_2624DC
	waitmessage
	waitbuttonpress
	releaseall
	end
EventScript_JP_08262449: @ 0x08262449
	message gText_Rom_2624CD
	waitmessage
	waitbuttonpress
	releaseall
	end
