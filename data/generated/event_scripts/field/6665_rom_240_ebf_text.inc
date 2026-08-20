	@ field-script:0x240AD8 FieldScriptText_240EBF
	.globl gText_Rom_240EBF
gText_Rom_240EBF: @ 0x08240EBF
	.string "おお　{0xFD}{0x02}　できたよ\nもって　いきなさいよ　ペコペコ{EOS}"
	.if (. - gText_Rom_240EBF) > 0x1b
	.error "gText_Rom_240EBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240EBF) < 0x1b
	.space 0x1b - (. - gText_Rom_240EBF)
	.endif
