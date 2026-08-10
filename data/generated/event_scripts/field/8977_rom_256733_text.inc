	@ field-script:0x256705 FieldScriptText_256733
	.globl gText_Rom_256733
gText_Rom_256733: @ 0x08256733
	.string "かたそうな　いわ　だけど……\nポケモンの　わざで　こわせるかも？"
	.byte EOS
	.if (. - gText_Rom_256733) > 0x21
	.error "gText_Rom_256733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256733) < 0x21
	.space 0x21 - (. - gText_Rom_256733)
	.endif
	@ analyzed canonical ROM range 0x08256754-0x08256796
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08256754: @ 0x08256754
EventScript_JP_08256754: @ 0x08256754
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086A
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082567AF @ EventScript_JP_082567AF
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0889
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082567B9 @ EventScript_JP_082567B9
	@ event command: checkpartymove
	.byte 0x7C
	.2byte 0x0046
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082567AF @ EventScript_JP_082567AF
	@ event command: setfieldeffectargument
	.byte 0x9D
	.byte 0x00
	.2byte 0x800D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082567C6 @ gText_Rom_2567C6
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
	.4byte 0x082567C3 @ EventScript_JP_082567C3
	@ event command: closemessage
	.byte 0x68
	@ event command: dofieldeffect
	.byte 0x9C
	.2byte 0x0028
	@ event command: waitstate
	.byte 0x27
	@ event command: goto
	.byte 0x05
	.4byte 0x082567A2 @ EventScript_JP_082567A2
	.byte 0x02
