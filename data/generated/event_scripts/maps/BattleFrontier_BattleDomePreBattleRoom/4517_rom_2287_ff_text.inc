	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:383 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort (+1 aliases)
	.globl gText_Rom_2287FF
gText_Rom_2287FF: @ 0x082287FF
	.string "さあ ヒースさまとの けっしょうせん です!\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - gText_Rom_2287FF) > 0x29
	.error "gText_Rom_2287FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2287FF) < 0x29
	.space 0x29 - (. - gText_Rom_2287FF)
	.endif
	@ analyzed canonical ROM range 0x08228828-0x082294FB
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_08228828: @ 0x08228828
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0822883D
	.byte 0x02
	.4byte MapScriptTable_JP_0822888C
	.byte 0x04
	.4byte MapScriptTable_JP_0822900D
	.byte 0x05
	.4byte EventScript_JP_0822907C
	.byte 0
EventScript_JP_0822883D: @ 0x0822883D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	copyvar 0x400F, 0x800D
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082294A5
	call EventScript_JP_08228868
	end
EventScript_JP_08228868: @ 0x08228868
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08228880
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08228886
	return
EventScript_JP_08228880: @ 0x08228880
	setvar 0x4011, 0x0064
	return
EventScript_JP_08228886: @ 0x08228886
	setvar 0x4011, 0x0069
	return
MapScriptTable_JP_0822888C: @ 0x0822888C
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08228896
	.2byte 0
EventScript_JP_08228896: @ 0x08228896
	lockall
	call EventScript_JP_08228D49
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082294C4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_08243637
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	call EventScript_JP_08228B61
	loadword 0x00, gText_Rom_2294FC
	callstd 0x04
	closemessage
	@ event command: showobjectat
	.byte 0x58
	.2byte 0x000D
	.byte 0x1A
	.byte 0x15
	compare_var_to_value 0x400F, 0x0003
	goto_if 0x05, EventScript_JP_082288DA
	compare_var_to_value 0x400E, 0x0000
	goto_if 0x05, EventScript_JP_082288E6
EventScript_JP_082288DA: @ 0x082288DA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte Movement_JP_08229301 @ Movement_JP_08229301
	goto EventScript_JP_082288ED
EventScript_JP_082288E6: @ 0x082288E6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte Movement_JP_0822930B @ Movement_JP_0822930B
EventScript_JP_082288ED: @ 0x082288ED
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	playse 0x00DF
	call EventScript_JP_082293BA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x400F, 0x0003
	goto_if 0x05, EventScript_JP_0822890E
	compare_var_to_value 0x400E, 0x0000
	goto_if 0x05, EventScript_JP_08228D57
EventScript_JP_0822890E: @ 0x0822890E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	loadword 0x00, gText_Rom_22950D
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x08229307 @ Movement_JP_08229307
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte Movement_JP_08229315 @ Movement_JP_08229315
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	loadword 0x00, 0x02021C7C
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	call EventScript_JP_08228FCC
	setvar 0x4002, 0x0000
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228A6C
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082289DB
	compare_var_to_value 0x8000, 0x0009
	goto_if 0x01, EventScript_JP_082289DB
	setvar 0x4002, 0x0001
EventScript_JP_08228983: @ 0x08228983
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2295B8
	callstd 0x04
	closemessage
	playse 0x00DF
	call EventScript_JP_082293BA
	delay 0x003C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte Movement_JP_082294F0 @ Movement_JP_082294F0
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_082294F5 @ Movement_JP_082294F5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x00B4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte Movement_JP_082294F7 @ Movement_JP_082294F7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x4002, 0x0002
	goto_if 0x01, EventScript_JP_082289DB
	setvar 0x8004, 0x0013
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228A6C
EventScript_JP_082289DB: @ 0x082289DB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_08243637
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x8004, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	compare_var_to_value 0x4002, 0x0000
	call_if 0x01, EventScript_JP_08228A3D
	compare_var_to_value 0x4002, 0x0001
	call_if 0x01, EventScript_JP_08228A51
	compare_var_to_value 0x4002, 0x0002
	call_if 0x01, EventScript_JP_08228A65
	playse 0x00DF
	call EventScript_JP_082293BA
	delay 0x003C
EventScript_JP_08228A19: @ 0x08228A19
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000C
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
EventScript_JP_08228A26: @ 0x08228A26
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	goto EventScript_JP_08229481
EventScript_JP_08228A3D: @ 0x08228A3D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0014
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	message gText_Rom_229547
	waitmessage
	return
EventScript_JP_08228A51: @ 0x08228A51
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0014
	setvar 0x8005, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	message gText_Rom_229608
	waitmessage
	return
EventScript_JP_08228A65: @ 0x08228A65
	message gText_Rom_229CE6
	waitmessage
	return
EventScript_JP_08228A6C: @ 0x08228A6C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_08243637
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x4002, 0x0000
	call_if 0x01, EventScript_JP_08228B4F
	compare_var_to_value 0x4002, 0x0001
	call_if 0x01, EventScript_JP_08228B58
	playse 0x00DF
	call EventScript_JP_082293BA
	delay 0x003C
	setvar 0x8004, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x000C
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	copyvar 0x8006, 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228AEE
	setvar 0x8006, 0x0001
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x14
	.byte 0xFF
	.2byte 0x0005
	.2byte 0x0003
	.byte 0x27
EventScript_JP_08228AEE: @ 0x08228AEE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte Movement_JP_08229309 @ Movement_JP_08229309
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228B22
	loadword 0x00, gText_Rom_22955F
	callstd 0x04
	goto EventScript_JP_08228B2A
EventScript_JP_08228B22: @ 0x08228B22
	loadword 0x00, gText_Rom_22958C
	callstd 0x04
EventScript_JP_08228B2A: @ 0x08228B2A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x01E7
	playse 0x00DF
	call EventScript_JP_082293BA
	delay 0x003C
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	goto EventScript_JP_08229481
EventScript_JP_08228B4F: @ 0x08228B4F
	loadword 0x00, gText_Rom_22952F
	callstd 0x04
	return
EventScript_JP_08228B58: @ 0x08228B58
	loadword 0x00, gText_Rom_22964E
	callstd 0x04
	return
EventScript_JP_08228B61: @ 0x08228B61
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08228BAF
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08228C02
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08228CF6
	goto EventScript_JP_08228C55
	.byte 0x03
EventScript_JP_08228BAF: @ 0x08228BAF
	call EventScript_JP_08228D49
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228BE6
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228BED
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228BF4
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228BFB
	return
EventScript_JP_08228BE6: @ 0x08228BE6
	message gText_Rom_229694
	waitmessage
	return
EventScript_JP_08228BED: @ 0x08228BED
	message gText_Rom_2296A5
	waitmessage
	return
EventScript_JP_08228BF4: @ 0x08228BF4
	message gText_Rom_2296B5
	waitmessage
	return
EventScript_JP_08228BFB: @ 0x08228BFB
	message gText_Rom_2296D6
	waitmessage
	return
EventScript_JP_08228C02: @ 0x08228C02
	call EventScript_JP_08228D49
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228C39
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228C40
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228C47
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228C4E
	return
EventScript_JP_08228C39: @ 0x08228C39
	message gText_Rom_2296F9
	waitmessage
	return
EventScript_JP_08228C40: @ 0x08228C40
	message gText_Rom_22970A
	waitmessage
	return
EventScript_JP_08228C47: @ 0x08228C47
	message gText_Rom_229724
	waitmessage
	return
EventScript_JP_08228C4E: @ 0x08228C4E
	message gText_Rom_229742
	waitmessage
	return
EventScript_JP_08228C55: @ 0x08228C55
	compare_var_to_value 0x400F, 0x0003
	goto_if 0x05, EventScript_JP_08228C91
	copyvar 0x8000, 0x400E
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228CE4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228CED
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228CE4
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228CED
EventScript_JP_08228C91: @ 0x08228C91
	call EventScript_JP_08228D49
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228CC8
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228CCF
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228CD6
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228CDD
	return
EventScript_JP_08228CC8: @ 0x08228CC8
	message gText_Rom_229756
	waitmessage
	return
EventScript_JP_08228CCF: @ 0x08228CCF
	message gText_Rom_229764
	waitmessage
	return
EventScript_JP_08228CD6: @ 0x08228CD6
	message gText_Rom_229787
	waitmessage
	return
EventScript_JP_08228CDD: @ 0x08228CDD
	message gText_Rom_2297A7
	waitmessage
	return
EventScript_JP_08228CE4: @ 0x08228CE4
	loadword 0x00, gText_Rom_22981A
	callstd 0x04
	return
EventScript_JP_08228CED: @ 0x08228CED
	loadword 0x00, gText_Rom_229A4A
	callstd 0x04
	return
EventScript_JP_08228CF6: @ 0x08228CF6
	call EventScript_JP_08228D49
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228D2D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228D34
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228D3B
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228D42
	return
EventScript_JP_08228D2D: @ 0x08228D2D
	message gText_Rom_2297B7
	waitmessage
	return
EventScript_JP_08228D34: @ 0x08228D34
	message gText_Rom_2297CD
	waitmessage
	return
EventScript_JP_08228D3B: @ 0x08228D3B
	message gText_Rom_2297E0
	waitmessage
	return
EventScript_JP_08228D42: @ 0x08228D42
	message gText_Rom_229803
	waitmessage
	return
EventScript_JP_08228D49: @ 0x08228D49
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	return
EventScript_JP_08228D57: @ 0x08228D57
	copyvar 0x8000, 0x400E
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228D88
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228D95
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228D88
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228D95
EventScript_JP_08228D88: @ 0x08228D88
	loadword 0x00, gText_Rom_22982B
	callstd 0x04
	goto EventScript_JP_08228D9D
EventScript_JP_08228D95: @ 0x08228D95
	loadword 0x00, gText_Rom_229A6B
	callstd 0x04
EventScript_JP_08228D9D: @ 0x08228D9D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte Movement_JP_082294D7 @ Movement_JP_082294D7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte Movement_JP_08229385 @ Movement_JP_08229385
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte Movement_JP_0822931A @ Movement_JP_0822931A
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	message gText_Rom_22988B
	waitmessage
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	copyvar 0x8000, 0x400E
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228ED2
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228E45
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228EFF
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_08228E45
	loadword 0x00, gText_Rom_2298B4
	callstd 0x04
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
EventScript_JP_08228E45: @ 0x08228E45
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_229973
	callstd 0x04
	call EventScript_JP_08228F8C
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228FAC
	compare_var_to_value 0x8000, 0x0009
	goto_if 0x01, EventScript_JP_08228FAC
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228FC2
	loadword 0x00, gText_Rom_229988
	callstd 0x04
	setvar 0x8004, 0x000C
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x000C
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_08228AEE
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte Movement_JP_082293B7 @ Movement_JP_082293B7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_2299DB
	callstd 0x04
	playfanfare 0x01D2
	message gText_Rom_2299FF
	waitmessage
	waitfanfare
	setvar 0x8004, 0x000D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	loadword 0x00, gText_Rom_229A1C
	callstd 0x04
	goto EventScript_JP_08228AEE
EventScript_JP_08228ED2: @ 0x08228ED2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_08228EFF
	loadword 0x00, gText_Rom_229AD4
	callstd 0x04
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
EventScript_JP_08228EFF: @ 0x08228EFF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_229B82
	callstd 0x04
	call EventScript_JP_08228F8C
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228FAC
	compare_var_to_value 0x8000, 0x0009
	goto_if 0x01, EventScript_JP_08228FAC
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228FC2
	loadword 0x00, gText_Rom_229988
	callstd 0x04
	setvar 0x8004, 0x000C
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x000C
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_08228AEE
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte Movement_JP_082293B7 @ Movement_JP_082293B7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_229BA1
	callstd 0x04
	playfanfare 0x01D2
	message gText_Rom_229BEE
	waitmessage
	waitfanfare
	setvar 0x8004, 0x000D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	loadword 0x00, gText_Rom_229C07
	callstd 0x04
	goto EventScript_JP_08228AEE
EventScript_JP_08228F8C: @ 0x08228F8C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_229CB7
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte Movement_JP_08229313 @ Movement_JP_08229313
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte Movement_JP_082293B5 @ Movement_JP_082293B5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	call EventScript_JP_08228FCC
	return
EventScript_JP_08228FAC: @ 0x08228FAC
	loadword 0x00, gText_Rom_2299B0
	callstd 0x04
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	goto EventScript_JP_08228A19
EventScript_JP_08228FC2: @ 0x08228FC2
	setvar 0x4002, 0x0002
	goto EventScript_JP_08228983
EventScript_JP_08228FCC: @ 0x08228FCC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0000
	setvar 0x4009, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00EC
	waitstate
	setvar 0x4009, 0x0000
	setvar 0x8004, 0x0011
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	setvar 0x8004, 0x0010
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	return
MapScriptTable_JP_0822900D: @ 0x0822900D
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08229017
	.2byte 0
EventScript_JP_08229017: @ 0x08229017
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x000D
	.byte 0x1A
	.byte 0x15
	call EventScript_JP_0822908E
	call EventScript_JP_08228868
	setvar 0x4001, 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte Movement_JP_082292FF @ Movement_JP_082292FF
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x05, EventScript_JP_0822907B
	setvar 0x8004, 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	copyvar 0x400E, 0x800D
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822907B
	call 0x08222264
	setobjectxyperm 0x000F, 0x000D, 0x0009
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000F
	@ event command: addobject
	.byte 0x55
	.2byte 0x000F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte Movement_JP_08229317 @ Movement_JP_08229317
EventScript_JP_0822907B: @ 0x0822907B
	end
EventScript_JP_0822907C: @ 0x0822907C
	compare_var_to_value 0x4009, 0x0001
	call_if 0x01, EventScript_JP_08229088
	end
EventScript_JP_08229088: @ 0x08229088
	call EventScript_JP_0822908E
	return
EventScript_JP_0822908E: @ 0x0822908E
	compare_var_to_value 0x400F, 0x0000
	call_if 0x01, EventScript_JP_082290BB
	compare_var_to_value 0x400F, 0x0001
	call_if 0x01, EventScript_JP_082290BC
	compare_var_to_value 0x400F, 0x0002
	call_if 0x01, EventScript_JP_08229120
	compare_var_to_value 0x400F, 0x0003
	call_if 0x01, EventScript_JP_082291DE
	return
EventScript_JP_082290BB: @ 0x082290BB
	return
EventScript_JP_082290BC: @ 0x082290BC
	createvobject 0x2E, 0x01, 0x0003, 0x0000, 0x03, 0x01
	createvobject 0x16, 0x04, 0x0006, 0x0000, 0x03, 0x01
	createvobject 0x05, 0x06, 0x0008, 0x0000, 0x03, 0x01
	createvobject 0x0C, 0x09, 0x000B, 0x0000, 0x03, 0x01
	createvobject 0x2E, 0x0B, 0x000D, 0x0000, 0x03, 0x01
	createvobject 0x42, 0x0D, 0x000F, 0x0000, 0x03, 0x01
	createvobject 0x2D, 0x13, 0x0007, 0x0001, 0x03, 0x01
	createvobject 0x22, 0x16, 0x000B, 0x0001, 0x03, 0x01
	createvobject 0x0B, 0x19, 0x000F, 0x0001, 0x03, 0x01
	createvobject 0x23, 0x1A, 0x0002, 0x0002, 0x03, 0x01
	createvobject 0x26, 0x1D, 0x0005, 0x0001, 0x03, 0x01
	return
EventScript_JP_08229120: @ 0x08229120
	createvobject 0x2E, 0x01, 0x0003, 0x0000, 0x03, 0x01
	createvobject 0x16, 0x04, 0x0006, 0x0000, 0x03, 0x01
	createvobject 0x05, 0x06, 0x0008, 0x0000, 0x03, 0x01
	createvobject 0x14, 0x07, 0x0009, 0x0000, 0x03, 0x01
	createvobject 0x0C, 0x09, 0x000B, 0x0000, 0x03, 0x01
	createvobject 0x2F, 0x0A, 0x000C, 0x0000, 0x03, 0x01
	createvobject 0x2E, 0x0B, 0x000D, 0x0000, 0x03, 0x01
	createvobject 0x42, 0x0D, 0x000F, 0x0000, 0x03, 0x01
	createvobject 0x30, 0x0F, 0x0002, 0x0001, 0x03, 0x01
	createvobject 0x05, 0x10, 0x0003, 0x0001, 0x03, 0x01
	createvobject 0x14, 0x11, 0x0004, 0x0001, 0x03, 0x01
	createvobject 0x2D, 0x13, 0x0007, 0x0001, 0x03, 0x01
	createvobject 0x16, 0x14, 0x0009, 0x0001, 0x03, 0x01
	createvobject 0x22, 0x16, 0x000B, 0x0001, 0x03, 0x01
	createvobject 0x2E, 0x17, 0x000D, 0x0001, 0x03, 0x01
	createvobject 0x0B, 0x19, 0x000F, 0x0001, 0x03, 0x01
	createvobject 0x23, 0x1A, 0x0002, 0x0002, 0x03, 0x01
	createvobject 0x28, 0x1C, 0x0005, 0x0002, 0x03, 0x01
	createvobject 0x26, 0x1D, 0x0005, 0x0001, 0x03, 0x01
	createvobject 0x53, 0x1E, 0x0006, 0x0002, 0x03, 0x01
	createvobject 0x22, 0x1F, 0x0008, 0x0002, 0x03, 0x01
	return
EventScript_JP_082291DE: @ 0x082291DE
	createvobject 0x05, 0x00, 0x0002, 0x0000, 0x03, 0x01
	createvobject 0x2E, 0x01, 0x0003, 0x0000, 0x03, 0x01
	createvobject 0x2D, 0x02, 0x000F, 0x0000, 0x03, 0x01
	createvobject 0x42, 0x03, 0x0005, 0x0000, 0x03, 0x01
	createvobject 0x16, 0x04, 0x0006, 0x0000, 0x03, 0x01
	createvobject 0x2E, 0x05, 0x0007, 0x0000, 0x03, 0x01
	createvobject 0x05, 0x06, 0x0008, 0x0000, 0x03, 0x01
	createvobject 0x14, 0x07, 0x0009, 0x0000, 0x03, 0x01
	createvobject 0x18, 0x08, 0x000A, 0x0000, 0x03, 0x01
	createvobject 0x0C, 0x09, 0x000B, 0x0000, 0x03, 0x01
	createvobject 0x2F, 0x0A, 0x000C, 0x0000, 0x03, 0x01
	createvobject 0x2E, 0x0B, 0x000D, 0x0000, 0x03, 0x01
	createvobject 0x2D, 0x0C, 0x000E, 0x0000, 0x03, 0x01
	createvobject 0x42, 0x0D, 0x000F, 0x0002, 0x03, 0x01
	createvobject 0x37, 0x0E, 0x000C, 0x0002, 0x03, 0x01
	createvobject 0x30, 0x0F, 0x0002, 0x0001, 0x03, 0x01
	createvobject 0x05, 0x10, 0x0003, 0x0001, 0x03, 0x01
	createvobject 0x14, 0x11, 0x0004, 0x0001, 0x03, 0x01
	createvobject 0x18, 0x12, 0x0006, 0x0001, 0x03, 0x01
	createvobject 0x2D, 0x13, 0x0007, 0x0001, 0x03, 0x01
	createvobject 0x16, 0x14, 0x0009, 0x0001, 0x03, 0x01
	createvobject 0x17, 0x15, 0x000A, 0x0001, 0x03, 0x01
	createvobject 0x22, 0x16, 0x000B, 0x0001, 0x03, 0x01
	createvobject 0x2E, 0x17, 0x000D, 0x0001, 0x03, 0x01
	createvobject 0x30, 0x18, 0x000E, 0x0001, 0x03, 0x01
	createvobject 0x0B, 0x19, 0x000F, 0x0001, 0x03, 0x01
	createvobject 0x23, 0x1A, 0x0002, 0x0002, 0x03, 0x01
	createvobject 0x11, 0x1B, 0x0003, 0x0002, 0x03, 0x01
	createvobject 0x28, 0x1C, 0x0005, 0x0002, 0x03, 0x01
	createvobject 0x26, 0x1D, 0x0005, 0x0001, 0x03, 0x01
	createvobject 0x53, 0x1E, 0x0006, 0x0002, 0x03, 0x01
	createvobject 0x22, 0x1F, 0x0008, 0x0002, 0x03, 0x01
	return
Movement_JP_082292FF: @ 0x082292FF
	@ object movement sequence
	set_invisible
	step_end
Movement_JP_08229301: @ 0x08229301
	@ object movement sequence
	set_visible
	delay_16
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end
Movement_JP_08229309: @ 0x08229309
	@ object movement sequence
	walk_up
	step_end
Movement_JP_0822930B: @ 0x0822930B
	@ object movement sequence
	set_visible
	delay_16
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end
Movement_JP_08229313: @ 0x08229313
	@ object movement sequence
	walk_right
	step_end
Movement_JP_08229315: @ 0x08229315
	@ object movement sequence
	walk_left
	step_end
Movement_JP_08229317: @ 0x08229317
	@ object movement sequence
	face_up
	set_invisible
	step_end
Movement_JP_0822931A: @ 0x0822931A
	@ object movement sequence
	set_visible
	walk_up
	walk_up
	walk_up
	face_left
	delay_8
	delay_4
	face_down
	delay_8
	delay_4
	face_right
	delay_8
	delay_4
	face_up
	delay_8
	delay_4
	face_left
	delay_16
	walk_fast_up
	walk_fast_up
	face_left
	delay_8
	delay_4
	face_down
	delay_8
	delay_4
	face_right
	delay_8
	delay_4
	face_up
	delay_8
	delay_4
	face_left
	jump_2_left
	unlock_facing_direction
	face_up
	lock_facing_direction
	jump_2_left
	jump_2_left
	unlock_facing_direction
	face_right
	lock_facing_direction
	jump_2_left
	unlock_facing_direction
	face_down
	delay_2
	face_left
	delay_8
	delay_4
	face_up
	delay_8
	delay_4
	face_right
	delay_8
	delay_4
	face_down
	delay_8
	delay_4
	face_left
	delay_4
	face_up
	delay_4
	face_right
	delay_4
	face_down
	delay_4
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	lock_facing_direction
	walk_right
	walk_slow_right
	walk_right
	walk_slow_right
	unlock_facing_direction
	face_up
	delay_16
	jump_in_place_up
	jump_in_place_up
	delay_16
	walk_right
	walk_right
	walk_right
	jump_in_place_up
	delay_16
	walk_right
	walk_down
	walk_down
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	delay_4
	walk_left
	walk_left
	step_end
Movement_JP_08229385: @ 0x08229385
	@ object movement sequence
	delay_16
	delay_16
	walk_left
	walk_left
	walk_in_place_fastest_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end
Movement_JP_082293B5: @ 0x082293B5
	@ object movement sequence
	walk_left
	step_end
Movement_JP_082293B7: @ 0x082293B7
	@ object movement sequence
	walk_left
	walk_left
	step_end
EventScript_JP_082293BA: @ 0x082293BA
	turnvobject 0x00, 0x04
	turnvobject 0x02, 0x04
	turnvobject 0x04, 0x04
	turnvobject 0x06, 0x04
	turnvobject 0x08, 0x04
	turnvobject 0x0A, 0x03
	turnvobject 0x0C, 0x03
	turnvobject 0x0E, 0x03
	turnvobject 0x10, 0x03
	turnvobject 0x12, 0x03
	turnvobject 0x14, 0x04
	turnvobject 0x16, 0x04
	turnvobject 0x18, 0x04
	turnvobject 0x1A, 0x04
	turnvobject 0x1C, 0x04
	turnvobject 0x1E, 0x04
	delay 0x0014
	turnvobject 0x00, 0x01
	turnvobject 0x02, 0x01
	turnvobject 0x04, 0x01
	turnvobject 0x06, 0x01
	turnvobject 0x08, 0x01
	turnvobject 0x0A, 0x01
	turnvobject 0x0C, 0x01
	turnvobject 0x0E, 0x01
	turnvobject 0x10, 0x01
	turnvobject 0x12, 0x01
	turnvobject 0x14, 0x01
	turnvobject 0x16, 0x01
	turnvobject 0x18, 0x01
	turnvobject 0x1A, 0x01
	turnvobject 0x1C, 0x01
	turnvobject 0x1E, 0x01
	delay 0x0014
	turnvobject 0x01, 0x04
	turnvobject 0x03, 0x04
	turnvobject 0x05, 0x04
	turnvobject 0x07, 0x04
	turnvobject 0x09, 0x04
	turnvobject 0x0B, 0x03
	turnvobject 0x0D, 0x03
	turnvobject 0x0F, 0x03
	turnvobject 0x11, 0x03
	turnvobject 0x13, 0x03
	turnvobject 0x15, 0x04
	turnvobject 0x17, 0x04
	turnvobject 0x19, 0x04
	turnvobject 0x1B, 0x03
	turnvobject 0x1F, 0x03
	delay 0x0014
	turnvobject 0x01, 0x01
	turnvobject 0x03, 0x01
	turnvobject 0x05, 0x01
	turnvobject 0x07, 0x01
	turnvobject 0x09, 0x01
	turnvobject 0x0B, 0x01
	turnvobject 0x0D, 0x01
	turnvobject 0x0F, 0x01
	turnvobject 0x11, 0x01
	turnvobject 0x13, 0x01
	turnvobject 0x15, 0x01
	turnvobject 0x17, 0x01
	turnvobject 0x19, 0x01
	turnvobject 0x1B, 0x01
	turnvobject 0x1F, 0x01
	delay 0x0014
	return
EventScript_JP_08229481: @ 0x08229481
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	copyvar 0x800D, 0x40CE
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822949B
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x12
	.byte 0xFF
	.2byte 0x0005
	.2byte 0x000B
	.byte 0x27, 0x02
EventScript_JP_0822949B: @ 0x0822949B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x12
	.byte 0xFF
	.2byte 0x0011
	.2byte 0x000B
	.byte 0x27, 0x02
EventScript_JP_082294A5: @ 0x082294A5
	random 0x0002
	copyvar 0x400D, 0x800D
	compare_var_to_value 0x400D, 0x0000
	goto_if 0x01, 0x08244178
	setobjectxyperm 0x0006, 0x0002, 0x0000
	setobjectmovementtype 0x0006, 0x0A
	return
EventScript_JP_082294C4: @ 0x082294C4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x400D, 0x0000
	goto_if 0x01, 0x08244178
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte Movement_JP_082294EA @ Movement_JP_082294EA
	return
Movement_JP_082294D7: @ 0x082294D7
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_down
	delay_4
	jump_in_place_down
	enable_jump_landing_ground_effect
	step_end
Movement_JP_082294EA: @ 0x082294EA
	@ object movement sequence
	walk_down
	walk_down
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end
Movement_JP_082294F0: @ 0x082294F0
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
Movement_JP_082294F5: @ 0x082294F5
	@ object movement sequence
	walk_in_place_fastest_left
	step_end
Movement_JP_082294F7: @ 0x082294F7
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
