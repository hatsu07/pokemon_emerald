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
	.byte 0x25
	.2byte 0x0074
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
