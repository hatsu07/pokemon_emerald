	@ field-script:0x229E1A FieldScriptText_22ABEF
	.globl gText_Rom_22ABEF
gText_Rom_22ABEF: @ 0x0822ABEF
	.string "おぬしと　ポケモンの　きずなを　たたえ\nバトルポイントを　おくろう……{EOS}"
	.if (. - gText_Rom_22ABEF) > 0x24
	.error "gText_Rom_22ABEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22ABEF) < 0x24
	.space 0x24 - (. - gText_Rom_22ABEF)
	.endif
