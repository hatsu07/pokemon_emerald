	@ field-script:0x256295 FieldScriptText_255186
	.globl gText_Rom_255186
gText_Rom_255186: @ 0x08255186
	.string "わし　でんせつおやじ\nでんせつの　トレーナーの　はなし　するよ\pわしの　ハナシ　ききたい？"
	.byte EOS
	.if (. - gText_Rom_255186) > 0x2e
	.error "gText_Rom_255186 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255186) < 0x2e
	.space 0x2e - (. - gText_Rom_255186)
	.endif
