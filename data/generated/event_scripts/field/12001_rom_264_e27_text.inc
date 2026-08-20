	@ field-script:0x2646E0 FieldScriptText_264E27
	.globl gText_Rom_264E27
gText_Rom_264E27: @ 0x08264E27
	.string "うーん……　は・ず・れ！\nせいかいは　{0xFD}{0x04}でした！{EOS}"
	.if (. - gText_Rom_264E27) > 0x1a
	.error "gText_Rom_264E27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264E27) < 0x1a
	.space 0x1a - (. - gText_Rom_264E27)
	.endif
