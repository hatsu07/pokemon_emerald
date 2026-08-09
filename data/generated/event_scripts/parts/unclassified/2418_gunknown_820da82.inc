	.globl gUnknown_820DA82
gUnknown_820DA82: @ 0x0820DA82
	@ analyzed canonical ROM range 0x0820DA82-0x0820DA90
sAnalyzedEventData_0820DA82: @ 0x0820DA82
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0A, 0xDE, 0x02, 0x00, 0x00, 0x92, 0xDE, 0x20, 0x08, 0x92, 0xDE, 0x20, 0x08, 0x02, 0x5C
	.globl gUnknown_820DA91
gUnknown_820DA91: @ 0x0820DA91
	@ analyzed canonical ROM range 0x0820DA91-0x0820DA9E
sAnalyzedEventData_0820DA91: @ 0x0820DA91
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0B, 0x02, 0x02, 0x00, 0x00, 0xAF, 0xDE, 0x20, 0x08, 0xAF, 0xDE, 0x20, 0x08, 0x02
	.globl gUnknown_820DA9F
gUnknown_820DA9F: @ 0x0820DA9F
	@ analyzed canonical ROM range 0x0820DA9F-0x0820DACA
sAnalyzedEventData_0820DA9F: @ 0x0820DA9F
EventScript_0820DA9F: @ 0x0820DA9F
	lockall
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_0820DABD
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_0820DAC4
	closemessage
	clearflag 0x0075
	releaseall
	end
EventScript_0820DABD: @ 0x0820DABD
	pokenavcall gText_Rom_26AB1B
	waitmessage
	return
EventScript_0820DAC4: @ 0x0820DAC4
	pokenavcall gText_Rom_26ABC8
	waitmessage
	return
