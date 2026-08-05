	@ field-script:0x2578E0 FieldScriptText_257D88
	.globl gText_Rom_257D88
gText_Rom_257D88: @ 0x08257D88
	.string "{0xFD}{0x02}は　レベルで　いうと\n{0xFD}{0x03}くらい　そだって　おるぞ"
	.byte EOS
	.if (. - gText_Rom_257D88) > 0x1c
	.error "gText_Rom_257D88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257D88) < 0x1c
	.space 0x1c - (. - gText_Rom_257D88)
	.endif
