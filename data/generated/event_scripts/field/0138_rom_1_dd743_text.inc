	@ field-script:0x1DC8CD FieldScriptText_1DD743
	.globl gText_Rom_1DD743
gText_Rom_1DD743: @ 0x081DD743
	.string "{0xFD}{0x02}　と\nこうかん　するのね？$"
	.if (. - gText_Rom_1DD743) > 0x10
	.error "gText_Rom_1DD743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD743) < 0x10
	.space 0x10 - (. - gText_Rom_1DD743)
	.endif
