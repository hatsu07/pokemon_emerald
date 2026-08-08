	@ field-script:0x21DF80 FieldScriptText_21E3D5
	.globl gText_Rom_21E3D5
gText_Rom_21E3D5: @ 0x0821E3D5
	.string "3ごうしつ"
	.byte EOS
	.if (. - gText_Rom_21E3D5) > 0x6
	.error "gText_Rom_21E3D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E3D5) < 0x6
	.space 0x6 - (. - gText_Rom_21E3D5)
	.endif
