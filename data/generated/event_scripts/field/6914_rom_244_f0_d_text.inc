	@ field-script:0x244DA0 FieldScriptText_244F0D
	.globl gText_Rom_244F0D
gText_Rom_244F0D: @ 0x08244F0D
	.string "ふかふかの　つちだ！\nきのみを　うめますか？$"
	.if (. - gText_Rom_244F0D) > 0x17
	.error "gText_Rom_244F0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F0D) < 0x17
	.space 0x17 - (. - gText_Rom_244F0D)
	.endif
