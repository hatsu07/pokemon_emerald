	@ field-script:0x21D5C8 FieldScriptText_246761
	.globl gText_Rom_246761
gText_Rom_246761: @ 0x08246761
	.string "エネコ　みたいな　オモチャのテレビ\nなんだか　あるきだしそう！？$"
	.if (. - gText_Rom_246761) > 0x21
	.error "gText_Rom_246761 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246761) < 0x21
	.space 0x21 - (. - gText_Rom_246761)
	.endif
