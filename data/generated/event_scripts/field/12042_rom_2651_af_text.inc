	@ field-script:0x264A1C FieldScriptText_2651AF
	.globl gText_Rom_2651AF
gText_Rom_2651AF: @ 0x082651AF
	.string "{0xFD}{0x02}『ぐうぐぅ！$"
	.if (. - gText_Rom_2651AF) > 0x9
	.error "gText_Rom_2651AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651AF) < 0x9
	.space 0x9 - (. - gText_Rom_2651AF)
	.endif
