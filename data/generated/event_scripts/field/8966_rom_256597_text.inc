	@ field-script:0x254EAB FieldScriptText_256597
	.globl gText_Rom_256597
gText_Rom_256597: @ 0x08256597
	.string "きみ　{0xFD}{0x02}って\nことば　しってる？\pいみ？　それはね……\nおとうさんか　おかあさんに　きいてみて"
	.byte EOS
	.if (. - gText_Rom_256597) > 0x31
	.error "gText_Rom_256597 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256597) < 0x31
	.space 0x31 - (. - gText_Rom_256597)
	.endif
	@ analyzed canonical ROM range 0x082565C8-0x08256611
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_082565C8: @ 0x082565C8
EventScript_082565C8: @ 0x082565C8
EventScript_JP_082565C8: @ 0x082565C8
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0867
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0825662E @ EventScript_JP_0825662E
	@ event command: checkpartymove
	.byte 0x7C
	.2byte 0x000F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825662E @ EventScript_JP_0825662E
	@ event command: setfieldeffectargument
	.byte 0x9D
	.byte 0x00
	.2byte 0x800D
	@ event command: bufferpartymonnick
	.byte 0x7F
	.byte 0x00
	.2byte 0x800D
	@ event command: buffermovename
	.byte 0x82
	.byte 0x01
	.2byte 0x000F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825663B @ gText_Rom_25663B
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
	.4byte 0x08256638 @ EventScript_JP_08256638
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825665C @ gText_Rom_25665C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: dofieldeffect
	.byte 0x9C
	.2byte 0x0002
	@ event command: waitstate
	.byte 0x27
	@ event command: goto
	.byte 0x05
	.4byte 0x0825661D @ EventScript_JP_0825661D
	.byte 0x02
