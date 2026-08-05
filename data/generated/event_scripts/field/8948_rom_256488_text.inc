	@ field-script:0x254DE7 FieldScriptText_256488
	.globl gText_Rom_256488
gText_Rom_256488: @ 0x08256488
	.string "あぁ　いい　うた　だなぁ\nほかの　ひとにも　きかせて　みたいなあ"
	.byte EOS
	.if (. - gText_Rom_256488) > 0x21
	.error "gText_Rom_256488 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256488) < 0x21
	.space 0x21 - (. - gText_Rom_256488)
	.endif
