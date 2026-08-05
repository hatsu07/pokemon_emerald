	@ field-script:0x206F18 FieldScriptText_24A50F
	.globl gText_Rom_24A50F
gText_Rom_24A50F: @ 0x0824A50F
	.string "コンテストに　エントリーする　まえに\nレポートを　かきます$"
	.if (. - gText_Rom_24A50F) > 0x1e
	.error "gText_Rom_24A50F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A50F) < 0x1e
	.space 0x1e - (. - gText_Rom_24A50F)
	.endif
