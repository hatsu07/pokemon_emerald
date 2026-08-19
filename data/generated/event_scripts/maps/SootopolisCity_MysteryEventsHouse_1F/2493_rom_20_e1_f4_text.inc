	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:207 SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou
	.globl gText_Rom_20E1F4
gText_Rom_20E1F4: @ 0x0820E1F4
	.string "ざんねん じゃったのう\nじゃが よい しょうぶ じゃったぞ!\lつぎこそは かてると よいのう$"
	.if (. - gText_Rom_20E1F4) > 0x2f
	.error "gText_Rom_20E1F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E1F4) < 0x2f
	.space 0x2f - (. - gText_Rom_20E1F4)
	.endif
	@ analyzed canonical ROM range 0x0820E223-0x0820E46A
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820E223: @ 0x0820E223
	.byte 0x00
MapScripts_JP_0820E224: @ 0x0820E224
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_0820E2A3
	.byte 0x05
	.4byte EventScript_JP_0820E23F
	.byte 0x01
	.4byte EventScript_JP_0820E242
	.byte 0x03
	.4byte EventScript_JP_0820E239
	.byte 0
EventScript_JP_0820E239: @ 0x0820E239
	setvar 0x4022, 0x0001
	end
EventScript_JP_0820E23F: @ 0x0820E23F
	setstepcallback 0x04
	end
EventScript_JP_0820E242: @ 0x0820E242
	call EventScript_JP_0820E24B
	@ event command: special
	.byte 0x25
	.2byte 0x0134
	end
EventScript_JP_0820E24B: @ 0x0820E24B
	compare_var_to_value 0x4022, 0x0008
	goto_if 0x00, EventScript_JP_0820E2A2
	compare_var_to_value 0x4022, 0x001C
	goto_if 0x00, EventScript_JP_0820E290
	compare_var_to_value 0x4022, 0x0043
	goto_if 0x00, EventScript_JP_0820E27E
	setmetatile 0x0008, 0x0004, 0x0207, 0x0000
	setmetatile 0x0008, 0x0005, 0x0207, 0x0000
EventScript_JP_0820E27E: @ 0x0820E27E
	setmetatile 0x0008, 0x000A, 0x0207, 0x0000
	setmetatile 0x0008, 0x000B, 0x0207, 0x0000
EventScript_JP_0820E290: @ 0x0820E290
	setmetatile 0x0008, 0x000F, 0x0207, 0x0000
	setmetatile 0x0008, 0x0010, 0x0207, 0x0000
EventScript_JP_0820E2A2: @ 0x0820E2A2
	return
MapScriptTable_JP_0820E2A3: @ 0x0820E2A3
	@ conditional map script table
	.2byte 0x4022, 0x0008
	.4byte EventScript_JP_0820E2C5
	.2byte 0x4022, 0x001C
	.4byte EventScript_JP_0820E2D9
	.2byte 0x4022, 0x0043
	.4byte EventScript_JP_0820E2ED
	.2byte 0x4022, 0x0000
	.4byte EventScript_JP_0820E301
	.2byte 0
EventScript_JP_0820E2C5: @ 0x0820E2C5
	addvar 0x4022, 0x0001
	delay 0x0028
	playse 0x0028
	call EventScript_JP_0820E24B
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	end
EventScript_JP_0820E2D9: @ 0x0820E2D9
	addvar 0x4022, 0x0001
	delay 0x0028
	playse 0x0028
	call EventScript_JP_0820E24B
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	end
EventScript_JP_0820E2ED: @ 0x0820E2ED
	addvar 0x4022, 0x0001
	delay 0x0028
	playse 0x0028
	call EventScript_JP_0820E24B
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	end
EventScript_JP_0820E301: @ 0x0820E301
	lockall
	delay 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820E31A @ Movement_JP_0820E31A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x002B
	delay 0x003C
	@ event command: warphole
	.byte 0x3C
	.byte 0x0F
	.byte 0x01
	.byte 0x27, 0x02
Movement_JP_0820E31A: @ 0x0820E31A
	@ object movement sequence
	set_invisible
	step_end
.globl EventScript_JP_0820E31C
EventScript_JP_0820E31C: @ 0x0820E31C
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x01
	.2byte 0x0110
	.2byte 0x0000
	.4byte gText_Rom_20E56E @ gText_Rom_20E56E
	.4byte gText_Rom_20E65F @ gText_Rom_20E65F
	.4byte 0x0820E35A @ EventScript_JP_0820E35A
	specialvar_ 0x800D, 0x0039
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820E3FD
	checkflag 0x00AC
	goto_if 0x00, EventScript_JP_0820E3CF
	checkflag 0x086C
	goto_if 0x00, EventScript_JP_0820E3F3
	loadword 0x00, gText_Rom_20E827
	callstd 0x04
	release
	end
EventScript_JP_0820E35A: @ 0x0820E35A
	message gText_Rom_20E729
	waitmessage
	call 0x0824310A
	loadword 0x00, gText_Rom_20E741
	callstd 0x04
	setflag 0x04F7
	setflag 0x086E
	setflag 0x0356
	setflag 0x03CD
	setflag 0x0330
	setvar 0x405E, 0x0006
	clearflag 0x0347
	setvar 0x8008, 0x0008
	call 0x08242FCF
	call EventScript_JP_0820E3AC
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, gText_Rom_20E80C
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x01D9
	release
	end
EventScript_JP_0820E3AC: @ 0x0820E3AC
	setorcopyvar 0x8000, 0x0123
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430EA
	loadword 0x00, gText_Rom_20E7C1
	callstd 0x04
	setflag 0x00AC
	return
EventScript_JP_0820E3CF: @ 0x0820E3CF
	setorcopyvar 0x8000, 0x0123
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	loadword 0x00, gText_Rom_20E7C1
	callstd 0x04
	setflag 0x00AC
	release
	end
EventScript_JP_0820E3F3: @ 0x0820E3F3
	loadword 0x00, gText_Rom_20E892
	callstd 0x04
	release
	end
EventScript_JP_0820E3FD: @ 0x0820E3FD
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x07
	.2byte 0x0110
	.2byte 0x0000
	.4byte gText_Rom_20E912 @ gText_Rom_20E912
	.4byte gText_Rom_20E97B @ gText_Rom_20E97B
	.4byte gText_Rom_20EA1D @ gText_Rom_20EA1D
	loadword 0x00, gText_Rom_20E99E
	callstd 0x06
	end
.globl EventScript_JP_0820E418
EventScript_JP_0820E418: @ 0x0820E418
	lock
	faceplayer
	checkflag 0x04F7
	goto_if 0x01, EventScript_JP_0820E42D
	loadword 0x00, gText_Rom_20E46B
	callstd 0x04
	release
	end
EventScript_JP_0820E42D: @ 0x0820E42D
	loadword 0x00, gText_Rom_20E50B
	callstd 0x04
	release
	end
.globl EventScript_JP_0820E437
EventScript_JP_0820E437: @ 0x0820E437
	lockall
	checkflag 0x086E
	goto_if 0x01, EventScript_JP_0820E457
	goto EventScript_JP_0820E461
	.byte 0x02
.globl EventScript_JP_0820E447
EventScript_JP_0820E447: @ 0x0820E447
	lockall
	checkflag 0x086E
	goto_if 0x01, EventScript_JP_0820E457
	goto EventScript_JP_0820E461
	.byte 0x02
EventScript_JP_0820E457: @ 0x0820E457
	loadword 0x00, gText_Rom_20E8F2
	callstd 0x04
	releaseall
	end
EventScript_JP_0820E461: @ 0x0820E461
	loadword 0x00, gText_Rom_20E8E5
	callstd 0x04
	releaseall
	end
