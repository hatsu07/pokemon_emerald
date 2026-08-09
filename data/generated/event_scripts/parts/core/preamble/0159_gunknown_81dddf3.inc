	.globl gUnknown_81DDDF3
gUnknown_81DDDF3: @ 0x081DDDF3
	@ analyzed canonical ROM range 0x081DDDF3-0x081DDE14
sAnalyzedEventData_081DDDF3: @ 0x081DDDF3
EventScript_081DDDF3: @ 0x081DDDF3
	lockall
	pokenavcall gText_Rom_1DE1A8
	waitmessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, gText_Rom_1DE221
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x00D6
	clearflag 0x0088
	releaseall
	end
