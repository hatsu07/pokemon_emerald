	@ field-script:0x244E8C FieldScriptText_244FEF
	.globl gText_Rom_244FEF
gText_Rom_244FEF: @ 0x08244FEF
	.string "バッグの　きのみポケットが　いっぱいだった\p{0xFD}{0x02}のみを　あきらめた$"
	.if (. - gText_Rom_244FEF) > 0x22
	.error "gText_Rom_244FEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244FEF) < 0x22
	.space 0x22 - (. - gText_Rom_244FEF)
	.endif
