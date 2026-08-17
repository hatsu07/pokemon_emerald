	.globl EventScriptData_JP_0823CFFB
EventScriptData_JP_0823CFFB: @ 0x0823CFFB
	@ Embedded ROM bytes: file offset 0x23CFFB, size 0x24A
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: CLEAN_CFG_RECOVERY addr=0x0823CFFB size=0x93 commands=31
	lockall
	copyvar 0x8000, 0x4044
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScriptData_JP_0823D05A
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScriptData_JP_0823D083
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScriptData_JP_0823D0AC
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScriptData_JP_0823D0D5
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScriptData_JP_0823D0FE
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScriptData_JP_0823D127
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScriptData_JP_0823D150
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScriptData_JP_0823D179
	end
	.globl EventScriptData_JP_0823D05A
EventScriptData_JP_0823D05A:
	compare_var_to_value 0x40AB, 0x0000
	goto_if 0x01, EventScriptData_JP_0823D1A2
	loadword 0x00, gText_Rom_23DF53
	callstd 0x04
	playse 0x0015
	setvar 0x40AB, 0x0002
	setmetatile 0x000D, 0x0001, 0x020B, 0x0000
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	releaseall
	end
	.globl EventScriptData_JP_0823D083
EventScriptData_JP_0823D083:
	compare_var_to_value 0x40AC, 0x0000
	goto_if 0x01, EventScriptData_JP_0823D1A2
	loadword 0x00, gText_Rom_23E196
	@ ANALYSIS: CLEAN_CFG_RECOVERY addr=0x0823D094 size=0x9E commands=39
	callstd 0x04
	playse 0x0015
	setvar 0x40AC, 0x0002
	setmetatile 0x000D, 0x0001, 0x020B, 0x0000
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	releaseall
	end
	.globl EventScriptData_JP_0823D0AC
EventScriptData_JP_0823D0AC:
	compare_var_to_value 0x40AD, 0x0000
	goto_if 0x01, EventScriptData_JP_0823D1A2
	loadword 0x00, gText_Rom_23EA05
	callstd 0x04
	playse 0x0015
	setvar 0x40AD, 0x0002
	setmetatile 0x000D, 0x0001, 0x020B, 0x0000
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	releaseall
	end
	.globl EventScriptData_JP_0823D0D5
EventScriptData_JP_0823D0D5:
	compare_var_to_value 0x40AE, 0x0000
	goto_if 0x01, EventScriptData_JP_0823D1A2
	loadword 0x00, gText_Rom_23EBA5
	callstd 0x04
	playse 0x0015
	setvar 0x40AE, 0x0002
	setmetatile 0x000D, 0x0001, 0x020B, 0x0000
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	releaseall
	end
	.globl EventScriptData_JP_0823D0FE
EventScriptData_JP_0823D0FE:
	compare_var_to_value 0x40AF, 0x0000
	goto_if 0x01, EventScriptData_JP_0823D1A2
	loadword 0x00, gText_Rom_23F851
	callstd 0x04
	playse 0x0015
	setvar 0x40AF, 0x0002
	setmetatile 0x000D, 0x0001, 0x020B, 0x0000
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	releaseall
	end
	.globl EventScriptData_JP_0823D127
EventScriptData_JP_0823D127:
	compare_var_to_value 0x40B0, 0x0000
	goto_if 0x01, EventScriptData_JP_0823D1A2
	loadword 0x00, gText_Rom_23FD7F
	@ ANALYSIS: CLEAN_CFG_RECOVERY addr=0x0823D138 size=0x6A commands=27
	callstd 0x04
	playse 0x0015
	setvar 0x40B0, 0x0002
	setmetatile 0x000D, 0x0001, 0x020B, 0x0000
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	releaseall
	end
	.globl EventScriptData_JP_0823D150
EventScriptData_JP_0823D150:
	compare_var_to_value 0x40B1, 0x0000
	goto_if 0x01, EventScriptData_JP_0823D1A2
	loadword 0x00, gText_Rom_24023E
	callstd 0x04
	playse 0x0015
	setvar 0x40B1, 0x0002
	setmetatile 0x000D, 0x0001, 0x020B, 0x0000
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	releaseall
	end
	.globl EventScriptData_JP_0823D179
EventScriptData_JP_0823D179:
	compare_var_to_value 0x40B2, 0x0000
	goto_if 0x01, EventScriptData_JP_0823D1A2
	loadword 0x00, gText_Rom_2404BE
	callstd 0x04
	playse 0x0015
	setvar 0x40B2, 0x0002
	setmetatile 0x000D, 0x0001, 0x020B, 0x0000
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	releaseall
	end
	loadword 0x00, gText_Rom_23D684
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: CLEAN_CFG_RECOVERY addr=0x0823D1A8 size=0x6 commands=3
	callstd 0x04
	releaseall
	end
	@ ANALYSIS: PROVEN_EVENT_ENTRY_CROSS_BOUNDARY addr=0x0823D1AC consumers=8
	.globl EventScriptData_JP_0823D1AC
EventScriptData_JP_0823D1AC:
	loadword 0x00, gText_Rom_23D677
	@ ANALYSIS: RAW_BLOCK size=0x7
	@ ANALYSIS: UNPROVEN_RAW addr=0x0823D1B2
	.byte 0x09, 0x04, 0x6B, 0x02, 0x31, 0x72, 0x01
	@ Recovered proven split event command at 0x0823D1B9
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0823D1B9 raw_tail=0x1 continuation=0x4; reachability not claimed
	message gText_Rom_23D64A
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x0823D1BE original_size=0xE typed_bytes=0x1
	@ ANALYSIS: RAW_BLOCK size=0xB
	@ ANALYSIS: UNPROVEN_RAW addr=0x0823D1BE
	.byte 0x32, 0x0F, 0x00, 0x5A, 0xD6, 0x23, 0x08, 0x09, 0x04, 0x6B, 0x02
	lockall
	@ Recovered proven split event command at 0x0823D1CA
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0823D1CA raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_23D245
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x0823D1D0 size=0x75 commands=30 hard_stops=5
	@ Full bytecode/CFG identity proven; runtime reachability is not claimed.
.LClosedEvent_0823D1D0:
	callstd 0x04
	releaseall
	compare_var_to_value 0x4044, 0x0000
	call_if 0x01, .LClosedEvent_0823D1FA
	compare_var_to_value 0x4044, 0x0001
	call_if 0x01, .LClosedEvent_0823D20A
	compare_var_to_value 0x4044, 0x0002
	call_if 0x01, .LClosedEvent_0823D21A
	setvar 0x40A5, 0x0001
	end
.LClosedEvent_0823D1FA:
	setvar 0x8004, 0x0006
	setvar 0x8005, 0x0003
	call .LClosedEvent_0823D22A
	return
.LClosedEvent_0823D20A:
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0005
	call .LClosedEvent_0823D22A
	return
.LClosedEvent_0823D21A:
	setvar 0x8004, 0x0009
	setvar 0x8005, 0x0002
	call .LClosedEvent_0823D22A
	return
.LClosedEvent_0823D22A:
	setvar 0x8006, 0x0000
	setfieldeffectargument 0x00, 0x8004
	setfieldeffectargument 0x01, 0x8005
	setfieldeffectargument 0x02, 0x8006
	dofieldeffect 0x0036
	waitfieldeffect 0x0036
	delay 0x000A
	return


	@ Interior event-script entry labels for already-semantic commands
	.globl EventScriptData_JP_0823D1A2
	.set EventScriptData_JP_0823D1A2, EventScriptData_JP_0823CFFB + 0x1A7
