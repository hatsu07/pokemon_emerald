	@ field-script:0x244EBA FieldScriptText_245027
	.globl gText_Rom_245027
gText_Rom_245027: @ 0x08245027
	.string "もっている　ホエルコじょうろ　で\n{0xFD}{0x02}に　みずを　あげますか？{EOS}"
	.if (. - gText_Rom_245027) > 0x20
	.error "gText_Rom_245027 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245027) < 0x20
	.space 0x20 - (. - gText_Rom_245027)
	.endif
