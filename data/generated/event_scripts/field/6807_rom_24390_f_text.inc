	@ field-script:0x1DC4E1 FieldScriptText_24390F
	.globl gText_Rom_24390F
gText_Rom_24390F: @ 0x0824390F
	.string "ようこそ！\pおかいもの　ですね！{EOS}"
	.if (. - gText_Rom_24390F) > 0x11
	.error "gText_Rom_24390F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24390F) < 0x11
	.space 0x11 - (. - gText_Rom_24390F)
	.endif
