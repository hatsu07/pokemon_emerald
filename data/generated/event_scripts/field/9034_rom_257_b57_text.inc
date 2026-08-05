	@ field-script:0x25779F FieldScriptText_257B57
	.globl gText_Rom_257B57
gText_Rom_257B57: @ 0x08257B57
	.string "おお　あんたか！　よくきたな\n{0xFD}{0x02}は　げんきじゃぞ"
	.byte EOS
	.if (. - gText_Rom_257B57) > 0x1a
	.error "gText_Rom_257B57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257B57) < 0x1a
	.space 0x1a - (. - gText_Rom_257B57)
	.endif
