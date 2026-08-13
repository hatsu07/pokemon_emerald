	@ analyzed canonical ROM range 0x08262393-0x0826239B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08262393: @ 0x08262393
.globl EventScript_JP_08262393
EventScript_JP_08262393: @ 0x08262393
	loadword 0x00, gText_Rom_26239C
	callstd 0x03
	end
