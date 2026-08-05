	@ field-script:0x235BDD FieldScriptText_236552
	.globl gText_Rom_236552
gText_Rom_236552: @ 0x08236552
	.string "どうぞ　おうけとりください！"
	.byte EOS
	.if (. - gText_Rom_236552) > 0xf
	.error "gText_Rom_236552 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236552) < 0xf
	.space 0xf - (. - gText_Rom_236552)
	.endif
