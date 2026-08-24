	@ field-script:0x2578D6 FieldScriptText_257D0D
	.globl gText_Rom_257D0D
gText_Rom_257D0D: @ 0x08257D0D
	.string "じいさんが　あんたを　さがして　おったぞ"
	.byte EOS
	.if (. - gText_Rom_257D0D) > 0x15
	.error "gText_Rom_257D0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257D0D) < 0x15
	.space 0x15 - (. - gText_Rom_257D0D)
	.endif
	@ field-script:0x257817 FieldScriptText_257D22
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257D22
gText_Rom_257D22: @ 0x08257D22
	.string "そうかい　それじゃ　また　きておくれ"
	.byte EOS
	.if (. - gText_Rom_257D22) != 0x13
	.error "gText_Rom_257D22 must retain its original byte length"
	.endif
	.globl gText_Rom_257D31
	.set gText_Rom_257D31, gText_Rom_257D22 + 0xf
	@ field-script:0x2579A3 FieldScriptText_257D35
	.globl gText_Rom_257D35
gText_Rom_257D35: @ 0x08257D35
	.string "おかねが　たりない　ようじゃのう…"
	.byte EOS
	.if (. - gText_Rom_257D35) > 0x12
	.error "gText_Rom_257D35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257D35) < 0x12
	.space 0x12 - (. - gText_Rom_257D35)
	.endif
