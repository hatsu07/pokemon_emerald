	@ data/maps/RustboroCity_Gym/scripts.inc:277 RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_202B8B
gText_Rom_202B8B: @ 0x08202B8B
	.string "ツツジ『また おめにかかれましたね\nジムリーダーの ツツジ です\pあれから おたがいに\nいくつもの しょうぶを けいけんし\lどれほど つよく なれたのか……\p……あら? たたかえる ポケモンを\n1ひきしか もっていませんね\pどうぞ 2ひき いじょうの\nポケモンを もって きてください{EOS}"
	.if (. - gText_Rom_202B8B) > 0x8f
	.error "gText_Rom_202B8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202B8B) < 0x8f
	.space 0x8f - (. - gText_Rom_202B8B)
	.endif
	@ analyzed canonical ROM range 0x08202C1A-0x08202E23
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08202C1A: @ 0x08202C1A
	.byte 0x00
.globl EventScript_JP_08202C1B
EventScript_JP_08202C1B: @ 0x08202C1B
	lockall
	loadword 0x00, gText_Rom_202E24
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202C2A: @ 0x08202C2A
EventScript_JP_08202C2A: @ 0x08202C2A
	message gText_Rom_202E54
	waitmessage
	multichoicegrid 0x08, 0x01, 0x0D, 0x03, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08202C89
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08202C97
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08202CA5
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08202CB3
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08202CC1
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_08202CCF
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08202CCF
	end
EventScript_08202C89: @ 0x08202C89
EventScript_JP_08202C89: @ 0x08202C89
	loadword 0x00, gText_Rom_202E63
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202C97: @ 0x08202C97
EventScript_JP_08202C97: @ 0x08202C97
	loadword 0x00, gText_Rom_202EAF
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CA5: @ 0x08202CA5
EventScript_JP_08202CA5: @ 0x08202CA5
	loadword 0x00, gText_Rom_202EF5
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CB3: @ 0x08202CB3
EventScript_JP_08202CB3: @ 0x08202CB3
	loadword 0x00, gText_Rom_202F56
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CC1: @ 0x08202CC1
EventScript_JP_08202CC1: @ 0x08202CC1
	loadword 0x00, gText_Rom_202FA7
	callstd 0x04
	goto EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CCF: @ 0x08202CCF
EventScript_JP_08202CCF: @ 0x08202CCF
	releaseall
	end
.globl EventScript_JP_08202CD1
EventScript_JP_08202CD1: @ 0x08202CD1
	loadword 0x00, gText_Rom_2030B2
	callstd 0x02
	end
.globl EventScript_JP_08202CDA
EventScript_JP_08202CDA: @ 0x08202CDA
	loadword 0x00, gText_Rom_2030CD
	callstd 0x02
	end
.globl EventScript_JP_08202CE3
EventScript_JP_08202CE3: @ 0x08202CE3
	loadword 0x00, gText_Rom_2030EA
	callstd 0x02
	end
.globl EventScript_JP_08202CEC
EventScript_JP_08202CEC: @ 0x08202CEC
	loadword 0x00, gText_Rom_203128
	callstd 0x02
	end
.globl EventScript_JP_08202CF5
EventScript_JP_08202CF5: @ 0x08202CF5
	loadword 0x00, gText_Rom_20318A
	callstd 0x02
	end
.globl EventScript_JP_08202CFE
EventScript_JP_08202CFE: @ 0x08202CFE
	loadword 0x00, gText_Rom_2031E4
	callstd 0x03
	end
.globl EventScript_JP_08202D07
EventScript_JP_08202D07: @ 0x08202D07
	lock
	faceplayer
	checkflag 0x0113
	goto_if 0x01, EventScript_JP_08202D6D
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08202D57
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_08202D62
	loadword 0x00, gText_Rom_202FE5
	callstd 0x04
	setorcopyvar 0x8000, 0x00B7
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setflag 0x0113
	release
	end
EventScript_JP_08202D57: @ 0x08202D57
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08202D99 @ Movement_JP_08202D99
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08202D62: @ 0x08202D62
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08202D82 @ Movement_JP_08202D82
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08202D6D: @ 0x08202D6D
	loadword 0x00, gText_Rom_203045
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
Movement_JP_08202D82: @ 0x08202D82
	@ object movement sequence
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end
Movement_JP_08202D99: @ 0x08202D99
	@ object movement sequence
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end
.globl EventScript_JP_08202DB2
EventScript_JP_08202DB2: @ 0x08202DB2
	lock
	faceplayer
	checkflag 0x01CB
	goto_if 0x01, EventScript_JP_08202E1A
	checkflag 0x0136
	goto_if 0x01, EventScript_JP_08202DE1
	checkflag 0x0867
	goto_if 0x01, EventScript_JP_08202DF4
	loadword 0x00, gText_Rom_203274
	callstd 0x04
	addvar 0x40D1, 0x0001
	setflag 0x0136
	release
	end
EventScript_JP_08202DE1: @ 0x08202DE1
	checkflag 0x0867
	goto_if 0x01, EventScript_JP_08202E02
	loadword 0x00, gText_Rom_203339
	callstd 0x04
	release
	end
EventScript_JP_08202DF4: @ 0x08202DF4
	loadword 0x00, gText_Rom_2033DD
	callstd 0x04
	goto EventScript_JP_08202E10
	.byte 0x02
EventScript_JP_08202E02: @ 0x08202E02
	loadword 0x00, gText_Rom_20336D
	callstd 0x04
	goto EventScript_JP_08202E10
	.byte 0x02
EventScript_JP_08202E10: @ 0x08202E10
	addvar 0x40D1, 0x0001
	setflag 0x01CB
	release
	end
EventScript_JP_08202E1A: @ 0x08202E1A
	loadword 0x00, gText_Rom_203339
	callstd 0x04
	release
	end
