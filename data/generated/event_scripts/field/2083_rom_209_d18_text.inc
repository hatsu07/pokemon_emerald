	@ field-script:0x209B22 FieldScriptText_209D18
	.globl gText_Rom_209D18
gText_Rom_209D18: @ 0x08209D18
	.string "やっと　れんらくせん　タイドリップごうが\nうんこう　するように　なったんだ！\pカイナの　ぞうせんじょの　みんな\nたいへん　だったろうな\lこれからは　おれが　いそがしくなるぞ！$"
	.if (. - gText_Rom_209D18) > 0x58
	.error "gText_Rom_209D18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209D18) < 0x58
	.space 0x58 - (. - gText_Rom_209D18)
	.endif
	@ analyzed canonical ROM range 0x08209D70-0x08209E62
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08209D70: @ 0x08209D70
	.byte 0x00
EventScript_JP_08209D71: @ 0x08209D71
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209E63 @ gText_Rom_209E63
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209DA1 @ EventScript_JP_08209DA1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209E4C @ EventScript_JP_08209E4C
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08209DA1: @ 0x08209DA1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209EA5 @ gText_Rom_209EA5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x009F
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x00FF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209E4C @ EventScript_JP_08209E4C
	@ event command: special
	.byte 0x25
	.2byte 0x0147
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209E42 @ EventScript_JP_08209E42
	@ event command: special
	.byte 0x25
	.2byte 0x00DF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209E35 @ EventScript_JP_08209E35
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209EB5 @ gText_Rom_209EB5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x00DC
	@ event command: fadescreen
	.byte 0x97
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209DA1 @ EventScript_JP_08209DA1
	@ event command: special
	.byte 0x25
	.2byte 0x00DE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209EE2 @ gText_Rom_209EE2
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209E16 @ EventScript_JP_08209E16
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209E4C @ EventScript_JP_08209E4C
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08209E16: @ 0x08209E16
	@ event command: special
	.byte 0x25
	.2byte 0x0206
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08209E56 @ EventScript_JP_08209E56
	@ event command: special
	.byte 0x25
	.2byte 0x00DD
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x017A
	@ event command: waitfanfare
	.byte 0x32
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209EF1 @ gText_Rom_209EF1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08209E35: @ 0x08209E35
	@ event command: special
	.byte 0x25
	.2byte 0x00DE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209EC8 @ gText_Rom_209EC8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08209E42: @ 0x08209E42
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209F2B @ gText_Rom_209F2B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08209E4C: @ 0x08209E4C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209F0F @ gText_Rom_209F0F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08209E56: @ 0x08209E56
	@ event command: special
	.byte 0x25
	.2byte 0x00DE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209F4A @ gText_Rom_209F4A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
