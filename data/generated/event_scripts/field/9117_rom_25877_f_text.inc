	@ field-script:0x258E75 FieldScriptText_25877F
	.globl gText_Rom_25877F
gText_Rom_25877F: @ 0x0825877F
	.string "でも　ポロックケースを\nまだもって　ないようだね\pポロックケースを\nもらってから　またおいで"
	.byte EOS
	.if (. - gText_Rom_25877F) > 0x2f
	.error "gText_Rom_25877F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25877F) < 0x2f
	.space 0x2f - (. - gText_Rom_25877F)
	.endif
