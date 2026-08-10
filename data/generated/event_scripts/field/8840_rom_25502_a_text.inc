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
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254EB6 @ gText_Rom_254EB6
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08255093 @ EventScript_JP_08255093
	@ event command: special
	.byte 0x25
	.2byte 0x0072
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825509D @ EventScript_JP_0825509D
	@ event command: message
	.byte 0x67
	.4byte 0x08254F01 @ gText_Rom_254F01
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x082550A7 @ EventScript_JP_082550A7
	.byte 0x02
EventScript_JP_08255093: @ 0x08255093
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254ED6 @ gText_Rom_254ED6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825509D: @ 0x0825509D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254EE5 @ gText_Rom_254EE5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082550A7: @ 0x082550A7
	@ event command: special
	.byte 0x25
	.2byte 0x0071
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082550E8 @ EventScript_JP_082550E8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082550F2 @ EventScript_JP_082550F2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254F3B @ gText_Rom_254F3B
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082550FE @ EventScript_JP_082550FE
	@ event command: special
	.byte 0x25
	.2byte 0x0073
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825510A @ EventScript_JP_0825510A
	@ event command: goto
	.byte 0x05
	.4byte 0x08255114 @ EventScript_JP_08255114
	.byte 0x02
EventScript_JP_082550E8: @ 0x082550E8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254F24 @ gText_Rom_254F24
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082550F2: @ 0x082550F2
	@ event command: message
	.byte 0x67
	.4byte 0x0825502A @ gText_Rom_25502A
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x082550A7 @ EventScript_JP_082550A7
	.byte 0x02
EventScript_JP_082550FE: @ 0x082550FE
	@ event command: message
	.byte 0x67
	.4byte 0x08254F01 @ gText_Rom_254F01
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x082550A7 @ EventScript_JP_082550A7
	.byte 0x02
EventScript_JP_0825510A: @ 0x0825510A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254F5C @ gText_Rom_254F5C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08255114: @ 0x08255114
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254F78 @ gText_Rom_254F78
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x0075
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8006
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08255164 @ EventScript_JP_08255164
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8006
	.2byte 0xFFFF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825516E @ EventScript_JP_0825516E
	@ event command: special
	.byte 0x25
	.2byte 0x0074
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825517C @ EventScript_JP_0825517C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254FC3 @ gText_Rom_254FC3
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08255114 @ EventScript_JP_08255114
	@ event command: special
	.byte 0x25
	.2byte 0x0076
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08255009 @ gText_Rom_255009
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08255164: @ 0x08255164
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254F94 @ gText_Rom_254F94
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825516E: @ 0x0825516E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254FE0 @ gText_Rom_254FE0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08255114 @ EventScript_JP_08255114
	.byte 0x02
EventScript_JP_0825517C: @ 0x0825517C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08254FAD @ gText_Rom_254FAD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
