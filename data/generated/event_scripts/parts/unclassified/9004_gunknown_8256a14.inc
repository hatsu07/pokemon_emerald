	.globl gUnknown_8256A14
gUnknown_8256A14: @ 0x08256A14
	@ analyzed canonical ROM range 0x08256A14-0x08256A1C
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256A14: @ 0x08256A14
EventScript_JP_08256A14: @ 0x08256A14
	loadword 0x00, gText_Rom_256A1D
	callstd 0x03
	end
