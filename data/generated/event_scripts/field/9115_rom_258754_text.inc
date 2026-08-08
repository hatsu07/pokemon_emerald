	@ field-script:0x258E6B FieldScriptText_258754
	.globl gText_Rom_258754
gText_Rom_258754: @ 0x08258754
	.string "でも　ポロックケースが\nいっぱいの　ようだね\pポロックを　へらしてから\nまた　おいで"
	.byte EOS
	.if (. - gText_Rom_258754) > 0x2b
	.error "gText_Rom_258754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258754) < 0x2b
	.space 0x2b - (. - gText_Rom_258754)
	.endif
