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
