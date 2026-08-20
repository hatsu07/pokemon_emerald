	@ field-script:0x244EEA FieldScriptText_245058
	.globl gText_Rom_245058
gText_Rom_245058: @ 0x08245058
	.string "とっても　よろこんでる　みたい！{EOS}"
	.if (. - gText_Rom_245058) > 0x11
	.error "gText_Rom_245058 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245058) < 0x11
	.space 0x11 - (. - gText_Rom_245058)
	.endif
