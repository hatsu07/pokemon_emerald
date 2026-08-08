	@ field-script:0x21A39D FieldScriptText_21A407
	.globl gText_Rom_21A407
gText_Rom_21A407: @ 0x0821A407
	.string "ちかのカギを　つかいますか？"
	.byte EOS
	.if (. - gText_Rom_21A407) > 0xf
	.error "gText_Rom_21A407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A407) < 0xf
	.space 0xf - (. - gText_Rom_21A407)
	.endif
