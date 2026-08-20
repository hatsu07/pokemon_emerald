	@ field-script:0x245BF4 FieldScriptText_2450B0
	.globl gText_Rom_2450B0
gText_Rom_2450B0: @ 0x082450B0
	.string "くさのかたまりを　どければ\nなかへ　はいれそう{EOS}"
	.if (. - gText_Rom_2450B0) > 0x18
	.error "gText_Rom_2450B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450B0) < 0x18
	.space 0x18 - (. - gText_Rom_2450B0)
	.endif
