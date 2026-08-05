	@ field-script:0x21E57E FieldScriptText_21E6D3
	.globl gText_Rom_21E6D3
gText_Rom_21E6D3: @ 0x0821E6D3
	.string "どんな　ときでも　とりみださないのが\nしんしの　みだしなみ　だよ"
	.byte EOS
	.if (. - gText_Rom_21E6D3) > 0x21
	.error "gText_Rom_21E6D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E6D3) < 0x21
	.space 0x21 - (. - gText_Rom_21E6D3)
	.endif
