	.globl gUnknown_825685D
gUnknown_825685D: @ 0x0825685D
	@ analyzed canonical ROM range 0x0825685D-0x08256896
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0825685D: @ 0x0825685D
EventScript_JP_0825685D: @ 0x0825685D
	@ event command: lockall
	.byte 0x69
	@ event command: checkpartymove
	.byte 0x7C
	.2byte 0x007F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08256898 @ EventScript_JP_08256898
	@ event command: bufferpartymonnick
	.byte 0x7F
	.byte 0x00
	.2byte 0x800D
	@ event command: setfieldeffectargument
	.byte 0x9D
	.byte 0x00
	.2byte 0x800D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082568BD @ gText_Rom_2568BD
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082568A0 @ EventScript_JP_082568A0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082568D8 @ gText_Rom_2568D8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: dofieldeffect
	.byte 0x9C
	.2byte 0x002B
	@ event command: goto
	.byte 0x05
	.4byte 0x082568A0 @ EventScript_JP_082568A0
	.globl gUnknown_8256897
gUnknown_8256897: @ 0x08256897
	@ analyzed canonical ROM range 0x08256897-0x082568A1
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256897: @ 0x08256897
EventScript_JP_08256897: @ 0x08256897
	@ event command: lockall
	.byte 0x69
EventScript_JP_08256898: @ 0x08256898
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082568A2 @ gText_Rom_2568A2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_082568A0: @ 0x082568A0
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
