	@ field-script:0x26454F FieldScriptText_264C91
	.globl gText_Rom_264C91
gText_Rom_264C91: @ 0x08264C91
	.string "あら　もちきれない　じゃないの……\pどうぐを　せいり　してから\nまた　いらっしゃい……{EOS}"
	.if (. - gText_Rom_264C91) > 0x2c
	.error "gText_Rom_264C91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264C91) < 0x2c
	.space 0x2c - (. - gText_Rom_264C91)
	.endif
