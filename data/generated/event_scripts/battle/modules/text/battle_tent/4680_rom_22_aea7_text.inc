	@ data/text/battle_tent.inc:431 VerdanturfTown_BattleTentLobby_Text_ExplainWhenInDangerRules
	.globl gText_Rom_22AEA7
gText_Rom_22AEA7: @ 0x0822AEA7
	.string "ポケモンの せいかくの なかには\nピンチに なることで もともとの\lせいかくとは ちがう タイプの\lわざを つかう ように\lなるものが あります\pピンチに なって すこし かわった\nこうどうを はじめた ポケモンには\lじゅうぶん ちゅうい しましょう{EOS}"
	.if (. - gText_Rom_22AEA7) > 0x7e
	.error "gText_Rom_22AEA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AEA7) < 0x7e
	.space 0x7e - (. - gText_Rom_22AEA7)
	.endif
	@ analyzed canonical ROM range 0x0822AF25-0x0822B05E
	@ semantic recovery: script_data; byte-verified against linked ROM
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
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x0010
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
	lockall
	setvar 0x8004, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0822B00D
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0822B016
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, EventScript_JP_0822B01F
	compare_var_to_value 0x800D, 0x0003
	call_if 0x01, EventScript_JP_0822B028
	compare_var_to_value 0x800D, 0x0004
	call_if 0x01, EventScript_JP_0822B031
	closemessage
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822AFD5
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
	opendoor 0x0006, 0x0003
	waitdooranim
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
	closedoor 0x0006, 0x0003
	waitdooranim
	goto EventScript_JP_0822B003
EventScript_JP_0822AFD5: @ 0x0822AFD5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
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
	opendoor 0x000A, 0x0003
	waitdooranim
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
	closedoor 0x000A, 0x0003
	waitdooranim
EventScript_JP_0822B003: @ 0x0822B003
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x18
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0004
	.byte 0x27, 0x02
EventScript_JP_0822B00D: @ 0x0822B00D
	loadword 0x00, gText_Rom_22B05F
	callstd 0x04
	return
EventScript_JP_0822B016: @ 0x0822B016
	loadword 0x00, gText_Rom_22B096
	callstd 0x04
	return
EventScript_JP_0822B01F: @ 0x0822B01F
	loadword 0x00, gText_Rom_22B0CE
	callstd 0x04
	return
EventScript_JP_0822B028: @ 0x0822B028
	loadword 0x00, gText_Rom_22B104
	callstd 0x04
	return
EventScript_JP_0822B031: @ 0x0822B031
	loadword 0x00, gText_Rom_22B12C
	callstd 0x04
	return
Movement_JP_0822B03A: @ 0x0822B03A
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
Movement_JP_0822B03F: @ 0x0822B03F
	@ object movement sequence
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	step_end
Movement_JP_0822B046: @ 0x0822B046
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	step_end
Movement_JP_0822B04D: @ 0x0822B04D
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end
Movement_JP_0822B054: @ 0x0822B054
	@ object movement sequence
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	step_end
Movement_JP_0822B05B: @ 0x0822B05B
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
