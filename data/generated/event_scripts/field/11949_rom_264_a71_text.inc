	@ field-script:0x2643A1 FieldScriptText_264A71
	.globl gText_Rom_264A71
gText_Rom_264A71: @ 0x08264A71
	.string "わたし　おねだり　おねえさん……$"
	.if (. - gText_Rom_264A71) > 0x11
	.error "gText_Rom_264A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264A71) < 0x11
	.space 0x11 - (. - gText_Rom_264A71)
	.endif
