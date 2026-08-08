	@ field-script:0x209D7E FieldScriptText_209E63
	.globl gText_Rom_209E63
gText_Rom_209E63: @ 0x08209E63
	.string "えーと……\nそうじゃ　わし　わすれじいさん\pポケモンの　わざを\nわすれさせる　ことが　できるんじゃ！\pわざを　わすれ　させるかね？$"
	.if (. - gText_Rom_209E63) > 0x42
	.error "gText_Rom_209E63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209E63) < 0x42
	.space 0x42 - (. - gText_Rom_209E63)
	.endif
