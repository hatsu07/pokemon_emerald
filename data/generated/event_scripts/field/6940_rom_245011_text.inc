	@ field-script:0x244E95 FieldScriptText_245011
	.globl gText_Rom_245011
gText_Rom_245011: @ 0x08245011
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを\nそのままに　しておいた{EOS}"
	.if (. - gText_Rom_245011) > 0x16
	.error "gText_Rom_245011 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245011) < 0x16
	.space 0x16 - (. - gText_Rom_245011)
	.endif
