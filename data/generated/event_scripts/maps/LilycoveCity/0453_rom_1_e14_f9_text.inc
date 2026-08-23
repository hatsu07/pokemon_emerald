	@ data/maps/LilycoveCity/scripts.inc:750 LilycoveCity_Text_HoneymoonVowToSeeRarePokemon
	.globl gText_Rom_1E14F9
gText_Rom_1E14F9: @ 0x081E14F9
	.string "わたしたちの しんこん りょこうは\nかくちの めずらしい ポケモンを\lできるだけ たくさん みること なんです\pこの まちに とうちゃく したら\nいきなり めずらしい ポケモンが みられて\lとても ハッピー だわ!{EOS}"
	.if (. - gText_Rom_1E14F9) > 0x6c
	.error "gText_Rom_1E14F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E14F9) < 0x6c
	.space 0x6c - (. - gText_Rom_1E14F9)
	.endif
	@ analyzed canonical ROM range 0x081E1565-0x081E17BB
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_MossdeepCity_OnTransition: @ 0x081E1565
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081E156B
	.byte 0
EventScript_JP_081E156B: @ 0x081E156B
	clearflag 0x0064
	clearflag 0x0065
	clearflag 0x0066
	clearflag 0x0067
	checkflag 0x088A
	call_if 0x01, 0x08243106
	end
.globl EventScript_JP_081E1581
EventScript_JP_081E1581: @ 0x081E1581
	lock
	faceplayer
	checkflag 0x007B
	goto_if 0x01, EventScript_JP_081E1596
	loadword 0x00, gText_Rom_1E18C3
	callstd 0x04
	release
	end
EventScript_JP_081E1596: @ 0x081E1596
	loadword 0x00, gText_Rom_1E1917
	callstd 0x04
	release
	end
.globl EventScript_JP_081E15A0
EventScript_JP_081E15A0: @ 0x081E15A0
	lock
	faceplayer
	checkflag 0x007B
	goto_if 0x01, EventScript_JP_081E15B5
	loadword 0x00, gText_Rom_1E193A
	callstd 0x04
	release
	end
EventScript_JP_081E15B5: @ 0x081E15B5
	loadword 0x00, gText_Rom_1E19B8
	callstd 0x04
	release
	end
.globl EventScript_JP_081E15BF
EventScript_JP_081E15BF: @ 0x081E15BF
	loadword 0x00, gText_Rom_1E1865
	callstd 0x02
	end
.globl EventScript_JP_081E15C8
EventScript_JP_081E15C8: @ 0x081E15C8
	loadword 0x00, gText_Rom_1E1A2A
	callstd 0x02
	end
.globl EventScript_JP_081E15D1
EventScript_JP_081E15D1: @ 0x081E15D1
	loadword 0x00, gText_Rom_1E19FB
	callstd 0x02
	end
.globl EventScript_JP_081E15DA
EventScript_JP_081E15DA: @ 0x081E15DA
	loadword 0x00, gText_Rom_1E1AEE
	callstd 0x02
	end
.globl EventScript_JP_081E15E3
EventScript_JP_081E15E3: @ 0x081E15E3
	loadword 0x00, gText_Rom_1E1B7D
	callstd 0x03
	end
.globl EventScript_JP_081E15EC
EventScript_JP_081E15EC: @ 0x081E15EC
	loadword 0x00, gText_Rom_1E1B87
	callstd 0x03
	end
.globl EventScript_JP_081E15F5
EventScript_JP_081E15F5: @ 0x081E15F5
	loadword 0x00, gText_Rom_1E1BB2
	callstd 0x03
	end
.globl EventScript_JP_081E15FE
EventScript_JP_081E15FE: @ 0x081E15FE
	loadword 0x00, gText_Rom_1E1BD5
	callstd 0x03
	end
.globl EventScript_JP_081E1607
EventScript_JP_081E1607: @ 0x081E1607
	setflag 0x087C
	setvar 0x4001, 0x0001
	end
.globl EventScript_JP_081E1610
EventScript_JP_081E1610: @ 0x081E1610
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x000E, LilycoveCity_Movement_Delay16_FaceRight_Delay16X4_FaceLeft_Delay16X2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000A, LilycoveCity_Movement_FaceRight_Delay16X3
	@ event command: applymovement
	applymovement 0x000B, LilycoveCity_Movement_FaceRight_Delay16X3
	@ event command: applymovement
	applymovement 0x000C, LilycoveCity_Movement_FaceRight_Delay16X3
	@ event command: applymovement
	applymovement 0x000D, LilycoveCity_Movement_FaceRight_Delay16X3
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000E, LilycoveCity_Movement_WalkDown_WalkRightX2_WalkDownX3_WalkRightX7
	@ event command: applymovement
	applymovement 0x000A, LilycoveCity_Movement_Delay16_Delay8_WalkDownX3_WalkRightX3_WalkDownX3_WalkRightX7
	@ event command: applymovement
	applymovement 0x000B, LilycoveCity_Movement_Delay16_Delay8_WalkDownX2_WalkRightX3_WalkDownX3_WalkRightX7
	@ event command: applymovement
	applymovement 0x000C, LilycoveCity_Movement_Delay16_Delay8_WalkDown_WalkRightX3_WalkDownX3_WalkRightX7
	@ event command: applymovement
	applymovement 0x000D, LilycoveCity_Movement_Delay16_Delay8_WalkRightX3_WalkDownX3_WalkRightX7
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x000E
	@ event command: removeobject
	removeobject 0x000A
	@ event command: removeobject
	removeobject 0x000B
	@ event command: removeobject
	removeobject 0x000C
	@ event command: removeobject
	removeobject 0x000D
	delay 0x001E
	setvar 0x405D, 0x0002
	setflag 0x0337
	releaseall
	end
LilycoveCity_Movement_Delay16_FaceRight_Delay16X4_FaceLeft_Delay16X2: @ 0x081E167C
	@ object movement sequence
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	step_end
LilycoveCity_Movement_FaceRight_Delay16X3: @ 0x081E1686
	@ object movement sequence
	face_right
	delay_16
	delay_16
	delay_16
	step_end
LilycoveCity_Movement_WalkDown_WalkRightX2_WalkDownX3_WalkRightX7: @ 0x081E168B
	@ object movement sequence
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LilycoveCity_Movement_Delay16_Delay8_WalkDownX3_WalkRightX3_WalkDownX3_WalkRightX7: @ 0x081E1699
	@ object movement sequence
	delay_16
	delay_8
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LilycoveCity_Movement_Delay16_Delay8_WalkDownX2_WalkRightX3_WalkDownX3_WalkRightX7: @ 0x081E16AC
	@ object movement sequence
	delay_16
	delay_8
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LilycoveCity_Movement_Delay16_Delay8_WalkDown_WalkRightX3_WalkDownX3_WalkRightX7: @ 0x081E16BE
	@ object movement sequence
	delay_16
	delay_8
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LilycoveCity_Movement_Delay16_Delay8_WalkRightX3_WalkDownX3_WalkRightX7: @ 0x081E16CF
	@ object movement sequence
	delay_16
	delay_8
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
.globl EventScript_JP_081E16DF
EventScript_JP_081E16DF: @ 0x081E16DF
	lock
	faceplayer
	loadword 0x00, gText_Rom_1E1A9E
	callstd 0x04
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081E16F5
EventScript_JP_081E16F5: @ 0x081E16F5
	lock
	faceplayer
	checkflag 0x0114
	goto_if 0x01, EventScript_JP_081E1737
	loadword 0x00, gText_Rom_1E17BC
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081E1741
	loadword 0x00, gText_Rom_1E17FC
	callstd 0x04
	setorcopyvar 0x8000, 0x00BB
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0114
	release
	end
EventScript_JP_081E1737: @ 0x081E1737
	loadword 0x00, gText_Rom_1E1831
	callstd 0x04
	release
	end
EventScript_JP_081E1741: @ 0x081E1741
	loadword 0x00, gText_Rom_1E1845
	callstd 0x04
	release
	end
.globl EventScript_JP_081E174B
EventScript_JP_081E174B: @ 0x081E174B
	loadword 0x00, gText_Rom_1E1C8D
	callstd 0x02
	end
.globl EventScript_JP_081E1754
EventScript_JP_081E1754: @ 0x081E1754
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, gText_Rom_1E1BF8
	callstd 0x04
	closemessage
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081E177F
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081E1791
	addvar 0x40D1, 0x0001
	@ event command: removeobject
	removeobject 0x0010
	release
	end
EventScript_JP_081E177F: @ 0x081E177F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_Movement_Delay16X2_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0010, LilycoveCity_Movement_WalkLeftX9
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081E1791: @ 0x081E1791
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_Movement_Delay16X2_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0010, LilycoveCity_Movement_WalkDown_WalkLeftX9
	@ event command: waitmovement
	waitmovement 0x0000
	return
LilycoveCity_Movement_Delay16X2_WalkInPlaceFastestLeft: @ 0x081E17A3
	@ object movement sequence
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
LilycoveCity_Movement_WalkLeftX9: @ 0x081E17A7
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
LilycoveCity_Movement_WalkDown_WalkLeftX9: @ 0x081E17B1
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
