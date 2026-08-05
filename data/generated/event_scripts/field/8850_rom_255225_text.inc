	@ field-script:0x256344 FieldScriptText_255225
	.globl gText_Rom_255225
gText_Rom_255225: @ 0x08255225
	.string "……え！！！\pきみ　{0xFD}{0x02}かい　も\n{0xFD}{0x03}　の！？\p……ううむ　それは　すごい！\nあたらしい　でんせつの　はじまりだ！"
	.byte EOS
	.if (. - gText_Rom_255225) > 0x3a
	.error "gText_Rom_255225 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255225) < 0x3a
	.space 0x3a - (. - gText_Rom_255225)
	.endif
