	@ field-script:0x245BFE FieldScriptText_2450F1
	.globl gText_Rom_2450F1
gText_Rom_2450F1: @ 0x082450F1
	.string "ちいさな　いりぐちを　はっけん！$"
	.if (. - gText_Rom_2450F1) > 0x11
	.error "gText_Rom_2450F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450F1) < 0x11
	.space 0x11 - (. - gText_Rom_2450F1)
	.endif
