	.globl gUnknown_8256797
gUnknown_8256797: @ 0x08256797
	@ analyzed canonical ROM range 0x08256797-0x082567C5
sAnalyzedEventData_08256797: @ 0x08256797
EventScript_08256797: @ 0x08256797
	lockall
	dofieldeffect 0x0028
	waitstate
	goto EventScript_082567A2
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02
EventScript_082567A2: @ 0x082567A2
	setflag 0x0889
	loadword 0x00, gText_Rom_2567F3
	callstd 0x04
	releaseall
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0x24, 0x68, 0x25, 0x08, 0x09, 0x04, 0x6B, 0x02, 0x0F, 0x00, 0x43, 0x68, 0x25, 0x08
	.byte 0x09, 0x04, 0x6B, 0x02, 0x68, 0x6B, 0x02
