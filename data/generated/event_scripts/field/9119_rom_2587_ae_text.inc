	@ field-script:0x206E2A FieldScriptText_2587AE
	.globl gText_Rom_2587AE
gText_Rom_2587AE: @ 0x082587AE
	.string "はやく　まぜようぜ！！"
	.byte EOS
	.if (. - gText_Rom_2587AE) > 0xc
	.error "gText_Rom_2587AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2587AE) < 0xc
	.space 0xc - (. - gText_Rom_2587AE)
	.endif
