	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:258 EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations
	.globl gText_Rom_211025
gText_Rom_211025: @ 0x08211025
	.string "ユウキ『……えーっ!\n…… …… ……\n…… …… ……\pま しかたないか\nそういう きまり だもんな\p{PLAYER}! よかったな\nおめでとう!!$"
	.if (. - gText_Rom_211025) > 0x46
	.error "gText_Rom_211025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211025) < 0x46
	.space 0x46 - (. - gText_Rom_211025)
	.endif
	@ analyzed canonical ROM range 0x0821106B-0x082111E7
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0821106B: @ 0x0821106B
	@ map script dispatch table
	.byte 0x04
	.4byte MapScriptTable_JP_08211071
	.byte 0
MapScriptTable_JP_08211071: @ 0x08211071
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821107B
	.2byte 0
EventScript_JP_0821107B: @ 0x0821107B
	turnobject 0x00FF, 0x02
	end
MapScripts_JP_08211080: @ 0x08211080
	@ map script dispatch table
	.byte 0x04
	.4byte MapScriptTable_JP_08211086
	.byte 0
MapScriptTable_JP_08211086: @ 0x08211086
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08211090
	.2byte 0
EventScript_JP_08211090: @ 0x08211090
	turnobject 0x00FF, 0x02
	end
MapScripts_JP_08211095: @ 0x08211095
	@ map script dispatch table
	.byte 0x04
	.4byte MapScriptTable_JP_0821109B
	.byte 0
MapScriptTable_JP_0821109B: @ 0x0821109B
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082110A5
	.2byte 0
EventScript_JP_082110A5: @ 0x082110A5
	turnobject 0x00FF, 0x02
	end
MapScripts_JP_082110AA: @ 0x082110AA
	@ map script dispatch table
	.byte 0x04
	.4byte MapScriptTable_JP_082110B0
	.byte 0
MapScriptTable_JP_082110B0: @ 0x082110B0
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082110BA
	.2byte 0
EventScript_JP_082110BA: @ 0x082110BA
	turnobject 0x00FF, 0x02
	end
MapScripts_JP_082110BF: @ 0x082110BF
	@ map script dispatch table
	.byte 0x04
	.4byte MapScriptTable_JP_082110C5
	.byte 0
MapScriptTable_JP_082110C5: @ 0x082110C5
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082110CF
	.2byte 0
EventScript_JP_082110CF: @ 0x082110CF
	turnobject 0x00FF, 0x02
	end
MapScripts_JP_082110D4: @ 0x082110D4
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082110DF
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_082110DF: @ 0x082110DF
	setrespawn 0x0014
	setflag 0x08B4
	checkflag 0x0107
	call_if 0x00, EventScript_JP_082110EF
	end
EventScript_JP_082110EF: @ 0x082110EF
	setobjectxyperm 0x0003, 0x0009, 0x0002
	setobjectxyperm 0x0004, 0x000A, 0x0002
	return
EventScript_JP_082110FE: @ 0x082110FE
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
EventScript_JP_0821110C: @ 0x0821110C
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x08211124
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x02, 0x00, 0x15, 0x00, 0x14, 0x00, 0x13, 0x00, 0x17, 0x00, 0x18, 0x00, 0x54, 0x00, 0x00
	.byte 0x00, 0x6C, 0x02
EventScript_JP_08211136: @ 0x08211136
	lockall
	checkflag 0x0107
	goto_if 0x01, EventScript_JP_082111BB
	getplayerxy 0x4000, 0x4001
	compare_var_to_value 0x4000, 0x000B
	call_if 0x04, EventScript_JP_08211198
	compare_var_to_value 0x4000, 0x0008
	call_if 0x03, EventScript_JP_082111A3
	message gText_Rom_2111E8
	waitmessage
	delay 0x004B
	checkflag 0x086C
	goto_if 0x00, EventScript_JP_082111AE
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x082111E2 @ Movement_JP_082111E2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x082111E5 @ Movement_JP_082111E5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x000A
	playfanfare 0x0171
	message gText_Rom_211267
	waitmessage
	waitfanfare
	closemessage
	moveobjectoffscreen 0x0003
	moveobjectoffscreen 0x0004
	setflag 0x0107
	releaseall
	end
EventScript_JP_08211198: @ 0x08211198
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082111DA @ Movement_JP_082111DA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082111A3: @ 0x082111A3
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082111DE @ Movement_JP_082111DE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082111AE: @ 0x082111AE
	playse 0x0020
	loadword 0x00, gText_Rom_211231
	callstd 0x04
	releaseall
	end
EventScript_JP_082111BB: @ 0x082111BB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_211267
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	releaseall
	end
Movement_JP_082111DA: @ 0x082111DA
	@ object movement sequence
	walk_down
	walk_left
	walk_in_place_fastest_up
	step_end
Movement_JP_082111DE: @ 0x082111DE
	@ object movement sequence
	walk_down
	walk_right
	walk_in_place_fastest_up
	step_end
Movement_JP_082111E2: @ 0x082111E2
	@ object movement sequence
	walk_left
	walk_in_place_fastest_down
	step_end
Movement_JP_082111E5: @ 0x082111E5
	@ object movement sequence
	walk_right
	walk_in_place_fastest_down
	step_end
