	@ field-script:0x244EDD FieldScriptText_245047
	.globl gText_Rom_245047
gText_Rom_245047: @ 0x08245047
	.string "{0xFD}{0x01}は　{0xFD}{0x02}に　みずを　あげた！$"
	.if (. - gText_Rom_245047) > 0x11
	.error "gText_Rom_245047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245047) < 0x11
	.space 0x11 - (. - gText_Rom_245047)
	.endif
