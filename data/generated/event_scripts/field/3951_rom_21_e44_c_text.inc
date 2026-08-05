	@ field-script:0x21E3F2 FieldScriptText_21E44C
	.globl gText_Rom_21E44C
gText_Rom_21E44C: @ 0x0821E44C
	.string "おれたち　おそうじ　ブラザーズ！\pあにきが　せんざい　ぶちまけてー\nおとうと　せっせと　みがくのさー"
	.byte EOS
	.if (. - gText_Rom_21E44C) > 0x33
	.error "gText_Rom_21E44C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E44C) < 0x33
	.space 0x33 - (. - gText_Rom_21E44C)
	.endif
