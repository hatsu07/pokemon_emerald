	@ field-script:0x25797A FieldScriptText_257DDD
	.globl gText_Rom_257DDD
gText_Rom_257DDD: @ 0x08257DDD
	.string "{0xFD}{0x02}を　ひきとるなら\nりょうきんは　{0xFD}{0x03}円　だよ"
	.byte EOS
	.if (. - gText_Rom_257DDD) > 0x19
	.error "gText_Rom_257DDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257DDD) < 0x19
	.space 0x19 - (. - gText_Rom_257DDD)
	.endif
