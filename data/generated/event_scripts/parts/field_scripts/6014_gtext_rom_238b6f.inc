	@ field-script:0x2388B1 FieldScriptText_238B6F
	.globl gText_Rom_238B6F
gText_Rom_238B6F: @ 0x08238B6F
	.string "きみの　かつやく\nおおいに　きたい　しているからね！"
	.byte EOS
	.if (. - gText_Rom_238B6F) > 0x1b
	.error "gText_Rom_238B6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238B6F) < 0x1b
	.space 0x1b - (. - gText_Rom_238B6F)
	.endif
