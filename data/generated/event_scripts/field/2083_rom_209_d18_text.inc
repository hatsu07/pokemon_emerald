	@ field-script:0x209B22 FieldScriptText_209D18
	.globl gText_Rom_209D18
gText_Rom_209D18: @ 0x08209D18
	.string "やっと　れんらくせん　タイドリップごうが\nうんこう　するように　なったんだ！\pカイナの　ぞうせんじょの　みんな\nたいへん　だったろうな\lこれからは　おれが　いそがしくなるぞ！{EOS}"
	.if (. - gText_Rom_209D18) > 0x58
	.error "gText_Rom_209D18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209D18) < 0x58
	.space 0x58 - (. - gText_Rom_209D18)
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
	loadword 0x00, gText_Rom_209E63
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
	loadword 0x00, gText_Rom_209EA5
	callstd 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x009F
	waitstate
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_08209E4C
	@ event command: special
	.byte 0x25
	.2byte 0x0147
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08209E42
	@ event command: special
	.byte 0x25
	.2byte 0x00DF
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08209E35
	loadword 0x00, gText_Rom_209EB5
	callstd 0x04
	fadescreen 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x00DC
	fadescreen 0x00
	compare_var_to_value 0x8005, 0x0004
	goto_if 0x01, EventScript_JP_08209DA1
	@ event command: special
	.byte 0x25
	.2byte 0x00DE
	loadword 0x00, gText_Rom_209EE2
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
	.byte 0x25
	.2byte 0x0206
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08209E56
	@ event command: special
	.byte 0x25
	.2byte 0x00DD
	playfanfare 0x017A
	waitfanfare
	loadword 0x00, gText_Rom_209EF1
	callstd 0x04
	releaseall
	end
EventScript_JP_08209E35: @ 0x08209E35
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x00DE
	loadword 0x00, gText_Rom_209EC8
	callstd 0x04
	releaseall
	end
EventScript_JP_08209E42: @ 0x08209E42
	loadword 0x00, gText_Rom_209F2B
	callstd 0x04
	releaseall
	end
EventScript_JP_08209E4C: @ 0x08209E4C
	loadword 0x00, gText_Rom_209F0F
	callstd 0x04
	releaseall
	end
EventScript_JP_08209E56: @ 0x08209E56
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x00DE
	loadword 0x00, gText_Rom_209F4A
	callstd 0x04
	releaseall
	end
