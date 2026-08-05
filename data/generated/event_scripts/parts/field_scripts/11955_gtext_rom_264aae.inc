	@ field-script:0x264423 FieldScriptText_264AAE
	.globl gText_Rom_264AAE
gText_Rom_264AAE: @ 0x08264AAE
	.string "まえにね……\n{0xFD}{0x04}さん　だった　かしら……\p{0xFD}{0x02}　だからって\n{0xFD}{0x03}を　くれたのよ\pだけど　ちっとも\n{0xFD}{0x02}じゃ　なかったのよ！$"
	.if (. - gText_Rom_264AAE) > 0x3f
	.error "gText_Rom_264AAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264AAE) < 0x3f
	.space 0x3f - (. - gText_Rom_264AAE)
	.endif
