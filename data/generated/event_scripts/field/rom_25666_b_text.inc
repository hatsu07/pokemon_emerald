	@ field-script:0x2565EE FieldScriptText_25663B
	.globl FieldScriptText_25663B
FieldScriptText_25663B: @ 0x0825663B
	.string "……このきは　なんだか\nきれそうだ！\pいあいぎりで　きりますか？"
	.byte EOS
	.if (. - FieldScriptText_25663B) > 0x21
	.error "FieldScriptText_25663B may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_25663B) < 0x21
	.space 0x21 - (. - FieldScriptText_25663B)
	.endif
	@ field-script:0x245B24 FieldScriptText_25665C
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_25665C
FieldScriptText_25665C: @ 0x0825665C
	.string "{0xFD}{0x02}　は\n{0xFD}{0x03}を　つかった！"
	.byte EOS
	.if (. - FieldScriptText_25665C) != 0xf
	.error "FieldScriptText_25665C must retain its original byte length"
	.endif
	@ field-script:0x256630 FieldScriptText_25666B
	.globl FieldScriptText_25666B
FieldScriptText_25666B: @ 0x0825666B
	.string "このきは　なんだか\nきれそうだ！"
	.byte EOS
	.if (. - FieldScriptText_25666B) > 0x11
	.error "FieldScriptText_25666B may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_25666B) < 0x11
	.space 0x11 - (. - FieldScriptText_25666B)
	.endif
	@ analyzed canonical ROM range 0x0825667C-0x082566C5
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl EventScript_RockSmash
EventScript_RockSmash: @ 0x0825667C
lockall
	checkflag 0x0869
	goto_if 0x00, EventScript_JP_08256703
	checkpartymove 0x00F9
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_08256703
	setfieldeffectargument 0x00, 0x800D
	bufferpartymonnick 0x00, 0x800D
	buffermovename 0x01, 0x00F9
	loadword 0x00, FieldScriptText_256710
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825670D
	loadword 0x00, FieldScriptText_25665C
	callstd 0x04
	closemessage
	dofieldeffect 0x0025
	waitstate
	goto EventScript_JP_082566D1
	.byte 0x02
