	@ data/text/battle_tent.inc:431 VerdanturfTown_BattleTentLobby_Text_ExplainWhenInDangerRules
	.globl gText_Rom_22AEA7
gText_Rom_22AEA7: @ 0x0822AEA7
	.string "ポケモンの せいかくの なかには\nピンチに なることで もともとの\lせいかくとは ちがう タイプの\lわざを つかう ように\lなるものが あります\pピンチに なって すこし かわった\nこうどうを はじめた ポケモンには\lじゅうぶん ちゅうい しましょう$"
	.if (. - gText_Rom_22AEA7) > 0x7e
	.error "gText_Rom_22AEA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AEA7) < 0x7e
	.space 0x7e - (. - gText_Rom_22AEA7)
	.endif
	@ analyzed canonical ROM range 0x0822AF25-0x0822B05E
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0822AF25: @ 0x0822AF25
MapScripts_JP_0822AF25: @ 0x0822AF25
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_0822AF2B
	.byte 0
MapScriptTable_JP_0822AF2B: @ 0x0822AF2B
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_0822AF35
	.2byte 0
EventScript_JP_0822AF35: @ 0x0822AF35
	@ event command: delay
	.byte 0x28
	.2byte 0x0010
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B03A @ Movement_JP_0822B03A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822B03A @ Movement_JP_0822B03A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B00D @ EventScript_JP_0822B00D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B016 @ EventScript_JP_0822B016
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B01F @ EventScript_JP_0822B01F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B028 @ EventScript_JP_0822B028
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B031 @ EventScript_JP_0822B031
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822AFD5 @ EventScript_JP_0822AFD5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B03F @ Movement_JP_0822B03F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822B046 @ Movement_JP_0822B046
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0006
	.2byte 0x0003
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B05C @ Movement_JP_0822B05C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822B05B @ Movement_JP_0822B05B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0006
	.2byte 0x0003
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: goto
	.byte 0x05
	.4byte 0x0822B003 @ EventScript_JP_0822B003
EventScript_JP_0822AFD5: @ 0x0822AFD5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B04D @ Movement_JP_0822B04D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822B054 @ Movement_JP_0822B054
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x000A
	.2byte 0x0003
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B05C @ Movement_JP_0822B05C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822B05B @ Movement_JP_0822B05B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x000A
	.2byte 0x0003
	@ event command: waitdooranim
	.byte 0xAE
EventScript_JP_0822B003: @ 0x0822B003
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x18
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0004
	.byte 0x27, 0x02
EventScript_JP_0822B00D: @ 0x0822B00D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B05F @ gText_Rom_22B05F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822B016: @ 0x0822B016
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B096 @ gText_Rom_22B096
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822B01F: @ 0x0822B01F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B0CE @ gText_Rom_22B0CE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822B028: @ 0x0822B028
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B104 @ gText_Rom_22B104
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822B031: @ 0x0822B031
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B12C @ gText_Rom_22B12C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
Movement_JP_0822B03A: @ 0x0822B03A
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822B03F: @ 0x0822B03F
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822B046: @ 0x0822B046
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822B04D: @ 0x0822B04D
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822B054: @ 0x0822B054
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822B05B: @ 0x0822B05B
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
