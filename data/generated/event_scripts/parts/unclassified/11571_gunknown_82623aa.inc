	.globl gUnknown_82623AA
gUnknown_82623AA: @ 0x082623AA
	@ analyzed canonical ROM range 0x082623AA-0x082623CC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_082623AA: @ 0x082623AA
	@ event command: setvar
	.byte 0x16
	.2byte 0x40A4
	.2byte 0x0001
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
	@ event command: setvar
	.byte 0x16
	.2byte 0x40A4
	.2byte 0x0001
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
	.globl gUnknown_82623CD
gUnknown_82623CD: @ 0x082623CD
	@ analyzed canonical ROM range 0x082623CD-0x082623E7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623CD: @ 0x082623CD
EventScript_JP_082623CD: @ 0x082623CD
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08262452 @ gText_Rom_262452
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082623E3 @ EventScript_JP_082623E3
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_082623E3: @ 0x082623E3
EventScript_JP_082623E3: @ 0x082623E3
	@ event command: goto
	.byte 0x05
	.4byte 0x082623BB @ EventScript_JP_082623BB
	.globl gUnknown_82623E8
gUnknown_82623E8: @ 0x082623E8
	@ analyzed canonical ROM range 0x082623E8-0x082623F8
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623E8: @ 0x082623E8
EventScript_JP_082623E8: @ 0x082623E8
	@ event command: lockall
	.byte 0x69
	@ event command: playse
	.byte 0x2F
	.2byte 0x0049
	@ event command: message
	.byte 0x67
	.4byte 0x0826246D @ gText_Rom_26246D
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: releaseall
	.byte 0x6B
	@ event command: goto
	.byte 0x05
	.4byte 0x082623BB @ EventScript_JP_082623BB
	.globl gUnknown_82623F9
gUnknown_82623F9: @ 0x082623F9
	@ analyzed canonical ROM range 0x082623F9-0x08262409
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623F9: @ 0x082623F9
EventScript_JP_082623F9: @ 0x082623F9
	@ event command: lockall
	.byte 0x69
	@ event command: playse
	.byte 0x2F
	.2byte 0x0049
	@ event command: message
	.byte 0x67
	.4byte 0x08262491 @ gText_Rom_262491
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: releaseall
	.byte 0x6B
	@ event command: goto
	.byte 0x05
	.4byte 0x082623BB @ EventScript_JP_082623BB
	.globl gUnknown_826240A
gUnknown_826240A: @ 0x0826240A
	@ analyzed canonical ROM range 0x0826240A-0x08262451
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_0826240A: @ 0x0826240A
	@ event command: lockall
	.byte 0x69
	@ event command: special
	.byte 0x25
	.2byte 0x00CF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08262449 @ EventScript_JP_08262449
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082624B7 @ gText_Rom_2624B7
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0826242E @ EventScript_JP_0826242E
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0826242E: @ 0x0826242E
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x00D0
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08262440 @ EventScript_JP_08262440
	@ event command: end
	.byte 0x02
EventScript_JP_08262440: @ 0x08262440
	@ event command: message
	.byte 0x67
	.4byte 0x082624DC @ gText_Rom_2624DC
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08262449: @ 0x08262449
	@ event command: message
	.byte 0x67
	.4byte 0x082624CD @ gText_Rom_2624CD
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
