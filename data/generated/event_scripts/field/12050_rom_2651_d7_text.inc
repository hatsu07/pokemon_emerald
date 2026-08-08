	@ field-script:0x264A2F FieldScriptText_2651D7
	.globl gText_Rom_2651D7
gText_Rom_2651D7: @ 0x082651D7
	.string "{0xFD}{0x02}『うみゅぁぁぁん！！$"
	.if (. - gText_Rom_2651D7) > 0xd
	.error "gText_Rom_2651D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651D7) < 0xd
	.space 0xd - (. - gText_Rom_2651D7)
	.endif
