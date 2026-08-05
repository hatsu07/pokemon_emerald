	@ field-script:0x2565EE FieldScriptText_25663B
	.globl gText_Rom_25663B
gText_Rom_25663B: @ 0x0825663B
	.string "……このきは　なんだか\nきれそうだ！\pいあいぎりで　きりますか？"
	.byte EOS
	.if (. - gText_Rom_25663B) > 0x21
	.error "gText_Rom_25663B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25663B) < 0x21
	.space 0x21 - (. - gText_Rom_25663B)
	.endif
