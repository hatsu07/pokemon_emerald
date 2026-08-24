	@ field-script:0x2578D6 FieldScriptText_257D0D
	.globl FieldScriptText_257D0D
FieldScriptText_257D0D: @ 0x08257D0D
	.string "じいさんが　あんたを　さがして　おったぞ"
	.byte EOS
	.if (. - FieldScriptText_257D0D) > 0x15
	.error "FieldScriptText_257D0D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257D0D) < 0x15
	.space 0x15 - (. - FieldScriptText_257D0D)
	.endif
	@ field-script:0x257817 FieldScriptText_257D22
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_257D22
FieldScriptText_257D22: @ 0x08257D22
	.string "そうかい　それじゃ　また　きておくれ"
	.byte EOS
	.if (. - FieldScriptText_257D22) != 0x13
	.error "FieldScriptText_257D22 must retain its original byte length"
	.endif
	@ field-script:0x2579A3 FieldScriptText_257D35
	.globl FieldScriptText_257D35
FieldScriptText_257D35: @ 0x08257D35
	.string "おかねが　たりない　ようじゃのう…"
	.byte EOS
	.if (. - FieldScriptText_257D35) > 0x12
	.error "FieldScriptText_257D35 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257D35) < 0x12
	.space 0x12 - (. - FieldScriptText_257D35)
	.endif
