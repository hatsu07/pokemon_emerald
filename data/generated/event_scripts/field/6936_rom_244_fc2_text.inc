	@ field-script:0x244E83 FieldScriptText_244FC2
	.globl gText_Rom_244FC2
gText_Rom_244FC2: @ 0x08244FC2
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを\nきのみポケットに　しまった！\pつちは　もとの　ふかふかに　もどった！{EOS}"
	.if (. - gText_Rom_244FC2) > 0x2d
	.error "gText_Rom_244FC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244FC2) < 0x2d
	.space 0x2d - (. - gText_Rom_244FC2)
	.endif
