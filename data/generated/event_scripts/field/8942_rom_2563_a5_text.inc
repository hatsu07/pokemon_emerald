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
EventScript_082563C4: @ 0x082563C4
EventScript_JP_082563C4: @ 0x082563C4
	lock
	faceplayer
	loadword 0x00, gText_Rom_256362
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082563E5
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08256448
	end
EventScript_JP_082563E5: @ 0x082563E5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x006A
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08256427
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08256452
	end
EventScript_JP_082563FF: @ 0x082563FF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x006A
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08256419
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08256452
	end
EventScript_JP_08256419: @ 0x08256419
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_256397
	callstd 0x04
	goto EventScript_JP_08256427
	.byte 0x02
EventScript_JP_08256427: @ 0x08256427
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x0069
	@ event command: special
	.byte 0x25
	.2byte 0x008D
	waitmessage
	yesnobox 0x14, 0x08
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082563FF
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082563FF
	end
EventScript_08256448: @ 0x08256448
EventScript_JP_08256448: @ 0x08256448
	loadword 0x00, gText_Rom_25638A
	callstd 0x04
	release
	end
EventScript_JP_08256452: @ 0x08256452
	loadword 0x00, gText_Rom_2563A5
	callstd 0x04
	release
	end
