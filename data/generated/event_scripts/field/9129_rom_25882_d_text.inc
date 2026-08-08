	@ field-script:0x258EC3 FieldScriptText_25882D
	.globl gText_Rom_25882D
gText_Rom_25882D: @ 0x0825882D
	.string "もちろん　ポロックの　つくりかたは\nしっているよね？"
	.byte EOS
	.if (. - gText_Rom_25882D) > 0x1b
	.error "gText_Rom_25882D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25882D) < 0x1b
	.space 0x1b - (. - gText_Rom_25882D)
	.endif
