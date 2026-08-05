	@ field-script:0x258F18 FieldScriptText_2587FE
	.globl gText_Rom_2587FE
gText_Rom_2587FE: @ 0x082587FE
	.string "よっしっ！"
	.byte EOS
	.if (. - gText_Rom_2587FE) > 0x6
	.error "gText_Rom_2587FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2587FE) < 0x6
	.space 0x6 - (. - gText_Rom_2587FE)
	.endif
