	@ field-script:0x209E44 FieldScriptText_209F2B
	.globl gText_Rom_209F2B
gText_Rom_209F2B: @ 0x08209F2B
	.string "なぬ！？　タマゴは\nわざを　おぼえていない　ようじゃが……？{EOS}"
	.if (. - gText_Rom_209F2B) > 0x1f
	.error "gText_Rom_209F2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209F2B) < 0x1f
	.space 0x1f - (. - gText_Rom_209F2B)
	.endif
