	@ field-script:0x264A42 FieldScriptText_2651C3
	.globl gText_Rom_2651C3
gText_Rom_2651C3: @ 0x082651C3
	.string "{0xFD}{0x02}『バアーゥン　……$"
	.if (. - gText_Rom_2651C3) > 0xc
	.error "gText_Rom_2651C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651C3) < 0xc
	.space 0xc - (. - gText_Rom_2651C3)
	.endif
