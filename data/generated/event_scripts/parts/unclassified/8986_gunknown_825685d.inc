	@ analyzed canonical ROM range 0x0825685D-0x08256896
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0825685D: @ 0x0825685D
.globl EventScript_JP_0825685D
EventScript_JP_0825685D: @ 0x0825685D
	lockall
	checkpartymove 0x007F
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_08256898
	bufferpartymonnick 0x00, 0x800D
	setfieldeffectargument 0x00, 0x800D
	loadword 0x00, gText_Rom_2568BD
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082568A0
	loadword 0x00, gText_Rom_2568D8
	callstd 0x04
	dofieldeffect 0x002B
	goto EventScript_JP_082568A0
	@ analyzed canonical ROM range 0x08256897-0x082568A1
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256897: @ 0x08256897
.globl EventScript_JP_08256897
EventScript_JP_08256897: @ 0x08256897
	lockall
EventScript_JP_08256898: @ 0x08256898
	loadword 0x00, gText_Rom_2568A2
	callstd 0x04
EventScript_JP_082568A0: @ 0x082568A0
	releaseall
	end
