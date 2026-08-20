	@ field-script:0x20714F FieldScriptText_24A60C
	.globl gText_Rom_24A60C
gText_Rom_24A60C: @ 0x0824A60C
	.string "つうしん　しています……{EOS}"
	.if (. - gText_Rom_24A60C) > 0xd
	.error "gText_Rom_24A60C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A60C) < 0xd
	.space 0xd - (. - gText_Rom_24A60C)
	.endif
