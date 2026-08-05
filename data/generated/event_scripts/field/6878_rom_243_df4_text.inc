	@ field-script:0x21C002 FieldScriptText_243DF4
	.globl gText_Rom_243DF4
gText_Rom_243DF4: @ 0x08243DF4
	.string "{0xFD}{0x02}は\nどこかへ　とびさって　いった！$"
	.if (. - gText_Rom_243DF4) > 0x14
	.error "gText_Rom_243DF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243DF4) < 0x14
	.space 0x14 - (. - gText_Rom_243DF4)
	.endif
