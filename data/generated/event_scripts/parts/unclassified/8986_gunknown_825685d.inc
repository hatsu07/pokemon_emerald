	.globl gUnknown_825685D
gUnknown_825685D: @ 0x0825685D
	@ analyzed canonical ROM range 0x0825685D-0x08256896
sAnalyzedEventData_0825685D: @ 0x0825685D
EventScript_0825685D: @ 0x0825685D
	lockall
	checkpartymove 0x007F
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, 0x08256898
	bufferpartymonnick 0x00, 0x800D
	setfieldeffectargument 0x00, 0x800D
	loadword 0x00, gText_Rom_2568BD
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082568A0
	loadword 0x00, gText_Rom_2568D8
	callstd 0x04
	dofieldeffect 0x002B
	goto 0x082568A0
	.globl gUnknown_8256897
gUnknown_8256897: @ 0x08256897
	@ analyzed canonical ROM range 0x08256897-0x082568A1
sAnalyzedEventData_08256897: @ 0x08256897
EventScript_08256897: @ 0x08256897
	lockall
	loadword 0x00, gText_Rom_2568A2
	callstd 0x04
	releaseall
	end
