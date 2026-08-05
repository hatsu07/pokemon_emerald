	@ field-script:0x21D5BF FieldScriptText_24673E
	.globl gText_Rom_24673E
gText_Rom_24673E: @ 0x0824673E
	.string "タネボー　みたいな　オモチャのテレビ\nなんだか　ころがりだしそう！？$"
	.if (. - gText_Rom_24673E) > 0x23
	.error "gText_Rom_24673E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24673E) < 0x23
	.space 0x23 - (. - gText_Rom_24673E)
	.endif
