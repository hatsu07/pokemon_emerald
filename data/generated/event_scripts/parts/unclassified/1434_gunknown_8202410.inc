	.globl gUnknown_8202410
gUnknown_8202410: @ 0x08202410
	@ analyzed canonical ROM range 0x08202410-0x08202431
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08202410: @ 0x08202410
EventScript_JP_08202410: @ 0x08202410
	@ event command: lockall
	.byte 0x69
	@ event command: pokenavcall
	.byte 0xDF
	.4byte 0x082029DC @ gText_Rom_2029DC
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
	.4byte 0x08202AB0 @ gText_Rom_202AB0
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
	.2byte 0x01D3
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0080
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
