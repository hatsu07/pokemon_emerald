	@ field-script:0x21DE97 FieldScriptText_21E227
	.globl gText_Rom_21E227
gText_Rom_21E227: @ 0x0821E227
	.string "それでは　れんらくせんに　よる\nふなたびを　おたのしみ　ください"
	.byte EOS
	.if (. - gText_Rom_21E227) > 0x21
	.error "gText_Rom_21E227 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E227) < 0x21
	.space 0x21 - (. - gText_Rom_21E227)
	.endif
