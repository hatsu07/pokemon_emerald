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
	setflag 0x08A1
	end
.globl EventScript_JP_08211DF7
EventScript_JP_08211DF7: @ 0x08211DF7
	lock
	faceplayer
	loadword 0x00, gText_Rom_211E4F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08211E18
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08211E45
	end
EventScript_JP_08211E18: @ 0x08211E18
	loadword 0x00, gText_Rom_211E90
	callstd 0x04
	closemessage
	call 0x0824310F
	loadword 0x00, gText_Rom_211EA6
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08211E18
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08211E45
	end
EventScript_JP_08211E45: @ 0x08211E45
	loadword 0x00, gText_Rom_211EE0
	callstd 0x04
	release
	end
