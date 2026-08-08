	@ field-script:0x258DC4 FieldScriptText_258718
	.globl gText_Rom_258718
gText_Rom_258718: @ 0x08258718
	.string "おじさんの　あまりの　きのみが　あれば\nあげるん　だけど…\pきょうは　もう　あまって　ないんだ\nまた　こんど　やろうな"
	.byte EOS
	.if (. - gText_Rom_258718) > 0x3c
	.error "gText_Rom_258718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258718) < 0x3c
	.space 0x3c - (. - gText_Rom_258718)
	.endif
