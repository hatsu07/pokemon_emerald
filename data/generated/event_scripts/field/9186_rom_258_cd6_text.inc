	@ field-script:0x259164 FieldScriptText_258CD6
	.globl gText_Rom_258CD6
gText_Rom_258CD6: @ 0x08258CD6
	.string "あれ？\nきのみを　もってないの？\pしかたないなぁ　もう\pおじさんの　あまった　きのみで\nよければ　あげるよ！"
	.byte EOS
	.if (. - gText_Rom_258CD6) > 0x37
	.error "gText_Rom_258CD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258CD6) < 0x37
	.space 0x37 - (. - gText_Rom_258CD6)
	.endif
