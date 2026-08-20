	@ field-script:0x21EAC5 FieldScriptText_2627BD
	.globl gText_Rom_2627BD
gText_Rom_2627BD: @ 0x082627BD
	.string "では　ひきつづき　おたのしみ　ください！{EOS}"
	.if (. - gText_Rom_2627BD) > 0x15
	.error "gText_Rom_2627BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2627BD) < 0x15
	.space 0x15 - (. - gText_Rom_2627BD)
	.endif
