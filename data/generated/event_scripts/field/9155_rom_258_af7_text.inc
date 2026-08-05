	@ field-script:0x259023 FieldScriptText_258AF7
	.globl gText_Rom_258AF7
gText_Rom_258AF7: @ 0x08258AF7
	.string "ポロックケースを\nまだ　もって　ないようね\pポロックケースを\nもらってから　また　きてね"
	.byte EOS
	.if (. - gText_Rom_258AF7) > 0x2d
	.error "gText_Rom_258AF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258AF7) < 0x2d
	.space 0x2d - (. - gText_Rom_258AF7)
	.endif
