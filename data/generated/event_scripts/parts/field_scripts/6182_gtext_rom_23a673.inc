	@ field-script:0x23A297 FieldScriptText_23A673
	.globl gText_Rom_23A673
gText_Rom_23A673: @ 0x0823A673
	.string "{0xFD}{0x01}は　トレーナーカードを\nフロンティアパスに　いれかえた！"
	.byte EOS
	.if (. - gText_Rom_23A673) > 0x1f
	.error "gText_Rom_23A673 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A673) < 0x1f
	.space 0x1f - (. - gText_Rom_23A673)
	.endif
