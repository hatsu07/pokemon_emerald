	@ field-script:0x256454 FieldScriptText_2563A5
	.globl gText_Rom_2563A5
gText_Rom_2563A5: @ 0x082563A5
	.string "そのぐらい　かな・・・\pまた　はなし　しようね！\nばいばい！"
	.byte EOS
	.if (. - gText_Rom_2563A5) > 0x1f
	.error "gText_Rom_2563A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2563A5) < 0x1f
	.space 0x1f - (. - gText_Rom_2563A5)
	.endif
	@ analyzed canonical ROM range 0x082563C4-0x0825645B
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_082563C4: @ 0x082563C4
EventScript_082563C4: @ 0x082563C4
EventScript_JP_082563C4: @ 0x082563C4
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08256362 @ gText_Rom_256362
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
	.4byte 0x082563E5 @ EventScript_JP_082563E5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08256448 @ EventScript_JP_08256448
	@ event command: end
	.byte 0x02
EventScript_JP_082563E5: @ 0x082563E5
	@ event command: special
	.byte 0x25
	.2byte 0x006A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08256427 @ EventScript_JP_08256427
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08256452 @ EventScript_JP_08256452
	@ event command: end
	.byte 0x02
EventScript_JP_082563FF: @ 0x082563FF
	@ event command: special
	.byte 0x25
	.2byte 0x006A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08256419 @ EventScript_JP_08256419
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08256452 @ EventScript_JP_08256452
	@ event command: end
	.byte 0x02
EventScript_JP_08256419: @ 0x08256419
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08256397 @ gText_Rom_256397
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08256427 @ EventScript_JP_08256427
	.byte 0x02
EventScript_JP_08256427: @ 0x08256427
	@ event command: special
	.byte 0x25
	.2byte 0x0069
	@ event command: special
	.byte 0x25
	.2byte 0x008D
	@ event command: waitmessage
	.byte 0x66
	@ event command: yesnobox
	.byte 0x6E
	.byte 0x14
	.byte 0x08
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082563FF @ EventScript_JP_082563FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082563FF @ EventScript_JP_082563FF
	@ event command: end
	.byte 0x02
EventScript_08256448: @ 0x08256448
EventScript_JP_08256448: @ 0x08256448
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0825638A @ gText_Rom_25638A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08256452: @ 0x08256452
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082563A5 @ gText_Rom_2563A5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
