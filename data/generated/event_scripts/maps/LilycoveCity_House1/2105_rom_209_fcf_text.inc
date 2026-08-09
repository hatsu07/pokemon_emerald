	@ data/maps/LilycoveCity_House1/scripts.inc:21 LilycoveCity_House1_Text_Kecleon
	.globl gText_Rom_209FCF
gText_Rom_209FCF: @ 0x08209FCF
	.string "カクレオン『るろろ……?$"
	.if (. - gText_Rom_209FCF) > 0xd
	.error "gText_Rom_209FCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209FCF) < 0xd
	.space 0xd - (. - gText_Rom_209FCF)
	.endif
	@ analyzed canonical ROM range 0x08209FDC-0x0820A01D
sAnalyzedEventData_08209FDC: @ 0x08209FDC
EventScript_08209FDC: @ 0x08209FDC
	nop
	lock
	faceplayer
	checkflag 0x00EA
	goto_if 0x01, EventScript_0820A014
	loadword 0x00, gText_Rom_20A01E
	callstd 0x04
	setorcopyvar 0x8000, 0x014C
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00EA
	loadword 0x00, gText_Rom_20A03E
	callstd 0x04
	release
	end
EventScript_0820A014: @ 0x0820A014
	loadword 0x00, gText_Rom_20A03E
	callstd 0x04
	release
	end
