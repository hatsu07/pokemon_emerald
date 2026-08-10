	.globl gUnknown_82568EA
gUnknown_82568EA: @ 0x082568EA
	@ analyzed canonical ROM range 0x082568EA-0x08256934
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082568EA: @ 0x082568EA
EventScript_JP_082568EA: @ 0x082568EA
	@ event command: lockall
	.byte 0x69
	@ event command: checkpartymove
	.byte 0x7C
	.2byte 0x0123
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08256929 @ EventScript_JP_08256929
	@ event command: bufferpartymonnick
	.byte 0x7F
	.byte 0x00
	.2byte 0x800D
	@ event command: setfieldeffectargument
	.byte 0x9D
	.byte 0x00
	.2byte 0x800D
	@ event command: setfieldeffectargument
	.byte 0x9D
	.byte 0x01
	.2byte 0x0001
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082569A0 @ gText_Rom_2569A0
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
	.4byte 0x08256933 @ EventScript_JP_08256933
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082569B8 @ gText_Rom_2569B8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: dofieldeffect
	.byte 0x9C
	.2byte 0x002C
	@ event command: goto
	.byte 0x05
	.4byte 0x08256933 @ EventScript_JP_08256933
	.byte 0x02
EventScript_08256929: @ 0x08256929
EventScript_JP_08256929: @ 0x08256929
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08256985 @ gText_Rom_256985
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_08256933: @ 0x08256933
EventScript_JP_08256933: @ 0x08256933
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
	.globl gUnknown_8256935
gUnknown_8256935: @ 0x08256935
	@ analyzed canonical ROM range 0x08256935-0x08256984
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256935: @ 0x08256935
EventScript_JP_08256935: @ 0x08256935
	@ event command: lockall
	.byte 0x69
	@ event command: checkpartymove
	.byte 0x7C
	.2byte 0x0123
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08256974 @ EventScript_JP_08256974
	@ event command: bufferpartymonnick
	.byte 0x7F
	.byte 0x00
	.2byte 0x800D
	@ event command: setfieldeffectargument
	.byte 0x9D
	.byte 0x00
	.2byte 0x800D
	@ event command: setfieldeffectargument
	.byte 0x9D
	.byte 0x01
	.2byte 0x0001
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082569F2 @ gText_Rom_2569F2
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
	.4byte 0x08256983 @ EventScript_JP_08256983
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082569B8 @ gText_Rom_2569B8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: dofieldeffect
	.byte 0x9C
	.2byte 0x002C
	@ event command: goto
	.byte 0x05
	.4byte 0x08256983 @ EventScript_JP_08256983
	.byte 0x02
EventScript_08256974: @ 0x08256974
EventScript_JP_08256974: @ 0x08256974
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082569CA @ gText_Rom_2569CA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08256983 @ EventScript_JP_08256983
	.byte 0x02
EventScript_08256983: @ 0x08256983
EventScript_JP_08256983: @ 0x08256983
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
