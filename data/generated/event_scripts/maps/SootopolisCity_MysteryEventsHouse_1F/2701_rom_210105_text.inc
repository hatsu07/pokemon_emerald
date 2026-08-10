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
sAnalyzedEventData_08210134: @ 0x08210134
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
	@ event command: end
	.byte 0x02
MapScriptTable_JP_08210143: @ 0x08210143
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821014D
	.2byte 0
EventScript_JP_0821014D: @ 0x0821014D
	@ event command: lockall
	.byte 0x69
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x02021C7C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EC
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082101B4 @ EventScript_JP_082101B4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082101C2 @ EventScript_JP_082101C2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082101CD @ EventScript_JP_082101CD
	@ event command: closemessage
	.byte 0x68
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
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: warp
	.byte 0x39
	.byte 0x0F
	.byte 0x0D
	.byte 0xFF
	.2byte 0x0003
	.2byte 0x0001
	.byte 0x27, 0x6B, 0x02
EventScript_JP_082101B4: @ 0x082101B4
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C0
	.2byte 0x0003
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210098 @ gText_Rom_210098
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_082101C2: @ 0x082101C2
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C0
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008D
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: return
	.byte 0x03
EventScript_JP_082101CD: @ 0x082101CD
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C0
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x008D
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: return
	.byte 0x03
Movement_JP_082101D8: @ 0x082101D8
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_082101DE: @ 0x082101DE
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
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
	@ event command: setflag
	.byte 0x29
	.2byte 0x01CF
	@ event command: setflag
	.byte 0x29
	.2byte 0x0319
	@ event command: end
	.byte 0x02
EventScript_JP_08210202: @ 0x08210202
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04FB
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08210217 @ EventScript_JP_08210217
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x409C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0821021D @ EventScript_JP_0821021D
	@ event command: end
	.byte 0x02
EventScript_JP_08210217: @ 0x08210217
	@ event command: call
	.byte 0x04
	.4byte 0x0824353F
	@ event command: return
	.byte 0x03
EventScript_JP_0821021D: @ 0x0821021D
	@ event command: call
	.byte 0x04
	.4byte 0x082435E2
	@ event command: return
	.byte 0x03
MapScriptTable_JP_08210223: @ 0x08210223
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821022D
	.2byte 0
EventScript_JP_0821022D: @ 0x0821022D
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_08210232: @ 0x08210232
	@ conditional map script table
	.2byte 0x409C, 0x0000
	.4byte EventScript_JP_0821023C
	.2byte 0
EventScript_JP_0821023C: @ 0x0821023C
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x082434F8
	@ event command: setvar
	.byte 0x16
	.2byte 0x409C
	.2byte 0x0001
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08210249: @ 0x08210249
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04FB
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08210270 @ EventScript_JP_08210270
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01C2
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0821028C @ gText_Rom_21028C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0105
	.2byte 0x0000
	.4byte 0x0821030F @ gText_Rom_21030F
	@ event command: goto
	.byte 0x05
	.4byte 0x0821027A @ EventScript_JP_0821027A
	.byte 0x02
EventScript_JP_08210270: @ 0x08210270
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0821032F @ gText_Rom_21032F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0821027A: @ 0x0821027A
	@ event command: setflag
	.byte 0x29
	.2byte 0x04FB
	@ event command: call
	.byte 0x04
	.4byte 0x0824347B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0821032F @ gText_Rom_21032F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
