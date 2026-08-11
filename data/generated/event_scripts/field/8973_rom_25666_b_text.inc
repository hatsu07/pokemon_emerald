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
EventScript_0825667C: @ 0x0825667C
EventScript_JP_0825667C: @ 0x0825667C
	lockall
	checkflag 0x0869
	goto_if 0x00, EventScript_JP_08256703
	checkpartymove 0x00F9
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_08256703
	setfieldeffectargument 0x00, 0x800D
	bufferpartymonnick 0x00, 0x800D
	buffermovename 0x01, 0x00F9
	loadword 0x00, gText_Rom_256710
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825670D
	loadword 0x00, gText_Rom_25665C
	callstd 0x04
	closemessage
	dofieldeffect 0x0025
	waitstate
	goto EventScript_JP_082566D1
	.byte 0x02
