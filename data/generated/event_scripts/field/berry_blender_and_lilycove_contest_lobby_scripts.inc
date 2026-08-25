	@ field-script:0x259120 FieldScriptText_258CB1
	.globl FieldScriptText_258CB1
FieldScriptText_258CB1: @ 0x08258CB1
	.string "もし　よかったら\nいっしょに　きのみブレンダーで\lポロックを　つくろうや"
	.byte EOS
	.if (. - FieldScriptText_258CB1) > 0x25
	.error "FieldScriptText_258CB1 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258CB1) < 0x25
	.space 0x25 - (. - FieldScriptText_258CB1)
	.endif
	@ field-script:0x259164 FieldScriptText_258CD6
	.globl FieldScriptText_258CD6
FieldScriptText_258CD6: @ 0x08258CD6
	.string "あれ？\nきのみを　もってないの？\pしかたないなぁ　もう\pおじさんの　あまった　きのみで\nよければ　あげるよ！"
	.byte EOS
	.if (. - FieldScriptText_258CD6) > 0x37
	.error "FieldScriptText_258CD6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258CD6) < 0x37
	.space 0x37 - (. - FieldScriptText_258CD6)
	.endif
	@ field-script:0x25917B FieldScriptText_258D0D
	.globl FieldScriptText_258D0D
FieldScriptText_258D0D: @ 0x08258D0D
	.string "これで　いっしょに　きのみブレンダーで\nポロックを　つくろうや"
	.byte EOS
	.if (. - FieldScriptText_258D0D) > 0x20
	.error "FieldScriptText_258D0D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258D0D) < 0x20
	.space 0x20 - (. - FieldScriptText_258D0D)
	.endif
	@ field-script:0x25915A FieldScriptText_258D2D
	.globl FieldScriptText_258D2D
FieldScriptText_258D2D: @ 0x08258D2D
	.string "あれ？\nきのみを　もってないの？\pおじさんの　あまりが　あれば\nあげるん　だけど…\pきょうは　もう　あまって\nないんだ　すまんな"
	.byte EOS
	.if (. - FieldScriptText_258D2D) > 0x41
	.error "FieldScriptText_258D2D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258D2D) < 0x41
	.space 0x41 - (. - FieldScriptText_258D2D)
	.endif
	@ analyzed canonical ROM range 0x08258D6E-0x082593C4
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl EventScript_JP_08258D6E
EventScript_JP_08258D6E: @ 0x08258D6E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x0340
	goto_if 0x00, EventScript_JP_0825902B
	setvar 0x8009, 0x0001
	@ event command: applymovement
	applymovement 0x0010, LilycoveCity_ContestLobby_Movement_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, FieldScriptText_2585D8
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258E1E
	goto EventScript_JP_08258DA0
	.byte 0x02
EventScript_JP_08258DA0: @ 0x08258DA0
	loadword 0x00, FieldScriptText_2585FC
	callstd 0x04
	releaseall
	end
EventScript_JP_08258DAA: @ 0x08258DAA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_2586A2
	callstd 0x04
	dotimebasedevents
	checkflag 0x0921
	goto_if 0x01, EventScript_JP_08258DC2
	goto EventScript_JP_08258DCC
	.byte 0x02
EventScript_JP_08258DC2: @ 0x08258DC2
	loadword 0x00, FieldScriptText_258718
	callstd 0x04
	releaseall
	end
EventScript_JP_08258DCC: @ 0x08258DCC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_2586D2
	callstd 0x04
	setorcopyvar 0x8000, 0x0087
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0921
	goto EventScript_JP_08258DE9
	.byte 0x02
EventScript_JP_08258DE9: @ 0x08258DE9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_25860C
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258E02
	goto EventScript_JP_08258E10
	.byte 0x02
EventScript_JP_08258E02: @ 0x08258E02
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_258628
	callstd 0x04
	goto EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_08258E10: @ 0x08258E10
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_258642
	callstd 0x04
	goto EventScript_JP_08258E02
	.byte 0x02
EventScript_JP_08258E1E: @ 0x08258E1E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08258E73
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_08258E69
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08258DAA
	loadword 0x00, FieldScriptText_2585F7
	callstd 0x04
	goto EventScript_JP_08258DE9
	.byte 0x02
EventScript_JP_08258E5C: @ 0x08258E5C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	copyvar 0x8004, 0x8009
	fadescreen 0x01
	@ event command: special
	special DoBerryBlending
	waitstate
	releaseall
	end
EventScript_JP_08258E69: @ 0x08258E69
	loadword 0x00, FieldScriptText_258754
	callstd 0x04
	releaseall
	end
EventScript_JP_08258E73: @ 0x08258E73
	loadword 0x00, FieldScriptText_25877F
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_08258E7D
EventScript_JP_08258E7D: @ 0x08258E7D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8009, 0x0002
	@ event command: applymovement
	applymovement 0x000A, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: applymovement
	applymovement 0x0003, LilycoveCity_ContestLobby_Movement_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, FieldScriptText_2587D8
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258EF6
	goto EventScript_JP_08258EAD
	.byte 0x02
EventScript_JP_08258EAD: @ 0x08258EAD
	loadword 0x00, FieldScriptText_258804
	callstd 0x04
	releaseall
	end
EventScript_JP_08258EB7: @ 0x08258EB7
	loadword 0x00, FieldScriptText_2588BD
	callstd 0x04
	release
	end
EventScript_JP_08258EC1: @ 0x08258EC1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_25882D
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258EDA
	goto EventScript_JP_08258EE8
	.byte 0x02
EventScript_JP_08258EDA: @ 0x08258EDA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_258848
	callstd 0x04
	goto EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_08258EE8: @ 0x08258EE8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_258868
	callstd 0x04
	goto EventScript_JP_08258EDA
	.byte 0x02
EventScript_JP_08258EF6: @ 0x08258EF6
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08258EB7
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08258F44
	loadword 0x00, FieldScriptText_2587FE
	callstd 0x04
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08258EC1
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_08258F3A
	end
EventScript_JP_08258F3A: @ 0x08258F3A
	loadword 0x00, FieldScriptText_258921
	callstd 0x04
	releaseall
	end
EventScript_JP_08258F44: @ 0x08258F44
	loadword 0x00, FieldScriptText_258953
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_08258F4E
EventScript_JP_08258F4E: @ 0x08258F4E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8008, 0x000F
	setvar 0x8009, 0x0003
	@ event command: applymovement
	applymovement 0x0009, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: applymovement
	applymovement 0x0011, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: applymovement
	applymovement 0x8008, LilycoveCity_ContestLobby_Movement_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, FieldScriptText_258B45
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258FD3
	goto EventScript_JP_08258F8A
	.byte 0x02
EventScript_JP_08258F8A: @ 0x08258F8A
	loadword 0x00, FieldScriptText_2589BA
	callstd 0x04
	releaseall
	end
EventScript_JP_08258F94: @ 0x08258F94
	loadword 0x00, FieldScriptText_258A72
	callstd 0x04
	release
	end
EventScript_JP_08258F9E: @ 0x08258F9E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_2589D4
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08258FB7
	goto EventScript_JP_08258FC5
	.byte 0x02
EventScript_JP_08258FB7: @ 0x08258FB7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_2589F3
	callstd 0x04
	goto EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_08258FC5: @ 0x08258FC5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_258A13
	callstd 0x04
	goto EventScript_JP_08258FB7
	.byte 0x02
EventScript_JP_08258FD3: @ 0x08258FD3
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08258F94
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08259021
	loadword 0x00, FieldScriptText_2589B4
	callstd 0x04
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08258F9E
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_08259017
	end
EventScript_JP_08259017: @ 0x08259017
	loadword 0x00, FieldScriptText_258AD0
	callstd 0x04
	releaseall
	end
EventScript_JP_08259021: @ 0x08259021
	loadword 0x00, FieldScriptText_258AF7
	callstd 0x04
	releaseall
	end
EventScript_JP_0825902B: @ 0x0825902B
	lockall
	setvar 0x8009, 0x0001
	loadword 0x00, BerryBlender_Text_SeeMyMasteryInAction
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08259058
	loadword 0x00, BerryBlender_Text_TooBusyNowIsee
	callstd 0x04
	releaseall
	end
EventScript_JP_0825904E: @ 0x0825904E
	loadword 0x00, BerryBlender_Text_BlendMasterNoBerries
	callstd 0x04
	releaseall
	end
EventScript_JP_08259058: @ 0x08259058
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082590BE
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825904E
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08259094
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_082590C8
	end
EventScript_JP_08259094: @ 0x08259094
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082590B5
	loadword 0x00, BerryBlender_Text_BlendMasterLetsBerryBlender
	callstd 0x04
	goto EventScript_JP_08258E5C
	.byte 0x02
EventScript_JP_082590B5: @ 0x082590B5
	loadword 0x00, BerryBlender_Text_BlendMasterExplainBerryBlending
	callstd 0x04
	return
EventScript_JP_082590BE: @ 0x082590BE
	loadword 0x00, BerryBlender_Text_BlendMasterNoPokeblockCase
	callstd 0x04
	releaseall
	end
EventScript_JP_082590C8: @ 0x082590C8
	loadword 0x00, BerryBlender_Text_BlendMasterPokeblockCaseFull
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_082590D2
EventScript_JP_082590D2: @ 0x082590D2
	loadword 0x00, FieldScriptText_258B24
	callstd 0x02
	end
.globl EventScript_JP_082590DB
EventScript_JP_082590DB: @ 0x082590DB
	loadword 0x00, FieldScriptText_258B45
	callstd 0x02
	end
.globl EventScript_JP_082590E4
EventScript_JP_082590E4: @ 0x082590E4
	loadword 0x00, FieldScriptText_258B67
	callstd 0x02
	end
.globl EventScript_JP_082590ED
EventScript_JP_082590ED: @ 0x082590ED
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8008, 0x000F
	goto EventScript_JP_082590F8
	.byte 0x02
EventScript_JP_082590F8: @ 0x082590F8
	lock
	faceplayer
	loadword 0x00, FieldScriptText_258C88
	callstd 0x04
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825911E
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08259128
	end
EventScript_JP_0825911E: @ 0x0825911E
	loadword 0x00, FieldScriptText_258CB1
	callstd 0x04
	release
	end
EventScript_JP_08259128: @ 0x08259128
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08259158
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_08259158
	dotimebasedevents
	checkflag 0x0921
	goto_if 0x01, EventScript_JP_08259158
	goto EventScript_JP_08259162
	.byte 0x02
EventScript_JP_08259158: @ 0x08259158
	loadword 0x00, FieldScriptText_258D2D
	callstd 0x04
	release
	end
EventScript_JP_08259162: @ 0x08259162
	loadword 0x00, FieldScriptText_258CD6
	callstd 0x04
	setorcopyvar 0x8000, 0x0087
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0921
	loadword 0x00, FieldScriptText_258D0D
	callstd 0x04
	release
	end
LilycoveCity_ContestLobby_Movement_WalkInPlaceFastestRight: @ 0x08259183
	@ object movement sequence
	walk_in_place_fastest_right
	step_end
.globl EventScript_JP_08259185
EventScript_JP_08259185: @ 0x08259185
	lockall
	specialvar_ 0x800D, 0x0031
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082591E1
	checkitem 0x0111, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825929C
	specialvar_ 0x800D, 0x00A0
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_082591C2
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x01, EventScript_JP_08259292
	end
EventScript_JP_082591C2: @ 0x082591C2
	loadword 0x00, FieldScriptText_258B94
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082591EB
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08259290
	end
EventScript_JP_082591E1: @ 0x082591E1
	loadword 0x00, FieldScriptText_258C2B
	callstd 0x04
	releaseall
	end
EventScript_JP_082591EB: @ 0x082591EB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x082423E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08259290
	specialvar_ 0x800D, 0x019C
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825931D
	message FieldScriptText_258BDE
	waitmessage
	@ event command: special
	special TryBerryBlenderLinkup
	waitstate
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082592DA
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_082592A6
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_082592B3
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_082592C0
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_082592CD
	end
EventScript_JP_0825924D: @ 0x0825924D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_258BFA
	callstd 0x04
	goto EventScript_JP_08259277
	.byte 0x02
EventScript_JP_0825925B: @ 0x0825925B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_258C05
	callstd 0x04
	goto EventScript_JP_08259277
	.byte 0x02
EventScript_JP_08259269: @ 0x08259269
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_258C16
	callstd 0x04
	goto EventScript_JP_08259277
	.byte 0x02
EventScript_JP_08259277: @ 0x08259277
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	fadescreen 0x01
	@ event command: removeobject
	removeobject 0x00F0
	@ event command: removeobject
	removeobject 0x00EF
	@ event command: removeobject
	removeobject 0x00EE
	@ event command: removeobject
	removeobject 0x00ED
	@ event command: special
	special DoBerryBlending
	waitstate
	releaseall
	end
EventScript_JP_08259290: @ 0x08259290
	releaseall
	end
EventScript_JP_08259292: @ 0x08259292
	loadword 0x00, FieldScriptText_258C46
	callstd 0x04
	releaseall
	end
EventScript_JP_0825929C: @ 0x0825929C
	loadword 0x00, FieldScriptText_258C69
	callstd 0x04
	releaseall
	end
EventScript_JP_082592A6: @ 0x082592A6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special CloseLink
	loadword 0x00, Text_SomeoneIsNotReadyToLink
	callstd 0x04
	releaseall
	end
EventScript_JP_082592B3: @ 0x082592B3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special CloseLink
	loadword 0x00, Text_PlayersMadeDifferentSelections
	callstd 0x04
	releaseall
	end
EventScript_JP_082592C0: @ 0x082592C0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special CloseLink
	loadword 0x00, FieldScriptText_243B25
	callstd 0x04
	releaseall
	end
EventScript_JP_082592CD: @ 0x082592CD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special CloseLink
	loadword 0x00, Text_LinkErrorPleaseReset
	callstd 0x04
	releaseall
	end
EventScript_JP_082592DA: @ 0x082592DA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	fadescreen 0x01
	specialvar_ 0x800D, 0x0025
	copyvar 0x8008, 0x800D
	copyvar 0x8004, 0x8008
	@ event command: special
	special SpawnLinkPartnerEventObject
	goto EventScript_JP_082592F4
	.byte 0x02
EventScript_JP_082592F4: @ 0x082592F4
	fadescreen 0x00
	copyvar 0x8000, 0x8008
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0825924D
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0825925B
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08259269
	end
EventScript_JP_0825931D: @ 0x0825931D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000D
	goto EventScript_JP_08259328
	.byte 0x02
EventScript_JP_08259328: @ 0x08259328
	message CableClub_Text_ChooseGroupLeader_Copy_Rom_24A7C2
	waitmessage
	multichoice 0x10, 0x06, 0x51, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0825938D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08259365
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082592C0
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082592C0
	end
EventScript_JP_08259365: @ 0x08259365
	call EventScript_JP_082593B5
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082593BF
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_08259328
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, EventScript_JP_08259365
	release
	end
EventScript_JP_0825938D: @ 0x0825938D
	call EventScript_JP_082593BA
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082593BF
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_08259328
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, EventScript_JP_0825938D
	release
	end
EventScript_JP_082593B5: @ 0x082593B5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special BerryBlenderLinkBecomeLeader
	waitstate
	return
EventScript_JP_082593BA: @ 0x082593BA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special BerryBlenderLinkJoinGroup
	waitstate
	return
EventScript_JP_082593BF: @ 0x082593BF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	goto EventScript_JP_082592DA
	.byte 0x02
