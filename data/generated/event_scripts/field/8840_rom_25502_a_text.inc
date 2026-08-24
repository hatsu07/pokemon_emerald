	@ field-script:0x255068 FieldScriptText_254EB6
	.globl gText_Rom_254EB6
gText_Rom_254EB6: @ 0x08254EB6
	.string "わし　グッズこうかんオヤジ\nわしと　グッズの　こうかん　する？"
	.byte EOS
	.if (. - gText_Rom_254EB6) > 0x20
	.error "gText_Rom_254EB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254EB6) < 0x20
	.space 0x20 - (. - gText_Rom_254EB6)
	.endif
	@ field-script:0x255095 FieldScriptText_254ED6
	.globl gText_Rom_254ED6
gText_Rom_254ED6: @ 0x08254ED6
	.string "そう……\nわし　ざんねん……"
	.byte EOS
	.if (. - gText_Rom_254ED6) > 0xf
	.error "gText_Rom_254ED6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254ED6) < 0xf
	.space 0xf - (. - gText_Rom_254ED6)
	.endif
	@ field-script:0x25509F FieldScriptText_254EE5
	.globl gText_Rom_254EE5
gText_Rom_254EE5: @ 0x08254EE5
	.string "でも　きみとは　このまえ\nグッズの　こうかん　したよね"
	.byte EOS
	.if (. - gText_Rom_254EE5) > 0x1c
	.error "gText_Rom_254EE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254EE5) < 0x1c
	.space 0x1c - (. - gText_Rom_254EE5)
	.endif
	@ field-script:0x255088 FieldScriptText_254F01
	.globl gText_Rom_254F01
gText_Rom_254F01: @ 0x08254F01
	.string "これ　わしが　もってる　グッズ\nなにか　ほしいの　あったら　いってね"
	.byte EOS
	.if (. - gText_Rom_254F01) > 0x23
	.error "gText_Rom_254F01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F01) < 0x23
	.space 0x23 - (. - gText_Rom_254F01)
	.endif
	@ field-script:0x2550EA FieldScriptText_254F24
	.globl gText_Rom_254F24
gText_Rom_254F24: @ 0x08254F24
	.string "ほしい　グッズ　ないの？\nわし　ざんねん……"
	.byte EOS
	.if (. - gText_Rom_254F24) > 0x17
	.error "gText_Rom_254F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F24) < 0x17
	.space 0x17 - (. - gText_Rom_254F24)
	.endif
	@ field-script:0x2550C3 FieldScriptText_254F3B
	.globl gText_Rom_254F3B
gText_Rom_254F3B: @ 0x08254F3B
	.string "それは　{0xFD}{0x02}さんが\nつかってた　グッズ　だよ\pこれに　するかい？"
	.byte EOS
	.if (. - gText_Rom_254F3B) > 0x21
	.error "gText_Rom_254F3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F3B) < 0x21
	.space 0x21 - (. - gText_Rom_254F3B)
	.endif
	@ field-script:0x25510C FieldScriptText_254F5C
	.globl gText_Rom_254F5C
gText_Rom_254F5C: @ 0x08254F5C
	.string "……って　きみ　グッズ\nひとつも　もってない　じゃん！"
	.byte EOS
	.if (. - gText_Rom_254F5C) > 0x1c
	.error "gText_Rom_254F5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F5C) < 0x1c
	.space 0x1c - (. - gText_Rom_254F5C)
	.endif
	@ field-script:0x255116 FieldScriptText_254F78
	.globl gText_Rom_254F78
gText_Rom_254F78: @ 0x08254F78
	.string "じゃあ　こうかんに　だしてくれる\nグッズを　えらんで！"
	.byte EOS
	.if (. - gText_Rom_254F78) > 0x1c
	.error "gText_Rom_254F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F78) < 0x1c
	.space 0x1c - (. - gText_Rom_254F78)
	.endif
	@ field-script:0x255166 FieldScriptText_254F94
	.globl gText_Rom_254F94
gText_Rom_254F94: @ 0x08254F94
	.string "こうかん　して　くれないの？\nわし　ざんねん……"
	.byte EOS
	.if (. - gText_Rom_254F94) > 0x19
	.error "gText_Rom_254F94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F94) < 0x19
	.space 0x19 - (. - gText_Rom_254F94)
	.endif
	@ field-script:0x25517E FieldScriptText_254FAD
	.globl gText_Rom_254FAD
gText_Rom_254FAD: @ 0x08254FAD
	.string "きみ　{0xFD}{0x03}が　いっぱいで\nもう　もてないよ"
	.byte EOS
	.if (. - gText_Rom_254FAD) > 0x16
	.error "gText_Rom_254FAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254FAD) < 0x16
	.space 0x16 - (. - gText_Rom_254FAD)
	.endif
	@ field-script:0x255146 FieldScriptText_254FC3
	.globl gText_Rom_254FC3
gText_Rom_254FC3: @ 0x08254FC3
	.string "じゃあ　わしの　{0xFD}{0x04}と\nきみの　{0xFD}{0x03}を　こうかんするよ？"
	.byte EOS
	.if (. - gText_Rom_254FC3) > 0x1d
	.error "gText_Rom_254FC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254FC3) < 0x1d
	.space 0x1d - (. - gText_Rom_254FC3)
	.endif
	@ field-script:0x255170 FieldScriptText_254FE0
	.globl gText_Rom_254FE0
gText_Rom_254FE0: @ 0x08254FE0
	.string "きみ　いま　そのグッズ　かざってるね\nかざってる　グッズは　こうかん　できないよ"
	.byte EOS
	.if (. - gText_Rom_254FE0) > 0x29
	.error "gText_Rom_254FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254FE0) < 0x29
	.space 0x29 - (. - gText_Rom_254FE0)
	.endif
	@ field-script:0x25515C FieldScriptText_255009
	.globl gText_Rom_255009
gText_Rom_255009: @ 0x08255009
	.string "じゃあ　こうかん！\lきみの　パソコンに\nグッズを　おくっておくよ"
	.byte EOS
	.if (. - gText_Rom_255009) > 0x21
	.error "gText_Rom_255009 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255009) < 0x21
	.space 0x21 - (. - gText_Rom_255009)
	.endif
	@ field-script:0x2550F3 FieldScriptText_25502A
	.globl gText_Rom_25502A
gText_Rom_25502A: @ 0x0825502A
	.string "ああ！　ごめん！\nそれ　とっても　レアな　グッズ　だから\lこうかん　できないんだ！\pほかに　ほしい　グッズ　ある？"
	.byte EOS
	.if (. - gText_Rom_25502A) > 0x3a
	.error "gText_Rom_25502A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25502A) < 0x3a
	.space 0x3a - (. - gText_Rom_25502A)
	.endif
	@ analyzed canonical ROM range 0x08255064-0x08255185
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_08255064: @ 0x08255064
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, gText_Rom_254EB6
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08255093
	@ event command: special
	special ScrSpecial_GetTraderTradedFlag
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825509D
	message gText_Rom_254F01
	waitmessage
	goto EventScript_JP_082550A7
	.byte 0x02
EventScript_JP_08255093: @ 0x08255093
	loadword 0x00, gText_Rom_254ED6
	callstd 0x04
	release
	end
EventScript_JP_0825509D: @ 0x0825509D
	loadword 0x00, gText_Rom_254EE5
	callstd 0x04
	release
	end
EventScript_JP_082550A7: @ 0x082550A7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special ScrSpecial_TraderMenuGetDecoration
	waitstate
	compare_var_to_value 0x8004, 0x0000
	goto_if 0x01, EventScript_JP_082550E8
	compare_var_to_value 0x8004, 0xFFFF
	goto_if 0x01, EventScript_JP_082550F2
	loadword 0x00, gText_Rom_254F3B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082550FE
	@ event command: special
	special ScrSpecial_DoesPlayerHaveNoDecorations
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825510A
	goto EventScript_JP_08255114
	.byte 0x02
EventScript_JP_082550E8: @ 0x082550E8
	loadword 0x00, gText_Rom_254F24
	callstd 0x04
	release
	end
EventScript_JP_082550F2: @ 0x082550F2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_25502A
	waitmessage
	goto EventScript_JP_082550A7
	.byte 0x02
EventScript_JP_082550FE: @ 0x082550FE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_254F01
	waitmessage
	goto EventScript_JP_082550A7
	.byte 0x02
EventScript_JP_0825510A: @ 0x0825510A
	loadword 0x00, gText_Rom_254F5C
	callstd 0x04
	release
	end
EventScript_JP_08255114: @ 0x08255114
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_254F78
	callstd 0x04
	@ event command: special
	special CreateAvailableDecorationsMenu
	waitstate
	compare_var_to_value 0x8006, 0x0000
	goto_if 0x01, EventScript_JP_08255164
	compare_var_to_value 0x8006, 0xFFFF
	goto_if 0x01, EventScript_JP_0825516E
	@ event command: special
	special IsDecorationCategoryFull
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0825517C
	loadword 0x00, gText_Rom_254FC3
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08255114
	@ event command: special
	special ScrSpecial_TraderDoDecorationTrade
	loadword 0x00, gText_Rom_255009
	callstd 0x04
	release
	end
EventScript_JP_08255164: @ 0x08255164
	loadword 0x00, gText_Rom_254F94
	callstd 0x04
	release
	end
EventScript_JP_0825516E: @ 0x0825516E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_254FE0
	callstd 0x04
	goto EventScript_JP_08255114
	.byte 0x02
EventScript_JP_0825517C: @ 0x0825517C
	loadword 0x00, gText_Rom_254FAD
	callstd 0x04
	release
	end
