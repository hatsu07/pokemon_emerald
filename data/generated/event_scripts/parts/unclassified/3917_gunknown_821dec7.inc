	.globl EventScriptData_JP_0821DEC7
EventScriptData_JP_0821DEC7: @ 0x0821DEC7
	@ Embedded ROM bytes: file offset 0x21DEC7, size 0x23F
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: CLEAN_CFG_RECOVERY addr=0x0821DEC7 size=0x39 commands=17
	compare_var_to_value 0x40B4, 0x0002
	goto_if 0x01, EventScriptData_JP_0821DEDE
	compare_var_to_value 0x40B4, 0x0007
	goto_if 0x01, EventScriptData_JP_0821DEF4
	end
	.globl EventScriptData_JP_0821DEDE
EventScriptData_JP_0821DEDE:
	.byte 0x25 @ special 0x00CC; no matching SPECIAL_* constant
	.2byte 0x00CC
	setvar 0x40B4, 0x0003
	lockall
	playse 0x0049
	loadword 0x00, gText_Rom_21E227
	callstd 0x04
	releaseall
	end
	.globl EventScriptData_JP_0821DEF4
EventScriptData_JP_0821DEF4:
	.byte 0x25 @ special 0x00CC; no matching SPECIAL_* constant
	.2byte 0x00CC
	setvar 0x40B4, 0x0008
	lockall
	playse 0x0049
	loadword 0x00, gText_Rom_21E248
	@ ANALYSIS: CLEAN_CFG_RECOVERY addr=0x0821DF06 size=0x4C commands=3
	callstd 0x04
	releaseall
	end
	@ ANALYSIS: PROVEN_EVENT_CFG addr=0x0821DF0A size=0x48
.LResidualEvent_0821DF0A:
	.byte 0x25 @ special 0x00CC; no matching SPECIAL_* constant
	.2byte 0x00CC
	setvar 0x40B4, 0x0008
	playse 0x0049
	loadword 0x00, 0x0821E248
	callstd 0x04
	return
.LResidualEvent_0821DF1E:
	copyvar 0x8000, 0x40B4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, 0x0821DEB3
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, 0x0821DEB3
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, 0x0821DE9F
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, .LResidualEvent_0821DF0A
	return
	@ SSTidalCorridor_EventScript_Briney entry is at 0x0821DF50
	loadword 0x00, gText_Rom_21E350
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x0821DF56 original_size=0x18 typed_bytes=0x13
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821DF56 size=0x3 source=v41_hidden_entry_bulk
	@ callstd 0x02 @ 0x0821DF56
	callstd 0x02
	@ end @ 0x0821DF58
	end
	lock
	faceplayer
	waitse
	playmoncry 0x0135, 0x0000
	loadword 0x00, gText_Rom_21E3B8
	callstd 0x04
	waitmoncry
	release
	end
	@ Recovered proven split event command at 0x0821DF6C
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821DF6C raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_21E3C9
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x0821DF72 original_size=0x38 typed_bytes=0x33
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821DF72 size=0x3 source=v41_hidden_entry_bulk
	@ callstd 0x03 @ 0x0821DF72
	callstd 0x03
	@ end @ 0x0821DF74
	end
	loadword 0x00, gText_Rom_21E3CF
	callstd 0x03
	end
	loadword 0x00, gText_Rom_21E3D5
	callstd 0x03
	end
	loadword 0x00, gText_Rom_21E3DB
	callstd 0x03
	end
	lock
	faceplayer
	compare_var_to_value 0x40B4, 0x0004
	goto_if 0x01, 0x0821DFB2
	compare_var_to_value 0x40B4, 0x0008
	goto_if 0x01, 0x0821DFD1
	@ Recovered proven split event command at 0x0821DFA8
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821DFA8 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_21E28A
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x0821DFAE original_size=0x28 typed_bytes=0x22
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821DFAE size=0x4 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0821DFAE
	callstd 0x04
	@ release @ 0x0821DFB0
	release
	@ end @ 0x0821DFB1
	end
	setrespawn 0x0008
	loadword 0x00, gText_Rom_21E2E5
	callstd 0x04
	checkflag 0x0104
	call_if 0x01, 0x0821DFF0
	warp 0x0D0A, 0xFF, 0x0008, 0x000B
	waitstate
	release
	end
	setrespawn 0x0004
	@ Recovered proven split event command at 0x0821DFD4
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821DFD4 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_21E2E5
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x0821DFDA original_size=0x5C typed_bytes=0x44
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821DFDA size=0x16 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0821DFDA
	callstd 0x04
	@ checkflag 0x0104 @ 0x0821DFDC
	checkflag 0x0104
	@ call_if 0x01, 0x0821DFF0 @ 0x0821DFDF
	call_if 0x01, 0x0821DFF0
	@ warp 0x09, 0x09, 0xFF, 0x0008, 0x000B @ 0x0821DFE5
	.byte 0x39
	.byte 0x09
	.byte 0x09
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x000B
	@ waitstate @ 0x0821DFED
	waitstate
	@ release @ 0x0821DFEE
	release
	@ end @ 0x0821DFEF
	end
	setflag 0x03B7
	return
	lockall
	compare_var_to_value 0x40B4, 0x0002
	goto_if 0x01, 0x0821E015
	compare_var_to_value 0x40B4, 0x0007
	goto_if 0x01, 0x0821E015
	loadword 0x00, gText_Rom_21E336
	callstd 0x04
	releaseall
	end
	.byte 0x25 @ special 0x010E; no matching SPECIAL_* constant
	.2byte 0x010E
	waitstate
	end
	lock
	faceplayer
	checkflag 0x00F7
	goto_if 0x01, 0x0821E034
	call 0x0821E03E
	loadword 0x00, gText_Rom_21E2F0
	callstd 0x04
	release
	end
	@ Recovered proven split event command at 0x0821E034
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821E034 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_21E324
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x0821E03A original_size=0xCC typed_bytes=0x51
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821E03A size=0x4 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0821E03A
	callstd 0x04
	@ release @ 0x0821E03C
	release
	@ end @ 0x0821E03D
	end
	checktrainerflag 0x01EE
	goto_if 0x00, 0x0821E08F
	checktrainerflag 0x01EF
	goto_if 0x00, 0x0821E08F
	checktrainerflag 0x0126
	goto_if 0x00, 0x0821E08F
	checktrainerflag 0x00FF
	goto_if 0x00, 0x0821E08F
	checktrainerflag 0x0100
	goto_if 0x00, 0x0821E08F
	checktrainerflag 0x0281
	goto_if 0x00, 0x0821E08F
	checktrainerflag 0x008A
	goto_if 0x00, 0x0821E08F
	checktrainerflag 0x0077
	goto_if 0x00, 0x0821E08F
	setflag 0x00F7
	goto 0x0821E034
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x0821E08E size=0x1 source=v49_typed_owner_closed_cfg
	@ return @ 0x0821E08E
	return
	return
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0821E090 size=0x54 source=v41_hidden_entry_bulk
	@ lockall @ 0x0821E090
	lockall
	@ applymovement 0x0005, 0x0821E0E4 @ 0x0821E091
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0821E0E4
	@ waitmovement 0x0000 @ 0x0821E098
	.byte 0x51
	.2byte 0x0000
	@ applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight @ 0x0821E09B
	.byte 0x4F
	.2byte 0x00FF
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ waitmovement 0x0000 @ 0x0821E0A2
	.byte 0x51
	.2byte 0x0000
	@ loadword 0x00, gText_Rom_21E106 @ 0x0821E0A5
	loadword 0x00, gText_Rom_21E106
	@ callstd 0x04 @ 0x0821E0AB
	callstd 0x04
	@ closemessage @ 0x0821E0AD
	closemessage
	@ applymovement 0x00FF, 0x0821E0F4 @ 0x0821E0AE
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0821E0F4
	@ applymovement 0x0001, 0x0821E0FB @ 0x0821E0B5
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0821E0FB
	@ applymovement 0x0005, 0x0821E0EC @ 0x0821E0BC
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0821E0EC
	@ waitmovement 0x0000 @ 0x0821E0C3
	.byte 0x51
	.2byte 0x0000
	@ playse 0x0009 @ 0x0821E0C6
	playse 0x0009
	@ waitse @ 0x0821E0C9
	waitse
	@ removeobject 0x0005 @ 0x0821E0CA
	.byte 0x53
	.2byte 0x0005
	@ applymovement 0x0001, 0x0821E102 @ 0x0821E0CD
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0821E102
	@ waitmovement 0x0000 @ 0x0821E0D4
	.byte 0x51
	.2byte 0x0000
	@ delay 0x001E @ 0x0821E0D7
	delay 0x001E
	@ setflag 0x01D0 @ 0x0821E0DA
	setflag 0x01D0
	@ setvar 0x40D4, 0x0001 @ 0x0821E0DD
	setvar 0x40D4, 0x0001
	@ releaseall @ 0x0821E0E2
	releaseall
	@ end @ 0x0821E0E3
	end
	@ ANALYSIS: PROVEN_MOVEMENT_UNION_RANGE addr=0x0821E0E4 size=0x22 source=v45_trusted_consumer

	.globl Movement_0821E0E4
Movement_0821E0E4: @ 0x0821E0E4
	.byte 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0xFE

	.globl Movement_0821E0EC
Movement_0821E0EC: @ 0x0821E0EC
	.byte 0x25, 0x14, 0x14, 0x14, 0x14, 0x08, 0x0A, 0xFE

	.globl Movement_0821E0F4
Movement_0821E0F4: @ 0x0821E0F4
	.byte 0x14, 0x14, 0x14, 0x14, 0x13, 0x25, 0xFE

	.globl Movement_0821E0FB
Movement_0821E0FB: @ 0x0821E0FB
	.byte 0x14, 0x0B, 0x0B, 0x26, 0x14, 0x27, 0xFE

	.globl Movement_0821E102
Movement_0821E102: @ 0x0821E102
	.byte 0x0A, 0x0A, 0x26, 0xFE

