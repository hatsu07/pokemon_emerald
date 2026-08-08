	@ field-script:0x254EA1 FieldScriptText_256572
	.globl gText_Rom_256572
gText_Rom_256572: @ 0x08256572
	.string "でも　きみ　ことば　たくさん　しってるね\nおしえること　ぜんぜん　ないよ"
	.byte EOS
	.if (. - gText_Rom_256572) > 0x25
	.error "gText_Rom_256572 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256572) < 0x25
	.space 0x25 - (. - gText_Rom_256572)
	.endif
