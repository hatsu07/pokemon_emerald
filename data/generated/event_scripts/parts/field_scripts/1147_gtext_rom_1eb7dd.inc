	@ field-script:0x1EB575 FieldScriptText_1EB7DD
	.globl gText_Rom_1EB7DD
gText_Rom_1EB7DD: @ 0x081EB7DD
	.string "「かせきマニアの　いえ」\nめずらしい　かせき　ください！$"
	.if (. - gText_Rom_1EB7DD) > 0x1d
	.error "gText_Rom_1EB7DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB7DD) < 0x1d
	.space 0x1d - (. - gText_Rom_1EB7DD)
	.endif
