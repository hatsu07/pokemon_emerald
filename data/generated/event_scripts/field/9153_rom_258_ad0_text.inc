	@ field-script:0x259019 FieldScriptText_258AD0
	.globl gText_Rom_258AD0
gText_Rom_258AD0: @ 0x08258AD0
	.string "ポロックケースが\nいっぱいの　ようね\pポロックを　へらしてから\nまた　きてね"
	.byte EOS
	.if (. - gText_Rom_258AD0) > 0x27
	.error "gText_Rom_258AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258AD0) < 0x27
	.space 0x27 - (. - gText_Rom_258AD0)
	.endif
