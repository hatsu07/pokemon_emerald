	.globl gUnknown_8262393
gUnknown_8262393: @ 0x08262393
	@ analyzed canonical ROM range 0x08262393-0x0826239B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08262393: @ 0x08262393
EventScript_JP_08262393: @ 0x08262393
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0826239C @ gText_Rom_26239C
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
