	@ field-script:0x25915A FieldScriptText_258D2D
	.globl gText_Rom_258D2D
gText_Rom_258D2D: @ 0x08258D2D
	.string "あれ？\nきのみを　もってないの？\pおじさんの　あまりが　あれば\nあげるん　だけど…\pきょうは　もう　あまって\nないんだ　すまんな"
	.byte EOS
	.if (. - gText_Rom_258D2D) > 0x41
	.error "gText_Rom_258D2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258D2D) < 0x41
	.space 0x41 - (. - gText_Rom_258D2D)
	.endif
	@ analyzed canonical ROM range 0x08258D6E-0x082593C4
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08258D6E: @ 0x08258D6E
EventScript_JP_08258D6E: @ 0x08258D6E
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0340
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0825902B @ EventScript_JP_0825902B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0010
	.4byte 0x08259183 @ Movement_JP_08259183
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082585D8 @ gText_Rom_2585D8
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258E1E @ EventScript_JP_08258E1E
	@ event command: goto
	.byte 0x05
	.4byte 0x08258DA0 @ EventScript_JP_08258DA0
	.byte 0x02
EventScript_JP_08258DA0: @ 0x08258DA0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082585FC @ gText_Rom_2585FC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08258DAA: @ 0x08258DAA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082586A2 @ gText_Rom_2586A2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: dotimebasedevents
	.byte 0x2D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0921
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258DC2 @ EventScript_JP_08258DC2
	@ event command: goto
	.byte 0x05
	.4byte 0x08258DCC @ EventScript_JP_08258DCC
	.byte 0x02
EventScript_JP_08258DC2: @ 0x08258DC2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258718 @ gText_Rom_258718
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08258DCC: @ 0x08258DCC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082586D2 @ gText_Rom_2586D2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0087
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: setflag
	.byte 0x29
	.2byte 0x0921
	@ event command: goto
	.byte 0x05
	.4byte 0x08258DE9 @ EventScript_JP_08258DE9
	.byte 0x02
EventScript_JP_08258DE9: @ 0x08258DE9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825860C @ gText_Rom_25860C
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258E02 @ EventScript_JP_08258E02
	@ event command: goto
	.byte 0x05
	.4byte 0x08258E10 @ EventScript_JP_08258E10
	.byte 0x02
EventScript_JP_08258E02: @ 0x08258E02
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258628 @ gText_Rom_258628
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08258E5C @ EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_08258E10: @ 0x08258E10
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258642 @ gText_Rom_258642
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08258E02 @ EventScript_JP_08258E02
	.byte 0x02
EventScript_JP_08258E1E: @ 0x08258E1E
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0111
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258E73 @ EventScript_JP_08258E73
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258E69 @ EventScript_JP_08258E69
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0031
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258DAA @ EventScript_JP_08258DAA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082585F7 @ gText_Rom_2585F7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08258DE9 @ EventScript_JP_08258DE9
	.byte 0x02
EventScript_JP_08258E5C: @ 0x08258E5C
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x8009
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x00A1
	@ event command: waitstate
	.byte 0x27
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08258E69: @ 0x08258E69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258754 @ gText_Rom_258754
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08258E73: @ 0x08258E73
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825877F @ gText_Rom_25877F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08258E7D: @ 0x08258E7D
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08259183 @ Movement_JP_08259183
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082587D8 @ gText_Rom_2587D8
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258EF6 @ EventScript_JP_08258EF6
	@ event command: goto
	.byte 0x05
	.4byte 0x08258EAD @ EventScript_JP_08258EAD
	.byte 0x02
EventScript_JP_08258EAD: @ 0x08258EAD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258804 @ gText_Rom_258804
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08258EB7: @ 0x08258EB7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082588BD @ gText_Rom_2588BD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08258EC1: @ 0x08258EC1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825882D @ gText_Rom_25882D
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258EDA @ EventScript_JP_08258EDA
	@ event command: goto
	.byte 0x05
	.4byte 0x08258EE8 @ EventScript_JP_08258EE8
	.byte 0x02
EventScript_JP_08258EDA: @ 0x08258EDA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258848 @ gText_Rom_258848
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08258E5C @ EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_08258EE8: @ 0x08258EE8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258868 @ gText_Rom_258868
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08258EDA @ EventScript_JP_08258EDA
	.byte 0x02
EventScript_JP_08258EF6: @ 0x08258EF6
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0031
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258EB7 @ EventScript_JP_08258EB7
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0111
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258F44 @ EventScript_JP_08258F44
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082587FE @ gText_Rom_2587FE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08258EC1 @ EventScript_JP_08258EC1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258F3A @ EventScript_JP_08258F3A
	@ event command: end
	.byte 0x02
EventScript_JP_08258F3A: @ 0x08258F3A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258921 @ gText_Rom_258921
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08258F44: @ 0x08258F44
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258953 @ gText_Rom_258953
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08258F4E: @ 0x08258F4E
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x000F
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0003
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0011
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8008
	.4byte 0x08259183 @ Movement_JP_08259183
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258B45 @ gText_Rom_258B45
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258FD3 @ EventScript_JP_08258FD3
	@ event command: goto
	.byte 0x05
	.4byte 0x08258F8A @ EventScript_JP_08258F8A
	.byte 0x02
EventScript_JP_08258F8A: @ 0x08258F8A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082589BA @ gText_Rom_2589BA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08258F94: @ 0x08258F94
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258A72 @ gText_Rom_258A72
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08258F9E: @ 0x08258F9E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082589D4 @ gText_Rom_2589D4
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258FB7 @ EventScript_JP_08258FB7
	@ event command: goto
	.byte 0x05
	.4byte 0x08258FC5 @ EventScript_JP_08258FC5
	.byte 0x02
EventScript_JP_08258FB7: @ 0x08258FB7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082589F3 @ gText_Rom_2589F3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08258E5C @ EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_08258FC5: @ 0x08258FC5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258A13 @ gText_Rom_258A13
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08258FB7 @ EventScript_JP_08258FB7
	.byte 0x02
EventScript_JP_08258FD3: @ 0x08258FD3
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0031
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258F94 @ EventScript_JP_08258F94
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0111
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259021 @ EventScript_JP_08259021
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082589B4 @ gText_Rom_2589B4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08258F9E @ EventScript_JP_08258F9E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259017 @ EventScript_JP_08259017
	@ event command: end
	.byte 0x02
EventScript_JP_08259017: @ 0x08259017
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258AD0 @ gText_Rom_258AD0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08259021: @ 0x08259021
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258AF7 @ gText_Rom_258AF7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0825902B: @ 0x0825902B
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0001
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827473E @ gText_Rom_27473E
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259058 @ EventScript_JP_08259058
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274763 @ gText_Rom_274763
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0825904E: @ 0x0825904E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082747AD @ gText_Rom_2747AD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08259058: @ 0x08259058
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0111
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082590BE @ EventScript_JP_082590BE
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0031
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825904E @ EventScript_JP_0825904E
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08259094 @ EventScript_JP_08259094
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082590C8 @ EventScript_JP_082590C8
	@ event command: end
	.byte 0x02
EventScript_JP_08259094: @ 0x08259094
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082747F1 @ gText_Rom_2747F1
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082590B5 @ EventScript_JP_082590B5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274891 @ gText_Rom_274891
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08258E5C @ EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_082590B5: @ 0x082590B5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827482B @ gText_Rom_27482B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_082590BE: @ 0x082590BE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082748BA @ gText_Rom_2748BA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082590C8: @ 0x082590C8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827490E @ gText_Rom_27490E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082590D2: @ 0x082590D2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258B24 @ gText_Rom_258B24
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082590DB: @ 0x082590DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258B45 @ gText_Rom_258B45
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082590E4: @ 0x082590E4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258B67 @ gText_Rom_258B67
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082590ED: @ 0x082590ED
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x000F
	@ event command: goto
	.byte 0x05
	.4byte 0x082590F8 @ EventScript_JP_082590F8
	.byte 0x02
EventScript_JP_082590F8: @ 0x082590F8
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258C88 @ gText_Rom_258C88
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0031
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825911E @ EventScript_JP_0825911E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259128 @ EventScript_JP_08259128
	@ event command: end
	.byte 0x02
EventScript_JP_0825911E: @ 0x0825911E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258CB1 @ gText_Rom_258CB1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08259128: @ 0x08259128
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0111
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259158 @ EventScript_JP_08259158
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259158 @ EventScript_JP_08259158
	@ event command: dotimebasedevents
	.byte 0x2D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0921
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259158 @ EventScript_JP_08259158
	@ event command: goto
	.byte 0x05
	.4byte 0x08259162 @ EventScript_JP_08259162
	.byte 0x02
EventScript_JP_08259158: @ 0x08259158
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258D2D @ gText_Rom_258D2D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08259162: @ 0x08259162
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258CD6 @ gText_Rom_258CD6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0087
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: setflag
	.byte 0x29
	.2byte 0x0921
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258D0D @ gText_Rom_258D0D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
Movement_JP_08259183: @ 0x08259183
	@ object movement sequence
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
EventScript_JP_08259185: @ 0x08259185
	@ event command: lockall
	.byte 0x69
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0031
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082591E1 @ EventScript_JP_082591E1
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0111
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825929C @ EventScript_JP_0825929C
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x082591C2 @ EventScript_JP_082591C2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259292 @ EventScript_JP_08259292
	@ event command: end
	.byte 0x02
EventScript_JP_082591C2: @ 0x082591C2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258B94 @ gText_Rom_258B94
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082591EB @ EventScript_JP_082591EB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259290 @ EventScript_JP_08259290
	@ event command: end
	.byte 0x02
EventScript_JP_082591E1: @ 0x082591E1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258C2B @ gText_Rom_258C2B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082591EB: @ 0x082591EB
	@ event command: call
	.byte 0x04
	.4byte 0x082423E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259290 @ EventScript_JP_08259290
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x019C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825931D @ EventScript_JP_0825931D
	@ event command: message
	.byte 0x67
	.4byte 0x08258BDE @ gText_Rom_258BDE
	@ event command: waitmessage
	.byte 0x66
	@ event command: special
	.byte 0x25
	.2byte 0x0024
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082592DA @ EventScript_JP_082592DA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082592A6 @ EventScript_JP_082592A6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082592B3 @ EventScript_JP_082592B3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082592C0 @ EventScript_JP_082592C0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082592CD @ EventScript_JP_082592CD
	@ event command: end
	.byte 0x02
EventScript_JP_0825924D: @ 0x0825924D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258BFA @ gText_Rom_258BFA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08259277 @ EventScript_JP_08259277
	.byte 0x02
EventScript_JP_0825925B: @ 0x0825925B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258C05 @ gText_Rom_258C05
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08259277 @ EventScript_JP_08259277
	.byte 0x02
EventScript_JP_08259269: @ 0x08259269
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258C16 @ gText_Rom_258C16
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08259277 @ EventScript_JP_08259277
	.byte 0x02
EventScript_JP_08259277: @ 0x08259277
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: removeobject
	.byte 0x53
	.2byte 0x00F0
	@ event command: removeobject
	.byte 0x53
	.2byte 0x00EF
	@ event command: removeobject
	.byte 0x53
	.2byte 0x00EE
	@ event command: removeobject
	.byte 0x53
	.2byte 0x00ED
	@ event command: special
	.byte 0x25
	.2byte 0x00A1
	@ event command: waitstate
	.byte 0x27
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08259290: @ 0x08259290
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08259292: @ 0x08259292
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258C46 @ gText_Rom_258C46
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0825929C: @ 0x0825929C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08258C69 @ gText_Rom_258C69
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082592A6: @ 0x082592A6
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08247D35 @ gText_Rom_247D35
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082592B3: @ 0x082592B3
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08247D84 @ gText_Rom_247D84
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082592C0: @ 0x082592C0
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243B25 @ gText_Rom_243B25
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082592CD: @ 0x082592CD
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08247D67 @ gText_Rom_247D67
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082592DA: @ 0x082592DA
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0025
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8008
	.2byte 0x800D
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x8008
	@ event command: special
	.byte 0x25
	.2byte 0x0026
	@ event command: goto
	.byte 0x05
	.4byte 0x082592F4 @ EventScript_JP_082592F4
	.byte 0x02
EventScript_JP_082592F4: @ 0x082592F4
	@ event command: fadescreen
	.byte 0x97
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x8008
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825924D @ EventScript_JP_0825924D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825925B @ EventScript_JP_0825925B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259269 @ EventScript_JP_08259269
	@ event command: end
	.byte 0x02
EventScript_JP_0825931D: @ 0x0825931D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: goto
	.byte 0x05
	.4byte 0x08259328 @ EventScript_JP_08259328
	.byte 0x02
EventScript_JP_08259328: @ 0x08259328
	@ event command: message
	.byte 0x67
	.4byte 0x0824A7C2 @ gText_Rom_24A7C2
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x10
	.byte 0x06
	.byte 0x51
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
	.4byte 0x0825938D @ EventScript_JP_0825938D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259365 @ EventScript_JP_08259365
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082592C0 @ EventScript_JP_082592C0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082592C0 @ EventScript_JP_082592C0
	@ event command: end
	.byte 0x02
EventScript_JP_08259365: @ 0x08259365
	@ event command: call
	.byte 0x04
	.4byte 0x082593B5 @ EventScript_JP_082593B5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082593BF @ EventScript_JP_082593BF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259328 @ EventScript_JP_08259328
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0008
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259365 @ EventScript_JP_08259365
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825938D: @ 0x0825938D
	@ event command: call
	.byte 0x04
	.4byte 0x082593BA @ EventScript_JP_082593BA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082593BF @ EventScript_JP_082593BF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08259328 @ EventScript_JP_08259328
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0008
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825938D @ EventScript_JP_0825938D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082593B5: @ 0x082593B5
	@ event command: special
	.byte 0x25
	.2byte 0x019D
	@ event command: waitstate
	.byte 0x27
	@ event command: return
	.byte 0x03
EventScript_JP_082593BA: @ 0x082593BA
	@ event command: special
	.byte 0x25
	.2byte 0x019E
	@ event command: waitstate
	.byte 0x27
	@ event command: return
	.byte 0x03
EventScript_JP_082593BF: @ 0x082593BF
	@ event command: goto
	.byte 0x05
	.4byte 0x082592DA @ EventScript_JP_082592DA
	.byte 0x02
