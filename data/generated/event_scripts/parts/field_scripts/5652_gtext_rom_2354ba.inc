	@ field-script:0x235405 FieldScriptText_2354BA
	.globl gText_Rom_2354BA
gText_Rom_2354BA: @ 0x082354BA
	.string "ねえ　きみの　なまえ\nここに　のってるの？"
	.byte EOS
	.if (. - gText_Rom_2354BA) > 0x16
	.error "gText_Rom_2354BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2354BA) < 0x16
	.space 0x16 - (. - gText_Rom_2354BA)
	.endif
