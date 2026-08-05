	@ field-script:0x2071CB FieldScriptText_24A619
	.globl gText_Rom_24A619
gText_Rom_24A619: @ 0x0824A619
	.string "つうしんに　しっぱい　しました$"
	.if (. - gText_Rom_24A619) > 0x10
	.error "gText_Rom_24A619 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A619) < 0x10
	.space 0x10 - (. - gText_Rom_24A619)
	.endif
