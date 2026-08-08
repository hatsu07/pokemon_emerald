	@ field-script:0x21EADC FieldScriptText_2627D2
	.globl gText_Rom_2627D2
gText_Rom_2627D2: @ 0x082627D2
	.string "わかりました\pそれでは　のこりの　サファリボールを\nおあずかり　します\pおつかれさまでした\nまた　ごりよう　ください$"
	.if (. - gText_Rom_2627D2) > 0x3b
	.error "gText_Rom_2627D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2627D2) < 0x3b
	.space 0x3b - (. - gText_Rom_2627D2)
	.endif
