	@ field-script:0x2643DD FieldScriptText_264A82
	.globl gText_Rom_264A82
gText_Rom_264A82: @ 0x08264A82
	.string "わたし　さいきん\n{0xFD}{0x02}した　ものに　むちゅうなの……$"
	.if (. - gText_Rom_264A82) > 0x1b
	.error "gText_Rom_264A82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264A82) < 0x1b
	.space 0x1b - (. - gText_Rom_264A82)
	.endif
