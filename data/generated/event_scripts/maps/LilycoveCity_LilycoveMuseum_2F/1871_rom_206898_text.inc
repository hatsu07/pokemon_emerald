	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:275 LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon
	.globl gText_Rom_206898
gText_Rom_206898: @ 0x08206898
	.string "へえー! これって\nきみの ポケモンの えなんだ!\pそれって トレーナー として\nさいこうの しあわせ だよな!{EOS}"
	.if (. - gText_Rom_206898) > 0x39
	.error "gText_Rom_206898 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206898) < 0x39
	.space 0x39 - (. - gText_Rom_206898)
	.endif
	@ analyzed canonical ROM range 0x082068D1-0x082073CF
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_082068D1: @ 0x082068D1
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082068DC
	.byte 0x02
	.4byte MapScriptTable_JP_08206903
	.byte 0
EventScript_JP_082068DC: @ 0x082068DC
	call EventScript_JP_08253F43
	call EventScript_JP_082068E7
	end
EventScript_JP_082068E7: @ 0x082068E7
	getpricereduction 0x0004
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082068FC
	clearflag 0x0369
	setflag 0x0340
	return
EventScript_JP_082068FC: @ 0x082068FC
	setflag 0x0369
	clearflag 0x0340
	return
MapScriptTable_JP_08206903: @ 0x08206903
	@ conditional map script table
	.2byte 0x4099, 0x0001
	.4byte EventScript_JP_08206915
	.2byte 0x4099, 0x0002
	.4byte EventScript_JP_08206AE7
	.2byte 0
EventScript_JP_08206915: @ 0x08206915
	checkflag 0x0307
	goto_if 0x01, EventScript_JP_08206924
	setvar 0x4099, 0x0000
	end
EventScript_JP_08206924: @ 0x08206924
	lockall
	@ event command: addobject
	.byte 0x55
	.2byte 0x0004
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08206AC7 @ Movement_JP_08206AC7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0004
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08206AD8 @ Movement_JP_08206AD8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_207435
	callstd 0x04
	lockall
	fadescreen 0x01
	drawcontestwinner 0x00
	lockall
	loadword 0x00, gText_Rom_2074A1
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820696A
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082069A4
	releaseall
	end
EventScript_JP_0820696A: @ 0x0820696A
	loadword 0x00, gText_Rom_207519
	callstd 0x04
	closemessage
	@ event command: special
	.byte 0x25
	.2byte 0x0087
	setvar 0x4099, 0x0000
	specialvar_ 0x800D, 0x005B
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_082069D4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08206ACF @ Movement_JP_08206ACF
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	call EventScript_JP_08206A20
	call EventScript_JP_08206A76
	releaseall
	end
EventScript_JP_082069A4: @ 0x082069A4
	loadword 0x00, gText_Rom_2075D1
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820696A
	loadword 0x00, gText_Rom_20760A
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08206ACF @ Movement_JP_08206ACF
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x4099, 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	releaseall
	end
EventScript_JP_082069D4: @ 0x082069D4
	incrementgamestat 0x2A
	@ event command: special
	.byte 0x25
	.2byte 0x0050
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08206ADA @ Movement_JP_08206ADA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08206ADE @ Movement_JP_08206ADE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_20757C
	callstd 0x04
	playfanfare 0x0172
	loadword 0x00, gText_Rom_2075A5
	callstd 0x04
	waitfanfare
	loadword 0x00, gText_Rom_2075B4
	callstd 0x04
	loadword 0x00, gText_Rom_2075CA
	callstd 0x04
	closemessage
	return
EventScript_JP_08206A20: @ 0x08206A20
	specialvar_ 0x8004, 0x0089
	copyvar 0x8000, 0x8004
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206A62
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08206A66
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206A6A
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08206A6E
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_08206A72
	return
EventScript_JP_08206A62: @ 0x08206A62
	clearflag 0x0308
	return
EventScript_JP_08206A66: @ 0x08206A66
	clearflag 0x0309
	return
EventScript_JP_08206A6A: @ 0x08206A6A
	clearflag 0x030A
	return
EventScript_JP_08206A6E: @ 0x08206A6E
	clearflag 0x030B
	return
EventScript_JP_08206A72: @ 0x08206A72
	clearflag 0x030C
	return
EventScript_JP_08206A76: @ 0x08206A76
	copyvar 0x8000, 0x8011
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08206AB3
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206AB7
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08206ABB
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206ABF
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08206AC3
	return
EventScript_JP_08206AB3: @ 0x08206AB3
	setflag 0x00A0
	return
EventScript_JP_08206AB7: @ 0x08206AB7
	setflag 0x00A1
	return
EventScript_JP_08206ABB: @ 0x08206ABB
	setflag 0x00A2
	return
EventScript_JP_08206ABF: @ 0x08206ABF
	setflag 0x00A3
	return
EventScript_JP_08206AC3: @ 0x08206AC3
	setflag 0x00A4
	return
Movement_JP_08206AC7: @ 0x08206AC7
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
Movement_JP_08206ACF: @ 0x08206ACF
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
Movement_JP_08206AD8: @ 0x08206AD8
	@ object movement sequence
	walk_in_place_fastest_left
	step_end
Movement_JP_08206ADA: @ 0x08206ADA
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	step_end
Movement_JP_08206ADE: @ 0x08206ADE
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_fastest_right
	step_end
EventScript_JP_08206AE7: @ 0x08206AE7
	checkflag 0x0307
	goto_if 0x01, EventScript_JP_08206AF6
	setvar 0x4099, 0x0000
	end
EventScript_JP_08206AF6: @ 0x08206AF6
	lockall
	@ event command: addobject
	.byte 0x55
	.2byte 0x000B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08206BF3 @ Movement_JP_08206BF3
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x000B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08206C05 @ Movement_JP_08206C05
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_207435
	callstd 0x04
	lockall
	fadescreen 0x01
	drawcontestwinner 0x00
	loadword 0x00, gText_Rom_2074A1
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08206B3A
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08206B74
	end
EventScript_JP_08206B3A: @ 0x08206B3A
	loadword 0x00, gText_Rom_207519
	callstd 0x04
	closemessage
	@ event command: special
	.byte 0x25
	.2byte 0x0087
	setvar 0x4099, 0x0000
	specialvar_ 0x800D, 0x005B
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08206BA4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08206BFC @ Movement_JP_08206BFC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	call EventScript_JP_08206A20
	call EventScript_JP_08206A76
	releaseall
	end
EventScript_JP_08206B74: @ 0x08206B74
	loadword 0x00, gText_Rom_2075D1
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08206B3A
	loadword 0x00, gText_Rom_20760A
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08206BFC @ Movement_JP_08206BFC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x4099, 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	releaseall
	end
EventScript_JP_08206BA4: @ 0x08206BA4
	incrementgamestat 0x2A
	setflag 0x089B
	@ event command: special
	.byte 0x25
	.2byte 0x0050
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08206C07 @ Movement_JP_08206C07
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08206C0B @ Movement_JP_08206C0B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_20757C
	callstd 0x04
	playfanfare 0x0172
	loadword 0x00, gText_Rom_2075A5
	callstd 0x04
	waitfanfare
	loadword 0x00, gText_Rom_2075B4
	callstd 0x04
	loadword 0x00, gText_Rom_2075CA
	callstd 0x04
	closemessage
	return
Movement_JP_08206BF3: @ 0x08206BF3
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
Movement_JP_08206BFC: @ 0x08206BFC
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
Movement_JP_08206C05: @ 0x08206C05
	@ object movement sequence
	walk_in_place_fastest_right
	step_end
Movement_JP_08206C07: @ 0x08206C07
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	step_end
Movement_JP_08206C0B: @ 0x08206C0B
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_fastest_left
	step_end
.globl EventScript_JP_08206C14
EventScript_JP_08206C14: @ 0x08206C14
	@ event command: special
	.byte 0x25
	.2byte 0x01B9
	specialvar_ 0x800D, 0x005A
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08206C8F
	call EventScript_JP_08248AF4
	call EventScript_JP_08206D30
	@ event command: special
	.byte 0x25
	.2byte 0x0053
	call 0x0821DD5F
	call EventScript_JP_08206C45
	call EventScript_JP_08206CAF
	waitstate
	end
EventScript_JP_08206C45: @ 0x08206C45
	copyvar 0x8000, 0x8010
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08206C77
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206C7D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08206C83
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206C89
	return
EventScript_JP_08206C77: @ 0x08206C77
	setvar 0x4088, 0x0001
	return
EventScript_JP_08206C7D: @ 0x08206C7D
	setvar 0x4088, 0x0002
	return
EventScript_JP_08206C83: @ 0x08206C83
	setvar 0x4088, 0x0003
	return
EventScript_JP_08206C89: @ 0x08206C89
	setvar 0x4088, 0x0004
	return
EventScript_JP_08206C8F: @ 0x08206C8F
	setflag 0x0307
	copyvar 0x4094, 0x0001
	giveitem 0x010A, 0x0001
	setvar 0x800B, 0x0008
	setvar 0x8010, 0x0003
	setvar 0x4099, 0x0001
	setflag 0x089B
	end
EventScript_JP_08206CAF: @ 0x08206CAF
	setflag 0x0155
	copyvar 0x8000, 0x8011
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08206CEF
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206CFC
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08206D09
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206D16
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08206D23
	return
EventScript_JP_08206CEF: @ 0x08206CEF
	@ event command: setwarp
	.byte 0x3E
	.byte 0x19
	.byte 0x25
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206CFC: @ 0x08206CFC
	@ event command: setwarp
	.byte 0x3E
	.byte 0x19
	.byte 0x23
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D09: @ 0x08206D09
	@ event command: setwarp
	.byte 0x3E
	.byte 0x19
	.byte 0x27
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D16: @ 0x08206D16
	@ event command: setwarp
	.byte 0x3E
	.byte 0x19
	.byte 0x26
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D23: @ 0x08206D23
	@ event command: setwarp
	.byte 0x3E
	.byte 0x19
	.byte 0x24
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D30: @ 0x08206D30
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08206DB5 @ Movement_JP_08206DB5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0047
	setmetatile 0x000C, 0x0002, 0x0221, 0x0001
	setmetatile 0x000C, 0x0003, 0x0261, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08206DB9 @ Movement_JP_08206DB9
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0047
	setmetatile 0x000C, 0x0002, 0x02D1, 0x0001
	setmetatile 0x000C, 0x0003, 0x02D9, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	delay 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08206DC6 @ Movement_JP_08206DC6
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08206DB2 @ Movement_JP_08206DB2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_24A10A
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08206DBD @ Movement_JP_08206DBD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08206DA8 @ Movement_JP_08206DA8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	releaseall
	return
Movement_JP_08206DA8: @ 0x08206DA8
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end
Movement_JP_08206DB2: @ 0x08206DB2
	@ object movement sequence
	walk_in_place_fastest_left
	walk_left
	step_end
Movement_JP_08206DB5: @ 0x08206DB5
	@ object movement sequence
	walk_left
	walk_left
	walk_in_place_fastest_down
	step_end
Movement_JP_08206DB9: @ 0x08206DB9
	@ object movement sequence
	walk_down
	walk_down
	walk_in_place_fastest_up
	step_end
Movement_JP_08206DBD: @ 0x08206DBD
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end
Movement_JP_08206DC6: @ 0x08206DC6
	@ object movement sequence
	walk_in_place_fastest_right
	step_end
.globl EventScript_JP_08206DC8
EventScript_JP_08206DC8: @ 0x08206DC8
	loadword 0x00, gText_Rom_207640
	callstd 0x02
	end
.globl EventScript_JP_08206DD1
EventScript_JP_08206DD1: @ 0x08206DD1
	loadword 0x00, gText_Rom_207692
	callstd 0x02
	end
.globl EventScript_JP_08206DDA
EventScript_JP_08206DDA: @ 0x08206DDA
	loadword 0x00, gText_Rom_2076BA
	callstd 0x02
	end
.globl EventScript_JP_08206DE3
EventScript_JP_08206DE3: @ 0x08206DE3
	loadword 0x00, gText_Rom_2076E6
	callstd 0x02
	end
.globl EventScript_JP_08206DEC
EventScript_JP_08206DEC: @ 0x08206DEC
	loadword 0x00, gText_Rom_20771C
	callstd 0x02
	end
.globl EventScript_JP_08206DF5
EventScript_JP_08206DF5: @ 0x08206DF5
	loadword 0x00, gText_Rom_20775B
	callstd 0x02
	end
.globl EventScript_JP_08206DFE
EventScript_JP_08206DFE: @ 0x08206DFE
	lockall
	fadescreen 0x01
	drawcontestwinner 0x01
	releaseall
	end
.globl EventScript_JP_08206E05
EventScript_JP_08206E05: @ 0x08206E05
	lockall
	fadescreen 0x01
	drawcontestwinner 0x02
	releaseall
	end
.globl EventScript_JP_08206E0C
EventScript_JP_08206E0C: @ 0x08206E0C
	lockall
	fadescreen 0x01
	drawcontestwinner 0x03
	releaseall
	end
.globl EventScript_JP_08206E13
EventScript_JP_08206E13: @ 0x08206E13
	lockall
	fadescreen 0x01
	drawcontestwinner 0x04
	releaseall
	end
.globl EventScript_JP_08206E1A
EventScript_JP_08206E1A: @ 0x08206E1A
	lockall
	fadescreen 0x01
	drawcontestwinner 0x05
	releaseall
	end
.globl EventScript_JP_08206E21
EventScript_JP_08206E21: @ 0x08206E21
	lockall
	fadescreen 0x01
	drawcontestwinner 0x06
	releaseall
	end
.globl EventScript_JP_08206E28
EventScript_JP_08206E28: @ 0x08206E28
	loadword 0x00, gText_Rom_2587AE
	callstd 0x02
	end
.globl EventScript_JP_08206E31
EventScript_JP_08206E31: @ 0x08206E31
	loadword 0x00, gText_Rom_2587BA
	callstd 0x02
	end
.globl EventScript_JP_08206E3A
EventScript_JP_08206E3A: @ 0x08206E3A
	lockall
	@ event command: special
	.byte 0x25
	.2byte 0x0103
	waitbuttonpress
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	releaseall
	end
.globl EventScript_JP_08206E44
EventScript_JP_08206E44: @ 0x08206E44
	lockall
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	waitbuttonpress
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	releaseall
	end
.globl EventScript_JP_08206E58
EventScript_JP_08206E58: @ 0x08206E58
	lock
	faceplayer
	loadword 0x00, gText_Rom_274705
	callstd 0x04
	goto EventScript_JP_08206EB9
	.byte 0x02
.globl EventScript_JP_08206E68
EventScript_JP_08206E68: @ 0x08206E68
	lock
	loadword 0x00, gText_Rom_27495B
	callstd 0x04
	release
	end
.globl EventScript_JP_08206E73
EventScript_JP_08206E73: @ 0x08206E73
	lock
	loadword 0x00, gText_Rom_274961
	callstd 0x04
	release
	end
.globl EventScript_JP_08206E7E
EventScript_JP_08206E7E: @ 0x08206E7E
	lock
	loadword 0x00, gText_Rom_274966
	callstd 0x04
	release
	end
.globl EventScript_JP_08206E89
EventScript_JP_08206E89: @ 0x08206E89
	lock
	faceplayer
	loadword 0x00, gText_Rom_27496C
	callstd 0x04
	goto EventScript_JP_08206EB9
	.byte 0x02
.globl EventScript_JP_08206E99
EventScript_JP_08206E99: @ 0x08206E99
	lock
	faceplayer
	loadword 0x00, gText_Rom_274990
	callstd 0x04
	goto EventScript_JP_08206EB9
	.byte 0x02
.globl EventScript_JP_08206EA9
EventScript_JP_08206EA9: @ 0x08206EA9
	lock
	faceplayer
	loadword 0x00, gText_Rom_2749E1
	callstd 0x04
	goto EventScript_JP_08206EB9
	.byte 0x02
EventScript_JP_08206EB9: @ 0x08206EB9
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
.globl EventScript_JP_08206EC6
EventScript_JP_08206EC6: @ 0x08206EC6
	@ event command: special
	.byte 0x25
	.2byte 0x01B9
	lock
	faceplayer
	loadword 0x00, gText_Rom_24A6FB
	callstd 0x04
	goto EventScript_JP_08206ED9
	.byte 0x02
EventScript_JP_08206ED9: @ 0x08206ED9
	message gText_Rom_24A744
	waitmessage
	multichoice 0x00, 0x00, 0x02, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08206F16
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206FCD
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820703F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820703F
	end
EventScript_JP_08206F16: @ 0x08206F16
	loadword 0x00, gText_Rom_24A50F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820703F
	call 0x082423E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820703F
	message gText_Rom_24AB68
	waitmessage
	specialvar_ 0x400D, 0x019C
	multichoice 0x00, 0x00, 0x55, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08206F7B
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206F86
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820703F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820703F
	end
EventScript_JP_08206F7B: @ 0x08206F7B
	setvar 0x400C, 0x0000
	goto EventScript_JP_08206F9C
	.byte 0x02
EventScript_JP_08206F86: @ 0x08206F86
	setvar 0x400C, 0x0001
	compare_var_to_value 0x400D, 0x0001
	goto_if 0x01, EventScript_JP_082071BC
	goto EventScript_JP_08206F9C
	.byte 0x02
EventScript_JP_08206F9C: @ 0x08206F9C
	message gText_Rom_24A755
	waitmessage
	multichoice 0x00, 0x00, 0x04, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_0820703F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820703F
	copyvar 0x8011, 0x800D
	goto EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_08206FCD: @ 0x08206FCD
	message gText_Rom_24A734
	waitmessage
	multichoice 0x00, 0x00, 0x54, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08207015
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08207023
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08207031
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206ED9
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08206ED9
	end
EventScript_JP_08207015: @ 0x08207015
	loadword 0x00, gText_Rom_24A86C
	callstd 0x04
	goto EventScript_JP_08206FCD
	.byte 0x02
EventScript_JP_08207023: @ 0x08207023
	loadword 0x00, gText_Rom_24A9B5
	callstd 0x04
	goto EventScript_JP_08206FCD
	.byte 0x02
EventScript_JP_08207031: @ 0x08207031
	loadword 0x00, gText_Rom_24AA8A
	callstd 0x04
	goto EventScript_JP_08206FCD
	.byte 0x02
EventScript_JP_0820703F: @ 0x0820703F
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	loadword 0x00, gText_Rom_24A52D
	callstd 0x04
	release
	end
EventScript_JP_0820704C: @ 0x0820704C
	loadword 0x00, gText_Rom_24A7AE
	callstd 0x04
	setvar 0x8010, 0x0000
	choosecontestmon
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_0820703F
	@ event command: special
	.byte 0x25
	.2byte 0x0054
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082070A0
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082070CA
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_082070CA
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_082070AE
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x01, EventScript_JP_082070BC
	end
EventScript_JP_082070A0: @ 0x082070A0
	loadword 0x00, gText_Rom_249FDD
	callstd 0x04
	goto EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_082070AE: @ 0x082070AE
	loadword 0x00, gText_Rom_24A790
	callstd 0x04
	goto EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_082070BC: @ 0x082070BC
	loadword 0x00, gText_Rom_24A769
	callstd 0x04
	goto EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_082070CA: @ 0x082070CA
	copyvar 0x8008, 0x8004
	goto EventScript_JP_082070D5
	.byte 0x02
EventScript_JP_082070D5: @ 0x082070D5
	compare_var_to_value 0x400D, 0x0001
	goto_if 0x01, EventScript_JP_0820720B
	compare_var_to_value 0x400D, 0x0002
	goto_if 0x04, EventScript_JP_0820703F
	message gText_Rom_24A65D
	waitmessage
	copyvar 0x8004, 0x800D
	compare_var_to_value 0x400C, 0x0000
	call_if 0x01, EventScript_JP_0820717B
	compare_var_to_value 0x400C, 0x0001
	call_if 0x01, EventScript_JP_08207180
	compare_var_to_value 0x400C, 0x0002
	goto_if 0x04, EventScript_JP_0820703F
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x01, EventScript_JP_08207193
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_08207193
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_0820703F
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_082071AF
	compare_var_to_value 0x800D, 0x000A
	goto_if 0x01, EventScript_JP_082071A1
	message3 gText_Rom_24A60C
	contestlinktransfer
	copyvar 0x8000, 0x8004
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082071D7
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08207185
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082071C9
	end
EventScript_JP_0820717B: @ 0x0820717B
	@ event command: special
	.byte 0x25
	.2byte 0x01BA
	waitstate
	return
EventScript_JP_08207180: @ 0x08207180
	@ event command: special
	.byte 0x25
	.2byte 0x005C
	waitstate
	return
EventScript_JP_08207185: @ 0x08207185
	loadword 0x00, gText_Rom_24A629
	callstd 0x04
	goto EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_08207193: @ 0x08207193
	loadword 0x00, gText_Rom_24A646
	callstd 0x04
	goto EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_082071A1: @ 0x082071A1
	loadword 0x00, gText_Rom_24A801
	callstd 0x04
	goto EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_082071AF: @ 0x082071AF
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	loadword 0x00, gText_Rom_247D67
	callstd 0x04
	release
	end
EventScript_JP_082071BC: @ 0x082071BC
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	loadword 0x00, gText_Rom_24AB11
	callstd 0x04
	release
	end
EventScript_JP_082071C9: @ 0x082071C9
	loadword 0x00, gText_Rom_24A619
	callstd 0x04
	goto EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_082071D7: @ 0x082071D7
	@ event command: special
	.byte 0x25
	.2byte 0x004D
	addvar 0x8004, 0x0001
	buffernumberstring 0x01, 0x8004
	messageautoscroll gText_Rom_24A6AA
	waitmessage
	subvar 0x8004, 0x0001
	call EventScript_JP_08207309
	setvar 0x4086, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x0056
	setvar 0x4088, 0x0005
	setvar 0x8010, 0x0003
	call EventScript_JP_08206CAF
	end
EventScript_JP_0820720B: @ 0x0820720B
	compare_var_to_value 0x8011, 0x0000
	call_if 0x01, EventScript_JP_08207248
	compare_var_to_value 0x8011, 0x0001
	call_if 0x01, EventScript_JP_0820724E
	compare_var_to_value 0x8011, 0x0002
	call_if 0x01, EventScript_JP_08207254
	compare_var_to_value 0x8011, 0x0003
	call_if 0x01, EventScript_JP_0820725A
	compare_var_to_value 0x8011, 0x0004
	call_if 0x01, EventScript_JP_08207260
	goto EventScript_JP_08207266
	.byte 0x02
EventScript_JP_08207248: @ 0x08207248
	setvar 0x8004, 0x000F
	return
EventScript_JP_0820724E: @ 0x0820724E
	setvar 0x8004, 0x0010
	return
EventScript_JP_08207254: @ 0x08207254
	setvar 0x8004, 0x0011
	return
EventScript_JP_0820725A: @ 0x0820725A
	setvar 0x8004, 0x0012
	return
EventScript_JP_08207260: @ 0x08207260
	setvar 0x8004, 0x0013
	return
EventScript_JP_08207266: @ 0x08207266
	message gText_Rom_24A7C2
	waitmessage
	multichoice 0x10, 0x06, 0x51, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082072CB
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082072A3
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820703F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820703F
	end
EventScript_JP_082072A3: @ 0x082072A3
	call EventScript_JP_082072F3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082072FD
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_08207266
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, EventScript_JP_082072A3
	release
	end
EventScript_JP_082072CB: @ 0x082072CB
	call EventScript_JP_082072F8
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082072FD
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_08207266
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, EventScript_JP_082072CB
	release
	end
EventScript_JP_082072F3: @ 0x082072F3
	@ event command: special
	.byte 0x25
	.2byte 0x019D
	waitstate
	return
EventScript_JP_082072F8: @ 0x082072F8
	@ event command: special
	.byte 0x25
	.2byte 0x019E
	waitstate
	return
EventScript_JP_082072FD: @ 0x082072FD
	message3 gText_Rom_24A60C
	contestlinktransfer
	goto EventScript_JP_082071D7
	.byte 0x02
EventScript_JP_08207309: @ 0x08207309
	messageautoscroll gText_Rom_24A6E8
	waitmessage
	delay 0x0014
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0820739D @ Movement_JP_0820739D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0047
	setmetatile 0x0011, 0x0002, 0x0221, 0x0001
	setmetatile 0x0011, 0x0003, 0x0261, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x082073A1 @ Movement_JP_082073A1
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0047
	setmetatile 0x0011, 0x0002, 0x02D1, 0x0001
	setmetatile 0x0011, 0x0003, 0x02D9, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	delay 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x082073AF @ Movement_JP_082073AF
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820739B @ Movement_JP_0820739B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	messageautoscroll gText_Rom_24A10A
	waitmessage
	delay 0x0014
	closemessage
	call EventScript_JP_08249BC1
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x082073A5 @ Movement_JP_082073A5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08207390 @ Movement_JP_08207390
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	return
Movement_JP_08207390: @ 0x08207390
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end
Movement_JP_0820739B: @ 0x0820739B
	@ object movement sequence
	walk_right
	step_end
Movement_JP_0820739D: @ 0x0820739D
	@ object movement sequence
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end
Movement_JP_082073A1: @ 0x082073A1
	@ object movement sequence
	walk_down
	walk_down
	walk_in_place_fastest_up
	step_end
Movement_JP_082073A5: @ 0x082073A5
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end
Movement_JP_082073AF: @ 0x082073AF
	@ object movement sequence
	walk_in_place_fastest_left
	step_end
.globl EventScript_JP_082073B1
EventScript_JP_082073B1: @ 0x082073B1
	lock
	faceplayer
	checkflag 0x005F
	goto_if 0x01, EventScript_JP_082073C6
	loadword 0x00, gText_Rom_2073D0
	callstd 0x04
	release
	end
EventScript_JP_082073C6: @ 0x082073C6
	loadword 0x00, gText_Rom_2073F8
	callstd 0x04
	release
	end
