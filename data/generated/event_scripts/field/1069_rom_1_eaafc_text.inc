	@ field-script:0x1EA5B8 FieldScriptText_1EAAFC
	.globl gText_Rom_1EAAFC
gText_Rom_1EAAFC: @ 0x081EAAFC
	.string "あんた……　いそぎのたびで　ないのなら\nうちに　よっていって　おくれ……$"
	.if (. - gText_Rom_1EAAFC) > 0x25
	.error "gText_Rom_1EAAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAAFC) < 0x25
	.space 0x25 - (. - gText_Rom_1EAAFC)
	.endif
