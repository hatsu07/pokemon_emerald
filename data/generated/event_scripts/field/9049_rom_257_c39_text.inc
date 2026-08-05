	@ field-script:0x2577B6 FieldScriptText_257C39
	.globl gText_Rom_257C39
gText_Rom_257C39: @ 0x08257C39
	.string "おお　あんたか！　よくきたな\n{0xFD}{0x02}と　{0xFD}{0x03}は　げんきじゃぞ"
	.byte EOS
	.if (. - gText_Rom_257C39) > 0x1e
	.error "gText_Rom_257C39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257C39) < 0x1e
	.space 0x1e - (. - gText_Rom_257C39)
	.endif
