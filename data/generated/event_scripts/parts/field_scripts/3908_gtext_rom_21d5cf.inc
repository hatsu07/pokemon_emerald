	@ field-script:0x245B42 FieldScriptText_21D5CF
	.globl gText_Rom_21D5CF
gText_Rom_21D5CF: @ 0x0821D5CF
	.string "かべに　ちいさな　くぼみが　ある"
	.byte EOS
	.if (. - gText_Rom_21D5CF) > 0x11
	.error "gText_Rom_21D5CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D5CF) < 0x11
	.space 0x11 - (. - gText_Rom_21D5CF)
	.endif
