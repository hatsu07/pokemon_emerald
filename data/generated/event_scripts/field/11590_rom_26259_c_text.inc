	@ field-script:0x212A30 FieldScriptText_26259C
	.globl gText_Rom_26259C
gText_Rom_26259C: @ 0x0826259C
	.string "サファリゾーンを　たのしんで　いってね！{EOS}"
	.if (. - gText_Rom_26259C) > 0x15
	.error "gText_Rom_26259C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26259C) < 0x15
	.space 0x15 - (. - gText_Rom_26259C)
	.endif
