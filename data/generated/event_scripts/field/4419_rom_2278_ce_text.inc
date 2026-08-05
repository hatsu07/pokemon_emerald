	@ field-script:0x226FAD FieldScriptText_2278CE
	.globl gText_Rom_2278CE
gText_Rom_2278CE: @ 0x082278CE
	.string "バトルドームに　ごあんないする　まえに\nレポートを　かきますので　おまちください$"
	.if (. - gText_Rom_2278CE) > 0x29
	.error "gText_Rom_2278CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2278CE) < 0x29
	.space 0x29 - (. - gText_Rom_2278CE)
	.endif
