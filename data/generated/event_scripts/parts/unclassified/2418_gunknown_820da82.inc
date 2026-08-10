	.globl gUnknown_820DA82
gUnknown_820DA82: @ 0x0820DA82
	@ analyzed canonical ROM range 0x0820DA82-0x0820DA90
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_0820DA82: @ 0x0820DA82
	@ event command: gotostd_if
	.byte 0x0A
	.byte 0xDE
	.byte 0x02
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: checkmoney
	.byte 0x92
	.4byte 0x920820DE
	.byte 0xDE
	.byte 0x20, 0x08, 0x02, 0x5C
	.globl gUnknown_820DA91
gUnknown_820DA91: @ 0x0820DA91
	@ analyzed canonical ROM range 0x0820DA91-0x0820DA9E
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x0B, 0x02, 0x02, 0x00, 0x00
	@ event command: setdooropen
	.byte 0xAF
	.2byte 0x20DE
	.2byte 0xAF08
	@ event command: buffertrainername
	.byte 0xDE
	.byte 0x20
	.2byte 0x0208
	.globl gUnknown_820DA9F
gUnknown_820DA9F: @ 0x0820DA9F
	@ analyzed canonical ROM range 0x0820DA9F-0x0820DACA
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820DA9F: @ 0x0820DA9F
EventScript_JP_0820DA9F: @ 0x0820DA9F
	@ event command: lockall
	.byte 0x69
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820DABD @ EventScript_JP_0820DABD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820DAC4 @ EventScript_JP_0820DAC4
	@ event command: closemessage
	.byte 0x68
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0075
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_0820DABD: @ 0x0820DABD
EventScript_JP_0820DABD: @ 0x0820DABD
	@ event command: pokenavcall
	.byte 0xDF
	.4byte 0x0826AB1B @ gText_Rom_26AB1B
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_0820DAC4: @ 0x0820DAC4
EventScript_JP_0820DAC4: @ 0x0820DAC4
	@ event command: pokenavcall
	.byte 0xDF
	.4byte 0x0826ABC8 @ gText_Rom_26ABC8
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
