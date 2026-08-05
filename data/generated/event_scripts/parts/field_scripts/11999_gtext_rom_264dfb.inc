	@ field-script:0x264756 FieldScriptText_264DFB
	.globl gText_Rom_264DFB
gText_Rom_264DFB: @ 0x08264DFB
	.string "あれー？　どうぐが　いっぱい　みたいだよ！\nバッグを　せいり　してから　また　きてね！$"
	.if (. - gText_Rom_264DFB) > 0x2c
	.error "gText_Rom_264DFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264DFB) < 0x2c
	.space 0x2c - (. - gText_Rom_264DFB)
	.endif
