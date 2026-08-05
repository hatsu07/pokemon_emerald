	@ field-script:0x23A4F8 FieldScriptText_23AB6A
	.globl gText_Rom_23AB6A
gText_Rom_23AB6A: @ 0x0823AB6A
	.string "バトルフロンティアに　ある\nすべての　しせつの　ちょうせんは\lおおきく　レベル50の　コースと\lオープンレベルの　コースに　わかれています"
	.byte EOS
	.if (. - gText_Rom_23AB6A) > 0x46
	.error "gText_Rom_23AB6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AB6A) < 0x46
	.space 0x46 - (. - gText_Rom_23AB6A)
	.endif
