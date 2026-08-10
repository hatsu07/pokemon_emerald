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
sAnalyzedEventData_0821106B: @ 0x0821106B
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
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
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
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
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
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
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
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
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
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScripts_JP_082110D4: @ 0x082110D4
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082110DF
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_082110DF: @ 0x082110DF
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0014
	@ event command: setflag
	.byte 0x29
	.2byte 0x08B4
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0107
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x082110EF @ EventScript_JP_082110EF
	@ event command: end
	.byte 0x02
EventScript_JP_082110EF: @ 0x082110EF
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0003
	.2byte 0x0009
	.2byte 0x0002
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0004
	.2byte 0x000A
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_082110FE: @ 0x082110FE
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0821110C: @ 0x0821110C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemart
	.byte 0x86
	.4byte 0x08211124
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243920 @ gText_Rom_243920
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x00, 0x02, 0x00, 0x15, 0x00, 0x14, 0x00, 0x13, 0x00, 0x17, 0x00, 0x18, 0x00, 0x54, 0x00, 0x00
	.byte 0x00, 0x6C, 0x02
EventScript_JP_08211136: @ 0x08211136
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0107
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082111BB @ EventScript_JP_082111BB
	@ event command: getplayerxy
	.byte 0x42
	.2byte 0x4000
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4000
	.2byte 0x000B
	@ event command: call_if
	.byte 0x07
	.byte 0x04
	.4byte 0x08211198 @ EventScript_JP_08211198
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4000
	.2byte 0x0008
	@ event command: call_if
	.byte 0x07
	.byte 0x03
	.4byte 0x082111A3 @ EventScript_JP_082111A3
	@ event command: message
	.byte 0x67
	.4byte 0x082111E8 @ gText_Rom_2111E8
	@ event command: waitmessage
	.byte 0x66
	@ event command: delay
	.byte 0x28
	.2byte 0x004B
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086C
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082111AE @ EventScript_JP_082111AE
	@ event command: closemessage
	.byte 0x68
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
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0171
	@ event command: message
	.byte 0x67
	.4byte 0x08211267 @ gText_Rom_211267
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitfanfare
	.byte 0x32
	@ event command: closemessage
	.byte 0x68
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0003
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0004
	@ event command: setflag
	.byte 0x29
	.2byte 0x0107
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08211198: @ 0x08211198
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082111DA @ Movement_JP_082111DA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_082111A3: @ 0x082111A3
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082111DE @ Movement_JP_082111DE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_082111AE: @ 0x082111AE
	@ event command: playse
	.byte 0x2F
	.2byte 0x0020
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211231 @ gText_Rom_211231
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082111BB: @ 0x082111BB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211267 @ gText_Rom_211267
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_082111DA: @ 0x082111DA
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_082111DE: @ 0x082111DE
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_082111E2: @ 0x082111E2
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_082111E5: @ 0x082111E5
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
