	@ field-script:0x211B88 FieldScriptText_211D95
	.globl gText_Rom_211D95
gText_Rom_211D95: @ 0x08211D95
	.string "まごの　やつも　いまごろは\nポケモンリーグの　チャンピオンに\lちょうせん　しているの　じゃろうか？\pそれとも　わしの　まご　じゃから\nもう　チャンピオン　かもな……　ウヒヒ！$"
	.if (. - gText_Rom_211D95) > 0x58
	.error "gText_Rom_211D95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211D95) < 0x58
	.space 0x58 - (. - gText_Rom_211D95)
	.endif
	@ analyzed canonical ROM range 0x08211DED-0x08211E4E
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_08211DED: @ 0x08211DED
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08211DF3
	.byte 0
EventScript_JP_08211DF3: @ 0x08211DF3
	@ event command: setflag
	.byte 0x29
	.2byte 0x08A1
	@ event command: end
	.byte 0x02
EventScript_JP_08211DF7: @ 0x08211DF7
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211E4F @ gText_Rom_211E4F
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211E18 @ EventScript_JP_08211E18
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211E45 @ EventScript_JP_08211E45
	@ event command: end
	.byte 0x02
EventScript_JP_08211E18: @ 0x08211E18
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211E90 @ gText_Rom_211E90
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x0824310F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211EA6 @ gText_Rom_211EA6
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211E18 @ EventScript_JP_08211E18
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211E45 @ EventScript_JP_08211E45
	@ event command: end
	.byte 0x02
EventScript_JP_08211E45: @ 0x08211E45
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211EE0 @ gText_Rom_211EE0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
