	@ field-script:0x258F8C FieldScriptText_2589BA
	.globl gText_Rom_2589BA
gText_Rom_2589BA: @ 0x082589BA
	.string "あらあら……\pおばさん　たち　とっても　ショック！"
	.byte EOS
	.if (. - gText_Rom_2589BA) > 0x1a
	.error "gText_Rom_2589BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2589BA) < 0x1a
	.space 0x1a - (. - gText_Rom_2589BA)
	.endif
