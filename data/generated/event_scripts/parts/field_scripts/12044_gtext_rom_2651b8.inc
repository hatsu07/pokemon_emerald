	@ field-script:0x264A55 FieldScriptText_2651B8
	.globl gText_Rom_2651B8
gText_Rom_2651B8: @ 0x082651B8
	.string "{0xFD}{0x02}『いぎぎぎぃ！！$"
	.if (. - gText_Rom_2651B8) > 0xb
	.error "gText_Rom_2651B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651B8) < 0xb
	.space 0xb - (. - gText_Rom_2651B8)
	.endif
