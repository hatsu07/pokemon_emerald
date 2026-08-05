	@ field-script:0x257A8C FieldScriptText_257E82
	.globl gText_Rom_257E82
gText_Rom_257E82: @ 0x08257E82
	.string "おや…？"
	.byte EOS
	.if (. - gText_Rom_257E82) > 0x5
	.error "gText_Rom_257E82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E82) < 0x5
	.space 0x5 - (. - gText_Rom_257E82)
	.endif
