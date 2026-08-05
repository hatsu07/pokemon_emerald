	@ field-script:0x22A281 FieldScriptText_22AC3F
	.globl gText_Rom_22AC3F
gText_Rom_22AC3F: @ 0x0822AC3F
	.string "バトルホールの　ルールが　かかれている！$"
	.if (. - gText_Rom_22AC3F) > 0x15
	.error "gText_Rom_22AC3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AC3F) < 0x15
	.space 0x15 - (. - gText_Rom_22AC3F)
	.endif
