	@ field-script:0x21D4FD FieldScriptText_2465E7
	.globl gText_Rom_2465E7
gText_Rom_2465E7: @ 0x082465E7
	.string "{0xFD}{0x02}の　ひみつきちを\nとうろく　しますか？$"
	.if (. - gText_Rom_2465E7) > 0x16
	.error "gText_Rom_2465E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2465E7) < 0x16
	.space 0x16 - (. - gText_Rom_2465E7)
	.endif
