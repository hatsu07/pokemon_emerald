	@ data/maps/RustboroCity_House3/scripts.inc:29 RustboroCity_House3_Text_Pekachu
	.globl gText_Rom_2041BF
gText_Rom_2041BF: @ 0x082041BF
	.string "ペカチュウ『ぺかー!$"
	.if (. - gText_Rom_2041BF) > 0xb
	.error "gText_Rom_2041BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2041BF) < 0xb
	.space 0xb - (. - gText_Rom_2041BF)
	.endif
	@ analyzed canonical ROM range 0x082041CA-0x0820428A
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
EventScript_JP_082041CB: @ 0x082041CB
	lock
	faceplayer
	checkflag 0x009B
	goto_if 0x01, EventScript_JP_08204265
	setvar 0x8008, 0x0001
	copyvar 0x8004, 0x8008
	specialvar_ 0x800D, 0x00FC
	copyvar 0x8009, 0x800D
	loadword 0x00, gText_Rom_20428B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820424D
	@ event command: special
	.byte 0x25
	.2byte 0x009F
	waitstate
	copyvar 0x800A, 0x8004
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_0820424D
	copyvar 0x8005, 0x800A
	specialvar_ 0x800D, 0x00FF
	copyvar 0x800B, 0x800D
	compare_var_to_var 0x800D, 0x8009
	goto_if 0x05, EventScript_JP_08204257
	copyvar 0x8004, 0x8008
	copyvar 0x8005, 0x800A
	@ event command: special
	.byte 0x25
	.2byte 0x00FD
	@ event command: special
	.byte 0x25
	.2byte 0x00FE
	waitstate
	bufferspeciesname 0x00, 0x8009
	loadword 0x00, gText_Rom_2042E3
	callstd 0x04
	setflag 0x009B
	release
	end
EventScript_JP_0820424D: @ 0x0820424D
	loadword 0x00, gText_Rom_204314
	callstd 0x04
	release
	end
EventScript_JP_08204257: @ 0x08204257
	bufferspeciesname 0x00, 0x8009
	loadword 0x00, gText_Rom_204305
	callstd 0x04
	release
	end
EventScript_JP_08204265: @ 0x08204265
	loadword 0x00, gText_Rom_204334
	callstd 0x04
	release
	end
EventScript_JP_0820426F: @ 0x0820426F
	loadword 0x00, gText_Rom_20435F
	callstd 0x02
	end
EventScript_JP_08204278: @ 0x08204278
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, gText_Rom_204392
	callstd 0x04
	waitmoncry
	release
	end
