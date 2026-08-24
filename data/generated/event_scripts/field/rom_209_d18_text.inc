	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:336 BattleFrontier_OutsideWest_Text_PleaseBoardFerry (+1 aliases)
	.globl gText_Rom_209CAA
gText_Rom_209CAA: @ 0x08209CAA
	.string "れんらくせんに のって おまちください{EOS}"
	.if (. - gText_Rom_209CAA) > 0x14
	.error "gText_Rom_209CAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209CAA) < 0x14
	.space 0x14 - (. - gText_Rom_209CAA)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:339 BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo (+1 aliases)
	.globl gText_Rom_209CBE
gText_Rom_209CBE: @ 0x08209CBE
	.string "いきさきは どちら でしょう?{EOS}"
	.if (. - gText_Rom_209CBE) > 0x10
	.error "gText_Rom_209CBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209CBE) < 0x10
	.space 0x10 - (. - gText_Rom_209CBE)
	.endif
	@ field-script:0x209B18 FieldScriptText_209CCE
	.globl FieldScriptText_209CCE
FieldScriptText_209CCE: @ 0x08209CCE
	.string "れんらくせんが　かんせい　しないと\nふなのり　というものは　ヒマだぜ……\pカイナの　ぞうせんじょの　れんちゅう\nしゃかりきに　がんばって　くれよな{EOS}"
	.if (. - FieldScriptText_209CCE) > 0x4a
	.error "FieldScriptText_209CCE may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_209CCE) < 0x4a
	.space 0x4a - (. - FieldScriptText_209CCE)
	.endif
	@ field-script:0x209B22 FieldScriptText_209D18
	.globl FieldScriptText_209D18
FieldScriptText_209D18: @ 0x08209D18
	.string "やっと　れんらくせん　タイドリップごうが\nうんこう　するように　なったんだ！\pカイナの　ぞうせんじょの　みんな\nたいへん　だったろうな\lこれからは　おれが　いそがしくなるぞ！{EOS}"
	.if (. - FieldScriptText_209D18) > 0x58
	.error "FieldScriptText_209D18 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_209D18) < 0x58
	.space 0x58 - (. - FieldScriptText_209D18)
	.endif
	@ analyzed canonical ROM range 0x08209D70-0x08209E62
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_08209D71
EventScript_JP_08209D71: @ 0x08209D71
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, FieldScriptText_209E63
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08209DA1
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08209E4C
	releaseall
	end
EventScript_JP_08209DA1: @ 0x08209DA1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_209EA5
	callstd 0x04
	@ event command: special
	special ChoosePartyMon
	waitstate
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_08209E4C
	@ event command: special
	special IsSelectedMonEgg
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08209E42
	@ event command: special
	special GetNumMovesSelectedMonHas
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08209E35
	loadword 0x00, FieldScriptText_209EB5
	callstd 0x04
	fadescreen 0x01
	@ event command: special
	special MoveDeleterChooseMoveToForget
	fadescreen 0x00
	compare_var_to_value 0x8005, 0x0004
	goto_if 0x01, EventScript_JP_08209DA1
	@ event command: special
	special BufferMoveDeleterNicknameAndMove
	loadword 0x00, FieldScriptText_209EE2
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08209E16
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08209E4C
	releaseall
	end
EventScript_JP_08209E16: @ 0x08209E16
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special IsLastMonThatKnowsSurf
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08209E56
	@ event command: special
	special MoveDeleterForgetMove
	playfanfare 0x017A
	waitfanfare
	loadword 0x00, FieldScriptText_209EF1
	callstd 0x04
	releaseall
	end
EventScript_JP_08209E35: @ 0x08209E35
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special BufferMoveDeleterNicknameAndMove
	loadword 0x00, FieldScriptText_209EC8
	callstd 0x04
	releaseall
	end
EventScript_JP_08209E42: @ 0x08209E42
	loadword 0x00, FieldScriptText_209F2B
	callstd 0x04
	releaseall
	end
EventScript_JP_08209E4C: @ 0x08209E4C
	loadword 0x00, FieldScriptText_209F0F
	callstd 0x04
	releaseall
	end
EventScript_JP_08209E56: @ 0x08209E56
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special BufferMoveDeleterNicknameAndMove
	loadword 0x00, FieldScriptText_209F4A
	callstd 0x04
	releaseall
	end
