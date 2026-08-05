	@ field-script:0x255146 FieldScriptText_254FC3
	.globl gText_Rom_254FC3
gText_Rom_254FC3: @ 0x08254FC3
	.string "じゃあ　わしの　{0xFD}{0x04}と\nきみの　{0xFD}{0x03}を　こうかんするよ？"
	.byte EOS
	.if (. - gText_Rom_254FC3) > 0x1d
	.error "gText_Rom_254FC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254FC3) < 0x1d
	.space 0x1d - (. - gText_Rom_254FC3)
	.endif
