	.globl EventScriptData_JP_0821D3AA
EventScriptData_JP_0821D3AA: @ 0x0821D3AA
	@ Decoded event bytecode: exact ROM size 0x2D
	lockall
	playse 0x0002
	message gText_Rom_246669
	dofieldeffect 0x003D
	waitstate
	waitmessage
	waitbuttonpress
	playse 0x0005
	goto EventScriptData_JP_0821D3C2
	end
	.globl EventScriptData_JP_0821D3C2
EventScriptData_JP_0821D3C2:
	message gText_Rom_24667E
	waitmessage
	checkflag 0x010C
	goto_if 0x01, EventScriptData_JP_0821D3DE
	goto EventScriptData_JP_0821D420
	end
	.globl EventScriptData_JP_0821D3D7
EventScriptData_JP_0821D3D7: @ 0x0821D3D7
	@ Decoded event bytecode: exact ROM size 0xA1
	lockall
	goto EventScriptData_JP_0821D3C2
	end
	.globl EventScriptData_JP_0821D3DE
EventScriptData_JP_0821D3DE:
	multichoice 0x00, 0x00, 0x06, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScriptData_JP_0821D470
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScriptData_JP_0821D457
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScriptData_JP_0821D474
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScriptData_JP_0821D55D
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScriptData_JP_0821D55D
	end
	.globl EventScriptData_JP_0821D420
EventScriptData_JP_0821D420:
	multichoice 0x00, 0x00, 0x05, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScriptData_JP_0821D470
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScriptData_JP_0821D457
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScriptData_JP_0821D55D
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScriptData_JP_0821D55D
	end
	.globl EventScriptData_JP_0821D457
EventScriptData_JP_0821D457:
	loadword 0x00, gText_Rom_2465BD
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_0821D3C2
	closemessage
	.byte 0x25 @ special 0x000A; no matching SPECIAL_* constant found
	.2byte 0x000A
	releaseall
	end
	.globl EventScriptData_JP_0821D470
EventScriptData_JP_0821D470:
	.byte 0x25 @ special 0x000E; no matching SPECIAL_* constant found
	.2byte 0x000E
	end
	.globl EventScriptData_JP_0821D474
EventScriptData_JP_0821D474:
	.byte 0x25 @ special 0x000F; no matching SPECIAL_* constant found
	.2byte 0x000F
	end
	.globl EventScriptData_JP_0821D478
EventScriptData_JP_0821D478: @ 0x0821D478
	@ Decoded event bytecode: exact ROM size 0x60
	lockall
	message gText_Rom_246669
	playse 0x0002
	dofieldeffect 0x003D
	waitstate
	waitmessage
	waitbuttonpress
	playse 0x0005
	goto EventScriptData_JP_0821D490
	end
	.globl EventScriptData_JP_0821D490
EventScriptData_JP_0821D490:
	message gText_Rom_24667E
	waitmessage
	multichoice 0x00, 0x00, 0x07, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScriptData_JP_0821D4DF
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScriptData_JP_0821D474
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScriptData_JP_0821D54F
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScriptData_JP_0821D55D
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScriptData_JP_0821D55D
	end
	.globl EventScriptData_JP_0821D4D8
EventScriptData_JP_0821D4D8: @ 0x0821D4D8
	@ Decoded event bytecode: exact ROM size 0x9B
	lockall
	goto EventScriptData_JP_0821D490
	end
	.globl EventScriptData_JP_0821D4DF
EventScriptData_JP_0821D4DF:
	.byte 0x25 @ special 0x000C; no matching SPECIAL_* constant found
	.2byte 0x000C
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScriptData_JP_0821D51E
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScriptData_JP_0821D541
	.byte 0x25 @ special 0x012E; no matching SPECIAL_* constant found
	.2byte 0x012E
	loadword 0x00, gText_Rom_2465E7
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_0821D490
	loadword 0x00, gText_Rom_24664D
	callstd 0x03
	.byte 0x25 @ special 0x000D; no matching SPECIAL_* constant found
	.2byte 0x000D
	.byte 0x25 @ special 0x001A; no matching SPECIAL_* constant found
	.2byte 0x001A
	releaseall
	end
	.globl EventScriptData_JP_0821D51E
EventScriptData_JP_0821D51E:
	loadword 0x00, gText_Rom_2465FD
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_0821D490
	loadword 0x00, gText_Rom_246658
	callstd 0x03
	.byte 0x25 @ special 0x000D; no matching SPECIAL_* constant found
	.2byte 0x000D
	.byte 0x25 @ special 0x001A; no matching SPECIAL_* constant found
	.2byte 0x001A
	releaseall
	end
	.globl EventScriptData_JP_0821D541
EventScriptData_JP_0821D541:
	loadword 0x00, gText_Rom_24661D
	callstd 0x03
	.byte 0x25 @ special 0x001A; no matching SPECIAL_* constant found
	.2byte 0x001A
	closemessage
	releaseall
	end
	.globl EventScriptData_JP_0821D54F
EventScriptData_JP_0821D54F:
	loadword 0x00, gText_Rom_246688
	callstd 0x04
	goto EventScriptData_JP_0821D490
	end
	.globl EventScriptData_JP_0821D55D
EventScriptData_JP_0821D55D:
	.byte 0x25 @ special 0x001A; no matching SPECIAL_* constant found
	.2byte 0x001A
	closemessage
	releaseall
	end
	.byte 0x25 @ special 0x0168; no matching SPECIAL_* constant found
	.2byte 0x0168
	end
	.byte 0x25 @ special 0x0165; no matching SPECIAL_* constant found
	.2byte 0x0165
	end
	.byte 0x25 @ special 0x0166; no matching SPECIAL_* constant found
	.2byte 0x0166
	end
	.byte 0x25 @ special 0x0167; no matching SPECIAL_* constant found
	.2byte 0x0167
	end
	.globl EventScriptData_JP_0821D573
EventScriptData_JP_0821D573: @ 0x0821D573
	@ Decoded event bytecode: exact ROM size 0x8
	.byte 0x25 @ special 0x015E; no matching SPECIAL_* constant found
	.2byte 0x015E
	dofieldeffect 0x0034
	waitstate
	end
	.globl EventScriptData_JP_0821D57B
EventScriptData_JP_0821D57B: @ 0x0821D57B
	@ Decoded event bytecode: exact ROM size 0x54
	.byte 0x25 @ special 0x0132; no matching SPECIAL_* constant found
	.2byte 0x0132
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScriptData_JP_0821D5AB
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScriptData_JP_0821D5B4
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScriptData_JP_0821D5BD
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScriptData_JP_0821D5C6
	end
	.globl EventScriptData_JP_0821D5AB
EventScriptData_JP_0821D5AB:
	loadword 0x00, gText_Rom_2466F5
	callstd 0x03
	end
	.globl EventScriptData_JP_0821D5B4
EventScriptData_JP_0821D5B4:
	loadword 0x00, gText_Rom_246714
	callstd 0x03
	end
	.globl EventScriptData_JP_0821D5BD
EventScriptData_JP_0821D5BD:
	loadword 0x00, gText_Rom_24673E
	callstd 0x03
	end
	.globl EventScriptData_JP_0821D5C6
EventScriptData_JP_0821D5C6:
	loadword 0x00, gText_Rom_246761
	callstd 0x03
	end
