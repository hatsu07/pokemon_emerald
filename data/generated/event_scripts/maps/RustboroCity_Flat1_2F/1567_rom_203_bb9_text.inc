	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:117 RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll
	.globl gText_Rom_203BB9
gText_Rom_203BB9: @ 0x08203BB9
	.string "ポケモンの ぬいぐるみ だ!$"
	.if (. - gText_Rom_203BB9) > 0xf
	.error "gText_Rom_203BB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203BB9) < 0xf
	.space 0xf - (. - gText_Rom_203BB9)
	.endif
	@ analyzed canonical ROM range 0x08203BC8-0x08203C71
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_08203BC9
EventScript_JP_08203BC9: @ 0x08203BC9
	lock
	faceplayer
	checkflag 0x0099
	goto_if 0x01, EventScript_JP_08203C5F
	setvar 0x8008, 0x0000
	copyvar 0x8004, 0x8008
	specialvar_ 0x800D, 0x00FC
	copyvar 0x8009, 0x800D
	loadword 0x00, gText_Rom_203C72
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08203C47
	@ event command: special
	.byte 0x25
	.2byte 0x009F
	waitstate
	copyvar 0x800A, 0x8004
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_08203C47
	copyvar 0x8005, 0x800A
	specialvar_ 0x800D, 0x00FF
	copyvar 0x800B, 0x800D
	compare_var_to_var 0x800D, 0x8009
	goto_if 0x05, EventScript_JP_08203C51
	copyvar 0x8004, 0x8008
	copyvar 0x8005, 0x800A
	@ event command: special
	.byte 0x25
	.2byte 0x00FD
	@ event command: special
	.byte 0x25
	.2byte 0x00FE
	waitstate
	loadword 0x00, gText_Rom_203CCC
	callstd 0x04
	setflag 0x0099
	release
	end
EventScript_JP_08203C47: @ 0x08203C47
	loadword 0x00, gText_Rom_203CF7
	callstd 0x04
	release
	end
EventScript_JP_08203C51: @ 0x08203C51
	bufferspeciesname 0x00, 0x8009
	loadword 0x00, gText_Rom_203CDF
	callstd 0x04
	release
	end
EventScript_JP_08203C5F: @ 0x08203C5F
	loadword 0x00, gText_Rom_203D17
	callstd 0x04
	release
	end
.globl EventScript_JP_08203C69
EventScript_JP_08203C69: @ 0x08203C69
	loadword 0x00, gText_Rom_203D38
	callstd 0x02
	end
