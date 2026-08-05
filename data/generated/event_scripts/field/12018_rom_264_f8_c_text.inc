	@ field-script:0x26482A FieldScriptText_264F8C
	.globl gText_Rom_264F8C
gText_Rom_264F8C: @ 0x08264F8C
	.string "おつかれさまー！\pすてきな　クイズが　できたね！\pさっそく　チャレンジ　してくれる　ひとを\nさがしに　いって　くるね！$"
	.if (. - gText_Rom_264F8C) > 0x3c
	.error "gText_Rom_264F8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264F8C) < 0x3c
	.space 0x3c - (. - gText_Rom_264F8C)
	.endif
