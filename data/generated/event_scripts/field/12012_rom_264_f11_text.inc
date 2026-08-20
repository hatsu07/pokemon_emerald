	@ field-script:0x2647B9 FieldScriptText_264F11
	.globl gText_Rom_264F11
gText_Rom_264F11: @ 0x08264F11
	.string "しょうひんを　きめないと\nクイズは　できないよ！\lつくるの　やめちゃうの？{EOS}"
	.if (. - gText_Rom_264F11) > 0x26
	.error "gText_Rom_264F11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264F11) < 0x26
	.space 0x26 - (. - gText_Rom_264F11)
	.endif
