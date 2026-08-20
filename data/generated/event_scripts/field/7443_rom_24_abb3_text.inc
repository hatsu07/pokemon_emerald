	@ field-script:0x248F19 FieldScriptText_24ABB3
	.globl gText_Rom_24ABB3
gText_Rom_24ABB3: @ 0x0824ABB3
	.string "しゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！{EOS}"
	.if (. - gText_Rom_24ABB3) > 0x23
	.error "gText_Rom_24ABB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ABB3) < 0x23
	.space 0x23 - (. - gText_Rom_24ABB3)
	.endif
