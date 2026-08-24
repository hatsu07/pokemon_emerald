
	.globl EventScriptData_JP_0821B7F4
EventScriptData_JP_0821B7F4: @ 0x0821B7F4
	@ Embedded ROM bytes: file offset 0x21B7F4, size 0xB5
	@ ANALYSIS: MIXED_EVENT_SCRIPT script=0x40 residual=0x75
	setmetatile 0x0007, 0x0013, 0x022A, 0x0001
	setmetatile 0x0008, 0x0013, 0x022B, 0x0001
	setmetatile 0x0009, 0x0013, 0x022C, 0x0001
	setmetatile 0x0007, 0x0014, 0x0232, 0x0001
	setmetatile 0x0008, 0x0014, 0x0233, 0x0000
	setmetatile 0x0009, 0x0014, 0x0234, 0x0001
	.byte 0x25 @ special 0x008E; no matching SPECIAL_* constant
	.2byte 0x008E
	playse 0x0014
	setflag 0x08B1
	end
	lockall
	checkflag 0x0003
	call_if 0x01, EventScriptData_JP_0821B88A
	checkflag 0x08B1
	goto_if 0x01, EventScriptData_JP_0821B858
	braillemessage BrailleMessage_26377A
	setflag 0x0002
	.byte 0x25 @ special 0x01EF; no matching SPECIAL_* constant
	.2byte 0x01EF
	goto EventScriptData_JP_0821B886
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x0821B857
	end
	.globl EventScriptData_JP_0821B858
EventScriptData_JP_0821B858:
	loadword 0x00, FieldScriptText_243CDA
	callstd 0x04
	releaseall
	end
	lockall
	checkflag 0x0003
	call_if 0x01, EventScriptData_JP_0821B88A
	braillemessage BrailleMessage_26377A
	checkflag 0x08B1
	goto_if 0x01, EventScriptData_JP_0821B886
	setflag 0x0002
	.byte 0x25 @ special 0x01EF; no matching SPECIAL_* constant
	.2byte 0x01EF
	goto EventScriptData_JP_0821B886
	@ ANALYSIS: PROVEN_EVENT_SUFFIX addr=0x0821B885
	end
	.globl EventScriptData_JP_0821B886
EventScriptData_JP_0821B886:
	waitbuttonpress
	hidebox2
	releaseall
	end
	.globl EventScriptData_JP_0821B88A
EventScriptData_JP_0821B88A:
	setvar 0x403B, 0x0000
	setvar 0x403C, 0x0000
	setvar 0x403D, 0x0000
	clearflag 0x0003
	return
	lock
	faceplayer
	waitse
	playmoncry 0x0192, 0x0002
	delay 0x0028
	waitmoncry

	setwildbattle SPECIES_REGICE, 40, ITEM_NONE

	@ Embedded ROM bytes: file offset 0x21B8AF, size 0xFC
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0821B8AF size=0x35 source=v41_hidden_entry_bulk
	@ setflag 0x08C1 @ 0x0821B8AF
	setflag 0x08C1
	@ special 0x0138 @ 0x0821B8B2
	.byte 0x25
	.2byte 0x0138
	@ waitstate @ 0x0821B8B5
	waitstate
	@ clearflag 0x08C1 @ 0x0821B8B6
	clearflag 0x08C1
	@ specialvar 0x800D, 0x00B4 @ 0x0821B8B9
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B4
	@ compare_var_to_value 0x800D, 0x0001 @ 0x0821B8BE
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x0821B8E4 @ 0x0821B8C3
	goto_if 0x01, 0x0821B8E4
	@ compare_var_to_value 0x800D, 0x0004 @ 0x0821B8C9
	compare_var_to_value 0x800D, 0x0004
	@ goto_if 0x01, 0x0821B8ED @ 0x0821B8CE
	goto_if 0x01, 0x0821B8ED
	@ compare_var_to_value 0x800D, 0x0005 @ 0x0821B8D4
	compare_var_to_value 0x800D, 0x0005
	@ goto_if 0x01, 0x0821B8ED @ 0x0821B8D9
	goto_if 0x01, 0x0821B8ED
	@ setflag 0x01BC @ 0x0821B8DF
	setflag 0x01BC
	@ release @ 0x0821B8E2
	release
	@ end @ 0x0821B8E3
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0821B8E4 size=0x8 source=v42_bulk
	@ setflag 0x01BC @ 0x0821B8E4
	setflag 0x01BC
	@ goto 0x08244197 @ 0x0821B8E7
	goto 0x08244197
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x0821B8ED size=0xA source=v43_v44
	@ setvar 0x8004, 0x0192 @ 0x0821B8ED
	setvar 0x8004, 0x0192
	@ goto 0x082441A0 @ 0x0821B8F2
	goto 0x082441A0
	.byte 0x02

	@ ANALYSIS: PROVEN_MAPSCRIPTS_TABLE addr=0x0821B8F8 size=0x10 source=MapHeader_plus_8_v48
	.globl MapScripts_0821B8F8
MapScripts_0821B8F8: @ 0x0821B8F8
	@ map script type 0x05 -> MapScript_0821B908
	.byte 0x05
	.4byte MapScript_0821B908
	@ map script type 0x01 -> MapScript_0821B937
	.byte 0x01
	.4byte MapScript_0821B937
	@ map script type 0x03 -> MapScript_0821B926
	.byte 0x03
	.4byte MapScript_0821B926
	.byte 0x00 @ MapScripts terminator

	@ ANALYSIS: PROVEN_MAPSCRIPTS_REACHABLE_EVENT_REGION addr=0x0821B908 size=0x70 source=v48

	.globl MapScript_0821B908
MapScript_0821B908: @ 0x0821B908
	@ checkflag 0x08C1 @ 0x0821B908
	checkflag 0x08C1
	@ call_if 0x01, MapScript_0821B912 @ 0x0821B90B
	call_if 0x01, MapScript_0821B912
	@ end @ 0x0821B911
	end

	.globl MapScript_0821B912
MapScript_0821B912: @ 0x0821B912
	@ specialvar 0x800D, 0x00B4 @ 0x0821B912
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B4
	@ compare_var_to_value 0x800D, 0x0007 @ 0x0821B917
	compare_var_to_value 0x800D, 0x0007
	@ goto_if 0x05, 0x08244178 @ 0x0821B91C
	goto_if 0x05, 0x08244178
	@ removeobject 0x800F @ 0x0821B922
	.byte 0x53
	.2byte 0x800F
	@ return @ 0x0821B925
	return

	.globl MapScript_0821B926
MapScript_0821B926: @ 0x0821B926
	@ setflag 0x08B9 @ 0x0821B926
	setflag 0x08B9
	@ checkflag 0x01BD @ 0x0821B929
	checkflag 0x01BD
	@ call_if 0x00, MapScript_0821B933 @ 0x0821B92C
	call_if 0x00, MapScript_0821B933
	@ end @ 0x0821B932
	end

	.globl MapScript_0821B933
MapScript_0821B933: @ 0x0821B933
	@ clearflag 0x03A9 @ 0x0821B933
	clearflag 0x03A9
	@ return @ 0x0821B936
	return

	.globl MapScript_0821B937
MapScript_0821B937: @ 0x0821B937
	@ checkflag 0x08B2 @ 0x0821B937
	checkflag 0x08B2
	@ call_if 0x00, MapScript_0821B941 @ 0x0821B93A
	call_if 0x00, MapScript_0821B941
	@ end @ 0x0821B940
	end

	.globl MapScript_0821B941
MapScript_0821B941: @ 0x0821B941
	@ setmetatile 0x0007, 0x0013, 0x0229, 0x0001 @ 0x0821B941
	setmetatile 0x0007, 0x0013, 0x0229, 0x0001
	@ setmetatile 0x0008, 0x0013, 0x0229, 0x0001 @ 0x0821B94A
	setmetatile 0x0008, 0x0013, 0x0229, 0x0001
	@ setmetatile 0x0009, 0x0013, 0x0229, 0x0001 @ 0x0821B953
	setmetatile 0x0009, 0x0013, 0x0229, 0x0001
	@ setmetatile 0x0007, 0x0014, 0x0235, 0x0001 @ 0x0821B95C
	setmetatile 0x0007, 0x0014, 0x0235, 0x0001
	@ setmetatile 0x0008, 0x0014, 0x0235, 0x0001 @ 0x0821B965
	setmetatile 0x0008, 0x0014, 0x0235, 0x0001
	@ setmetatile 0x0009, 0x0014, 0x0235, 0x0001 @ 0x0821B96E
	setmetatile 0x0009, 0x0014, 0x0235, 0x0001
	@ return @ 0x0821B977
	return
	lockall
	checkflag 0x08B2
	goto_if 0x01, 0x0821B98B
	braillemessage BrailleMessage_263799
	waitbuttonpress
	hidebox2
	releaseall
	end
	loadword 0x00, FieldScriptText_243CDA
	callstd 0x04
	releaseall
	end
	lockall
	braillemessage BrailleMessage_263799
	waitbuttonpress
	hidebox2
	releaseall
	end
	lock
	faceplayer
	waitse
	playmoncry 0x0193, 0x0002
	delay 0x0028
	waitmoncry

	setwildbattle SPECIES_REGISTEEL, 40, ITEM_NONE

	@ Embedded ROM bytes: file offset 0x21B9B1, size 0x38D
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0821B9B1 size=0x35 source=v41_hidden_entry_bulk
	@ setflag 0x08C1 @ 0x0821B9B1
	setflag 0x08C1
	@ special 0x0138 @ 0x0821B9B4
	.byte 0x25
	.2byte 0x0138
	@ waitstate @ 0x0821B9B7
	waitstate
	@ clearflag 0x08C1 @ 0x0821B9B8
	clearflag 0x08C1
	@ specialvar 0x800D, 0x00B4 @ 0x0821B9BB
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B4
	@ compare_var_to_value 0x800D, 0x0001 @ 0x0821B9C0
	compare_var_to_value 0x800D, 0x0001
	@ goto_if 0x01, 0x0821B9E6 @ 0x0821B9C5
	goto_if 0x01, 0x0821B9E6
	@ compare_var_to_value 0x800D, 0x0004 @ 0x0821B9CB
	compare_var_to_value 0x800D, 0x0004
	@ goto_if 0x01, 0x0821B9EF @ 0x0821B9D0
	goto_if 0x01, 0x0821B9EF
	@ compare_var_to_value 0x800D, 0x0005 @ 0x0821B9D6
	compare_var_to_value 0x800D, 0x0005
	@ goto_if 0x01, 0x0821B9EF @ 0x0821B9DB
	goto_if 0x01, 0x0821B9EF
	@ setflag 0x01BD @ 0x0821B9E1
	setflag 0x01BD
	@ release @ 0x0821B9E4
	release
	@ end @ 0x0821B9E5
	end
	@ ANALYSIS: PROVEN_EVENT_COMMAND_PREFIX addr=0x0821B9E6 size=0x8 source=v42_bulk
	@ setflag 0x01BD @ 0x0821B9E6
	setflag 0x01BD
	@ goto 0x08244197 @ 0x0821B9E9
	goto 0x08244197
	.byte 0x02
	@ ANALYSIS: PROVEN_EVENT_INTERNAL_RANGE addr=0x0821B9EF size=0xA source=v43_v44
	@ setvar 0x8004, 0x0193 @ 0x0821B9EF
	setvar 0x8004, 0x0193
	@ goto 0x082441A0 @ 0x0821B9F4
	goto 0x082441A0
	.byte 0x02

	@ ANALYSIS: PROVEN_MAPSCRIPTS_TABLE addr=0x0821B9FA size=0x6 source=MapHeader_plus_8_v48
	.globl MapScripts_0821B9FA
MapScripts_0821B9FA: @ 0x0821B9FA
	@ map script type 0x05 -> MapScript_0821BA00
	.byte 0x05
	.4byte MapScript_0821BA00
	.byte 0x00 @ MapScripts terminator

	@ ANALYSIS: PROVEN_MAPSCRIPTS_REACHABLE_EVENT_REGION addr=0x0821BA00 size=0x9 source=v48

	.globl MapScript_0821BA00
MapScript_0821BA00: @ 0x0821BA00
	@ setdivewarp 0x00, 0x31, 0xFF, 0x003C, 0x001F @ 0x0821BA00
	.byte 0x40
	.byte 0x00
	.byte 0x31
	.byte 0xFF
	.2byte 0x003C
	.2byte 0x001F
	@ end @ 0x0821BA08
	end

	@ ANALYSIS: PROVEN_MAPSCRIPTS_TABLE addr=0x0821BA09 size=0x6 source=MapHeader_plus_8_v50
	.globl MapScripts_0821BA09
MapScripts_0821BA09: @ 0x0821BA09
	@ map script type 0x06 -> MapScript_0821BA0F
	.byte 0x06
	.4byte MapScript_0821BA0F
	.byte 0x00 @ MapScripts terminator

	@ ANALYSIS: PROVEN_MAPSCRIPTS_REACHABLE_EVENT_REGION addr=0x0821BA0F size=0x32 source=v50

	.globl MapScript_0821BA0F
MapScript_0821BA0F: @ 0x0821BA0F
	@ getplayerxy 0x8004, 0x8005 @ 0x0821BA0F
	getplayerxy 0x8004, 0x8005
	@ compare_var_to_value 0x8004, 0x000C @ 0x0821BA14
	compare_var_to_value 0x8004, 0x000C
	@ goto_if 0x05, MapScript_0821BA2F @ 0x0821BA19
	goto_if 0x05, MapScript_0821BA2F
	@ compare_var_to_value 0x8005, 0x002C @ 0x0821BA1F
	compare_var_to_value 0x8005, 0x002C
	@ goto_if 0x05, MapScript_0821BA2F @ 0x0821BA24
	goto_if 0x05, MapScript_0821BA2F
	@ goto MapScript_0821BA38 @ 0x0821BA2A
	goto MapScript_0821BA38

	.globl MapScript_0821BA2F
MapScript_0821BA2F: @ 0x0821BA2F
	@ setdivewarp 0x00, 0x31, 0xFF, 0x003C, 0x001F @ 0x0821BA2F
	.byte 0x40
	.byte 0x00
	.byte 0x31
	.byte 0xFF
	.2byte 0x003C
	.2byte 0x001F
	@ end @ 0x0821BA37
	end

	.globl MapScript_0821BA38
MapScript_0821BA38: @ 0x0821BA38
	@ setdivewarp 0x18, 0x47, 0xFF, 0x000A, 0x0013 @ 0x0821BA38
	.byte 0x40
	.byte 0x18
	.byte 0x47
	.byte 0xFF
	.2byte 0x000A
	.2byte 0x0013
	@ end @ 0x0821BA40
	end
	lockall
	@ Recovered proven split event command at 0x0821BA42
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BA42 raw_tail=0x1 continuation=0x4; reachability not claimed
	braillemessage BrailleMessage_2635D2
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BA47 size=0x4 source=v41_hidden_entry_bulk
	@ waitbuttonpress @ 0x0821BA47
	waitbuttonpress
	@ hidebox2 @ 0x0821BA48
	hidebox2
	@ releaseall @ 0x0821BA49
	releaseall
	@ end @ 0x0821BA4A
	end
	@ ANALYSIS: PROVEN_MAP_SCRIPTS_TABLE addr=0x0821BA4B size=0x10 header_referenced=YES
	.globl SealedChamber_OuterRoom_MapScripts
SealedChamber_OuterRoom_MapScripts:
	.byte 0x05 @ map script type; local named constant unavailable
	.4byte SealedChamber_OuterRoom_MapScript_OnResume
	.byte 0x03 @ map script type; local named constant unavailable
	.4byte SealedChamber_OuterRoom_MapScript_OnTransition
	.byte 0x01 @ map script type; local named constant unavailable
	.4byte SealedChamber_OuterRoom_MapScript_OnLoad
	.byte 0x00 @ map scripts terminator
	@ ANALYSIS: PROVEN_MAP_SCRIPT_BODY addr=0x0821BA5B size=0x56 source=MapScripts_CFG
	.globl SealedChamber_OuterRoom_MapScript_OnResume
SealedChamber_OuterRoom_MapScript_OnResume:
	@ setdivewarp: map_group=0x18 map_num=0x46 warp=0xFF x=0x000C y=0x002C
	.byte 0x40, 0x18, 0x46, 0xFF
	.2byte 0x000C, 0x002C
	@ setescapewarp: map_group=0x18 map_num=0x46 warp=0xFF x=0x000C y=0x002C
	.byte 0xC4, 0x18, 0x46, 0xFF
	.2byte 0x000C, 0x002C
	end
	.globl SealedChamber_OuterRoom_MapScript_OnTransition
SealedChamber_OuterRoom_MapScript_OnTransition:
	setflag 0x08BC
	end
	.globl SealedChamber_OuterRoom_MapScript_OnLoad
SealedChamber_OuterRoom_MapScript_OnLoad:
	checkflag 0x08AF
	call_if 0x00, SealedChamber_OuterRoom_MapScript_0821BA7A
	end
SealedChamber_OuterRoom_MapScript_0821BA7A:
	setmetatile 0x0009, 0x0001, 0x0229, 0x0001
	setmetatile 0x000A, 0x0001, 0x0229, 0x0001
	setmetatile 0x000B, 0x0001, 0x0229, 0x0001
	setmetatile 0x0009, 0x0002, 0x0235, 0x0001
	setmetatile 0x000A, 0x0002, 0x0235, 0x0001
	setmetatile 0x000B, 0x0002, 0x0235, 0x0001
	return
	lockall
	@ Recovered proven split event command at 0x0821BAB2
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BAB2 raw_tail=0x1 continuation=0x4; reachability not claimed
	braillemessage BrailleMessage_2635E2
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BAB7 size=0x4 source=v41_hidden_entry_bulk
	@ waitbuttonpress @ 0x0821BAB7
	waitbuttonpress
	@ hidebox2 @ 0x0821BAB8
	hidebox2
	@ releaseall @ 0x0821BAB9
	releaseall
	@ end @ 0x0821BABA
	end
	lockall
	braillemessage BrailleMessage_2635EE
	waitbuttonpress
	hidebox2
	releaseall
	end
	lockall
	@ Recovered proven split event command at 0x0821BAC6
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BAC6 raw_tail=0x1 continuation=0x4; reachability not claimed
	braillemessage BrailleMessage_2635FA
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BACB size=0x4 source=v41_hidden_entry_bulk
	@ waitbuttonpress @ 0x0821BACB
	waitbuttonpress
	@ hidebox2 @ 0x0821BACC
	hidebox2
	@ releaseall @ 0x0821BACD
	releaseall
	@ end @ 0x0821BACE
	end
	lockall
	braillemessage BrailleMessage_263606
	waitbuttonpress
	hidebox2
	releaseall
	end
	lockall
	@ Recovered proven split event command at 0x0821BADA
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BADA raw_tail=0x1 continuation=0x4; reachability not claimed
	braillemessage BrailleMessage_263612
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BADF size=0x4 source=v41_hidden_entry_bulk
	@ waitbuttonpress @ 0x0821BADF
	waitbuttonpress
	@ hidebox2 @ 0x0821BAE0
	hidebox2
	@ releaseall @ 0x0821BAE1
	releaseall
	@ end @ 0x0821BAE2
	end
	lockall
	braillemessage BrailleMessage_26361E
	waitbuttonpress
	hidebox2
	releaseall
	end
	lockall
	@ Recovered proven split event command at 0x0821BAEE
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BAEE raw_tail=0x1 continuation=0x4; reachability not claimed
	braillemessage BrailleMessage_26362A
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BAF3 size=0x4 source=v41_hidden_entry_bulk
	@ waitbuttonpress @ 0x0821BAF3
	waitbuttonpress
	@ hidebox2 @ 0x0821BAF4
	hidebox2
	@ releaseall @ 0x0821BAF5
	releaseall
	@ end @ 0x0821BAF6
	end
	lockall
	braillemessage BrailleMessage_263636
	waitbuttonpress
	hidebox2
	releaseall
	end
	lockall
	@ Recovered proven split event command at 0x0821BB02
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BB02 raw_tail=0x1 continuation=0x4; reachability not claimed
	braillemessage BrailleMessage_263640
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BB07 size=0x4 source=v41_hidden_entry_bulk
	@ waitbuttonpress @ 0x0821BB07
	waitbuttonpress
	@ hidebox2 @ 0x0821BB08
	hidebox2
	@ releaseall @ 0x0821BB09
	releaseall
	@ end @ 0x0821BB0A
	end
	lockall
	braillemessage BrailleMessage_26364C
	waitbuttonpress
	hidebox2
	releaseall
	end
	lockall
	checkflag 0x08AF
	goto_if 0x01, 0x0821BB28
	braillemessage BrailleMessage_263656
	waitbuttonpress
	hidebox2
	releaseall
	end
	loadword 0x00, FieldScriptText_243CDA
	callstd 0x04
	releaseall
	end
	lockall
	braillemessage BrailleMessage_263656
	waitbuttonpress
	hidebox2
	releaseall
	end
	@ ANALYSIS: PROVEN_EMPTY_MAPSCRIPTS_TABLE addr=0x0821BB3C map=SealedChamber_InnerRoom
	.globl SealedChamber_InnerRoom_MapScripts
SealedChamber_InnerRoom_MapScripts:
	.byte 0x00
	lockall
	@ Recovered proven split event command at 0x0821BB3E
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BB3E raw_tail=0x1 continuation=0x4; reachability not claimed
	braillemessage BrailleMessage_263668
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: PROVEN_UNREFERENCED_EVENT_CFG addr=0x0821BB43 size=0x57 commands=33 hard_stops=2
	@ Full bytecode/CFG identity proven; runtime reachability is not claimed.
.LClosedEvent_0821BB43:
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT_FRAGMENT
	@ Event-script bytecode fragment retained as numeric command/operand data.
	waitbuttonpress
	hidebox2
	checkflag 0x00E4
	goto_if 0x01, .LClosedEvent_0821BB98
	specialvar_ 0x800D, 0x0117
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, .LClosedEvent_0821BB98
	fadeoutbgm 0x00
	playse 0x0031
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x0130; no matching SPECIAL_* constant
	.2byte 0x0130
	waitstate
	delay 0x0028
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x013A; no matching SPECIAL_* constant
	.2byte 0x013A
	waitstate
	playse 0x0008
	delay 0x0028
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x013A; no matching SPECIAL_* constant
	.2byte 0x013A
	waitstate
	playse 0x0008
	delay 0x0028
	.byte 0x25 @ PROVEN_UNREFERENCED_EVENT_CMD special 0x013A; no matching SPECIAL_* constant
	.2byte 0x013A
	waitstate
	playse 0x0008
	delay 0x0028
	loadword 0x00, FieldScriptText_243CBE
	callstd 0x04
	closemessage
	fadeinbgm 0x00
	setflag 0x00E4
	releaseall
	end
.LClosedEvent_0821BB98:
	releaseall
	end
	lockall
	@ Recovered proven split event command at 0x0821BB9B
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BB9B raw_tail=0x1 continuation=0x4; reachability not claimed
	braillemessage BrailleMessage_263698
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BBA0 size=0x4 source=v41_hidden_entry_bulk
	@ waitbuttonpress @ 0x0821BBA0
	waitbuttonpress
	@ hidebox2 @ 0x0821BBA1
	hidebox2
	@ releaseall @ 0x0821BBA2
	releaseall
	@ end @ 0x0821BBA3
	end
	lockall
	braillemessage BrailleMessage_2636C3
	waitbuttonpress
	hidebox2
	releaseall
	end
	lockall
	@ Recovered proven split event command at 0x0821BBAF
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BBAF raw_tail=0x1 continuation=0x4; reachability not claimed
	braillemessage BrailleMessage_2636DD
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BBB4 size=0x4 source=v41_hidden_entry_bulk
	@ waitbuttonpress @ 0x0821BBB4
	waitbuttonpress
	@ hidebox2 @ 0x0821BBB5
	hidebox2
	@ releaseall @ 0x0821BBB6
	releaseall
	@ end @ 0x0821BBB7
	end
	lockall
	braillemessage BrailleMessage_263700
	waitbuttonpress
	hidebox2
	releaseall
	end
	lockall
	@ Recovered proven split event command at 0x0821BBC3
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BBC3 raw_tail=0x1 continuation=0x4; reachability not claimed
	braillemessage BrailleMessage_26370F
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BBC8 size=0x4 source=v41_hidden_entry_bulk
	@ waitbuttonpress @ 0x0821BBC8
	waitbuttonpress
	@ hidebox2 @ 0x0821BBC9
	hidebox2
	@ releaseall @ 0x0821BBCA
	releaseall
	@ end @ 0x0821BBCB
	end
	lockall
	braillemessage BrailleMessage_26372E
	waitbuttonpress
	hidebox2
	releaseall
	end
	@ ANALYSIS: PROVEN_MAP_SCRIPTS_TABLE addr=0x0821BBD6 size=0x6 header_referenced=YES
	.globl ScorchedSlab_MapScripts
ScorchedSlab_MapScripts:
	.byte 0x03 @ map script type; local named constant unavailable
	.4byte ScorchedSlab_MapScript_OnTransition
	.byte 0x00 @ map scripts terminator
	@ ANALYSIS: PROVEN_MAP_SCRIPT_BODY addr=0x0821BBDC size=0x4 source=MapScripts_CFG
	.globl ScorchedSlab_MapScript_OnTransition
ScorchedSlab_MapScript_OnTransition:
	setflag 0x08B8
	end
	@ ANALYSIS: PROVEN_MAP_SCRIPTS_TABLE addr=0x0821BBE0 size=0x1 header_referenced=YES
	.globl AquaHideout_UnusedRubyMap1_MapScripts
AquaHideout_UnusedRubyMap1_MapScripts:
	.byte 0x00 @ map scripts terminator
	@ ANALYSIS: PROVEN_MAP_SCRIPTS_TABLE addr=0x0821BBE1 size=0x1 header_referenced=YES
	.globl AquaHideout_UnusedRubyMap2_MapScripts
AquaHideout_UnusedRubyMap2_MapScripts:
	.byte 0x00 @ map scripts terminator
	@ ANALYSIS: PROVEN_MAP_SCRIPTS_TABLE addr=0x0821BBE2 size=0x1 header_referenced=YES
	.globl AquaHideout_UnusedRubyMap3_MapScripts
AquaHideout_UnusedRubyMap3_MapScripts:
	.byte 0x00 @ map scripts terminator
	@ ANALYSIS: PROVEN_MAP_SCRIPTS_TABLE addr=0x0821BBE3 size=0x6 header_referenced=YES
	.globl SkyPillar_Entrance_MapScripts
SkyPillar_Entrance_MapScripts:
	.byte 0x03 @ map script type; local named constant unavailable
	.4byte SkyPillar_Entrance_MapScript_OnTransition
	.byte 0x00 @ map scripts terminator
	@ ANALYSIS: PROVEN_MAP_SCRIPT_BODY addr=0x0821BBE9 size=0x4 source=MapScripts_CFG
	.globl SkyPillar_Entrance_MapScript_OnTransition
SkyPillar_Entrance_MapScript_OnTransition:
	setflag 0x08BE
	end
	@ ANALYSIS: PROVEN_MAP_SCRIPTS_TABLE addr=0x0821BBED size=0x10 header_referenced=YES
	.globl SkyPillar_Outside_MapScripts
SkyPillar_Outside_MapScripts:
	.byte 0x03 @ map script type; local named constant unavailable
	.4byte SkyPillar_Outside_MapScript_OnTransition
	.byte 0x01 @ map script type; local named constant unavailable
	.4byte SkyPillar_Outside_MapScript_OnLoad
	.byte 0x02 @ map script type; local named constant unavailable
	.4byte SkyPillar_Outside_MapScript_OnFrameTable
	.byte 0x00 @ map scripts terminator
	@ ANALYSIS: PROVEN_MAP_SCRIPT_BODY addr=0x0821BBFD size=0x42 source=MapScripts_CFG
	.globl SkyPillar_Outside_MapScript_OnTransition
SkyPillar_Outside_MapScript_OnTransition:
	compare_var_to_value 0x405E, 0x0003
	call_if 0x01, SkyPillar_Outside_MapScript_0821BC14
	compare_var_to_value 0x405E, 0x0004
	call_if 0x04, SkyPillar_Outside_MapScript_0821BC18
	end
SkyPillar_Outside_MapScript_0821BC14:
	setflag 0x4000
	return
SkyPillar_Outside_MapScript_0821BC18:
	checkflag 0x088A
	call_if 0x01, 0x08243106
	return
	.globl SkyPillar_Outside_MapScript_OnLoad
SkyPillar_Outside_MapScript_OnLoad:
	checkflag 0x0137
	call_if 0x01, SkyPillar_Outside_MapScript_0821BC2C
	end
SkyPillar_Outside_MapScript_0821BC2C:
	setmetatile 0x000E, 0x0004, 0x02AA, 0x0000
	setmetatile 0x000E, 0x0005, 0x02B2, 0x0000
	return
	@ ANALYSIS: PROVEN_MAP_SCRIPT_CONDITION_TABLE addr=0x0821BC3F size=0xA source=MapScripts_type_2
	.globl SkyPillar_Outside_MapScript_OnFrameTable
SkyPillar_Outside_MapScript_OnFrameTable:
	.2byte 0x405E, 0x0003
	.4byte SkyPillar_Outside_MapScript_0821BC49
	.2byte 0x0000 @ condition table terminator
	@ ANALYSIS: PROVEN_MAP_SCRIPT_BODY addr=0x0821BC49 size=0x15 source=MapScripts_CFG
SkyPillar_Outside_MapScript_0821BC49:
	lockall
	applymovement 0x0001, Movement_0821BD18
	waitmovement 0x0000
	applymovement 0x00FF, 0x08243627
	waitmovement 0x0000
	@ ANALYSIS: PROVEN_SPLIT_EVENT_COMMAND addr=0x0821BC5E size=0x6 source=v42_bulk
	loadword 0x00, SkyPillar_Outside_Text_OpenedDoorToSkyPillar
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BC64 size=0x21 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0821BC64
	callstd 0x04
	@ closemessage @ 0x0821BC66
	closemessage
	@ delay 0x001E @ 0x0821BC67
	delay 0x001E
	@ setvar 0x8004, 0x0001 @ 0x0821BC6A
	setvar 0x8004, 0x0001
	@ setvar 0x8005, 0x0001 @ 0x0821BC6F
	setvar 0x8005, 0x0001
	@ setvar 0x8006, 0x0008 @ 0x0821BC74
	setvar 0x8006, 0x0008
	@ setvar 0x8007, 0x0003 @ 0x0821BC79
	setvar 0x8007, 0x0003
	@ special 0x0135 @ 0x0821BC7E
	.byte 0x25
	.2byte 0x0135
	@ waitstate @ 0x0821BC81
	waitstate
	@ delay 0x0028 @ 0x0821BC82
	delay 0x0028
	@ Recovered proven split event command at 0x0821BC85
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BC85 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, SkyPillar_Outside_Text_EarthquakeNotMomentToWaste
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BC8B size=0x56 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0821BC8B
	callstd 0x04
	@ closemessage @ 0x0821BC8D
	closemessage
	@ applymovement 0x00FF, SkyPillar_Outside_Movement_0821BD30 @ 0x0821BC8E
	.byte 0x4F
	.2byte 0x00FF
	.4byte SkyPillar_Outside_Movement_0821BD30
	@ applymovement 0x0001, SkyPillar_Outside_Movement_0821BD23 @ 0x0821BC95
	.byte 0x4F
	.2byte 0x0001
	.4byte SkyPillar_Outside_Movement_0821BD23
	@ waitmovement 0x0000 @ 0x0821BC9C
	.byte 0x51
	.2byte 0x0000
	@ setvar 0x8004, 0x0001 @ 0x0821BC9F
	setvar 0x8004, 0x0001
	@ setvar 0x8005, 0x0003 @ 0x0821BCA4
	setvar 0x8005, 0x0003
	@ setvar 0x8006, 0x0014 @ 0x0821BCA9
	setvar 0x8006, 0x0014
	@ setvar 0x8007, 0x0005 @ 0x0821BCAE
	setvar 0x8007, 0x0005
	@ special 0x0135 @ 0x0821BCB3
	.byte 0x25
	.2byte 0x0135
	@ waitstate @ 0x0821BCB6
	waitstate
	@ delay 0x0014 @ 0x0821BCB7
	delay 0x0014
	@ applymovement 0x0001, PetalburgCity_Ext_WallyFaceLeft @ 0x0821BCBA
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_WallyFaceLeft
	@ waitmovement 0x0000 @ 0x0821BCC1
	.byte 0x51
	.2byte 0x0000
	@ delay 0x000A @ 0x0821BCC4
	delay 0x000A
	@ applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterRight @ 0x0821BCC7
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_WalkInPlaceFasterRight
	@ waitmovement 0x0000 @ 0x0821BCCE
	.byte 0x51
	.2byte 0x0000
	@ delay 0x0014 @ 0x0821BCD1
	delay 0x0014
	@ applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown @ 0x0821BCD4
	.byte 0x4F
	.2byte 0x0001
	.4byte PetalburgCity_Ext_WalkInPlaceFasterDown
	@ waitmovement 0x0000 @ 0x0821BCDB
	.byte 0x51
	.2byte 0x0000
	@ delay 0x001E @ 0x0821BCDE
	delay 0x001E
	@ Recovered proven split event command at 0x0821BCE1
	@ ANALYSIS: PROVEN_SPLIT_EVENT_CMD addr=0x0821BCE1 raw_tail=0x2 continuation=0x4; reachability not claimed
	loadword 0x00, SkyPillar_Outside_Text_SituationGettingWorse
	@ ANALYSIS: PROVEN_EVENT_COMMAND_RANGE addr=0x0821BCE7 size=0x31 source=v41_hidden_entry_bulk
	@ callstd 0x04 @ 0x0821BCE7
	callstd 0x04
	@ closemessage @ 0x0821BCE9
	closemessage
	@ setflag 0x088A @ 0x0821BCEA
	setflag 0x088A
	@ setweather 0x000F @ 0x0821BCED
	setweather 0x000F
	@ doweather @ 0x0821BCF0
	doweather
	@ special 0x011B @ 0x0821BCF1
	.byte 0x25
	.2byte 0x011B
	@ waitstate @ 0x0821BCF4
	waitstate
	@ delay 0x001E @ 0x0821BCF5
	delay 0x001E
	@ loadword 0x00, SkyPillar_Outside_Text_GotToGoBackForSootopolis @ 0x0821BCF8
	loadword 0x00, SkyPillar_Outside_Text_GotToGoBackForSootopolis
	@ callstd 0x04 @ 0x0821BCFE
	callstd 0x04
	@ closemessage @ 0x0821BD00
	closemessage
	@ playse 0x0009 @ 0x0821BD01
	playse 0x0009
	@ fadescreenswapbuffers 0x01 @ 0x0821BD04
	fadescreenswapbuffers 0x01
	@ clearflag 0x4000 @ 0x0821BD06
	clearflag 0x4000
	@ setvar 0x405E, 0x0004 @ 0x0821BD09
	setvar 0x405E, 0x0004
	@ removeobject 0x0001 @ 0x0821BD0E
	.byte 0x53
	.2byte 0x0001
	@ clearflag 0x0330 @ 0x0821BD11
	clearflag 0x0330
	@ fadescreenswapbuffers 0x00 @ 0x0821BD14
	fadescreenswapbuffers 0x00
	@ releaseall @ 0x0821BD16
	releaseall
	@ end @ 0x0821BD17
	end
	@ ANALYSIS: PROVEN_MOVEMENT_SEQUENCE addr=0x0821BD18 size=0xB source=SkyPillar_Outside_MapScript_0821BC49
	.globl Movement_0821BD18
Movement_0821BD18:
	.byte 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0B, 0x0B, 0x0B, 0xFE
	@ ANALYSIS: PROVEN_MOVEMENT addr=0x0821BD23 size=0xD source=reachable_applymovement_0x0821BC95
	.globl SkyPillar_Outside_Movement_0821BD23
SkyPillar_Outside_Movement_0821BD23:
	.byte 0x0A, 0x0A, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x0B, 0x09, 0x09, 0x09, 0x09, 0xFE
	@ ANALYSIS: PROVEN_MOVEMENT addr=0x0821BD30 size=0xD source=typed_applymovement_operand_0x0821BC91
	.globl SkyPillar_Outside_Movement_0821BD30
SkyPillar_Outside_Movement_0821BD30:
	.byte 0x0A, 0x0A, 0x0A, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x0B, 0x09, 0x09, 0x09, 0xFE
	end

	.globl EventScriptData_JP_0821BD3E
EventScriptData_JP_0821BD3E: @ 0x0821BD3E
	@ Decoded event bytecode: exact ROM size 0x9
	loadword 0x00, gText_Rom_21BD47
	callstd 0x03
	end
