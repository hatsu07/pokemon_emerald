	.globl EventScript_JP_0820DA82
	@ analyzed canonical ROM range 0x0820DA82-0x0820DA90
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_0820DA82: @ 0x0820DA82
	gotostd_if 0xDE, 0x02
	nop
	nop
	checkmoney 0x920820DE, 0xDE
	.byte 0x20, 0x08, 0x02, 0x5C
	.globl EventScriptData_JP_0820DA91
EventScriptData_JP_0820DA91: @ 0x0820DA91
	@ analyzed canonical ROM range 0x0820DA91-0x0820DA9E
	@ semantic recovery: script_data; byte-verified against linked ROM
	@ Decoded event bytecode: exact ROM size 0x5
	callstd_if 0x02, 0x02
	nop
	nop
	setdooropen 0x20DE, 0xAF08
	buffertrainername 0x20, 0x0208
	@ analyzed canonical ROM range 0x0820DA9F-0x0820DACA
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820DA9F: @ 0x0820DA9F
.globl EventScript_JP_0820DA9F
EventScript_JP_0820DA9F: @ 0x0820DA9F
	lockall
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820DABD
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0820DAC4
	closemessage
	clearflag 0x0075
	releaseall
	end
EventScript_0820DABD: @ 0x0820DABD
EventScript_JP_0820DABD: @ 0x0820DABD
	pokenavcall gText_Rom_26AB1B
	waitmessage
	return
EventScript_0820DAC4: @ 0x0820DAC4
EventScript_JP_0820DAC4: @ 0x0820DAC4
	pokenavcall gText_Rom_26ABC8
	waitmessage
	return
