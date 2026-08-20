	@ field-script:0x21232D FieldScriptText_21244C
	.globl gText_Rom_21244C
gText_Rom_21244C: @ 0x0821244C
	.string "カセキって……\nすてき……　うっとり　しちゃうよ……{EOS}"
	.if (. - gText_Rom_21244C) > 0x1b
	.error "gText_Rom_21244C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21244C) < 0x1b
	.space 0x1b - (. - gText_Rom_21244C)
	.endif
