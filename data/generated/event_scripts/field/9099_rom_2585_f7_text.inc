	@ field-script:0x258E50 FieldScriptText_2585F7
	.globl gText_Rom_2585F7
gText_Rom_2585F7: @ 0x082585F7
	.string "そうか！"
	.byte EOS
	.if (. - gText_Rom_2585F7) > 0x5
	.error "gText_Rom_2585F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2585F7) < 0x5
	.space 0x5 - (. - gText_Rom_2585F7)
	.endif
