	@ field-script:0x1EA485 FieldScriptText_1EA95E
	.globl gText_Rom_1EA95E
gText_Rom_1EA95E: @ 0x081EA95E
	.string "あっそ！\nきが　むいたら　また　おいで！$"
	.if (. - gText_Rom_1EA95E) > 0x15
	.error "gText_Rom_1EA95E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA95E) < 0x15
	.space 0x15 - (. - gText_Rom_1EA95E)
	.endif
