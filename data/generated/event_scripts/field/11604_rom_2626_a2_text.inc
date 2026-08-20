	@ field-script:0x212AB9 FieldScriptText_2626A2
	.globl gText_Rom_2626A2
gText_Rom_2626A2: @ 0x082626A2
	.string "{0xFD}{0x01}は　サファリボールを\n30こ　うけとった！{EOS}"
	.if (. - gText_Rom_2626A2) > 0x18
	.error "gText_Rom_2626A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2626A2) < 0x18
	.space 0x18 - (. - gText_Rom_2626A2)
	.endif
