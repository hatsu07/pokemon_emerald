	@ field-script:0x23A2A2 FieldScriptText_23A692
	.globl gText_Rom_23A692
gText_Rom_23A692: @ 0x0823A692
	.string "それでは　バトルフロンティアを\nぞんぶんに　おたのしみ　ください！"
	.byte EOS
	.if (. - gText_Rom_23A692) > 0x22
	.error "gText_Rom_23A692 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A692) < 0x22
	.space 0x22 - (. - gText_Rom_23A692)
	.endif
