	@ field-script:0x1EE444 FieldScriptText_1EE76F
	.globl gText_Rom_1EE76F
gText_Rom_1EE76F: @ 0x081EE76F
	.string "{ESCAPE}{0x00}……　おくりびやま\nこころ　よわきもの　ちかよる　べからず{EOS}"
	.if (. - gText_Rom_1EE76F) > 0x21
	.error "gText_Rom_1EE76F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EE76F) < 0x21
	.space 0x21 - (. - gText_Rom_1EE76F)
	.endif
