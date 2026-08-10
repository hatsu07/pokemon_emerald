	.globl gUnknown_8256A14
gUnknown_8256A14: @ 0x08256A14
	@ analyzed canonical ROM range 0x08256A14-0x08256A1C
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08256A14: @ 0x08256A14
EventScript_08256A14: @ 0x08256A14
EventScript_JP_08256A14: @ 0x08256A14
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08256A1D @ gText_Rom_256A1D
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
