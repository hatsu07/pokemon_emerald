	@ field-script:0x22298F FieldScriptText_262A67
	.globl gText_Rom_262A67
gText_Rom_262A67: @ 0x08262A67
	.string "ポロックを　つかうと　いつもより\nちょっぴり　にげにくく　なるみたい\pだから　にげにくい　ポケモンに　つかっても\nあんまり　いみが　ないかもね$"
	.if (. - gText_Rom_262A67) > 0x48
	.error "gText_Rom_262A67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262A67) < 0x48
	.space 0x48 - (. - gText_Rom_262A67)
	.endif
