	@ analyzed canonical ROM range 0x08202410-0x08202431
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08202410: @ 0x08202410
.globl EventScript_JP_08202410
EventScript_JP_08202410: @ 0x08202410
	lockall
	pokenavcall gText_Rom_2029DC
	waitmessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, gText_Rom_202AB0
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x01D3
	clearflag 0x0080
	releaseall
	end
