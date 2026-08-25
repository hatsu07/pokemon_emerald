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
