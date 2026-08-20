	@ field-script:0x244DF7 FieldScriptText_244F5A
	.globl gText_Rom_244F5A
gText_Rom_244F5A: @ 0x08244F5A
	.string "{0xFD}{0x02}の　みきが　おおきく　なってきた！{EOS}"
	.if (. - gText_Rom_244F5A) > 0x14
	.error "gText_Rom_244F5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F5A) < 0x14
	.space 0x14 - (. - gText_Rom_244F5A)
	.endif
