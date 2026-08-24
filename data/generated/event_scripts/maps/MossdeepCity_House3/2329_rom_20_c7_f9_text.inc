	@ data/maps/MossdeepCity_House3/scripts.inc:28 MossdeepCity_House3_Text_YouWantSuperRod
	.globl gText_Rom_20C74E
gText_Rom_20C74E: @ 0x0820C74E
	.string "おーい! トレーナーよお!\nすごいつりざおは ほんとうに すごいぞお\pなんたって かいていに いる\nポケモンも つりあげられる からのお!\pどお? ほしく なった?{EOS}"
	.if (. - gText_Rom_20C74E) > 0x53
	.error "gText_Rom_20C74E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C74E) < 0x53
	.space 0x53 - (. - gText_Rom_20C74E)
	.endif
	@ data/maps/MossdeepCity_House3/scripts.inc:31 MossdeepCity_House3_Text_SuperRodIsSuper
	.globl gText_Rom_20C7A1
gText_Rom_20C7A1: @ 0x0820C7A1
	.string "そうだろ そうだろ! すごいつりざおは\nほんとうに すごい からのお!{EOS}"
	.if (. - gText_Rom_20C7A1) > 0x24
	.error "gText_Rom_20C7A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C7A1) < 0x24
	.space 0x24 - (. - gText_Rom_20C7A1)
	.endif
	@ data/maps/MossdeepCity_House3/scripts.inc:34 MossdeepCity_House3_Text_TryDroppingRodInWater
	.globl gText_Rom_20C7C5
gText_Rom_20C7C5: @ 0x0820C7C5
	.string "みずの ある ところなら\nどこでも つりざお つかうと いいぞお!{EOS}"
	.if (. - gText_Rom_20C7C5) > 0x22
	.error "gText_Rom_20C7C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C7C5) < 0x22
	.space 0x22 - (. - gText_Rom_20C7C5)
	.endif
	@ data/maps/MossdeepCity_House3/scripts.inc:37 MossdeepCity_House3_Text_DontYouLikeToFish
	.globl gText_Rom_20C7E7
gText_Rom_20C7E7: @ 0x0820C7E7
	.string "あら?\nつりは きらい なのかね?{EOS}"
	.if (. - gText_Rom_20C7E7) > 0x12
	.error "gText_Rom_20C7E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C7E7) < 0x12
	.space 0x12 - (. - gText_Rom_20C7E7)
	.endif
	@ data/maps/MossdeepCity_House3/scripts.inc:40 MossdeepCity_House3_Text_GoAfterSeafloorPokemon
	.globl gText_Rom_20C7F9
gText_Rom_20C7F9: @ 0x0820C7F9
	.string "すごいつりざおで\nかいていの ポケモンも つりあげろお!{EOS}"
	.if (. - gText_Rom_20C7F9) > 0x1d
	.error "gText_Rom_20C7F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C7F9) < 0x1d
	.space 0x1d - (. - gText_Rom_20C7F9)
	.endif
	@ analyzed canonical ROM range 0x0820C816-0x0820C9C7
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_MossdeepCity_StevensHouse_OnLoad_OnTransition_OnFrame: @ 0x0820C816
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_0820C826
	.byte 0x03
	.4byte EventScript_JP_0820C83A
	.byte 0x02
	.4byte gMapScriptConditionTable_MossdeepCity_StevensHouse_OnFrame
	.byte 0
EventScript_JP_0820C826: @ 0x0820C826
	checkflag 0x0864
	call_if 0x00, EventScript_JP_0820C830
	end
EventScript_JP_0820C830: @ 0x0820C830
	setmetatile 0x0006, 0x0004, 0x02F1, 0x0001
	return
EventScript_JP_0820C83A: @ 0x0820C83A
	compare_var_to_value 0x40C6, 0x0002
	call_if 0x01, EventScript_JP_0820C846
	end
EventScript_JP_0820C846: @ 0x0820C846
	setobjectxyperm 0x0001, 0x0006, 0x0005
	setobjectmovementtype 0x0001, 0x07
	return
gMapScriptConditionTable_MossdeepCity_StevensHouse_OnFrame: @ 0x0820C852
	@ conditional map script table
	.2byte 0x40C6, 0x0001
	.4byte EventScript_JP_0820C85C
	.2byte 0
EventScript_JP_0820C85C: @ 0x0820C85C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, MossdeepCity_House3_Movement_WalkLeftX6_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_20C9C8
	callstd 0x04
	setorcopyvar 0x8000, 0x015A
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x007B
	setflag 0x012E
	loadword 0x00, gText_Rom_20CA36
	callstd 0x04
	closemessage
	delay 0x0014
	@ event command: applymovement
	applymovement 0x0001, MossdeepCity_House3_Movement_WalkUp_WalkRightX3_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	setflag 0x0314
	setflag 0x03AD
	setvar 0x40C6, 0x0002
	releaseall
	end
MossdeepCity_House3_Movement_WalkLeftX6_WalkInPlaceFastestDown: @ 0x0820C8C5
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_down
	step_end
MossdeepCity_House3_Movement_WalkUp_WalkRightX3_WalkInPlaceFastestUp: @ 0x0820C8CD
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
.globl EventScript_JP_0820C8D3
EventScript_JP_0820C8D3: @ 0x0820C8D3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_20CAF7
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C8ED
	goto EventScript_JP_0820C8F7
	.byte 0x02
EventScript_JP_0820C8ED: @ 0x0820C8ED
	loadword 0x00, gText_Rom_20CB5D
	callstd 0x04
	releaseall
	end
EventScript_JP_0820C8F7: @ 0x0820C8F7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4001, 0x018E
	givemon 0x018E, 0x05, 0x0000, 0x00000000, 0x00000000, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C927
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820C94F
	goto 0x0824423B
	.byte 0x02
EventScript_JP_0820C927: @ 0x0820C927
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_0820C97D
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C993
	call 0x082441B5
	call 0x08243460
	goto EventScript_JP_0820C993
	.byte 0x02
EventScript_JP_0820C94F: @ 0x0820C94F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_0820C97D
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C972
	call 0x082441C1
	goto EventScript_JP_0820C972
	.byte 0x02
EventScript_JP_0820C972: @ 0x0820C972
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x082441CA
	goto EventScript_JP_0820C993
	.byte 0x02
EventScript_JP_0820C97D: @ 0x0820C97D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferspeciesname 0x01, 0x018E
	@ event command: removeobject
	removeobject 0x0002
	playfanfare 0x0172
	message gText_Rom_20CB39
	waitmessage
	waitfanfare
	bufferspeciesname 0x00, 0x018E
	return
EventScript_JP_0820C993: @ 0x0820C993
	setflag 0x03C8
	setflag 0x012A
	releaseall
	end
.globl EventScript_JP_0820C99B
EventScript_JP_0820C99B: @ 0x0820C99B
	loadword 0x00, gText_Rom_20CC3F
	callstd 0x03
	end
.globl EventScript_JP_0820C9A4
EventScript_JP_0820C9A4: @ 0x0820C9A4
	loadword 0x00, gText_Rom_20CAAF
	callstd 0x02
	end
.globl EventScript_JP_0820C9AD
EventScript_JP_0820C9AD: @ 0x0820C9AD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_20CB77
	callstd 0x04
	releaseall
	end
	.byte 0x1A, 0x00, 0x80, 0x5A, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x01, 0x29, 0x7B, 0x00, 0x02
