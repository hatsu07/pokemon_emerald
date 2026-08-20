	.globl EventScriptData_JP_08247044
EventScriptData_JP_08247044: @ 0x08247044
	@ Decoded event bytecode: exact ROM size 0xF
	lockall
	setvar 0x8004, 0x0000
	.byte 0x25 @ special 0x00C4; no matching SPECIAL_* constant found
	.2byte 0x00C4
	waitbuttonpress
	.byte 0x25 @ special 0x0209; no matching SPECIAL_* constant found
	.2byte 0x0209
	releaseall
	end
	.globl EventScript_BattleColosseum_2P_PlayerSpot0
EventScript_BattleColosseum_2P_PlayerSpot0: @ 0x08247053
	@ Decoded event bytecode: exact ROM size 0xA
	setvar 0x8005, 0x0000
	.byte 0x25 @ special 0x0020; no matching SPECIAL_* constant found
	.2byte 0x0020
	waitstate
	end
	.globl EventScript_BattleColosseum_2P_PlayerSpot1
EventScript_BattleColosseum_2P_PlayerSpot1: @ 0x0824705D
	@ Decoded event bytecode: exact ROM size 0xA
	setvar 0x8005, 0x0001
	.byte 0x25 @ special 0x0020; no matching SPECIAL_* constant found
	.2byte 0x0020
	waitstate
	end
	.globl EventScript_BattleColosseum_4P_PlayerSpot0
EventScript_BattleColosseum_4P_PlayerSpot0: @ 0x08247067
	@ Decoded event bytecode: exact ROM size 0x1B
	fadescreen 0x01
	.byte 0x25 @ special 0x0029; no matching SPECIAL_* constant found
	.2byte 0x0029
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_082470D3
	setvar 0x8005, 0x0000
	.byte 0x25 @ special 0x0020; no matching SPECIAL_* constant found
	.2byte 0x0020
	waitstate
	end
	.globl EventScript_BattleColosseum_4P_PlayerSpot1
EventScript_BattleColosseum_4P_PlayerSpot1: @ 0x08247082
	@ Decoded event bytecode: exact ROM size 0x1B
	fadescreen 0x01
	.byte 0x25 @ special 0x0029; no matching SPECIAL_* constant found
	.2byte 0x0029
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_082470D3
	setvar 0x8005, 0x0001
	.byte 0x25 @ special 0x0020; no matching SPECIAL_* constant found
	.2byte 0x0020
	waitstate
	end
	.globl EventScript_BattleColosseum_4P_PlayerSpot2
EventScript_BattleColosseum_4P_PlayerSpot2: @ 0x0824709D
	@ Decoded event bytecode: exact ROM size 0x1B
	fadescreen 0x01
	.byte 0x25 @ special 0x0029; no matching SPECIAL_* constant found
	.2byte 0x0029
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_082470D3
	setvar 0x8005, 0x0002
	.byte 0x25 @ special 0x0020; no matching SPECIAL_* constant found
	.2byte 0x0020
	waitstate
	end
	.globl EventScript_BattleColosseum_4P_PlayerSpot3
EventScript_BattleColosseum_4P_PlayerSpot3: @ 0x082470B8
	@ Decoded event bytecode: exact ROM size 0x1C
	fadescreen 0x01
	.byte 0x25 @ special 0x0029; no matching SPECIAL_* constant found
	.2byte 0x0029
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_082470D3
	setvar 0x8005, 0x0003
	.byte 0x25 @ special 0x0020; no matching SPECIAL_* constant found
	.2byte 0x0020
	waitstate
	end
	.globl EventScriptData_JP_082470D3
EventScriptData_JP_082470D3:
	end
	.globl EventScript_TradeCenter_Chair0
EventScript_TradeCenter_Chair0: @ 0x082470D4
	@ Decoded event bytecode: exact ROM size 0xA
	setvar 0x8005, 0x0000
	.byte 0x25 @ special 0x0021; no matching SPECIAL_* constant found
	.2byte 0x0021
	waitstate
	end
	.globl EventScript_TradeCenter_Chair1
EventScript_TradeCenter_Chair1: @ 0x082470DE
	@ Decoded event bytecode: exact ROM size 0x1E
	setvar 0x8005, 0x0001
	.byte 0x25 @ special 0x0021; no matching SPECIAL_* constant found
	.2byte 0x0021
	waitstate
	end
	setvar 0x8005, 0x0002
	.byte 0x25 @ special 0x0021; no matching SPECIAL_* constant found
	.2byte 0x0021
	waitstate
	end
	setvar 0x8005, 0x0003
	.byte 0x25 @ special 0x0021; no matching SPECIAL_* constant found
	.2byte 0x0021
	waitstate
	end
	.globl EventScript_RecordCenter_Spot0
EventScript_RecordCenter_Spot0: @ 0x082470FC
	@ Decoded event bytecode: exact ROM size 0x15
	setvar 0x8005, 0x0000
	.byte 0x25 @ special 0x001B; no matching SPECIAL_* constant found
	.2byte 0x001B
	waitstate
	compare_var_to_value 0x4001, 0x0000
	goto_if 0x05, EventScriptData_JP_08247150
	end
	.globl EventScript_RecordCenter_Spot1
EventScript_RecordCenter_Spot1: @ 0x08247111
	@ Decoded event bytecode: exact ROM size 0x15
	setvar 0x8005, 0x0001
	.byte 0x25 @ special 0x001B; no matching SPECIAL_* constant found
	.2byte 0x001B
	waitstate
	compare_var_to_value 0x4001, 0x0000
	goto_if 0x05, EventScriptData_JP_08247150
	end
	.globl EventScript_RecordCenter_Spot2
EventScript_RecordCenter_Spot2: @ 0x08247126
	@ Decoded event bytecode: exact ROM size 0x15
	setvar 0x8005, 0x0002
	.byte 0x25 @ special 0x001B; no matching SPECIAL_* constant found
	.2byte 0x001B
	waitstate
	compare_var_to_value 0x4001, 0x0000
	goto_if 0x05, EventScriptData_JP_08247150
	end
	.globl EventScript_RecordCenter_Spot3
EventScript_RecordCenter_Spot3: @ 0x0824713B
	@ Decoded event bytecode: exact ROM size 0x22
	setvar 0x8005, 0x0003
	.byte 0x25 @ special 0x001B; no matching SPECIAL_* constant found
	.2byte 0x001B
	waitstate
	compare_var_to_value 0x4001, 0x0000
	goto_if 0x05, EventScriptData_JP_08247150
	end
	.globl EventScriptData_JP_08247150
EventScriptData_JP_08247150:
	bufferitemname 0x01, 0x4001
	message gText_Rom_247FB9
	waitmessage
	waitbuttonpress
	releaseall
	end
	.globl EventScriptData_JP_0824715D
EventScriptData_JP_0824715D: @ 0x0824715D
	@ Decoded event bytecode: exact ROM size 0xF
	loadword 0x00, gText_Rom_247E95
	callstd 0x04
	fadescreen 0x01
	.byte 0x25 @ special 0x002A; no matching SPECIAL_* constant found
	.2byte 0x002A
	waitstate
	end
	.globl EventScriptData_JP_0824716C
EventScriptData_JP_0824716C: @ 0x0824716C
	@ Decoded event bytecode: exact ROM size 0xF
	loadword 0x00, gText_Rom_247EAC
	callstd 0x04
	fadescreen 0x01
	.byte 0x25 @ special 0x002A; no matching SPECIAL_* constant found
	.2byte 0x002A
	waitstate
	end
	.globl EventScriptData_JP_0824717B
EventScriptData_JP_0824717B: @ 0x0824717B
	@ Decoded event bytecode: exact ROM size 0x53
	loadword 0x00, gText_Rom_247E87
	callstd 0x04
	closemessage
	end
	.byte 0x25 @ special 0x0126; no matching SPECIAL_* constant found
	.2byte 0x0126
	loadword 0x00, gText_Rom_247ECC
	callstd 0x04
	.byte 0x25 @ special 0x0127; no matching SPECIAL_* constant found
	.2byte 0x0127
	closemessage
	end
	.byte 0x25 @ special 0x0126; no matching SPECIAL_* constant found
	.2byte 0x0126
	loadword 0x00, gText_Rom_247EEA
	callstd 0x04
	.byte 0x25 @ special 0x0127; no matching SPECIAL_* constant found
	.2byte 0x0127
	closemessage
	end
	compare_var_to_value 0x4000, 0x0000
	goto_if 0x05, EventScriptData_JP_082471BF
	.byte 0x25 @ special 0x0126; no matching SPECIAL_* constant found
	.2byte 0x0126
	message gText_Rom_247FA2
	waitmessage
	waitbuttonpress
	.byte 0x25 @ special 0x0127; no matching SPECIAL_* constant found
	.2byte 0x0127
	closemessage
	end
	.globl EventScriptData_JP_082471BF
EventScriptData_JP_082471BF:
	.byte 0x25 @ special 0x0126; no matching SPECIAL_* constant found
	.2byte 0x0126
	message gText_Rom_247F08
	waitmessage
	waitbuttonpress
	.byte 0x25 @ special 0x0127; no matching SPECIAL_* constant found
	.2byte 0x0127
	closemessage
	end
	.globl EventScriptData_JP_082471CE
EventScriptData_JP_082471CE: @ 0x082471CE
	@ Decoded event bytecode: exact ROM size 0x1A
	loadword 0x00, gText_Rom_247E4B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScriptData_JP_082471E8
	erasebox 0x00, 0x00, 0x1D, 0x13
	releaseall
	end
	.globl EventScriptData_JP_082471E8
EventScriptData_JP_082471E8: @ 0x082471E8
	@ Decoded event bytecode: exact ROM size 0xA
	messageautoscroll gText_Rom_247E69
	waitmessage
	.byte 0x25 @ special 0x0005; no matching SPECIAL_* constant found
	.2byte 0x0005
	end
	.globl EventScriptData_JP_082471F2
EventScriptData_JP_082471F2: @ 0x082471F2
	@ Embedded ROM bytes: file offset 0x2471F2, size 0x677
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: MIXED_EVENT_SCRIPT script=0x8 residual=0x79
	.byte 0x25 @ special 0x0004; no matching SPECIAL_* constant
	.2byte 0x0004
	.byte 0x25 @ special 0x0003; no matching SPECIAL_* constant
	.2byte 0x0003
	waitstate
	end
	@ ANALYSIS: RESIDUAL_CFG_RECOVERY addr=0x082471FA original_size=0x79 semantic_bytes=0x77
	.globl EventScriptData_JP_082471FA
EventScriptData_JP_082471FA:
	lock
	faceplayer
	setvar 0x40CF, 0x0008
	checkflag 0x0861
	goto_if 0x00, EventScript_JP_08247014
	specialvar_ 0x800D, 0x01A6
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08247007
	copyvar 0x8007, 0x800F
	specialvar_ 0x800D, 0x019C
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08247347
	message gText_Rom_248690
	waitmessage
	goto EventScriptData_JP_0824723B
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x0824723A
	end
	.globl EventScriptData_JP_0824723B
EventScriptData_JP_0824723B:
	multichoice 0x11, 0x06, 0x11, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x0824727E
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08246FD8
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, 0x08247272
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08246FD8
	end
	@ ANALYSIS: PROVEN_CROSS_BOUNDARY_EVENT addr=0x08247272
	message gText_Rom_2486D6
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08247277 original_size=0xC4 typed_bytes=0xBA
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x08247277 size=0x6 source=v41_hidden_entry_bulk
	@ waitmessage @ 0x08247277
	waitmessage
	@ goto EventScriptData_JP_0824723B @ 0x08247278
	goto EventScriptData_JP_0824723B
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x0824727D source=v47_hardstop_boundary
	.byte 0x02
	call 0x08247305
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08246FD8
	call 0x082423E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08246FD8
	loadword 0x00, gText_Rom_24877D
	callstd 0x04
	closemessage
	.byte 0x25 @ special 0x0000; no matching SPECIAL_* constant
	.2byte 0x0000
	setvar 0x8004, 0x0006
	copyvar 0x4087, 0x8004
	call 0x0824789D
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	playse 0x0024
	delay 0x003C
	applymovement 0x800F, 0x0824702C
	waitmovement 0x0000
	applymovement 0x00FF, 0x08247035
	waitmovement 0x0000
	opendoor 0x0005, 0x0001
	waitdooranim
	applymovement 0x00FF, 0x08247039
	waitmovement 0x0000
	hideobjectat 0x00FF, 0x0000
	closedoor 0x0005, 0x0001
	waitdooranim
	.byte 0x25 @ special 0x01A5; no matching SPECIAL_* constant
	.2byte 0x01A5
	.byte 0x25 @ special 0x0001; no matching SPECIAL_* constant
	.2byte 0x0001
	warpteleport2 0x193C, 0xFF, 0x0007, 0x000B
	waitstate
	.byte 0x25 @ special 0x019F; no matching SPECIAL_* constant
	.2byte 0x019F
	waitstate
	end
	specialvar_ 0x800D, 0x0084
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x00, 0x0824732B
	specialvar_ 0x800D, 0x0152
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08247339
	setvar 0x800D, 0x0001
	return
	loadword 0x00, gText_Rom_2480DF
	callstd 0x04
	goto 0x0824417F
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x08247338 size=0x1 source=v49_typed_owner_closed_cfg
	@ end @ 0x08247338
	end
	@ Recovered proven split event command at 0x08247339
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08247339 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_24810A
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x0824733F original_size=0x3A typed_bytes=0x32
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0824733F size=0x7 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0824733F
	callstd 0x04
	@ goto 0x0824417F @ 0x08247341
	goto 0x0824417F
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x08247346 size=0x1 source=v43_v44
	@ end @ 0x08247346
	end
	loadword 0x00, gText_Rom_248137
	callstd 0x04
	release
	return
	lock
	faceplayer
	checkflag 0x0861
	goto_if 0x00, EventScript_JP_08247014
	loadword 0x00, gText_Rom_248916
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08247379
	loadword 0x00, gText_Rom_248951
	callstd 0x04
	release
	return
	@ Recovered split event command at 0x08247379
	loadword 0x00, gText_Rom_248AD9
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x0824737F original_size=0x19B typed_bytes=0x195
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0824737F size=0x4 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0824737F
	callstd 0x04
	@ release @ 0x08247381
	release
	@ return @ 0x08247382
	return
	lock
	faceplayer
	setvar 0x40CF, 0x0009
	checkflag 0x0861
	goto_if 0x00, EventScript_JP_08247014
	specialvar_ 0x800D, 0x01A6
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08247007
	specialvar_ 0x800D, 0x019C
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08246B0E
	message gText_Rom_2484A8
	waitmessage
	delay 0x001C
	goto 0x082473C2
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x082473C1 size=0x1 source=v49_typed_owner_closed_cfg
	@ end @ 0x082473C1
	end
	checkitem 0x0174, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x0824746A
	checkflag 0x0878
	goto_if 0x01, 0x0824741D
	multichoice 0x00, 0x00, 0x4E, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x082474EC
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, 0x0824751A
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, 0x082475D6
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08246FD8
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08246FD8
	end
	multichoice 0x00, 0x00, 0x4F, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x082474EC
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, 0x0824751A
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, 0x082475B8
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, 0x082475D6
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08246FD8
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08246FD8
	end
	checkflag 0x0878
	goto_if 0x01, 0x082474AA
	multichoice 0x00, 0x00, 0x4B, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x082474EC
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, 0x0824751A
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08246FD8
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08246FD8
	end
	multichoice 0x00, 0x00, 0x4D, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x082474EC
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, 0x0824751A
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, 0x082475B8
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08246FD8
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08246FD8
	end
	loadword 0x00, gText_Rom_2484F4
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08246FD8
	call EventScript_JP_08246E94
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08246FD8
	setvar 0x8004, 0x0003
	goto 0x08247610
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x08247519 size=0x1 source=v49_typed_owner_closed_cfg
	@ end @ 0x08247519
	end
	@ Recovered split event command at 0x0824751A
	message gText_Rom_248500
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0824751F size=0x4E source=v41_hidden_entry_bulk
	@ waitmessage @ 0x0824751F
	waitmessage
	@ multichoice 0x00, 0x00, 0x12, 0x00 @ 0x08247520
	multichoice 0x00, 0x00, 0x12, 0x00
	@ copyvar 0x8000, 0x800D @ 0x08247525
	copyvar 0x8000, 0x800D
	@ compare_var_to_value 0x8000, 0x0000 @ 0x0824752A
	compare_var_to_value 0x8000, 0x0000
	@ goto_if 0x01, 0x0824756D @ 0x0824752F
	goto_if 0x01, 0x0824756D
	@ compare_var_to_value 0x8000, 0x0001 @ 0x08247535
	compare_var_to_value 0x8000, 0x0001
	@ goto_if 0x01, 0x08247578 @ 0x0824753A
	goto_if 0x01, 0x08247578
	@ compare_var_to_value 0x8000, 0x0002 @ 0x08247540
	compare_var_to_value 0x8000, 0x0002
	@ goto_if 0x01, 0x0824759F @ 0x08247545
	goto_if 0x01, 0x0824759F
	@ compare_var_to_value 0x8000, 0x0003 @ 0x0824754B
	compare_var_to_value 0x8000, 0x0003
	@ goto_if 0x01, 0x082475AA @ 0x08247550
	goto_if 0x01, 0x082475AA
	@ compare_var_to_value 0x8000, 0x0004 @ 0x08247556
	compare_var_to_value 0x8000, 0x0004
	@ goto_if 0x01, EventScript_JP_08246FD8 @ 0x0824755B
	goto_if 0x01, EventScript_JP_08246FD8
	@ compare_var_to_value 0x8000, 0x007F @ 0x08247561
	compare_var_to_value 0x8000, 0x007F
	@ goto_if 0x01, EventScript_JP_08246FD8 @ 0x08247566
	goto_if 0x01, EventScript_JP_08246FD8
	@ end @ 0x0824756C
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0824756D size=0xA source=v42_bulk
	@ setvar 0x8004, 0x0000 @ 0x0824756D
	setvar 0x8004, 0x0000
	@ goto 0x08247610 @ 0x08247572
	goto 0x08247610
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x08247577 source=v47_hardstop_boundary
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x08247578 size=0x18 source=v45_trusted_consumer
	@ special 0x003D @ 0x08247578
	.byte 0x25
	.2byte 0x003D
	@ compare_var_to_value 0x800D, 0x0000 @ 0x0824757B
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x05, 0x08247591 @ 0x08247580
	goto_if 0x05, 0x08247591
	@ setvar 0x8004, 0x0001 @ 0x08247586
	setvar 0x8004, 0x0001
	@ goto 0x08247610 @ 0x0824758B
	goto 0x08247610
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x08247590 source=v47_hardstop_boundary
	.byte 0x02
	@ Recovered proven split event command at 0x08247591
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08247591 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_247C1E
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08247597 original_size=0x1EB typed_bytes=0x1C7
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x08247597 size=0x7 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x08247597
	callstd 0x04
	@ goto 0x0824751A @ 0x08247599
	goto 0x0824751A
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x0824759E source=v47_hardstop_boundary
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x0824759F size=0xA source=v45_trusted_consumer
	@ setvar 0x8004, 0x0002 @ 0x0824759F
	setvar 0x8004, 0x0002
	@ goto 0x08247610 @ 0x082475A4
	goto 0x08247610
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x082475A9 source=v47_hardstop_boundary
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x082475AA size=0xD source=v45_trusted_consumer
	@ loadword 0x00, gText_Rom_248531 @ 0x082475AA
	loadword 0x00, gText_Rom_248531
	@ callstd 0x04 @ 0x082475B0
	callstd 0x04
	@ goto 0x0824751A @ 0x082475B2
	goto 0x0824751A
	@ ANALYSIS: CLASSIFIED_DEAD_END_BYTE addr=0x082475B7 source=v47_hardstop_boundary
	.byte 0x02
	loadword 0x00, gText_Rom_248511
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08246FD8
	setvar 0x8004, 0x000C
	goto 0x08247610
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x082475D5 size=0x1 source=v49_typed_owner_closed_cfg
	@ end @ 0x082475D5
	end
	loadword 0x00, gText_Rom_248521
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08246FD8
	.byte 0x25 @ special 0x01A8; no matching SPECIAL_* constant
	.2byte 0x01A8
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08247602
	setvar 0x8004, 0x0005
	goto 0x08247610
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x08247601 size=0x1 source=v49_typed_owner_closed_cfg
	@ end @ 0x08247601
	end
	loadword 0x00, gText_Rom_2480C1
	callstd 0x04
	goto 0x082473C2
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x0824760F size=0x1 source=v49_typed_owner_closed_cfg
	@ end @ 0x0824760F
	end
	call 0x082423E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08246FD8
	copyvar 0x8000, 0x8004
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, 0x08247668
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x08247668
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, 0x08247668
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, 0x082476F5
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, 0x08247782
	compare_var_to_value 0x8000, 0x000C
	goto_if 0x01, 0x08247782
	end
	message gText_Rom_2485D7
	waitmessage
	multichoice 0x10, 0x06, 0x51, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x082476CD
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, 0x082476A5
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08246FD8
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08246FD8
	end
	call 0x0824780F
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08247819
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, 0x08247668
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, 0x082476A5
	release
	return
	call 0x08247814
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08247819
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, 0x08247668
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, 0x082476CD
	release
	return
	message gText_Rom_248611
	waitmessage
	multichoice 0x10, 0x06, 0x51, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x0824775A
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, 0x08247732
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08246FD8
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08246FD8
	end
	call 0x0824780F
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08247819
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, 0x082476F5
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, 0x08247732
	release
	return
	call 0x08247814
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08247819
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, 0x082476F5
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, 0x0824775A
	release
	return
	@ Recovered split event command at 0x08247782
	message gText_Rom_248651
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08247787 original_size=0xE2 typed_bytes=0x5A
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x08247787 size=0x88 commands=30 hard_stops=3
	@ Full bytecode/CFG identity proven; runtime reachability is not claimed.
.LClosedEvent_08247787:
	waitmessage
	multichoice 0x10, 0x06, 0x51, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, .LClosedEvent_082477E7
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, .LClosedEvent_082477BF
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08246FD8
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08246FD8
	end
.LClosedEvent_082477BF:
	call 0x0824780F
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08247819
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, 0x08247782
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, .LClosedEvent_082477BF
	release
	return
.LClosedEvent_082477E7:
	call 0x08247814
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08247819
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, 0x08247782
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, .LClosedEvent_082477E7
	release
	return
	.byte 0x25 @ special 0x019D; no matching SPECIAL_* constant
	.2byte 0x019D
	waitstate
	return
	.byte 0x25 @ special 0x019E; no matching SPECIAL_* constant
	.2byte 0x019E
	waitstate
	return
	messageautoscroll gText_Rom_247D23
	waitmessage
	delay 0x003C
	closemessage
	copyvar 0x8007, 0x800F
	call 0x082478C3
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	playse 0x0024
	delay 0x003C
	applymovement 0x800F, 0x0824702C
	waitmovement 0x0000
	closemessage
	applymovement 0x00FF, 0x08247035
	waitmovement 0x0000
	opendoor 0x0009, 0x0001
	waitdooranim
	applymovement 0x00FF, 0x08247039
	waitmovement 0x0000
	hideobjectat 0x00FF, 0x0000
	closedoor 0x0009, 0x0001
	waitdooranim
	release
	waitstate
	end
	.globl EventScriptData_JP_08247869
EventScriptData_JP_08247869: @ 0x08247869
	@ Embedded ROM bytes: file offset 0x247869, size 0x317
	@ semanticized-mass: resolved embedded ROM pointers
	@ Proven event-script CFG for 0x08247869
	lockall
	checkflag 0x0861
	goto_if 0x00, EventScript_JP_0824701E
	specialvar_ 0x800D, 0x019C
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_08247893
	fadescreen 0x01
	.byte 0x25 @ special 0x01A0; no matching SPECIAL_* constant
	.2byte 0x01A0
	waitstate
	loadword 0x00, gText_Rom_247FE3
	callstd 0x04
	releaseall
	end

	.globl EventScriptData_JP_08247893
EventScriptData_JP_08247893: @ 0x08247893
	loadword 0x00, gText_Rom_247FCD
	callstd 0x04
	releaseall
	end

	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x0824789D original_size=0x140 typed_bytes=0xEE
	setmetatile 0x0005, 0x0002, 0x02DC, 0x0000
	setmetatile 0x0005, 0x0003, 0x02E4, 0x0000
	return
	@ ANALYSIS: PROVEN_EVENT_SUBROUTINE addr=0x082478B0 size=0x13 source=hidden_entry_call_0x08246A70
	.globl CableClub_EventScript_SetMetatiles_082478B0
CableClub_EventScript_SetMetatiles_082478B0:
	setmetatile 0x0005, 0x0002, 0x021E, 0x0001
	setmetatile 0x0005, 0x0003, 0x025D, 0x0001
	return
	setmetatile 0x0009, 0x0002, 0x02DC, 0x0000
	setmetatile 0x0009, 0x0003, 0x02E4, 0x0000
	return
	@ ANALYSIS: PROVEN_EVENT_SUBROUTINE addr=0x082478D6 size=0x13 source=hidden_entry_calls_0x082469EB_0x08246A30
	.globl CableClub_EventScript_SetMetatiles_082478D6
CableClub_EventScript_SetMetatiles_082478D6:
	setmetatile 0x0009, 0x0002, 0x021E, 0x0001
	setmetatile 0x0009, 0x0003, 0x025D, 0x0001
	return
	@ ANALYSIS: PROVEN_EVENT_SUBROUTINE addr=0x082478E9 size=0x13 source=hidden_entry_call_0x08246933
	.globl CableClub_EventScript_SetMetatiles_082478E9
CableClub_EventScript_SetMetatiles_082478E9:
	setmetatile 0x0005, 0x0002, 0x022C, 0x0000
	setmetatile 0x0005, 0x0003, 0x0234, 0x0000
	return
	@ ANALYSIS: PROVEN_EVENT_SUBROUTINE addr=0x082478FC size=0x13 source=hidden_entry_call_0x082469A1
	.globl CableClub_EventScript_SetMetatiles_082478FC
CableClub_EventScript_SetMetatiles_082478FC:
	setmetatile 0x0005, 0x0002, 0x022A, 0x0001
	setmetatile 0x0005, 0x0003, 0x0232, 0x0001
	return
	@ ANALYSIS: PROVEN_SHARED_MAP_SCRIPT addr=0x0824790F size=0x4 source=16_type5_MapScripts_entries
	.globl SharedMapScript_0824790F
SharedMapScript_0824790F:
	@ special 0x01A1: local SPECIAL_* constant name is not proven
	.byte 0x25
	.2byte 0x01A1
	end
	lock
	faceplayer
	message gText_Rom_2481AB
	waitmessage
	multichoice 0x00, 0x00, 0x50, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x08247952
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, 0x0824795C
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, 0x08247966
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, 0x08247966
	end
	loadword 0x00, gText_Rom_2481D0
	callstd 0x04
	release
	end
	loadword 0x00, gText_Rom_248292
	callstd 0x04
	release
	end
	loadword 0x00, gText_Rom_248314
	callstd 0x04
	release
	end
	lock
	faceplayer
	message gText_Rom_248330
	waitmessage
	specialvar_ 0x800D, 0x019C
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08247B27
	delay 0x003C
	message gText_Rom_248378
	waitmessage
	multichoice 0x00, 0x00, 0x50, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, 0x082479C8
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, 0x08247A14
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, 0x08246FE5
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, 0x08246FE5
	end
	setvar 0x8005, 0x0000
	.byte 0x25 @ special 0x01A9; no matching SPECIAL_* constant
	.2byte 0x01A9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08247B31
	@ Recovered proven split event command at 0x082479DB
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x082479DB raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_24838C
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x082479E1 original_size=0x48 typed_bytes=0x13
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x082479E1 size=0x32 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x082479E1
	callstd 0x04
	@ fadescreen 0x01 @ 0x082479E3
	fadescreen 0x01
	@ setvar 0x8005, 0x0000 @ 0x082479E5
	setvar 0x8005, 0x0000
	@ special 0x01A4 @ 0x082479EA
	.byte 0x25
	.2byte 0x01A4
	@ waitstate @ 0x082479ED
	waitstate
	@ compare_var_to_value 0x8004, 0x0006 @ 0x082479EE
	compare_var_to_value 0x8004, 0x0006
	@ goto_if 0x04, 0x08246FE5 @ 0x082479F3
	goto_if 0x04, 0x08246FE5
	@ call 0x082423E9 @ 0x082479F9
	call 0x082423E9
	@ compare_var_to_value 0x800D, 0x0000 @ 0x082479FE
	compare_var_to_value 0x800D, 0x0000
	@ goto_if 0x01, 0x08246FE5 @ 0x08247A03
	goto_if 0x01, 0x08246FE5
	@ setvar 0x8004, 0x0004 @ 0x08247A09
	setvar 0x8004, 0x0004
	@ goto 0x08247A60 @ 0x08247A0E
	goto 0x08247A60
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x08247A13 size=0x1 source=v43_v44
	@ end @ 0x08247A13
	end
	setvar 0x8005, 0x0001
	.byte 0x25 @ special 0x01AB; no matching SPECIAL_* constant
	.2byte 0x01AB
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08247B31
	@ Recovered proven split event command at 0x08247A27
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08247A27 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_24838C
	@ ANALYSIS: PROVEN_UNREFERENCED_STITCHED_EVENT_CFG addr=0x08247A2D raw_size=0x34 commands=14 hard_stops=2
	@ Full bytecode/CFG identity and split final pointer operand proven; runtime reachability is not claimed.
.LStitchedEvent_08247A2D:
	callstd 0x04
	fadescreen 0x01
	setvar 0x8005, 0x0001
	.byte 0x25 @ PROVEN_UNREFERENCED_STITCHED_EVENT_CMD special 0x01A4; no matching SPECIAL_* constant
	.2byte 0x01A4
	waitstate
	compare_var_to_value 0x8004, 0x0006
	goto_if 0x04, 0x08246FE5
	call 0x082423E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08246FE5
	setvar 0x8004, 0x0006
	goto .LStitchedEvent_08247A60
	end
.LStitchedEvent_08247A60:
	message gText_Rom_248651
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x08247A65 size=0x38 source=v41_hidden_entry_bulk
	@ waitmessage @ 0x08247A65
	waitmessage
	@ multichoice 0x10, 0x06, 0x51, 0x00 @ 0x08247A66
	multichoice 0x10, 0x06, 0x51, 0x00
	@ copyvar 0x8000, 0x800D @ 0x08247A6B
	copyvar 0x8000, 0x800D
	@ compare_var_to_value 0x8000, 0x0000 @ 0x08247A70
	compare_var_to_value 0x8000, 0x0000
	@ goto_if 0x01, 0x08247AC5 @ 0x08247A75
	goto_if 0x01, 0x08247AC5
	@ compare_var_to_value 0x8000, 0x0001 @ 0x08247A7B
	compare_var_to_value 0x8000, 0x0001
	@ goto_if 0x01, 0x08247A9D @ 0x08247A80
	goto_if 0x01, 0x08247A9D
	@ compare_var_to_value 0x8000, 0x0002 @ 0x08247A86
	compare_var_to_value 0x8000, 0x0002
	@ goto_if 0x01, 0x08246FE5 @ 0x08247A8B
	goto_if 0x01, 0x08246FE5
	@ compare_var_to_value 0x8000, 0x007F @ 0x08247A91
	compare_var_to_value 0x8000, 0x007F
	@ goto_if 0x01, 0x08246FE5 @ 0x08247A96
	goto_if 0x01, 0x08246FE5
	@ end @ 0x08247A9C
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x08247A9D size=0x28 source=v42_bulk
	@ call 0x0824780F @ 0x08247A9D
	call 0x0824780F
	@ compare_var_to_value 0x800D, 0x0001 @ 0x08247AA2
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x08247AED @ 0x08247AA7
	goto_if 0x01, 0x08247AED
	@ compare_var_to_value 0x800D, 0x0005 @ 0x08247AAD
	compare_var_to_value 0x800D, 0x0005
	@ goto_if 0x01, 0x08247A60 @ 0x08247AB2
	goto_if 0x01, 0x08247A60
	@ compare_var_to_value 0x800D, 0x0008 @ 0x08247AB8
	compare_var_to_value 0x800D, 0x0008
	@ goto_if 0x01, 0x08247A9D @ 0x08247ABD
	goto_if 0x01, 0x08247A9D
	@ release @ 0x08247AC3
	release
	@ return @ 0x08247AC4
	return
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x08247AC5 size=0x62 source=v45_trusted_consumer
	@ call 0x08247814 @ 0x08247AC5
	call 0x08247814
	@ compare_var_to_value 0x800D, 0x0001 @ 0x08247ACA
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x08247AED @ 0x08247ACF
	goto_if 0x01, 0x08247AED
	@ compare_var_to_value 0x800D, 0x0005 @ 0x08247AD5
	compare_var_to_value 0x800D, 0x0005
	@ goto_if 0x01, 0x08247A60 @ 0x08247ADA
	goto_if 0x01, 0x08247A60
	@ compare_var_to_value 0x800D, 0x0008 @ 0x08247AE0
	compare_var_to_value 0x800D, 0x0008
	@ goto_if 0x01, 0x08247AC5 @ 0x08247AE5
	goto_if 0x01, 0x08247AC5
	@ release @ 0x08247AEB
	release
	@ return @ 0x08247AEC
	return
	@ messageautoscroll gText_Rom_2483A1 @ 0x08247AED
	messageautoscroll gText_Rom_2483A1
	@ waitmessage @ 0x08247AF2
	waitmessage
	@ delay 0x003C @ 0x08247AF3
	delay 0x003C
	@ closemessage @ 0x08247AF6
	closemessage
	@ copyvar 0x8007, 0x800F @ 0x08247AF7
	copyvar 0x8007, 0x800F
	@ call CableClub_EventScript_SetMetatiles_082478E9 @ 0x08247AFC
	call CableClub_EventScript_SetMetatiles_082478E9
	@ special 0x008E @ 0x08247B01
	.byte 0x25
	.2byte 0x008E
	@ playse 0x0024 @ 0x08247B04
	playse 0x0024
	@ delay 0x003C @ 0x08247B07
	delay 0x003C
	@ applymovement 0x800F, 0x0824702C @ 0x08247B0A
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824702C
	@ waitmovement 0x0000 @ 0x08247B11
	.byte 0x51
	.2byte 0x0000
	@ closemessage @ 0x08247B14
	closemessage
	@ applymovement 0x00FF, 0x0824703F @ 0x08247B15
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824703F
	@ waitmovement 0x0000 @ 0x08247B1C
	.byte 0x51
	.2byte 0x0000
	@ hideobjectat 0x00FF, 0x00, 0x00 @ 0x08247B1F
	.byte 0x59
	.2byte 0x00FF
	.byte 0x00
	.byte 0x00
	@ release @ 0x08247B24
	release
	@ waitstate @ 0x08247B25
	waitstate
	@ end @ 0x08247B26
	end
	@ Recovered proven split event command at 0x08247B27
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x08247B27 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, gText_Rom_24835E
	@ ANALYSIS: RAW_CFG_RECOVERY addr=0x08247B2D original_size=0x53 typed_bytes=0x4E
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x08247B2D size=0x4 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x08247B2D
	callstd 0x04
	@ release @ 0x08247B2F
	release
	@ end @ 0x08247B30
	end
	loadword 0x00, gText_Rom_2483D0
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08246FE5
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, 0x08247B60
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, 0x08247B69
	goto 0x08246FE5
	@ ANALYSIS: STRUCTURED_EVENT_SCRIPT_BYTECODE size=0x1 addr=0x08247B5F parent=SharedMapScript_0824790F encoding=BYTE_STREAM pointerCells=0
	@ ANALYSIS: SOURCE_RANGE addr=0x08247B5F size=0x1
	.byte 0x02 @ +0x0
	loadword 0x00, gText_Rom_248406
	callstd 0x04
	return
	loadword 0x00, gText_Rom_248462
	callstd 0x04
	return
	lockall
	.byte 0x25 @ special 0x01AA; no matching SPECIAL_* constant
	.2byte 0x01AA
	waitstate
	releaseall
	end
	lockall
	.byte 0x25 @ special 0x01AC; no matching SPECIAL_* constant
	.2byte 0x01AC
	waitstate
	releaseall
	end

