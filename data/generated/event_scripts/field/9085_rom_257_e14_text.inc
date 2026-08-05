	@ field-script:0x2579D0 FieldScriptText_257E14
	.globl gText_Rom_257E14
gText_Rom_257E14: @ 0x08257E14
	.string "{0xFD}{0x01}は　そだてや　ばあさんから\n{0xFD}{0x02}を　ひきとった！"
	.byte EOS
	.if (. - gText_Rom_257E14) > 0x1b
	.error "gText_Rom_257E14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E14) < 0x1b
	.space 0x1b - (. - gText_Rom_257E14)
	.endif
