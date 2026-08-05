	@ field-script:0x257767 FieldScriptText_257BAB
	.globl gText_Rom_257BAB
gText_Rom_257BAB: @ 0x08257BAB
	.string "{0xFD}{0x01}は　そだてや　じいさんから\nタマゴを　もらった！"
	.byte EOS
	.if (. - gText_Rom_257BAB) > 0x1b
	.error "gText_Rom_257BAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257BAB) < 0x1b
	.space 0x1b - (. - gText_Rom_257BAB)
	.endif
