	@ field-script:0x1FB0EE FieldScriptText_2755EC
	.globl gText_Rom_2755EC
gText_Rom_2755EC: @ 0x082755EC
	.string "3れんしょうを　きねんして\nこちらを　さしあげます！$"
	.if (. - gText_Rom_2755EC) > 0x1b
	.error "gText_Rom_2755EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2755EC) < 0x1b
	.space 0x1b - (. - gText_Rom_2755EC)
	.endif
