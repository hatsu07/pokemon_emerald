	@ field-script:0x211A4D FieldScriptText_243927
	.globl gText_Rom_243927
gText_Rom_243927: @ 0x08243927
	.string "{0xFD}{0x01}{0xFD}{0x05}　いらっしゃい！\pおかいものね！{EOS}"
	.if (. - gText_Rom_243927) > 0x15
	.error "gText_Rom_243927 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243927) < 0x15
	.space 0x15 - (. - gText_Rom_243927)
	.endif
