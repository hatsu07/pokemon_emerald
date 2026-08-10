	@ data/maps/RustboroCity_Gym/scripts.inc:277 RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_202B8B
gText_Rom_202B8B: @ 0x08202B8B
	.string "ツツジ『また おめにかかれましたね\nジムリーダーの ツツジ です\pあれから おたがいに\nいくつもの しょうぶを けいけんし\lどれほど つよく なれたのか……\p……あら? たたかえる ポケモンを\n1ひきしか もっていませんね\pどうぞ 2ひき いじょうの\nポケモンを もって きてください$"
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
EventScript_JP_08202C1B: @ 0x08202C1B
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202E24 @ gText_Rom_202E24
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08202C2A @ EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202C2A: @ 0x08202C2A
EventScript_JP_08202C2A: @ 0x08202C2A
	@ event command: message
	.byte 0x67
	.4byte 0x08202E54 @ gText_Rom_202E54
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicegrid
	.byte 0x71
	.byte 0x08
	.byte 0x01
	.byte 0x0D
	.byte 0x03
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202C89 @ EventScript_JP_08202C89
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202C97 @ EventScript_JP_08202C97
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202CA5 @ EventScript_JP_08202CA5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202CB3 @ EventScript_JP_08202CB3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202CC1 @ EventScript_JP_08202CC1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202CCF @ EventScript_JP_08202CCF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202CCF @ EventScript_JP_08202CCF
	@ event command: end
	.byte 0x02
EventScript_08202C89: @ 0x08202C89
EventScript_JP_08202C89: @ 0x08202C89
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202E63 @ gText_Rom_202E63
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08202C2A @ EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202C97: @ 0x08202C97
EventScript_JP_08202C97: @ 0x08202C97
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202EAF @ gText_Rom_202EAF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08202C2A @ EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CA5: @ 0x08202CA5
EventScript_JP_08202CA5: @ 0x08202CA5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202EF5 @ gText_Rom_202EF5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08202C2A @ EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CB3: @ 0x08202CB3
EventScript_JP_08202CB3: @ 0x08202CB3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202F56 @ gText_Rom_202F56
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08202C2A @ EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CC1: @ 0x08202CC1
EventScript_JP_08202CC1: @ 0x08202CC1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202FA7 @ gText_Rom_202FA7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08202C2A @ EventScript_JP_08202C2A
	.byte 0x02
EventScript_08202CCF: @ 0x08202CCF
EventScript_JP_08202CCF: @ 0x08202CCF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08202CD1: @ 0x08202CD1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082030B2 @ gText_Rom_2030B2
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08202CDA: @ 0x08202CDA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082030CD @ gText_Rom_2030CD
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08202CE3: @ 0x08202CE3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082030EA @ gText_Rom_2030EA
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08202CEC: @ 0x08202CEC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203128 @ gText_Rom_203128
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08202CF5: @ 0x08202CF5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820318A @ gText_Rom_20318A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08202CFE: @ 0x08202CFE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082031E4 @ gText_Rom_2031E4
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08202D07: @ 0x08202D07
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0113
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202D6D @ EventScript_JP_08202D6D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08202D57 @ EventScript_JP_08202D57
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08202D62 @ EventScript_JP_08202D62
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202FE5 @ gText_Rom_202FE5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00B7
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082430E0
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x0113
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08202D57: @ 0x08202D57
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08202D99 @ Movement_JP_08202D99
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08202D62: @ 0x08202D62
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08202D82 @ Movement_JP_08202D82
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08202D6D: @ 0x08202D6D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203045 @ gText_Rom_203045
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
Movement_JP_08202D82: @ 0x08202D82
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_08202D99: @ 0x08202D99
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
EventScript_JP_08202DB2: @ 0x08202DB2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01CB
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202E1A @ EventScript_JP_08202E1A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0136
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202DE1 @ EventScript_JP_08202DE1
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0867
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202DF4 @ EventScript_JP_08202DF4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203274 @ gText_Rom_203274
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: addvar
	.byte 0x17
	.2byte 0x40D1
	.2byte 0x0001
	@ event command: setflag
	.byte 0x29
	.2byte 0x0136
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08202DE1: @ 0x08202DE1
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0867
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08202E02 @ EventScript_JP_08202E02
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203339 @ gText_Rom_203339
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08202DF4: @ 0x08202DF4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082033DD @ gText_Rom_2033DD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08202E10 @ EventScript_JP_08202E10
	.byte 0x02
EventScript_JP_08202E02: @ 0x08202E02
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820336D @ gText_Rom_20336D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08202E10 @ EventScript_JP_08202E10
	.byte 0x02
EventScript_JP_08202E10: @ 0x08202E10
	@ event command: addvar
	.byte 0x17
	.2byte 0x40D1
	.2byte 0x0001
	@ event command: setflag
	.byte 0x29
	.2byte 0x01CB
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08202E1A: @ 0x08202E1A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203339 @ gText_Rom_203339
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
