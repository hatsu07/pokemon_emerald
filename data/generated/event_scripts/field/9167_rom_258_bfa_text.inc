	@ field-script:0x25924F FieldScriptText_258BFA
	.globl gText_Rom_258BFA
gText_Rom_258BFA: @ 0x08258BFA
	.string "{0xFD}{0x02}さんが　きました"
	.byte EOS
	.if (. - gText_Rom_258BFA) > 0xb
	.error "gText_Rom_258BFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258BFA) < 0xb
	.space 0xb - (. - gText_Rom_258BFA)
	.endif
