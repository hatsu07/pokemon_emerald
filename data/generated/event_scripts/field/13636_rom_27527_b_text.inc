	@ field-script:0x1F6494 FieldScriptText_27527B
	.globl gText_Rom_27527B
gText_Rom_27527B: @ 0x0827527B
	.string "よいものを　みせて　もらった\pそれでは　レポートを　かこう……\nしばし　またれよ……{EOS}"
	.if (. - gText_Rom_27527B) > 0x2b
	.error "gText_Rom_27527B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27527B) < 0x2b
	.space 0x2b - (. - gText_Rom_27527B)
	.endif
