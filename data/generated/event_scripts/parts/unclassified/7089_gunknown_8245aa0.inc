	.globl EventScriptData_JP_08245AA0
EventScriptData_JP_08245AA0: @ 0x08245AA0
	@ Embedded ROM bytes: file offset 0x245AA0, size 0x95
	@ ANALYSIS: MIXED_EVENT_SCRIPT script=0x94 residual=0x1
	.byte 0x25 @ special 0x0015; no matching SPECIAL_* constant
	.2byte 0x0015
	.byte 0x25 @ special 0x0007; no matching SPECIAL_* constant
	.2byte 0x0007
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScriptData_JP_08245C97
	checkpartymove 0x0122
	setfieldeffectargument 0x00, 0x800D
	buffermovename 0x01, 0x0122
	compare_var_to_value 0x8007, 0x0001
	goto_if 0x01, EventScriptData_JP_08245AFF
	compare_var_to_value 0x8007, 0x0002
	goto_if 0x01, EventScriptData_JP_08245AFF
	compare_var_to_value 0x8007, 0x0003
	goto_if 0x01, EventScriptData_JP_08245AFF
	compare_var_to_value 0x8007, 0x0004
	goto_if 0x01, EventScriptData_JP_08245AFF
	compare_var_to_value 0x8007, 0x0005
	goto_if 0x01, EventScriptData_JP_08245B58
	compare_var_to_value 0x8007, 0x0006
	goto_if 0x01, EventScriptData_JP_08245BB1
	end
	.globl EventScriptData_JP_08245AFF
EventScriptData_JP_08245AFF:
	lockall
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScriptData_JP_08245B40
	bufferpartymonnick 0x00, 0x800D
	loadword 0x00, gText_Rom_21D5E0
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_08245D8D
	loadword 0x00, gText_Rom_25665C
	callstd 0x04
	closemessage
	dofieldeffect 0x000B
	waitstate
	goto EventScriptData_JP_08245B4A
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245B34
	end
	.globl EventScriptData_JP_08245B35
EventScriptData_JP_08245B35: @ 0x08245B35
	@ Embedded ROM bytes: file offset 0x245B35, size 0x59
	@ ANALYSIS: MIXED_EVENT_SCRIPT script=0x56 residual=0x3
	lockall
	dofieldeffect 0x000B
	waitstate
	goto EventScriptData_JP_08245B4A
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245B3F
	end
	.globl EventScriptData_JP_08245B40
EventScriptData_JP_08245B40:
	loadword 0x00, gText_Rom_21D5CF
	callstd 0x04
	releaseall
	end
	.globl EventScriptData_JP_08245B4A
EventScriptData_JP_08245B4A:
	loadword 0x00, gText_Rom_21D602
	callstd 0x04
	goto EventScriptData_JP_08245C0A
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245B57
	end
	.globl EventScriptData_JP_08245B58
EventScriptData_JP_08245B58:
	lockall
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScriptData_JP_08245B99
	bufferpartymonnick 0x00, 0x800D
	loadword 0x00, gText_Rom_24507E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_08245D8D
	loadword 0x00, gText_Rom_25665C
	callstd 0x04
	closemessage
	dofieldeffect 0x001A
	waitstate
	goto EventScriptData_JP_08245BA3
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245B8D
	end
	.globl EventScriptData_JP_08245B8E
EventScriptData_JP_08245B8E: @ 0x08245B8E
	@ Embedded ROM bytes: file offset 0x245B8E, size 0x59
	@ ANALYSIS: MIXED_EVENT_SCRIPT script=0x56 residual=0x3
	lockall
	dofieldeffect 0x001A
	waitstate
	goto EventScriptData_JP_08245BA3
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245B98
	end
	.globl EventScriptData_JP_08245B99
EventScriptData_JP_08245B99:
	loadword 0x00, gText_Rom_24506B
	callstd 0x04
	releaseall
	end
	.globl EventScriptData_JP_08245BA3
EventScriptData_JP_08245BA3:
	loadword 0x00, gText_Rom_2450A2
	callstd 0x04
	goto EventScriptData_JP_08245C0A
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245BB0
	end
	.globl EventScriptData_JP_08245BB1
EventScriptData_JP_08245BB1:
	lockall
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScriptData_JP_08245BF2
	bufferpartymonnick 0x00, 0x800D
	loadword 0x00, gText_Rom_2450C8
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_08245D8D
	loadword 0x00, gText_Rom_25665C
	callstd 0x04
	closemessage
	dofieldeffect 0x001B
	waitstate
	goto EventScriptData_JP_08245BFC
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245BE6
	end
	.globl EventScriptData_JP_08245BE7
EventScriptData_JP_08245BE7: @ 0x08245BE7
	@ Embedded ROM bytes: file offset 0x245BE7, size 0x7F
	@ ANALYSIS: MIXED_EVENT_SCRIPT script=0x47 residual=0x38
	lockall
	dofieldeffect 0x001B
	waitstate
	goto EventScriptData_JP_08245BFC
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245BF1
	end
	.globl EventScriptData_JP_08245BF2
EventScriptData_JP_08245BF2:
	loadword 0x00, gText_Rom_2450B0
	callstd 0x04
	releaseall
	end
	.globl EventScriptData_JP_08245BFC
EventScriptData_JP_08245BFC:
	loadword 0x00, gText_Rom_2450F1
	callstd 0x04
	goto EventScriptData_JP_08245C0A
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245C09
	end
	.globl EventScriptData_JP_08245C0A
EventScriptData_JP_08245C0A:
	closemessage
	playse 0x0009
	setvar 0x4097, 0x0000
	setflag 0x00AD
	.byte 0x25 @ special 0x0006; no matching SPECIAL_* constant
	.2byte 0x0006
	.byte 0x25 @ special 0x0008; no matching SPECIAL_* constant
	.2byte 0x0008
	setvar 0x8004, 0x0000
	setvar 0x8005, 0x0000
	.byte 0x25 @ special 0x0012; no matching SPECIAL_* constant
	.2byte 0x0012
	setvar 0x4089, 0x0001
	waitstate
	end
	@ ANALYSIS: PROVEN_EVENT_MOVEMENT_MIX_WITH_CONSUMER addr=0x08245C30 event=0x33 movement=0x3
	.globl EventScriptData_JP_08245C30
EventScriptData_JP_08245C30:
	applymovement 0x00FF, .LMovement_JP_08245C63
	waitmovement 0x0000
	setvar 0x4097, 0x0001
	loadword 0x00, gText_Rom_21D613
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, .LResidualEvent_08245C5A
	closemessage
	playse 0x0009
	.byte 0x25 @ special 0x0009; no matching SPECIAL_* constant
	.2byte 0x0009
	end
.LResidualEvent_08245C5A:
	closemessage
	setflag 0x0060
	.byte 0x25 @ special 0x0018; no matching SPECIAL_* constant
	.2byte 0x0018
	waitstate
	end
.LMovement_JP_08245C63:
	@ Exact movement bytes; local constants do not yet prove names for 0x09.
	.byte 0x09, 0x09, 0xFE
	.globl EventScriptData_JP_08245C66
EventScriptData_JP_08245C66: @ 0x08245C66
	@ Embedded ROM bytes: file offset 0x245C66, size 0x155
	@ ANALYSIS: MIXED_EVENT_SCRIPT script=0x12A residual=0x2B
	lockall
	setvar 0x4097, 0x0001
	playse 0x0009
	.byte 0x25 @ special 0x000B; no matching SPECIAL_* constant
	.2byte 0x000B
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_08245C8A
	clearflag 0x00AD
	.byte 0x25 @ special 0x0008; no matching SPECIAL_* constant
	.2byte 0x0008
	setvar 0x4089, 0x0000
	waitstate
	end
	.globl EventScriptData_JP_08245C8A
EventScriptData_JP_08245C8A:
	setflag 0x00AD
	.byte 0x25 @ special 0x0008; no matching SPECIAL_* constant
	.2byte 0x0008
	setvar 0x4089, 0x0000
	waitstate
	end
	.globl EventScriptData_JP_08245C97
EventScriptData_JP_08245C97:
	checkpartymove 0x0122
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScriptData_JP_08245D49
	setfieldeffectargument 0x00, 0x800D
	setorcopyvar 0x8004, 0x800D
	lockall
	.byte 0x25 @ special 0x0116; no matching SPECIAL_* constant
	.2byte 0x0116
	loadword 0x00, gText_Rom_246782
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_08245D8D
	loadword 0x00, gText_Rom_2465BD
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_08245D8D
	fadescreenswapbuffers 0x01
	.byte 0x25 @ special 0x0149; no matching SPECIAL_* constant
	.2byte 0x0149
	closemessage
	fadescreenswapbuffers 0x00
	loadword 0x00, gText_Rom_2467B0
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_08245D8D
	bufferpartymonnick 0x00, 0x8004
	buffermovename 0x01, 0x0122
	loadword 0x00, gText_Rom_25665C
	callstd 0x04
	closemessage
	closemessage
	compare_var_to_value 0x8007, 0x0001
	goto_if 0x01, EventScriptData_JP_08245B35
	compare_var_to_value 0x8007, 0x0002
	goto_if 0x01, EventScriptData_JP_08245B35
	compare_var_to_value 0x8007, 0x0003
	goto_if 0x01, EventScriptData_JP_08245B35
	compare_var_to_value 0x8007, 0x0004
	goto_if 0x01, EventScriptData_JP_08245B35
	compare_var_to_value 0x8007, 0x0005
	goto_if 0x01, EventScriptData_JP_08245B8E
	compare_var_to_value 0x8007, 0x0006
	goto_if 0x01, EventScriptData_JP_08245BE7
	releaseall
	end
	.globl EventScriptData_JP_08245D49
EventScriptData_JP_08245D49:
	lockall
	compare_var_to_value 0x8007, 0x0001
	goto_if 0x01, EventScriptData_JP_08245B40
	compare_var_to_value 0x8007, 0x0002
	goto_if 0x01, EventScriptData_JP_08245B40
	compare_var_to_value 0x8007, 0x0003
	goto_if 0x01, EventScriptData_JP_08245B40
	compare_var_to_value 0x8007, 0x0004
	goto_if 0x01, EventScriptData_JP_08245B40
	compare_var_to_value 0x8007, 0x0005
	goto_if 0x01, EventScriptData_JP_08245B99
	compare_var_to_value 0x8007, 0x0006
	goto_if 0x01, EventScriptData_JP_08245BF2
	end
	.globl EventScriptData_JP_08245D8D
EventScriptData_JP_08245D8D:
	closemessage
	releaseall
	end
	@ ANALYSIS: RESIDUAL_CFG_RECOVERY addr=0x08245D90 original_size=0x2B semantic_bytes=0x2B
	.globl EventScriptData_JP_08245D90
EventScriptData_JP_08245D90:
	setflag 0x00AE
	setflag 0x00AF
	setflag 0x00B0
	setflag 0x00B1
	setflag 0x00B2
	setflag 0x00B3
	setflag 0x00B4
	setflag 0x00B5
	setflag 0x00B6
	setflag 0x00B7
	setflag 0x00B8
	setflag 0x00B9
	setflag 0x00BA
	setflag 0x00BB
	return
	.globl EventScriptData_JP_08245DBB
EventScriptData_JP_08245DBB: @ 0x08245DBB
	@ Decoded event bytecode: exact ROM size 0x13
	setvar 0x8004, 0x0000
	setvar 0x8005, 0x0000
	.byte 0x25 @ special 0x0012; no matching SPECIAL_* constant found
	.2byte 0x0012
	setvar 0x4089, 0x0001
	end
	.globl EventScriptData_JP_08245DCE
EventScriptData_JP_08245DCE: @ 0x08245DCE
	@ Decoded event bytecode: exact ROM size 0xF
	setvar 0x8005, 0x0000
	goto EventScriptData_JP_08245DD9
	end
	.globl EventScriptData_JP_08245DD9
EventScriptData_JP_08245DD9:
	.byte 0x25 @ special 0x0013; no matching SPECIAL_* constant found
	.2byte 0x0013
	end
	.globl EventScriptData_JP_08245DDD
EventScriptData_JP_08245DDD: @ 0x08245DDD
	@ Embedded ROM bytes: file offset 0x245DDD, size 0x59B
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: MIXED_EVENT_SCRIPT script=0x34 residual=0x8C
	setvar 0x8004, 0x0000
	goto EventScriptData_JP_08245DE8
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245DE7
	end
	.globl EventScriptData_JP_08245DE8
EventScriptData_JP_08245DE8:
	.byte 0x25 @ special 0x0017; no matching SPECIAL_* constant
	.2byte 0x0017
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScriptData_JP_08245E12
	addvar 0x8004, 0x0001
	compare_var_to_value 0x8005, 0x0000
	goto_if 0x01, EventScriptData_JP_08245DE8
	removeobject 0x8006
	setflag 0x8005
	goto EventScriptData_JP_08245DE8
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x08245E11
	end
	.globl EventScriptData_JP_08245E12
EventScriptData_JP_08245E12:
	end
	@ ANALYSIS: RESIDUAL_CFG_RECOVERY addr=0x08245E13 original_size=0x8A semantic_bytes=0x88
	.byte 0x25 @ special 0x0011; no matching SPECIAL_* constant
	.2byte 0x0011
	compare_var_to_value 0x8004, 0x0000
	goto_if 0x01, EventScriptData_JP_08245E85
	compare_var_to_value 0x8004, 0x0001
	goto_if 0x01, 0x08245EFD
	compare_var_to_value 0x8004, 0x0002
	goto_if 0x01, 0x08245F75
	compare_var_to_value 0x8004, 0x0003
	goto_if 0x01, 0x08245FED
	compare_var_to_value 0x8004, 0x0004
	goto_if 0x01, 0x08246065
	compare_var_to_value 0x8004, 0x0005
	goto_if 0x01, 0x082460DD
	compare_var_to_value 0x8004, 0x0006
	goto_if 0x01, 0x08246155
	compare_var_to_value 0x8004, 0x0007
	goto_if 0x01, 0x082461CD
	compare_var_to_value 0x8004, 0x0008
	goto_if 0x01, 0x08246245
	compare_var_to_value 0x8004, 0x0009
	goto_if 0x01, 0x082462BD
	end
	.globl EventScriptData_JP_08245E85
EventScriptData_JP_08245E85:
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, 0x08245ED4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08245EF3
	@ ANALYSIS: PROVEN_CROSS_BOUNDARY_EVENT addr=0x08245E9B
	loadword 0x00, gText_Rom_245102
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08245EA1 original_size=0x54 typed_bytes=0xA
	@ ANALYSIS: RAW_BLOCK size=0x33
	@ ANALYSIS: UNPROVEN_RAW addr=0x08245EA1
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0xDE, 0x5E, 0x24, 0x08, 0x16, 0x0D, 0x80
	.byte 0x01, 0x00, 0x25, 0x19, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0xDE, 0x5E, 0x24, 0x08, 0x0F, 0x00, 0x57, 0x51, 0x24, 0x08, 0x09, 0x04, 0x05, 0x35, 0x63
	.byte 0x24, 0x08, 0x02
	loadword 0x00, gText_Rom_2451B4
	callstd 0x04
	release
	end
	@ ANALYSIS: PROVEN_EVENT_SCRIPT addr=0x08245EDE size=0x15 source=reachable_goto_if_pair
	.globl EventScript_ShowMessage_08245EDE
EventScript_ShowMessage_08245EDE:
	@ special 0x015F: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x015F
	setvar 0x800D, 0x0000
	@ special 0x0019: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x0019
	loadword 0x00, gText_Rom_245161
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x08245EF3
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08245EF3 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_245192
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08245EF9 original_size=0x1C typed_bytes=0x16
	@ ANALYSIS: RAW_BLOCK size=0x4
	@ ANALYSIS: UNPROVEN_RAW addr=0x08245EF9
	.byte 0x09, 0x04, 0x6C, 0x02
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, 0x08245F4C
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08245F6B
	@ Recovered proven split event command at 0x08245F13
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08245F13 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2452EF
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08245F19 original_size=0x54 typed_bytes=0xA
	@ ANALYSIS: RAW_BLOCK size=0x33
	@ ANALYSIS: UNPROVEN_RAW addr=0x08245F19
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x56, 0x5F, 0x24, 0x08, 0x16, 0x0D, 0x80
	.byte 0x01, 0x00, 0x25, 0x19, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0x56, 0x5F, 0x24, 0x08, 0x0F, 0x00, 0x45, 0x53, 0x24, 0x08, 0x09, 0x04, 0x05, 0x35, 0x63
	.byte 0x24, 0x08, 0x02
	loadword 0x00, gText_Rom_2453A7
	callstd 0x04
	release
	end
	@ ANALYSIS: PROVEN_EVENT_SCRIPT addr=0x08245F56 size=0x15 source=reachable_goto_if_pair
	.globl EventScript_ShowMessage_08245F56
EventScript_ShowMessage_08245F56:
	@ special 0x015F: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x015F
	setvar 0x800D, 0x0000
	@ special 0x0019: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x0019
	loadword 0x00, gText_Rom_245359
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x08245F6B
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08245F6B raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_245383
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08245F71 original_size=0x1C typed_bytes=0x16
	@ ANALYSIS: RAW_BLOCK size=0x4
	@ ANALYSIS: UNPROVEN_RAW addr=0x08245F71
	.byte 0x09, 0x04, 0x6C, 0x02
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, 0x08245FC4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08245FE3
	@ Recovered proven split event command at 0x08245F8B
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08245F8B raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2454D6
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08245F91 original_size=0x54 typed_bytes=0xA
	@ ANALYSIS: RAW_BLOCK size=0x33
	@ ANALYSIS: UNPROVEN_RAW addr=0x08245F91
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0xCE, 0x5F, 0x24, 0x08, 0x16, 0x0D, 0x80
	.byte 0x01, 0x00, 0x25, 0x19, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0xCE, 0x5F, 0x24, 0x08, 0x0F, 0x00, 0x2C, 0x55, 0x24, 0x08, 0x09, 0x04, 0x05, 0x35, 0x63
	.byte 0x24, 0x08, 0x02
	loadword 0x00, gText_Rom_2455A0
	callstd 0x04
	release
	end
	@ ANALYSIS: PROVEN_EVENT_SCRIPT addr=0x08245FCE size=0x15 source=reachable_goto_if_pair
	.globl EventScript_ShowMessage_08245FCE
EventScript_ShowMessage_08245FCE:
	@ special 0x015F: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x015F
	setvar 0x800D, 0x0000
	@ special 0x0019: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x0019
	loadword 0x00, gText_Rom_245537
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x08245FE3
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08245FE3 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_24556D
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08245FE9 original_size=0x1C typed_bytes=0x16
	@ ANALYSIS: RAW_BLOCK size=0x4
	@ ANALYSIS: UNPROVEN_RAW addr=0x08245FE9
	.byte 0x09, 0x04, 0x6C, 0x02
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, 0x0824603C
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x0824605B
	@ Recovered proven split event command at 0x08246003
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08246003 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2456BC
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08246009 original_size=0x54 typed_bytes=0xA
	@ ANALYSIS: RAW_BLOCK size=0x33
	@ ANALYSIS: UNPROVEN_RAW addr=0x08246009
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x46, 0x60, 0x24, 0x08, 0x16, 0x0D, 0x80
	.byte 0x01, 0x00, 0x25, 0x19, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0x46, 0x60, 0x24, 0x08, 0x0F, 0x00, 0x18, 0x57, 0x24, 0x08, 0x09, 0x04, 0x05, 0x35, 0x63
	.byte 0x24, 0x08, 0x02
	loadword 0x00, gText_Rom_24576B
	callstd 0x04
	release
	end
	@ ANALYSIS: PROVEN_EVENT_SCRIPT addr=0x08246046 size=0x15 source=reachable_goto_if_pair
	.globl EventScript_ShowMessage_08246046
EventScript_ShowMessage_08246046:
	@ special 0x015F: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x015F
	setvar 0x800D, 0x0000
	@ special 0x0019: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x0019
	loadword 0x00, gText_Rom_245729
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x0824605B
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0824605B raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_245748
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08246061 original_size=0x1C typed_bytes=0x16
	@ ANALYSIS: RAW_BLOCK size=0x4
	@ ANALYSIS: UNPROVEN_RAW addr=0x08246061
	.byte 0x09, 0x04, 0x6C, 0x02
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, 0x082460B4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x082460D3
	@ Recovered proven split event command at 0x0824607B
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0824607B raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_245885
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08246081 original_size=0x54 typed_bytes=0xA
	@ ANALYSIS: RAW_BLOCK size=0x33
	@ ANALYSIS: UNPROVEN_RAW addr=0x08246081
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0xBE, 0x60, 0x24, 0x08, 0x16, 0x0D, 0x80
	.byte 0x01, 0x00, 0x25, 0x19, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0xBE, 0x60, 0x24, 0x08, 0x0F, 0x00, 0xD1, 0x58, 0x24, 0x08, 0x09, 0x04, 0x05, 0x35, 0x63
	.byte 0x24, 0x08, 0x02
	loadword 0x00, gText_Rom_24592E
	callstd 0x04
	release
	end
	@ ANALYSIS: PROVEN_EVENT_SCRIPT addr=0x082460BE size=0x15 source=reachable_goto_if_pair
	.globl EventScript_ShowMessage_082460BE
EventScript_ShowMessage_082460BE:
	@ special 0x015F: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x015F
	setvar 0x800D, 0x0000
	@ special 0x0019: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x0019
	loadword 0x00, gText_Rom_2458E3
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x082460D3
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082460D3 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_24590B
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x082460D9 original_size=0x1C typed_bytes=0x16
	@ ANALYSIS: RAW_BLOCK size=0x4
	@ ANALYSIS: UNPROVEN_RAW addr=0x082460D9
	.byte 0x09, 0x04, 0x6C, 0x02
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, 0x0824612C
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x0824614B
	@ Recovered proven split event command at 0x082460F3
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082460F3 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2451FC
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x082460F9 original_size=0x54 typed_bytes=0xA
	@ ANALYSIS: RAW_BLOCK size=0x33
	@ ANALYSIS: UNPROVEN_RAW addr=0x082460F9
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x36, 0x61, 0x24, 0x08, 0x16, 0x0D, 0x80
	.byte 0x01, 0x00, 0x25, 0x19, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0x36, 0x61, 0x24, 0x08, 0x0F, 0x00, 0x54, 0x52, 0x24, 0x08, 0x09, 0x04, 0x05, 0x35, 0x63
	.byte 0x24, 0x08, 0x02
	loadword 0x00, gText_Rom_2452B2
	callstd 0x04
	release
	end
	@ ANALYSIS: PROVEN_EVENT_SCRIPT addr=0x08246136 size=0x15 source=reachable_goto_if_pair
	.globl EventScript_ShowMessage_08246136
EventScript_ShowMessage_08246136:
	@ special 0x015F: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x015F
	setvar 0x800D, 0x0000
	@ special 0x0019: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x0019
	loadword 0x00, gText_Rom_24525F
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x0824614B
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0824614B raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_245292
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08246151 original_size=0x1C typed_bytes=0x16
	@ ANALYSIS: RAW_BLOCK size=0x4
	@ ANALYSIS: UNPROVEN_RAW addr=0x08246151
	.byte 0x09, 0x04, 0x6C, 0x02
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, 0x082461A4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x082461C3
	@ Recovered proven split event command at 0x0824616B
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0824616B raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2453EB
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08246171 original_size=0x54 typed_bytes=0xA
	@ ANALYSIS: RAW_BLOCK size=0x33
	@ ANALYSIS: UNPROVEN_RAW addr=0x08246171
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0xAE, 0x61, 0x24, 0x08, 0x16, 0x0D, 0x80
	.byte 0x01, 0x00, 0x25, 0x19, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0xAE, 0x61, 0x24, 0x08, 0x0F, 0x00, 0x3C, 0x54, 0x24, 0x08, 0x09, 0x04, 0x05, 0x35, 0x63
	.byte 0x24, 0x08, 0x02
	loadword 0x00, gText_Rom_245499
	callstd 0x04
	release
	end
	@ ANALYSIS: PROVEN_EVENT_SCRIPT addr=0x082461AE size=0x15 source=reachable_goto_if_pair
	.globl EventScript_ShowMessage_082461AE
EventScript_ShowMessage_082461AE:
	@ special 0x015F: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x015F
	setvar 0x800D, 0x0000
	@ special 0x0019: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x0019
	loadword 0x00, gText_Rom_245447
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x082461C3
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082461C3 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_245476
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x082461C9 original_size=0x1C typed_bytes=0x16
	@ ANALYSIS: RAW_BLOCK size=0x4
	@ ANALYSIS: UNPROVEN_RAW addr=0x082461C9
	.byte 0x09, 0x04, 0x6C, 0x02
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, 0x0824621C
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x0824623B
	@ Recovered proven split event command at 0x082461E3
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082461E3 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2455E1
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x082461E9 original_size=0x54 typed_bytes=0xA
	@ ANALYSIS: RAW_BLOCK size=0x33
	@ ANALYSIS: UNPROVEN_RAW addr=0x082461E9
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x26, 0x62, 0x24, 0x08, 0x16, 0x0D, 0x80
	.byte 0x01, 0x00, 0x25, 0x19, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0x26, 0x62, 0x24, 0x08, 0x0F, 0x00, 0x3F, 0x56, 0x24, 0x08, 0x09, 0x04, 0x05, 0x35, 0x63
	.byte 0x24, 0x08, 0x02
	loadword 0x00, gText_Rom_245685
	callstd 0x04
	release
	end
	@ ANALYSIS: PROVEN_EVENT_SCRIPT addr=0x08246226 size=0x15 source=reachable_goto_if_pair
	.globl EventScript_ShowMessage_08246226
EventScript_ShowMessage_08246226:
	@ special 0x015F: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x015F
	setvar 0x800D, 0x0000
	@ special 0x0019: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x0019
	loadword 0x00, gText_Rom_24564C
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x0824623B
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0824623B raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_245665
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08246241 original_size=0x1C typed_bytes=0x16
	@ ANALYSIS: RAW_BLOCK size=0x4
	@ ANALYSIS: UNPROVEN_RAW addr=0x08246241
	.byte 0x09, 0x04, 0x6C, 0x02
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, 0x08246294
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x082462B3
	@ Recovered proven split event command at 0x0824625B
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0824625B raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_2457A0
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08246261 original_size=0x54 typed_bytes=0xA
	@ ANALYSIS: RAW_BLOCK size=0x33
	@ ANALYSIS: UNPROVEN_RAW addr=0x08246261
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x9E, 0x62, 0x24, 0x08, 0x16, 0x0D, 0x80
	.byte 0x01, 0x00, 0x25, 0x19, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0x9E, 0x62, 0x24, 0x08, 0x0F, 0x00, 0xF3, 0x57, 0x24, 0x08, 0x09, 0x04, 0x05, 0x35, 0x63
	.byte 0x24, 0x08, 0x02
	loadword 0x00, gText_Rom_245847
	callstd 0x04
	release
	end
	@ ANALYSIS: PROVEN_EVENT_SCRIPT addr=0x0824629E size=0x15 source=reachable_goto_if_pair
	.globl EventScript_ShowMessage_0824629E
EventScript_ShowMessage_0824629E:
	@ special 0x015F: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x015F
	setvar 0x800D, 0x0000
	@ special 0x0019: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x0019
	loadword 0x00, gText_Rom_245808
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x082462B3
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082462B3 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_24582B
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x082462B9 original_size=0x1C typed_bytes=0x16
	@ ANALYSIS: RAW_BLOCK size=0x4
	@ ANALYSIS: UNPROVEN_RAW addr=0x082462B9
	.byte 0x09, 0x04, 0x6C, 0x02
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, 0x0824630C
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x0824632B
	@ Recovered proven split event command at 0x082462D3
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082462D3 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_245973
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x082462D9 original_size=0x54 typed_bytes=0xA
	@ ANALYSIS: RAW_BLOCK size=0x33
	@ ANALYSIS: UNPROVEN_RAW addr=0x082462D9
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x16, 0x63, 0x24, 0x08, 0x16, 0x0D, 0x80
	.byte 0x01, 0x00, 0x25, 0x19, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0x16, 0x63, 0x24, 0x08, 0x0F, 0x00, 0xE3, 0x59, 0x24, 0x08, 0x09, 0x04, 0x05, 0x35, 0x63
	.byte 0x24, 0x08, 0x02
	loadword 0x00, gText_Rom_245A44
	callstd 0x04
	release
	end
	@ ANALYSIS: PROVEN_EVENT_SCRIPT addr=0x08246316 size=0x15 source=reachable_goto_if_pair
	.globl EventScript_ShowMessage_08246316
EventScript_ShowMessage_08246316:
	@ special 0x015F: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x015F
	setvar 0x800D, 0x0000
	@ special 0x0019: local SPECIAL_* constant name not proven
	.byte 0x25
	.2byte 0x0019
	loadword 0x00, gText_Rom_2459F0
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x0824632B
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0824632B raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_245A24
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x08246331 size=0x47 commands=23 hard_stops=5
	@ Full bytecode/CFG identity proven; runtime reachability is not claimed.
.LClosedEvent_08246331:
	callstd 0x04
	release
	end
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x0010; no matching SPECIAL_* constant
	.2byte 0x0010
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0000
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x00EC; no matching SPECIAL_* constant
	.2byte 0x00EC
	waitstate
	compare_var_to_value 0x800D, 0x0003
	call_if 0x01, .LClosedEvent_0824636C
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, .LClosedEvent_08246370
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, .LClosedEvent_08246374
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x0000; no matching SPECIAL_* constant
	.2byte 0x0000
	release
	end
.LClosedEvent_0824636C:
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x0160; no matching SPECIAL_* constant
	.2byte 0x0160
	return
.LClosedEvent_08246370:
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x0161; no matching SPECIAL_* constant
	.2byte 0x0161
	return
.LClosedEvent_08246374:
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x0162; no matching SPECIAL_* constant
	.2byte 0x0162
	return

