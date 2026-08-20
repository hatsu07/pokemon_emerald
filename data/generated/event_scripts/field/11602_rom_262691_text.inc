	@ field-script:0x212AAF FieldScriptText_262691
	.globl gText_Rom_262691
gText_Rom_262691: @ 0x08262691
	.string "では　サファリボールを　どうぞ！{EOS}"
	.if (. - gText_Rom_262691) > 0x11
	.error "gText_Rom_262691 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262691) < 0x11
	.space 0x11 - (. - gText_Rom_262691)
	.endif
