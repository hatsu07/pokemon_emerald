	@ field-script:0x256630 FieldScriptText_25666B
	.globl gText_Rom_25666B
gText_Rom_25666B: @ 0x0825666B
	.string "このきは　なんだか\nきれそうだ！"
	.byte EOS
	.if (. - gText_Rom_25666B) > 0x11
	.error "gText_Rom_25666B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25666B) < 0x11
	.space 0x11 - (. - gText_Rom_25666B)
	.endif
	@ analyzed canonical ROM range 0x0825667C-0x082566C5
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0825667C: @ 0x0825667C
EventScript_0825667C: @ 0x0825667C
EventScript_JP_0825667C: @ 0x0825667C
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0869
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08256703 @ EventScript_JP_08256703
	@ event command: checkpartymove
	.byte 0x7C
	.2byte 0x00F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08256703 @ EventScript_JP_08256703
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
	.2byte 0x00F9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08256710 @ gText_Rom_256710
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
	.4byte 0x0825670D @ EventScript_JP_0825670D
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
	.2byte 0x0025
	@ event command: waitstate
	.byte 0x27
	@ event command: goto
	.byte 0x05
	.4byte 0x082566D1 @ EventScript_JP_082566D1
	.byte 0x02
