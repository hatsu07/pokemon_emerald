	@ field-script:0x2643D0 FieldScriptText_264A9D
	.globl gText_Rom_264A9D
gText_Rom_264A9D: @ 0x08264A9D
	.string "あら……\nこのまえは　どうも……{EOS}"
	.if (. - gText_Rom_264A9D) > 0x11
	.error "gText_Rom_264A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264A9D) < 0x11
	.space 0x11 - (. - gText_Rom_264A9D)
	.endif
