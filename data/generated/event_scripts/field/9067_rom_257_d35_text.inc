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
