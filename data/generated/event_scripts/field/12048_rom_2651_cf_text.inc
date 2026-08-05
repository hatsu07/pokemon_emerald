	@ field-script:0x264A68 FieldScriptText_2651CF
	.globl gText_Rom_2651CF
gText_Rom_2651CF: @ 0x082651CF
	.string "{0xFD}{0x02}『ぴっか！$"
	.if (. - gText_Rom_2651CF) > 0x8
	.error "gText_Rom_2651CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651CF) < 0x8
	.space 0x8 - (. - gText_Rom_2651CF)
	.endif
