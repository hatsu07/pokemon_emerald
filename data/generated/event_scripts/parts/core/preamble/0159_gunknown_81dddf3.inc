	.globl gUnknown_81DDDF3
gUnknown_81DDDF3: @ 0x081DDDF3
	@ analyzed canonical ROM range 0x081DDDF3-0x081DDE14
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_081DDDF3: @ 0x081DDDF3
EventScript_JP_081DDDF3: @ 0x081DDDF3
	@ event command: lockall
	.byte 0x69
	@ event command: pokenavcall
	.byte 0xDF
	.4byte 0x081DE1A8 @ gText_Rom_1DE1A8
	@ event command: waitmessage
	.byte 0x66
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE221 @ gText_Rom_1DE221
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setflag
	.byte 0x29
	.2byte 0x00D6
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0088
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
