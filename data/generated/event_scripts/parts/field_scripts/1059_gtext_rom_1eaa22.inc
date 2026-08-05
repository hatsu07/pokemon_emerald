	@ field-script:0x1EA50D FieldScriptText_1EAA22
	.globl gText_Rom_1EAA22
gText_Rom_1EAA22: @ 0x081EAA22
	.string "つよいわよー！\nこのひと　すっごく　つよいわよー！$"
	.if (. - gText_Rom_1EAA22) > 0x1a
	.error "gText_Rom_1EAA22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAA22) < 0x1a
	.space 0x1a - (. - gText_Rom_1EAA22)
	.endif
