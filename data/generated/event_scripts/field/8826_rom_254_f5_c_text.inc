	@ field-script:0x25510C FieldScriptText_254F5C
	.globl gText_Rom_254F5C
gText_Rom_254F5C: @ 0x08254F5C
	.string "……って　きみ　グッズ\nひとつも　もってない　じゃん！"
	.byte EOS
	.if (. - gText_Rom_254F5C) > 0x1c
	.error "gText_Rom_254F5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F5C) < 0x1c
	.space 0x1c - (. - gText_Rom_254F5C)
	.endif
