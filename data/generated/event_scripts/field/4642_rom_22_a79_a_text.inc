	@ field-script:0x1F64D6 FieldScriptText_22A79A
	.globl gText_Rom_22A79A
gText_Rom_22A79A: @ 0x0822A79A
	.string "バトルホールへ　むかうまえに\nレポートを　かくぞ……{EOS}"
	.if (. - gText_Rom_22A79A) > 0x1b
	.error "gText_Rom_22A79A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A79A) < 0x1b
	.space 0x1b - (. - gText_Rom_22A79A)
	.endif
