	.globl EventScriptData_JP_0824C47B
EventScriptData_JP_0824C47B: @ 0x0824C47B
	@ Decoded event bytecode: exact ROM size 0x10A
	lockall
	incrementgamestat 0x2C
	.byte 0x25 @ special 0x004B; no matching SPECIAL_* constant found
	.2byte 0x004B
	specialvar_ 0x800D, 0x0049
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScriptData_JP_0824C50A
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScriptData_JP_0824C514
	checkflag 0x0892
	goto_if 0x00, EventScriptData_JP_0824C4FA
	checkflag 0x0891
	goto_if 0x01, EventScriptData_JP_0824C4FA
	specialvar_ 0x800D, 0x00B0
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScriptData_JP_0824C56F
	goto EventScriptData_JP_0824C559
	end
	.globl EventScriptData_JP_0824C4C4
EventScriptData_JP_0824C4C4:
	specialvar_ 0x8004, 0x0041
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScriptData_JP_0824C548
	specialvar_ 0x800D, 0x0047
	compare_var_to_value 0x800D, 0x00FF
	goto_if 0x01, EventScriptData_JP_0824C548
	copyvar 0x8004, 0x800D
	specialvar_ 0x800D, 0x0042
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScriptData_JP_0824C52A
	end
	.globl EventScriptData_JP_0824C4FA
EventScriptData_JP_0824C4FA:
	.byte 0x25 @ special 0x004A; no matching SPECIAL_* constant found
	.2byte 0x004A
	loadword 0x00, FieldScriptText_243A12
	callstd 0x04
	.byte 0x25 @ special 0x003E; no matching SPECIAL_* constant found
	.2byte 0x003E
	releaseall
	end
	.globl EventScriptData_JP_0824C50A
EventScriptData_JP_0824C50A:
	loadword 0x00, PlayersHouse_1F_Text_TheresAMovieOnTV
	callstd 0x04
	releaseall
	end
	.globl EventScriptData_JP_0824C514
EventScriptData_JP_0824C514:
	loadword 0x00, PlayersHouse_1F_Text_LatiEmergencyNewsFlash
	callstd 0x04
	.byte 0x25 @ special 0x0128; no matching SPECIAL_* constant found
	.2byte 0x0128
	clearflag 0x08BD
	setflag 0x00FF
	.byte 0x25 @ special 0x003E; no matching SPECIAL_* constant found
	.2byte 0x003E
	releaseall
	end
	.globl EventScriptData_JP_0824C52A
EventScriptData_JP_0824C52A:
	.byte 0x25 @ special 0x003F; no matching SPECIAL_* constant found
	.2byte 0x003F
	waitmessage
	waitbuttonpress
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x05, EventScriptData_JP_0824C52A
	goto EventScriptData_JP_0824C540
	end
	.globl EventScriptData_JP_0824C540
EventScriptData_JP_0824C540:
	.byte 0x25 @ special 0x003E; no matching SPECIAL_* constant found
	.2byte 0x003E
	setflag 0x0891
	releaseall
	end
	.globl EventScriptData_JP_0824C548
EventScriptData_JP_0824C548:
	.byte 0x25 @ special 0x004A; no matching SPECIAL_* constant found
	.2byte 0x004A
	loadword 0x00, FieldScriptText_243A12
	callstd 0x04
	goto EventScriptData_JP_0824C540
	end
	.globl EventScriptData_JP_0824C559
EventScriptData_JP_0824C559:
	.byte 0x25 @ special 0x0040; no matching SPECIAL_* constant found
	.2byte 0x0040
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_0824C4C4
	waitmessage
	waitbuttonpress
	goto EventScriptData_JP_0824C540
	end
	.globl EventScriptData_JP_0824C56F
EventScriptData_JP_0824C56F:
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	.byte 0x25 @ special 0x00AF; no matching SPECIAL_* constant found
	.2byte 0x00AF
	waitmessage
	waitbuttonpress
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_0824C56F
	goto EventScriptData_JP_0824C540
	end
