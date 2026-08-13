	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:207 SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou
	.globl gText_Rom_210105
gText_Rom_210105: @ 0x08210105
	.string "ざんねん じゃったのう\nじゃが よい しょうぶ じゃったぞ!\lつぎこそは かてると よいのう$"
	.if (. - gText_Rom_210105) > 0x2f
	.error "gText_Rom_210105 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210105) < 0x2f
	.space 0x2f - (. - gText_Rom_210105)
	.endif
	@ analyzed canonical ROM range 0x08210134-0x0821028B
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_08210134: @ 0x08210134
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0821013F
	.byte 0x02
	.4byte MapScriptTable_JP_08210143
	.byte 0
EventScript_JP_0821013F: @ 0x0821013F
	@ event command: special
	.byte 0x25
	.2byte 0x0141
	end
MapScriptTable_JP_08210143: @ 0x08210143
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821014D
	.2byte 0
EventScript_JP_0821014D: @ 0x0821014D
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082101D8 @ Movement_JP_082101D8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EB
	loadword 0x00, 0x02021C7C
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EC
	waitstate
	compare_var_to_value 0x800D, 0x0003
	call_if 0x01, EventScript_JP_082101B4
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_082101C2
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, EventScript_JP_082101CD
	closemessage
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082101DE @ Movement_JP_082101DE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	setvar 0x4001, 0x0001
	@ event command: warp
	.byte 0x39
	.byte 0x0F
	.byte 0x0D
	.byte 0xFF
	.2byte 0x0003
	.2byte 0x0001
	.byte 0x27, 0x6B, 0x02
EventScript_JP_082101B4: @ 0x082101B4
	setvar 0x40C0, 0x0003
	loadword 0x00, gText_Rom_210098
	callstd 0x04
	return
EventScript_JP_082101C2: @ 0x082101C2
	setvar 0x40C0, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008D
	waitmessage
	waitbuttonpress
	return
EventScript_JP_082101CD: @ 0x082101CD
	setvar 0x40C0, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x008D
	waitmessage
	waitbuttonpress
	return
Movement_JP_082101D8: @ 0x082101D8
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end
Movement_JP_082101DE: @ 0x082101DE
	@ object movement sequence
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	step_end
MapScripts_JP_082101E6: @ 0x082101E6
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_08210202
	.byte 0x04
	.4byte MapScriptTable_JP_08210223
	.byte 0x03
	.4byte EventScript_JP_082101FB
	.byte 0x02
	.4byte MapScriptTable_JP_08210232
	.byte 0
EventScript_JP_082101FB: @ 0x082101FB
	setflag 0x01CF
	setflag 0x0319
	end
EventScript_JP_08210202: @ 0x08210202
	checkflag 0x04FB
	call_if 0x01, EventScript_JP_08210217
	compare_var_to_value 0x409C, 0x0001
	call_if 0x01, EventScript_JP_0821021D
	end
EventScript_JP_08210217: @ 0x08210217
	call 0x0824353F
	return
EventScript_JP_0821021D: @ 0x0821021D
	call 0x082435E2
	return
MapScriptTable_JP_08210223: @ 0x08210223
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821022D
	.2byte 0
EventScript_JP_0821022D: @ 0x0821022D
	turnobject 0x00FF, 0x02
	end
MapScriptTable_JP_08210232: @ 0x08210232
	@ conditional map script table
	.2byte 0x409C, 0x0000
	.4byte EventScript_JP_0821023C
	.2byte 0
EventScript_JP_0821023C: @ 0x0821023C
	lockall
	call 0x082434F8
	setvar 0x409C, 0x0001
	releaseall
	end
.globl EventScript_JP_08210249
EventScript_JP_08210249: @ 0x08210249
	lock
	faceplayer
	checkflag 0x04FB
	goto_if 0x01, EventScript_JP_08210270
	playbgm 0x01C2, 0x00
	loadword 0x00, gText_Rom_21028C
	callstd 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0105
	.2byte 0x0000
	.4byte 0x0821030F @ gText_Rom_21030F
	goto EventScript_JP_0821027A
	.byte 0x02
EventScript_JP_08210270: @ 0x08210270
	loadword 0x00, gText_Rom_21032F
	callstd 0x04
	release
	end
EventScript_JP_0821027A: @ 0x0821027A
	setflag 0x04FB
	call 0x0824347B
	loadword 0x00, gText_Rom_21032F
	callstd 0x04
	release
	end
