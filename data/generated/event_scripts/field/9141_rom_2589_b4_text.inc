	@ field-script:0x258FF5 FieldScriptText_2589B4
	.globl gText_Rom_2589B4
gText_Rom_2589B4: @ 0x082589B4
	.string "あらあら！"
	.byte EOS
	.if (. - gText_Rom_2589B4) > 0x6
	.error "gText_Rom_2589B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2589B4) < 0x6
	.space 0x6 - (. - gText_Rom_2589B4)
	.endif
